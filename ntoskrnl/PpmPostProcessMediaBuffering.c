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
