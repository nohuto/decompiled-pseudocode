/*
 * XREFs of __memset_query @ 0x1C0023A40
 * Callers:
 *     __memset_repmovs @ 0x1C00239C0 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C0023450 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
