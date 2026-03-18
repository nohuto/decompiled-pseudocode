/*
 * XREFs of __memset_query @ 0x1C0045080
 * Callers:
 *     __memset_repmovs @ 0x1C0045000 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C00448F0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
