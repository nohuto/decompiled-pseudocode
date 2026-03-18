/*
 * XREFs of KeForceEnableNx @ 0x140A89EF0
 * Callers:
 *     HalpInterruptSetProcessorStartContext @ 0x140376EC0 (HalpInterruptSetProcessorStartContext.c)
 * Callees:
 *     <none>
 */

char KeForceEnableNx()
{
  return KiNxForceEnable;
}
