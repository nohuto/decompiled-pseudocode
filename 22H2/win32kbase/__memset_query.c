/*
 * XREFs of __memset_query @ 0x1C00D6BC0
 * Callers:
 *     __memset_repmovs @ 0x1C00D6B40 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C00CFB50 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
