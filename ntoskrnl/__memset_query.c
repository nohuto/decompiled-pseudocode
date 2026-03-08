/*
 * XREFs of __memset_query @ 0x14042D180
 * Callers:
 *     __memset_repmovs @ 0x14042D100 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1403D7C30 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
