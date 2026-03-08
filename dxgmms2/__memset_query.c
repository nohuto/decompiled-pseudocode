/*
 * XREFs of __memset_query @ 0x1C001AE40
 * Callers:
 *     __memset_repmovs @ 0x1C001ADC0 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C001A830 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
