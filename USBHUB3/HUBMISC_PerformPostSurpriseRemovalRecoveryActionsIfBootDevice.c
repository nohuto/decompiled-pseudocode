/*
 * XREFs of HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice @ 0x1C0033B30
 * Callers:
 *     HUBMISC_IsBootDeviceReady @ 0x1C00338AC (HUBMISC_IsBootDeviceReady.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // [rsp+28h] [rbp-58h]
  _QWORD v6[3]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v7; // [rsp+48h] [rbp-38h] BYREF
  __int64 v8; // [rsp+58h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp-20h]
  __int128 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+78h] [rbp-8h]
  __int64 v12; // [rsp+90h] [rbp+10h] BYREF

  v12 = 0LL;
  v2 = *(_QWORD *)(a1 + 8);
  DWORD1(v7) = 0;
  HIDWORD(v6[0]) = 0;
  result = *(unsigned int *)(v2 + 1336);
  if ( (result & 0x10) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1336), 0xFFFFFFEF);
    v4 = *(_QWORD *)(a1 + 16);
    v8 = 0LL;
    v11 = 0LL;
    v7 = 0LL;
    LODWORD(v7) = 56;
    v10 = 0LL;
    v9 = 0x100000001LL;
    *(_QWORD *)&v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                        WdfDriverGlobals,
                        v4);
    v6[2] = 1LL;
    v6[0] = 24LL;
    v6[1] = HUBREG_EvtWorkItemPerformPostSurpriseRemovalRecoveryActions;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int128 *, __int64 *))(WdfFunctions_01015 + 3032))(
               WdfDriverGlobals,
               v6,
               &v7,
               &v12);
    if ( (int)result >= 0 )
    {
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(
               WdfDriverGlobals,
               v12);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = result;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
               2u,
               2u,
               0x70u,
               (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
               v5);
    }
  }
  return result;
}
