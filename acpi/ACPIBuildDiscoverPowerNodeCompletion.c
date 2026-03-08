/*
 * XREFs of ACPIBuildDiscoverPowerNodeCompletion @ 0x1C000CE10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     ACPIBuildCompleteCommon @ 0x1C000BC30 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_sqqDqs @ 0x1C0015A0C (WPP_RECORDER_SF_sqqDqs.c)
 */

void __fastcall ACPIBuildDiscoverPowerNodeCompletion(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  signed __int32 v7; // edx

  if ( a2 >= 0 )
  {
    if ( a3 )
    {
      v6 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(v6 + 136) = a3;
      _InterlockedOr64((volatile signed __int64 *)(v6 + 16), 0x8000uLL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sqqDqs(WPP_GLOBAL_Control->DeviceExtension, v6, a3, a4);
    }
  }
  v7 = *(_DWORD *)(a1 + 32);
  if ( a2 < 0 )
    *(_DWORD *)(a1 + 48) = a2;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v7);
}
