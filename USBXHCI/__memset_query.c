/*
 * XREFs of __memset_query @ 0x1C00208C0
 * Callers:
 *     __memset_repmovs @ 0x1C0020840 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C001E900 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
