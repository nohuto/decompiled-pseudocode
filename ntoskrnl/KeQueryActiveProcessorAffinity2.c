/*
 * XREFs of KeQueryActiveProcessorAffinity2 @ 0x14038F750
 * Callers:
 *     PpmCheckInitProcessors @ 0x140827DA4 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14082802C (PpmRegisterPerfStates.c)
 *     KeConfigureHeteroProcessors @ 0x14096F978 (KeConfigureHeteroProcessors.c)
 *     PpmInstallPlatformIdleStates @ 0x14097F410 (PpmInstallPlatformIdleStates.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1409E1344 (EtwpGetMicroarchitecturalPmcAffinity.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity2(__int64 a1)
{
  KiCopyAffinityEx(a1, *(_WORD *)(a1 + 2), (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
