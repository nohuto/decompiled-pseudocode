/*
 * XREFs of KeForceEnableNx @ 0x14099A130
 * Callers:
 *     HalpInterruptBuildStartupStub @ 0x1403A0E80 (HalpInterruptBuildStartupStub.c)
 * Callees:
 *     <none>
 */

char KeForceEnableNx()
{
  return KiNxForceEnable;
}
