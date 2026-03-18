/*
 * XREFs of __memset_query @ 0x1C001AD80
 * Callers:
 *     __memset_repmovs @ 0x1C001AD00 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C001A770 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
