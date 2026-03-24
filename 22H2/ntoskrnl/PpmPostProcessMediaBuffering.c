/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x1408F5E78
 * Callers:
 *     PpmApplyProfile @ 0x1408F5B4C (PpmApplyProfile.c)
 * Callees:
 *     KeSubtractAffinityEx @ 0x14022AFE0 (KeSubtractAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x1403447EC (PopExecuteOnTargetProcessors.c)
 *     PoCopyDeepIdleMask @ 0x14035DDD0 (PoCopyDeepIdleMask.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     PpmCheckApplyResetNotification @ 0x140576B40 (PpmCheckApplyResetNotification.c)
 */

char PpmPostProcessMediaBuffering()
{
  int v0; // eax
  unsigned __int16 v2[88]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE v3[176]; // [rsp+D0h] [rbp-C8h] BYREF

  memset(v3, 0, 0xA8uLL);
  memset(v2, 0, 0xA8uLL);
  LOBYTE(v0) = PpmCheckApplyResetNotification();
  if ( PpmPlatformStates )
  {
    PoCopyDeepIdleMask(v2);
    v0 = KeSubtractAffinityEx((unsigned __int16 *)KeActiveProcessors, v2, v3);
    if ( v0 )
      LOBYTE(v0) = PopExecuteOnTargetProcessors((__int64)v3, (__int64)PpmResetInterruptRate, 0LL, 0LL);
  }
  return v0;
}
