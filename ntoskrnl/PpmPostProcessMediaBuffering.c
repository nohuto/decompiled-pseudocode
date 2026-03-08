/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x14099A314
 * Callers:
 *     PpmApplyProfile @ 0x14099A040 (PpmApplyProfile.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140236D20 (PopExecuteOnTargetProcessors.c)
 *     PoCopyDeepIdleMask @ 0x1402AEFF0 (PoCopyDeepIdleMask.c)
 *     KiSubtractAffinityEx @ 0x1402D4CBC (KiSubtractAffinityEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PpmCheckApplyResetNotification @ 0x14045AB5E (PpmCheckApplyResetNotification.c)
 */

void PpmPostProcessMediaBuffering()
{
  _DWORD v0[68]; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v1[68]; // [rsp+138h] [rbp+30h] BYREF

  memset(&v0[2], 0, 0x100uLL);
  memset(&v1[2], 0, 0x100uLL);
  PpmCheckApplyResetNotification();
  if ( PpmPlatformStates )
  {
    v1[0] = 2097153;
    memset(&v1[1], 0, 0x104uLL);
    PoCopyDeepIdleMask((unsigned __int16 *)v1);
    v0[0] = 2097153;
    memset(&v0[1], 0, 0x104uLL);
    if ( (unsigned int)KiSubtractAffinityEx((unsigned __int16 *)KeActiveProcessors, (char *)v1, v0, 0x20u) )
      PopExecuteOnTargetProcessors((__int64)v0, (__int64)PpmResetInterruptRate, 0LL, 0LL);
  }
}
