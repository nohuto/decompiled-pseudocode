/*
 * XREFs of KeQueryActiveProcessorAffinity2 @ 0x140391BF0
 * Callers:
 *     PpmCheckInitProcessors @ 0x14082FE14 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14083009C (PpmRegisterPerfStates.c)
 *     KeConfigureHeteroProcessors @ 0x140972998 (KeConfigureHeteroProcessors.c)
 *     PpmInstallPlatformIdleStates @ 0x1409824C0 (PpmInstallPlatformIdleStates.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1409E41E4 (EtwpGetMicroarchitecturalPmcAffinity.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402544A0 (KiCopyAffinityEx.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity2(__int64 a1)
{
  KiCopyAffinityEx(a1, *(_WORD *)(a1 + 2), (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
