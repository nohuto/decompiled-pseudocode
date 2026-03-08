/*
 * XREFs of KeForceEnableNx @ 0x140A868E0
 * Callers:
 *     HalpInterruptSetProcessorStartContext @ 0x140371C70 (HalpInterruptSetProcessorStartContext.c)
 * Callees:
 *     <none>
 */

char KeForceEnableNx()
{
  return KiNxForceEnable;
}
