/*
 * XREFs of HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C0034B00
 * Callers:
 *     HUBHTX_Get20PortChangeEvent @ 0x1C0004C30 (HUBHTX_Get20PortChangeEvent.c)
 *     HUBHTX_GetPortLostChangeEvent @ 0x1C00052EC (HUBHTX_GetPortLostChangeEvent.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x1C000569C (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset @ 0x1C00061A8 (HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset.c)
 *     HUBHSM_CheckIfThereIsAValidHubChange @ 0x1C00084D0 (HUBHSM_CheckIfThereIsAValidHubChange.c)
 *     HUBPSM20_CheckingIfOvercurrentBitOne @ 0x1C0011B70 (HUBPSM20_CheckingIfOvercurrentBitOne.c)
 *     HUBPSM20_CheckingForOverCurrentOnResume @ 0x1C0012AC0 (HUBPSM20_CheckingForOverCurrentOnResume.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_UpdateSqmHubOvercurrentDetected(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rax
  int v4; // [rsp+28h] [rbp-58h]
  int v5; // [rsp+30h] [rbp-50h] BYREF
  int v6; // [rsp+34h] [rbp-4Ch]
  __int64 (__fastcall *v7)(); // [rsp+38h] [rbp-48h]
  __int64 v8; // [rsp+40h] [rbp-40h]
  __int128 v9; // [rsp+48h] [rbp-38h] BYREF
  __int64 v10; // [rsp+58h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp-20h]
  __int128 v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+78h] [rbp-8h]
  __int64 v14; // [rsp+90h] [rbp+10h] BYREF

  result = 0LL;
  v14 = 0LL;
  DWORD1(v9) = 0;
  v6 = 0;
  if ( (*(_DWORD *)(a1 + 40) & 0x20000000) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x20000000u);
    v13 = 0LL;
    v3 = *(_QWORD *)(a1 + 16);
    v6 = 0;
    v5 = 24;
    v10 = 0LL;
    v11 = 0x100000001LL;
    v12 = v3;
    v7 = HUBREG_EvtWorkItemUpdateSqmHubOvercurrentDetected;
    v9 = 0LL;
    v8 = 1LL;
    LODWORD(v9) = 56;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, int *, __int128 *, __int64 *))(WdfFunctions_01015 + 3032))(
               WdfDriverGlobals,
               &v5,
               &v9,
               &v14);
    if ( (int)result >= 0 )
    {
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(
               WdfDriverGlobals,
               v14);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = result;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(a1 + 2520),
               2u,
               3u,
               0x3Au,
               (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
               v4);
    }
  }
  return result;
}
