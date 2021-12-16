#ifndef __CP_MODEL_BUILDER_H__
#define __CP_MODEL_BUILDER_H__

#include "erl_nif.h"

extern "C"
{
  int load_cp_model_builder(ErlNifEnv *env, void **priv, ERL_NIF_TERM load_info);

  ERL_NIF_TERM new_builder_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);

  ERL_NIF_TERM new_bool_var_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);

  ERL_NIF_TERM new_int_var_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);

  ERL_NIF_TERM add_equal_expr_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);

  ERL_NIF_TERM add_equal_int_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);

  ERL_NIF_TERM add_equal_int_constant_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);

  ERL_NIF_TERM add_equal_bool_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);

  ERL_NIF_TERM add_not_equal_int_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);

  ERL_NIF_TERM add_not_equal_bool_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);

  ERL_NIF_TERM add_greater_or_equal_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);

  ERL_NIF_TERM add_less_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);

  ERL_NIF_TERM add_less_or_equal_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);

  ERL_NIF_TERM only_enforce_if_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);

  ERL_NIF_TERM bool_not_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);

  ERL_NIF_TERM solve_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);

  ERL_NIF_TERM solution_bool_value_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);

  ERL_NIF_TERM solution_integer_value_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);
}

#endif