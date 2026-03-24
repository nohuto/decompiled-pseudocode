/*
 * XREFs of KeQueryActiveProcessorAffinity @ 0x1403C2090
 * Callers:
 *     PpmCheckInitProcessors @ 0x1407BA2D8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407BA4A0 (PpmRegisterPerfStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1408E22F0 (PpmInstallPlatformIdleStates.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x14093A3F8 (EtwpGetMicroarchitecturalPmcAffinity.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x1402BBAE0 (KeCopyAffinityEx.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity(__int64 a1)
{
  KeCopyAffinityEx(a1, (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
