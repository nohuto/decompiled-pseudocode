/*
 * XREFs of __memset_query @ 0x1C0027800
 * Callers:
 *     __memset_repmovs @ 0x1C0027780 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C00271F0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
