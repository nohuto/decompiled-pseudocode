/*
 * XREFs of __memset_query @ 0x1C00E1B40
 * Callers:
 *     __memset_repmovs @ 0x1C00E1AC0 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C00DC400 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
