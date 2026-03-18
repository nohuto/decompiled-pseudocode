/*
 * XREFs of __memset_query @ 0x1404355C0
 * Callers:
 *     __memset_repmovs @ 0x140435540 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1403DD150 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
