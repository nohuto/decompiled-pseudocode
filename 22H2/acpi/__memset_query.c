/*
 * XREFs of __memset_query @ 0x1C0002340
 * Callers:
 *     __memset_repmovs @ 0x1C00022C0 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C0001D30 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
