#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 151
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 1
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_version = 1,
  anon_sym_EQ = 2,
  anon_sym_workflow = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_on = 6,
  anon_sym_resolves = 7,
  anon_sym_LBRACK = 8,
  anon_sym_COMMA = 9,
  anon_sym_RBRACK = 10,
  anon_sym_action = 11,
  anon_sym_uses = 12,
  anon_sym_DQUOTEdocker_COLON_SLASH_SLASH = 13,
  anon_sym_SLASH = 14,
  anon_sym_DQUOTE = 15,
  anon_sym_DOT = 16,
  anon_sym_COLON = 17,
  aux_sym_docker_path_component_token1 = 18,
  aux_sym_docker_path_component_token2 = 19,
  aux_sym_docker_tag_token1 = 20,
  anon_sym_AT = 21,
  aux_sym__digest_algorithm_token1 = 22,
  aux_sym__digest_algorithm_token2 = 23,
  aux_sym__digest_algorithm_token3 = 24,
  aux_sym_host_component_token1 = 25,
  aux_sym_host_component_token2 = 26,
  anon_sym_DQUOTE_DOT_SLASH = 27,
  aux_sym_remote_uses_token1 = 28,
  aux_sym_remote_uses_token2 = 29,
  aux_sym_remote_uses_token3 = 30,
  aux_sym_github_owner_token1 = 31,
  sym_github_repo = 32,
  anon_sym_needs = 33,
  anon_sym_runs = 34,
  anon_sym_args = 35,
  anon_sym_env = 36,
  anon_sym_secrets = 37,
  sym_integer = 38,
  sym__hex = 39,
  sym__identifier = 40,
  anon_sym_BSLASH = 41,
  aux_sym__escape_token1 = 42,
  sym__safecodepoint = 43,
  sym_comment = 44,
  sym_workflow_file = 45,
  sym_version = 46,
  sym_workflow = 47,
  sym_on_kvp = 48,
  sym_resolves_kvp = 49,
  sym__string_or_array = 50,
  sym_string_array = 51,
  sym_action = 52,
  sym__action_kvps = 53,
  sym_uses_kvp = 54,
  sym_docker_uses = 55,
  sym_docker_registry = 56,
  sym_docker_path_component = 57,
  sym_docker_tag = 58,
  sym_docker_digest = 59,
  sym__digest_algorithm = 60,
  sym_host_component = 61,
  sym_local_uses = 62,
  sym_remote_uses = 63,
  sym_github_owner = 64,
  sym_needs_kvp = 65,
  sym_runs_kvp = 66,
  sym_args_kvp = 67,
  sym_env_kvp = 68,
  sym_env_var = 69,
  sym_secrets_kvp = 70,
  sym_identity_array = 71,
  sym_identifier = 72,
  sym_event_string = 73,
  sym_string = 74,
  sym__quoted_identifier = 75,
  sym__string = 76,
  sym__escape = 77,
  aux_sym_workflow_file_repeat1 = 78,
  aux_sym_workflow_repeat1 = 79,
  aux_sym_string_array_repeat1 = 80,
  aux_sym_action_repeat1 = 81,
  aux_sym_docker_uses_repeat1 = 82,
  aux_sym_docker_registry_repeat1 = 83,
  aux_sym_docker_path_component_repeat1 = 84,
  aux_sym__digest_algorithm_repeat1 = 85,
  aux_sym_local_uses_repeat1 = 86,
  aux_sym_env_kvp_repeat1 = 87,
  aux_sym_identity_array_repeat1 = 88,
  aux_sym__string_repeat1 = 89,
  alias_sym_quoted_identifier = 90,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_version] = "version",
  [anon_sym_EQ] = "=",
  [anon_sym_workflow] = "workflow",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_on] = "on",
  [anon_sym_resolves] = "resolves",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_action] = "action",
  [anon_sym_uses] = "uses",
  [anon_sym_DQUOTEdocker_COLON_SLASH_SLASH] = "\"docker://",
  [anon_sym_SLASH] = "/",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [aux_sym_docker_path_component_token1] = "docker_path_component_token1",
  [aux_sym_docker_path_component_token2] = "docker_path_component_token2",
  [aux_sym_docker_tag_token1] = "docker_tag_token1",
  [anon_sym_AT] = "@",
  [aux_sym__digest_algorithm_token1] = "_digest_algorithm_token1",
  [aux_sym__digest_algorithm_token2] = "_digest_algorithm_token2",
  [aux_sym__digest_algorithm_token3] = "_digest_algorithm_token3",
  [aux_sym_host_component_token1] = "host_component_token1",
  [aux_sym_host_component_token2] = "host_component_token2",
  [anon_sym_DQUOTE_DOT_SLASH] = "\"./",
  [aux_sym_remote_uses_token1] = "remote_uses_token1",
  [aux_sym_remote_uses_token2] = "remote_uses_token2",
  [aux_sym_remote_uses_token3] = "remote_uses_token3",
  [aux_sym_github_owner_token1] = "github_owner_token1",
  [sym_github_repo] = "github_repo",
  [anon_sym_needs] = "needs",
  [anon_sym_runs] = "runs",
  [anon_sym_args] = "args",
  [anon_sym_env] = "env",
  [anon_sym_secrets] = "secrets",
  [sym_integer] = "integer",
  [sym__hex] = "_hex",
  [sym__identifier] = "_identifier",
  [anon_sym_BSLASH] = "\\",
  [aux_sym__escape_token1] = "_escape_token1",
  [sym__safecodepoint] = "_safecodepoint",
  [sym_comment] = "comment",
  [sym_workflow_file] = "workflow_file",
  [sym_version] = "version",
  [sym_workflow] = "workflow",
  [sym_on_kvp] = "on_kvp",
  [sym_resolves_kvp] = "resolves_kvp",
  [sym__string_or_array] = "_string_or_array",
  [sym_string_array] = "string_array",
  [sym_action] = "action",
  [sym__action_kvps] = "_action_kvps",
  [sym_uses_kvp] = "uses_kvp",
  [sym_docker_uses] = "docker_uses",
  [sym_docker_registry] = "docker_registry",
  [sym_docker_path_component] = "docker_path_component",
  [sym_docker_tag] = "docker_tag",
  [sym_docker_digest] = "docker_digest",
  [sym__digest_algorithm] = "_digest_algorithm",
  [sym_host_component] = "host_component",
  [sym_local_uses] = "local_uses",
  [sym_remote_uses] = "remote_uses",
  [sym_github_owner] = "github_owner",
  [sym_needs_kvp] = "needs_kvp",
  [sym_runs_kvp] = "runs_kvp",
  [sym_args_kvp] = "args_kvp",
  [sym_env_kvp] = "env_kvp",
  [sym_env_var] = "env_var",
  [sym_secrets_kvp] = "secrets_kvp",
  [sym_identity_array] = "identity_array",
  [sym_identifier] = "identifier",
  [sym_event_string] = "event_string",
  [sym_string] = "string",
  [sym__quoted_identifier] = "_quoted_identifier",
  [sym__string] = "_string",
  [sym__escape] = "_escape",
  [aux_sym_workflow_file_repeat1] = "workflow_file_repeat1",
  [aux_sym_workflow_repeat1] = "workflow_repeat1",
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym_action_repeat1] = "action_repeat1",
  [aux_sym_docker_uses_repeat1] = "docker_uses_repeat1",
  [aux_sym_docker_registry_repeat1] = "docker_registry_repeat1",
  [aux_sym_docker_path_component_repeat1] = "docker_path_component_repeat1",
  [aux_sym__digest_algorithm_repeat1] = "_digest_algorithm_repeat1",
  [aux_sym_local_uses_repeat1] = "local_uses_repeat1",
  [aux_sym_env_kvp_repeat1] = "env_kvp_repeat1",
  [aux_sym_identity_array_repeat1] = "identity_array_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [alias_sym_quoted_identifier] = "quoted_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_workflow] = anon_sym_workflow,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_resolves] = anon_sym_resolves,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_action] = anon_sym_action,
  [anon_sym_uses] = anon_sym_uses,
  [anon_sym_DQUOTEdocker_COLON_SLASH_SLASH] = anon_sym_DQUOTEdocker_COLON_SLASH_SLASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_docker_path_component_token1] = aux_sym_docker_path_component_token1,
  [aux_sym_docker_path_component_token2] = aux_sym_docker_path_component_token2,
  [aux_sym_docker_tag_token1] = aux_sym_docker_tag_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__digest_algorithm_token1] = aux_sym__digest_algorithm_token1,
  [aux_sym__digest_algorithm_token2] = aux_sym__digest_algorithm_token2,
  [aux_sym__digest_algorithm_token3] = aux_sym__digest_algorithm_token3,
  [aux_sym_host_component_token1] = aux_sym_host_component_token1,
  [aux_sym_host_component_token2] = aux_sym_host_component_token2,
  [anon_sym_DQUOTE_DOT_SLASH] = anon_sym_DQUOTE_DOT_SLASH,
  [aux_sym_remote_uses_token1] = aux_sym_remote_uses_token1,
  [aux_sym_remote_uses_token2] = aux_sym_remote_uses_token2,
  [aux_sym_remote_uses_token3] = aux_sym_remote_uses_token3,
  [aux_sym_github_owner_token1] = aux_sym_github_owner_token1,
  [sym_github_repo] = sym_github_repo,
  [anon_sym_needs] = anon_sym_needs,
  [anon_sym_runs] = anon_sym_runs,
  [anon_sym_args] = anon_sym_args,
  [anon_sym_env] = anon_sym_env,
  [anon_sym_secrets] = anon_sym_secrets,
  [sym_integer] = sym_integer,
  [sym__hex] = sym__hex,
  [sym__identifier] = sym__identifier,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym__escape_token1] = aux_sym__escape_token1,
  [sym__safecodepoint] = sym__safecodepoint,
  [sym_comment] = sym_comment,
  [sym_workflow_file] = sym_workflow_file,
  [sym_version] = sym_version,
  [sym_workflow] = sym_workflow,
  [sym_on_kvp] = sym_on_kvp,
  [sym_resolves_kvp] = sym_resolves_kvp,
  [sym__string_or_array] = sym__string_or_array,
  [sym_string_array] = sym_string_array,
  [sym_action] = sym_action,
  [sym__action_kvps] = sym__action_kvps,
  [sym_uses_kvp] = sym_uses_kvp,
  [sym_docker_uses] = sym_docker_uses,
  [sym_docker_registry] = sym_docker_registry,
  [sym_docker_path_component] = sym_docker_path_component,
  [sym_docker_tag] = sym_docker_tag,
  [sym_docker_digest] = sym_docker_digest,
  [sym__digest_algorithm] = sym__digest_algorithm,
  [sym_host_component] = sym_host_component,
  [sym_local_uses] = sym_local_uses,
  [sym_remote_uses] = sym_remote_uses,
  [sym_github_owner] = sym_github_owner,
  [sym_needs_kvp] = sym_needs_kvp,
  [sym_runs_kvp] = sym_runs_kvp,
  [sym_args_kvp] = sym_args_kvp,
  [sym_env_kvp] = sym_env_kvp,
  [sym_env_var] = sym_env_var,
  [sym_secrets_kvp] = sym_secrets_kvp,
  [sym_identity_array] = sym_identity_array,
  [sym_identifier] = sym_identifier,
  [sym_event_string] = sym_event_string,
  [sym_string] = sym_string,
  [sym__quoted_identifier] = sym__quoted_identifier,
  [sym__string] = sym__string,
  [sym__escape] = sym__escape,
  [aux_sym_workflow_file_repeat1] = aux_sym_workflow_file_repeat1,
  [aux_sym_workflow_repeat1] = aux_sym_workflow_repeat1,
  [aux_sym_string_array_repeat1] = aux_sym_string_array_repeat1,
  [aux_sym_action_repeat1] = aux_sym_action_repeat1,
  [aux_sym_docker_uses_repeat1] = aux_sym_docker_uses_repeat1,
  [aux_sym_docker_registry_repeat1] = aux_sym_docker_registry_repeat1,
  [aux_sym_docker_path_component_repeat1] = aux_sym_docker_path_component_repeat1,
  [aux_sym__digest_algorithm_repeat1] = aux_sym__digest_algorithm_repeat1,
  [aux_sym_local_uses_repeat1] = aux_sym_local_uses_repeat1,
  [aux_sym_env_kvp_repeat1] = aux_sym_env_kvp_repeat1,
  [aux_sym_identity_array_repeat1] = aux_sym_identity_array_repeat1,
  [aux_sym__string_repeat1] = aux_sym__string_repeat1,
  [alias_sym_quoted_identifier] = alias_sym_quoted_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workflow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resolves] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEdocker_COLON_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_docker_path_component_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_docker_path_component_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_docker_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__digest_algorithm_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__digest_algorithm_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__digest_algorithm_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_host_component_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_host_component_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DOT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_remote_uses_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_remote_uses_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_remote_uses_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_github_owner_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_github_repo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_needs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_runs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_args] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_secrets] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym__hex] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__escape_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__safecodepoint] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_workflow_file] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_workflow] = {
    .visible = true,
    .named = true,
  },
  [sym_on_kvp] = {
    .visible = true,
    .named = true,
  },
  [sym_resolves_kvp] = {
    .visible = true,
    .named = true,
  },
  [sym__string_or_array] = {
    .visible = false,
    .named = true,
  },
  [sym_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym__action_kvps] = {
    .visible = false,
    .named = true,
  },
  [sym_uses_kvp] = {
    .visible = true,
    .named = true,
  },
  [sym_docker_uses] = {
    .visible = true,
    .named = true,
  },
  [sym_docker_registry] = {
    .visible = true,
    .named = true,
  },
  [sym_docker_path_component] = {
    .visible = true,
    .named = true,
  },
  [sym_docker_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_docker_digest] = {
    .visible = true,
    .named = true,
  },
  [sym__digest_algorithm] = {
    .visible = false,
    .named = true,
  },
  [sym_host_component] = {
    .visible = true,
    .named = true,
  },
  [sym_local_uses] = {
    .visible = true,
    .named = true,
  },
  [sym_remote_uses] = {
    .visible = true,
    .named = true,
  },
  [sym_github_owner] = {
    .visible = true,
    .named = true,
  },
  [sym_needs_kvp] = {
    .visible = true,
    .named = true,
  },
  [sym_runs_kvp] = {
    .visible = true,
    .named = true,
  },
  [sym_args_kvp] = {
    .visible = true,
    .named = true,
  },
  [sym_env_kvp] = {
    .visible = true,
    .named = true,
  },
  [sym_env_var] = {
    .visible = true,
    .named = true,
  },
  [sym_secrets_kvp] = {
    .visible = true,
    .named = true,
  },
  [sym_identity_array] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_event_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym__escape] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_workflow_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workflow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_action_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_docker_uses_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_docker_registry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_docker_path_component_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__digest_algorithm_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_local_uses_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_kvp_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identity_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_quoted_identifier] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_quoted_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__quoted_identifier, 2,
    sym__quoted_identifier,
    alias_sym_quoted_identifier,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 50,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 68,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 6,
  [102] = 5,
  [103] = 8,
  [104] = 7,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 146,
  [149] = 149,
  [150] = 150,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(95);
      ADVANCE_MAP(
        '"', 112,
        '#', 157,
        ',', 104,
        '.', 113,
        '/', 109,
        ':', 114,
        '=', 97,
        '@', 120,
        '[', 103,
      );
      if (lookahead == '\\') SKIP(92);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '}') ADVANCE(100);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(17);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(18);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(14);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(11);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(20);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(13);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(21);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(22);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(19);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '\\') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(11);
      if (lookahead > ' ' &&
          lookahead != 0x7f) ADVANCE(153);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(150);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '\\') SKIP(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == '\\') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '_')) ADVANCE(90);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '#', 157,
        '/', 152,
        '\\', 151,
        '"', 151,
        'b', 151,
        'f', 151,
        'n', 151,
        'r', 151,
        't', 151,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') SKIP(2);
      if (lookahead == '}') ADVANCE(100);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') SKIP(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') SKIP(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') SKIP(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') SKIP(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(157);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(126);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(108);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '0') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == '9') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 'Z') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == ']') ADVANCE(119);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'k') ADVANCE(43);
      END_STATE();
    case 57:
      if (lookahead == 'k') ADVANCE(52);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 86:
      if (lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 87:
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 88:
      if (lookahead == 'w') ADVANCE(98);
      END_STATE();
    case 89:
      if (lookahead == 'z') ADVANCE(36);
      END_STATE();
    case 90:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 92:
      if (eof) ADVANCE(95);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 93:
      if (eof) ADVANCE(95);
      if (lookahead == '\n') SKIP(94);
      END_STATE();
    case 94:
      if (eof) ADVANCE(95);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == '@') ADVANCE(120);
      if (lookahead == '[') ADVANCE(103);
      if (lookahead == '\\') SKIP(93);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == 'v') ADVANCE(46);
      if (lookahead == 'w') ADVANCE(68);
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '}') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_workflow);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_resolves);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DQUOTEdocker_COLON_SLASH_SLASH);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(157);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(132);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_docker_path_component_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_docker_tag_token1);
      if (lookahead == ']') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__digest_algorithm_token1);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__digest_algorithm_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__digest_algorithm_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_host_component_token1);
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_host_component_token2);
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DOT_SLASH);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_remote_uses_token1);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(157);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_remote_uses_token1);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '/') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_remote_uses_token1);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_remote_uses_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_remote_uses_token2);
      if (lookahead == '/') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_remote_uses_token2);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_remote_uses_token2);
      if (lookahead == '/') ADVANCE(110);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_remote_uses_token2);
      if (lookahead == '/') ADVANCE(131);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_remote_uses_token3);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(139);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_remote_uses_token3);
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '"') ADVANCE(157);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_remote_uses_token3);
      if (lookahead == '#') ADVANCE(136);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(139);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_remote_uses_token3);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_remote_uses_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_github_owner_token1);
      if (lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_github_repo);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_needs);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_runs);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_args);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_secrets);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__escape_token1);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__escape_token1);
      if (lookahead == '/') ADVANCE(157);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__safecodepoint);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__safecodepoint);
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\' &&
          lookahead != 0x7f) ADVANCE(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__safecodepoint);
      if (lookahead == '/') ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__safecodepoint);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 94},
  [2] = {.lex_state = 94},
  [3] = {.lex_state = 94},
  [4] = {.lex_state = 94},
  [5] = {.lex_state = 94},
  [6] = {.lex_state = 94},
  [7] = {.lex_state = 94},
  [8] = {.lex_state = 94},
  [9] = {.lex_state = 94},
  [10] = {.lex_state = 94},
  [11] = {.lex_state = 94},
  [12] = {.lex_state = 94},
  [13] = {.lex_state = 94},
  [14] = {.lex_state = 94},
  [15] = {.lex_state = 94},
  [16] = {.lex_state = 94},
  [17] = {.lex_state = 94},
  [18] = {.lex_state = 94},
  [19] = {.lex_state = 94},
  [20] = {.lex_state = 94},
  [21] = {.lex_state = 94},
  [22] = {.lex_state = 94},
  [23] = {.lex_state = 94},
  [24] = {.lex_state = 94},
  [25] = {.lex_state = 94},
  [26] = {.lex_state = 94},
  [27] = {.lex_state = 94},
  [28] = {.lex_state = 94},
  [29] = {.lex_state = 94},
  [30] = {.lex_state = 94},
  [31] = {.lex_state = 94},
  [32] = {.lex_state = 94},
  [33] = {.lex_state = 94},
  [34] = {.lex_state = 94},
  [35] = {.lex_state = 94},
  [36] = {.lex_state = 94},
  [37] = {.lex_state = 94},
  [38] = {.lex_state = 94},
  [39] = {.lex_state = 94},
  [40] = {.lex_state = 94},
  [41] = {.lex_state = 94},
  [42] = {.lex_state = 94},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 94},
  [45] = {.lex_state = 94},
  [46] = {.lex_state = 94},
  [47] = {.lex_state = 94},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 94},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 94},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 94},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 94},
  [59] = {.lex_state = 94},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 94},
  [63] = {.lex_state = 94},
  [64] = {.lex_state = 94},
  [65] = {.lex_state = 94},
  [66] = {.lex_state = 94},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 94},
  [71] = {.lex_state = 94},
  [72] = {.lex_state = 94},
  [73] = {.lex_state = 94},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 94},
  [77] = {.lex_state = 94},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 94},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 94},
  [83] = {.lex_state = 94},
  [84] = {.lex_state = 15},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 15},
  [87] = {.lex_state = 15},
  [88] = {.lex_state = 94},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 20},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 94},
  [94] = {.lex_state = 94},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 133},
  [98] = {.lex_state = 18},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 94},
  [101] = {.lex_state = 18},
  [102] = {.lex_state = 18},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 94},
  [107] = {.lex_state = 94},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 94},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 18},
  [114] = {.lex_state = 94},
  [115] = {.lex_state = 122},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 94},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 94},
  [123] = {.lex_state = 11},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 21},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 128},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 94},
  [134] = {.lex_state = 134},
  [135] = {.lex_state = 137},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 94},
  [139] = {.lex_state = 137},
  [140] = {.lex_state = 22},
  [141] = {.lex_state = 94},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 94},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 94},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 94},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 94},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTEdocker_COLON_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_docker_path_component_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__digest_algorithm_token1] = ACTIONS(1),
    [aux_sym_host_component_token1] = ACTIONS(1),
    [anon_sym_DQUOTE_DOT_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_workflow_file] = STATE(117),
    [sym_version] = STATE(56),
    [sym_workflow] = STATE(40),
    [sym_action] = STATE(40),
    [aux_sym_workflow_file_repeat1] = STATE(40),
    [anon_sym_version] = ACTIONS(5),
    [anon_sym_workflow] = ACTIONS(7),
    [anon_sym_action] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(15), 1,
      anon_sym_needs,
    ACTIONS(17), 1,
      anon_sym_runs,
    ACTIONS(19), 1,
      anon_sym_args,
    ACTIONS(21), 1,
      anon_sym_env,
    ACTIONS(23), 1,
      anon_sym_secrets,
    STATE(3), 8,
      sym__action_kvps,
      sym_uses_kvp,
      sym_needs_kvp,
      sym_runs_kvp,
      sym_args_kvp,
      sym_env_kvp,
      sym_secrets_kvp,
      aux_sym_action_repeat1,
  [35] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(15), 1,
      anon_sym_needs,
    ACTIONS(17), 1,
      anon_sym_runs,
    ACTIONS(19), 1,
      anon_sym_args,
    ACTIONS(21), 1,
      anon_sym_env,
    ACTIONS(23), 1,
      anon_sym_secrets,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(4), 8,
      sym__action_kvps,
      sym_uses_kvp,
      sym_needs_kvp,
      sym_runs_kvp,
      sym_args_kvp,
      sym_env_kvp,
      sym_secrets_kvp,
      aux_sym_action_repeat1,
  [70] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_uses,
    ACTIONS(32), 1,
      anon_sym_needs,
    ACTIONS(35), 1,
      anon_sym_runs,
    ACTIONS(38), 1,
      anon_sym_args,
    ACTIONS(41), 1,
      anon_sym_env,
    ACTIONS(44), 1,
      anon_sym_secrets,
    STATE(4), 8,
      sym__action_kvps,
      sym_uses_kvp,
      sym_needs_kvp,
      sym_runs_kvp,
      sym_args_kvp,
      sym_env_kvp,
      sym_secrets_kvp,
      aux_sym_action_repeat1,
  [105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_on,
      anon_sym_resolves,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_uses,
      anon_sym_DQUOTE,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_on,
      anon_sym_resolves,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_uses,
      anon_sym_DQUOTE,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_on,
      anon_sym_resolves,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_uses,
      anon_sym_DQUOTE,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_on,
      anon_sym_resolves,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_uses,
      anon_sym_DQUOTE,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 9,
      anon_sym_RBRACE,
      anon_sym_on,
      anon_sym_resolves,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 9,
      anon_sym_RBRACE,
      anon_sym_on,
      anon_sym_resolves,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 7,
      anon_sym_RBRACE,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [224] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(6), 2,
      sym__quoted_identifier,
      sym__string,
    STATE(82), 3,
      sym__string_or_array,
      sym_string_array,
      sym_string,
  [243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 7,
      anon_sym_RBRACE,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 7,
      anon_sym_RBRACE,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 7,
      anon_sym_RBRACE,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 7,
      anon_sym_RBRACE,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 7,
      anon_sym_RBRACE,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [308] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(6), 2,
      sym__quoted_identifier,
      sym__string,
    STATE(14), 3,
      sym__string_or_array,
      sym_string_array,
      sym_string,
  [327] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(6), 2,
      sym__quoted_identifier,
      sym__string,
    STATE(15), 3,
      sym__string_or_array,
      sym_string_array,
      sym_string,
  [346] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_AT,
    STATE(27), 1,
      aux_sym_docker_uses_repeat1,
    STATE(106), 2,
      sym_docker_tag,
      sym_docker_digest,
  [369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 7,
      anon_sym_RBRACE,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 7,
      anon_sym_RBRACE,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 7,
      anon_sym_RBRACE,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [408] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(6), 2,
      sym__quoted_identifier,
      sym__string,
    STATE(11), 3,
      sym__string_or_array,
      sym_string_array,
      sym_string,
  [427] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_AT,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      aux_sym_docker_uses_repeat1,
    STATE(111), 2,
      sym_docker_tag,
      sym_docker_digest,
  [450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 7,
      anon_sym_RBRACE,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [463] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_AT,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_docker_uses_repeat1,
    STATE(111), 2,
      sym_docker_tag,
      sym_docker_digest,
  [486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 7,
      anon_sym_RBRACE,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 7,
      anon_sym_RBRACE,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 7,
      anon_sym_RBRACE,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 7,
      anon_sym_RBRACE,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [538] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_AT,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_docker_uses_repeat1,
    STATE(150), 2,
      sym_docker_tag,
      sym_docker_digest,
  [561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 7,
      anon_sym_RBRACE,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 7,
      anon_sym_RBRACE,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 7,
      anon_sym_RBRACE,
      anon_sym_uses,
      anon_sym_needs,
      anon_sym_runs,
      anon_sym_args,
      anon_sym_env,
      anon_sym_secrets,
  [600] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_workflow,
    ACTIONS(9), 1,
      anon_sym_action,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(37), 3,
      sym_workflow,
      sym_action,
      aux_sym_workflow_file_repeat1,
  [618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      anon_sym_workflow,
    ACTIONS(116), 1,
      anon_sym_action,
    STATE(37), 3,
      sym_workflow,
      sym_action,
      aux_sym_workflow_file_repeat1,
  [636] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 1,
      anon_sym_on,
    ACTIONS(123), 1,
      anon_sym_resolves,
    STATE(42), 3,
      sym_on_kvp,
      sym_resolves_kvp,
      aux_sym_workflow_repeat1,
  [654] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_SLASH,
    ACTIONS(129), 1,
      aux_sym_docker_path_component_token2,
    STATE(45), 1,
      aux_sym_docker_path_component_repeat1,
    ACTIONS(127), 3,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_AT,
  [672] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_workflow,
    ACTIONS(9), 1,
      anon_sym_action,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(37), 3,
      sym_workflow,
      sym_action,
      aux_sym_workflow_file_repeat1,
  [690] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_string_array_repeat1,
    STATE(72), 1,
      sym_string,
    STATE(6), 2,
      sym__quoted_identifier,
      sym__string,
  [710] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    ACTIONS(137), 1,
      anon_sym_on,
    ACTIONS(140), 1,
      anon_sym_resolves,
    STATE(42), 3,
      sym_on_kvp,
      sym_resolves_kvp,
      aux_sym_workflow_repeat1,
  [728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_DQUOTEdocker_COLON_SLASH_SLASH,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DOT_SLASH,
    STATE(13), 3,
      sym_docker_uses,
      sym_local_uses,
      sym_remote_uses,
  [746] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym_string_array_repeat1,
    STATE(72), 1,
      sym_string,
    STATE(6), 2,
      sym__quoted_identifier,
      sym__string,
  [766] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_SLASH,
    ACTIONS(158), 1,
      aux_sym_docker_path_component_token2,
    STATE(49), 1,
      aux_sym_docker_path_component_repeat1,
    ACTIONS(156), 3,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_AT,
  [784] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_on,
    ACTIONS(123), 1,
      anon_sym_resolves,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(38), 3,
      sym_on_kvp,
      sym_resolves_kvp,
      aux_sym_workflow_repeat1,
  [802] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      aux_sym_string_array_repeat1,
    STATE(72), 1,
      sym_string,
    STATE(6), 2,
      sym__quoted_identifier,
      sym__string,
  [822] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_docker_path_component_token1,
    STATE(20), 1,
      sym_docker_path_component,
    STATE(60), 1,
      sym_host_component,
    STATE(89), 1,
      sym_docker_registry,
    ACTIONS(166), 2,
      aux_sym_host_component_token1,
      aux_sym_host_component_token2,
  [842] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      aux_sym_docker_path_component_token2,
    STATE(49), 1,
      aux_sym_docker_path_component_repeat1,
    ACTIONS(170), 3,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_AT,
  [860] = 6,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym__identifier,
    ACTIONS(179), 1,
      anon_sym_BSLASH,
    ACTIONS(181), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym__string_repeat1,
    STATE(118), 1,
      sym__escape,
  [879] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(185), 1,
      sym__identifier,
    STATE(124), 1,
      sym_identifier,
    STATE(52), 2,
      sym_env_var,
      aux_sym_env_kvp_repeat1,
  [896] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym__identifier,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      sym_identifier,
    STATE(55), 2,
      sym_env_var,
      aux_sym_env_kvp_repeat1,
  [913] = 6,
    ACTIONS(179), 1,
      anon_sym_BSLASH,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      sym__identifier,
    STATE(68), 1,
      aux_sym__string_repeat1,
    STATE(118), 1,
      sym__escape,
  [932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_SLASH,
    STATE(54), 1,
      aux_sym_docker_uses_repeat1,
    ACTIONS(196), 3,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_AT,
  [947] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 1,
      sym__identifier,
    STATE(124), 1,
      sym_identifier,
    STATE(55), 2,
      sym_env_var,
      aux_sym_env_kvp_repeat1,
  [964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_workflow,
    ACTIONS(9), 1,
      anon_sym_action,
    STATE(36), 3,
      sym_workflow,
      sym_action,
      aux_sym_workflow_file_repeat1,
  [979] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_docker_registry_repeat1,
    ACTIONS(206), 2,
      anon_sym_COLON,
      aux_sym_docker_path_component_token1,
  [993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_string,
    STATE(101), 2,
      sym__quoted_identifier,
      sym__string,
  [1007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(144), 1,
      sym_string,
    STATE(6), 2,
      sym__quoted_identifier,
      sym__string,
  [1021] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_COLON,
    ACTIONS(214), 1,
      aux_sym_docker_path_component_token1,
    STATE(61), 1,
      aux_sym_docker_registry_repeat1,
  [1037] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_DOT,
    ACTIONS(216), 1,
      anon_sym_COLON,
    ACTIONS(218), 1,
      aux_sym_docker_path_component_token1,
    STATE(57), 1,
      aux_sym_docker_registry_repeat1,
  [1053] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_RBRACK,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_identity_array_repeat1,
    STATE(83), 1,
      sym__quoted_identifier,
  [1069] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_identity_array_repeat1,
    STATE(83), 1,
      sym__quoted_identifier,
  [1085] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_identity_array_repeat1,
    STATE(83), 1,
      sym__quoted_identifier,
  [1101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_SLASH,
    ACTIONS(196), 3,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_AT,
  [1113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      sym_string,
    STATE(6), 2,
      sym__quoted_identifier,
      sym__string,
  [1127] = 5,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      anon_sym_BSLASH,
    STATE(67), 1,
      aux_sym__string_repeat1,
    STATE(118), 1,
      sym__escape,
  [1143] = 5,
    ACTIONS(179), 1,
      anon_sym_BSLASH,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym__string_repeat1,
    STATE(118), 1,
      sym__escape,
  [1159] = 5,
    ACTIONS(179), 1,
      anon_sym_BSLASH,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym__string_repeat1,
    STATE(118), 1,
      sym__escape,
  [1175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 3,
      ts_builtin_sym_end,
      anon_sym_workflow,
      anon_sym_action,
  [1184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 3,
      ts_builtin_sym_end,
      anon_sym_workflow,
      anon_sym_action,
  [1193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(248), 2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 3,
      ts_builtin_sym_end,
      anon_sym_workflow,
      anon_sym_action,
  [1213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_host_component_token1,
    ACTIONS(252), 1,
      aux_sym_host_component_token2,
    STATE(81), 1,
      sym_host_component,
  [1226] = 4,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      sym__safecodepoint,
    STATE(75), 1,
      aux_sym_local_uses_repeat1,
  [1239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_event_string,
    STATE(79), 1,
      sym__quoted_identifier,
  [1252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_RBRACE,
      anon_sym_on,
      anon_sym_resolves,
  [1261] = 4,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__safecodepoint,
    STATE(75), 1,
      aux_sym_local_uses_repeat1,
  [1274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 3,
      anon_sym_RBRACE,
      anon_sym_on,
      anon_sym_resolves,
  [1283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_docker_path_component_token1,
  [1292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_docker_path_component_token1,
  [1301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 3,
      anon_sym_RBRACE,
      anon_sym_on,
      anon_sym_resolves,
  [1310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(273), 2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_COLON,
    ACTIONS(277), 1,
      aux_sym__digest_algorithm_token3,
    STATE(86), 1,
      aux_sym__digest_algorithm_repeat1,
  [1334] = 4,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    ACTIONS(281), 1,
      sym__safecodepoint,
    STATE(78), 1,
      aux_sym_local_uses_repeat1,
  [1347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(285), 1,
      aux_sym__digest_algorithm_token3,
    STATE(87), 1,
      aux_sym__digest_algorithm_repeat1,
  [1360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_COLON,
    ACTIONS(289), 1,
      aux_sym__digest_algorithm_token3,
    STATE(87), 1,
      aux_sym__digest_algorithm_repeat1,
  [1373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 3,
      ts_builtin_sym_end,
      anon_sym_workflow,
      anon_sym_action,
  [1382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym_docker_path_component_token1,
    STATE(25), 1,
      sym_docker_path_component,
  [1392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym_docker_path_component_token1,
    STATE(65), 1,
      sym_docker_path_component,
  [1402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym__digest_algorithm_token1,
    STATE(116), 1,
      sym__digest_algorithm,
  [1412] = 3,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      anon_sym_BSLASH,
  [1422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_workflow,
      anon_sym_action,
  [1430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_identity_array,
  [1448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_SLASH,
    ACTIONS(308), 1,
      aux_sym_github_owner_token1,
  [1458] = 3,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_SLASH,
    ACTIONS(312), 1,
      aux_sym_remote_uses_token2,
  [1468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_RBRACE,
      sym__identifier,
  [1476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym_docker_path_component_token1,
    STATE(112), 1,
      sym_github_owner,
  [1486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_RBRACE,
      sym__identifier,
  [1502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 2,
      anon_sym_RBRACE,
      sym__identifier,
  [1510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_RBRACE,
      sym__identifier,
  [1518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_RBRACE,
      sym__identifier,
  [1526] = 2,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym__escape_token1,
  [1533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
  [1540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_integer,
  [1547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_EQ,
  [1554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_EQ,
  [1561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_EQ,
  [1568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
  [1575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_SLASH,
  [1582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym__identifier,
  [1589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
  [1596] = 2,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym__digest_algorithm_token2,
  [1603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_COLON,
  [1610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
  [1617] = 2,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__safecodepoint,
  [1624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym_docker_path_component_token1,
  [1631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_integer,
  [1638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_EQ,
  [1645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_integer,
  [1652] = 2,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym__safecodepoint,
  [1659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_EQ,
  [1666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
  [1673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_EQ,
  [1680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__hex,
  [1687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      aux_sym_docker_path_component_token1,
  [1694] = 2,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(362), 1,
      aux_sym_remote_uses_token1,
  [1701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_AT,
  [1708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_EQ,
  [1715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_EQ,
  [1722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DQUOTE,
  [1729] = 2,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(372), 1,
      aux_sym_remote_uses_token2,
  [1736] = 2,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym_remote_uses_token3,
  [1743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_SLASH,
  [1750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_AT,
  [1757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
  [1764] = 2,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(382), 1,
      aux_sym_remote_uses_token3,
  [1771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_github_repo,
  [1778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
  [1785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_EQ,
  [1792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      aux_sym_docker_tag_token1,
  [1799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
  [1806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_LBRACE,
  [1813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
  [1820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_EQ,
  [1827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_DQUOTE,
  [1834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_EQ,
  [1841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 143,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 181,
  [SMALL_STATE(10)] = 196,
  [SMALL_STATE(11)] = 211,
  [SMALL_STATE(12)] = 224,
  [SMALL_STATE(13)] = 243,
  [SMALL_STATE(14)] = 256,
  [SMALL_STATE(15)] = 269,
  [SMALL_STATE(16)] = 282,
  [SMALL_STATE(17)] = 295,
  [SMALL_STATE(18)] = 308,
  [SMALL_STATE(19)] = 327,
  [SMALL_STATE(20)] = 346,
  [SMALL_STATE(21)] = 369,
  [SMALL_STATE(22)] = 382,
  [SMALL_STATE(23)] = 395,
  [SMALL_STATE(24)] = 408,
  [SMALL_STATE(25)] = 427,
  [SMALL_STATE(26)] = 450,
  [SMALL_STATE(27)] = 463,
  [SMALL_STATE(28)] = 486,
  [SMALL_STATE(29)] = 499,
  [SMALL_STATE(30)] = 512,
  [SMALL_STATE(31)] = 525,
  [SMALL_STATE(32)] = 538,
  [SMALL_STATE(33)] = 561,
  [SMALL_STATE(34)] = 574,
  [SMALL_STATE(35)] = 587,
  [SMALL_STATE(36)] = 600,
  [SMALL_STATE(37)] = 618,
  [SMALL_STATE(38)] = 636,
  [SMALL_STATE(39)] = 654,
  [SMALL_STATE(40)] = 672,
  [SMALL_STATE(41)] = 690,
  [SMALL_STATE(42)] = 710,
  [SMALL_STATE(43)] = 728,
  [SMALL_STATE(44)] = 746,
  [SMALL_STATE(45)] = 766,
  [SMALL_STATE(46)] = 784,
  [SMALL_STATE(47)] = 802,
  [SMALL_STATE(48)] = 822,
  [SMALL_STATE(49)] = 842,
  [SMALL_STATE(50)] = 860,
  [SMALL_STATE(51)] = 879,
  [SMALL_STATE(52)] = 896,
  [SMALL_STATE(53)] = 913,
  [SMALL_STATE(54)] = 932,
  [SMALL_STATE(55)] = 947,
  [SMALL_STATE(56)] = 964,
  [SMALL_STATE(57)] = 979,
  [SMALL_STATE(58)] = 993,
  [SMALL_STATE(59)] = 1007,
  [SMALL_STATE(60)] = 1021,
  [SMALL_STATE(61)] = 1037,
  [SMALL_STATE(62)] = 1053,
  [SMALL_STATE(63)] = 1069,
  [SMALL_STATE(64)] = 1085,
  [SMALL_STATE(65)] = 1101,
  [SMALL_STATE(66)] = 1113,
  [SMALL_STATE(67)] = 1127,
  [SMALL_STATE(68)] = 1143,
  [SMALL_STATE(69)] = 1159,
  [SMALL_STATE(70)] = 1175,
  [SMALL_STATE(71)] = 1184,
  [SMALL_STATE(72)] = 1193,
  [SMALL_STATE(73)] = 1204,
  [SMALL_STATE(74)] = 1213,
  [SMALL_STATE(75)] = 1226,
  [SMALL_STATE(76)] = 1239,
  [SMALL_STATE(77)] = 1252,
  [SMALL_STATE(78)] = 1261,
  [SMALL_STATE(79)] = 1274,
  [SMALL_STATE(80)] = 1283,
  [SMALL_STATE(81)] = 1292,
  [SMALL_STATE(82)] = 1301,
  [SMALL_STATE(83)] = 1310,
  [SMALL_STATE(84)] = 1321,
  [SMALL_STATE(85)] = 1334,
  [SMALL_STATE(86)] = 1347,
  [SMALL_STATE(87)] = 1360,
  [SMALL_STATE(88)] = 1373,
  [SMALL_STATE(89)] = 1382,
  [SMALL_STATE(90)] = 1392,
  [SMALL_STATE(91)] = 1402,
  [SMALL_STATE(92)] = 1412,
  [SMALL_STATE(93)] = 1422,
  [SMALL_STATE(94)] = 1430,
  [SMALL_STATE(95)] = 1438,
  [SMALL_STATE(96)] = 1448,
  [SMALL_STATE(97)] = 1458,
  [SMALL_STATE(98)] = 1468,
  [SMALL_STATE(99)] = 1476,
  [SMALL_STATE(100)] = 1486,
  [SMALL_STATE(101)] = 1494,
  [SMALL_STATE(102)] = 1502,
  [SMALL_STATE(103)] = 1510,
  [SMALL_STATE(104)] = 1518,
  [SMALL_STATE(105)] = 1526,
  [SMALL_STATE(106)] = 1533,
  [SMALL_STATE(107)] = 1540,
  [SMALL_STATE(108)] = 1547,
  [SMALL_STATE(109)] = 1554,
  [SMALL_STATE(110)] = 1561,
  [SMALL_STATE(111)] = 1568,
  [SMALL_STATE(112)] = 1575,
  [SMALL_STATE(113)] = 1582,
  [SMALL_STATE(114)] = 1589,
  [SMALL_STATE(115)] = 1596,
  [SMALL_STATE(116)] = 1603,
  [SMALL_STATE(117)] = 1610,
  [SMALL_STATE(118)] = 1617,
  [SMALL_STATE(119)] = 1624,
  [SMALL_STATE(120)] = 1631,
  [SMALL_STATE(121)] = 1638,
  [SMALL_STATE(122)] = 1645,
  [SMALL_STATE(123)] = 1652,
  [SMALL_STATE(124)] = 1659,
  [SMALL_STATE(125)] = 1666,
  [SMALL_STATE(126)] = 1673,
  [SMALL_STATE(127)] = 1680,
  [SMALL_STATE(128)] = 1687,
  [SMALL_STATE(129)] = 1694,
  [SMALL_STATE(130)] = 1701,
  [SMALL_STATE(131)] = 1708,
  [SMALL_STATE(132)] = 1715,
  [SMALL_STATE(133)] = 1722,
  [SMALL_STATE(134)] = 1729,
  [SMALL_STATE(135)] = 1736,
  [SMALL_STATE(136)] = 1743,
  [SMALL_STATE(137)] = 1750,
  [SMALL_STATE(138)] = 1757,
  [SMALL_STATE(139)] = 1764,
  [SMALL_STATE(140)] = 1771,
  [SMALL_STATE(141)] = 1778,
  [SMALL_STATE(142)] = 1785,
  [SMALL_STATE(143)] = 1792,
  [SMALL_STATE(144)] = 1799,
  [SMALL_STATE(145)] = 1806,
  [SMALL_STATE(146)] = 1813,
  [SMALL_STATE(147)] = 1820,
  [SMALL_STATE(148)] = 1827,
  [SMALL_STATE(149)] = 1834,
  [SMALL_STATE(150)] = 1841,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_identifier, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_kvp, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_kvp, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_needs_kvp, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runs_kvp, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remote_uses, 10, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secrets_kvp, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_uses, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_kvp, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_array, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_uses, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_uses, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_kvp, 5, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_array, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_uses, 4, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_uses, 5, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_uses, 6, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remote_uses, 8, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_file, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workflow_file_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_path_component, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_path_component, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_file, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workflow_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_path_component, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_path_component, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_docker_path_component_repeat1, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_docker_path_component_repeat1, 2, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_docker_path_component_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_docker_uses_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_docker_uses_repeat1, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_kvp_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_env_kvp_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_docker_registry_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_docker_registry_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_registry, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_registry, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identity_array_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identity_array_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_docker_uses_repeat1, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2, 0, 0),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow, 4, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow, 5, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_local_uses_repeat1, 2, 0, 0),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_local_uses_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_kvp, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_string, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_component, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resolves_kvp, 3, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identity_array_repeat1, 1, 0, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__digest_algorithm, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__digest_algorithm, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__digest_algorithm_repeat1, 2, 0, 0),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digest_algorithm_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identity_array_repeat1, 2, 0, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_github_owner, 1, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_var, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_tag, 2, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [338] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_registry, 3, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_registry, 4, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_digest, 4, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_github_owner, 2, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_github_action(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
