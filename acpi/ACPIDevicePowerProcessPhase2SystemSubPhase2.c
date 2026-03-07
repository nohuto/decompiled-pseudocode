__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase2(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = 0;
  v3 = 5LL;
  *(_DWORD *)(a1 + 212) = 5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      10,
      64,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a1,
      5);
  if ( *(_DWORD *)(a1 + 104) != 1 || (v2 = LinkNodeRestoreHardwareState(v3, a1), result = 259LL, v2 != 259) )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v2, 0LL, a1);
    return 0LL;
  }
  return result;
}
