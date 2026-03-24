/*
 * XREFs of HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x1C0025C94
 * Callers:
 *     HUBHSM_UpdatingHubInfoInUCX @ 0x1C0009230 (HUBHSM_UpdatingHubInfoInUCX.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000AFFC (HUBSM_AddEvent.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C003281C (HUBDESC_ParseConfigurationDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_UpdateHubInformationUsingUCXIoctl(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  int v4; // edi
  unsigned __int16 v5; // r9
  __int64 v6; // rax
  __int64 v7; // [rsp+28h] [rbp-41h]
  __int128 v8; // [rsp+60h] [rbp-9h] BYREF
  __int64 v9; // [rsp+70h] [rbp+7h]
  __int64 v10; // [rsp+78h] [rbp+Fh]
  __int128 v11; // [rsp+80h] [rbp+17h]
  __int64 v12; // [rsp+90h] [rbp+27h]
  __int64 v13; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int64 v14; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v15; // [rsp+E0h] [rbp+77h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v15 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v12 = 0LL;
  v9 = 0LL;
  v10 = 0x100000001LL;
  v11 = *(unsigned __int64 *)(a1 + 16);
  v8 = 0LL;
  LODWORD(v8) = 56;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, unsigned __int64 *))(WdfFunctions_01015 + 1976))(
             WdfDriverGlobals,
             &v8,
             v1,
             &v14);
  v4 = result;
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v5 = 62;
    goto LABEL_4;
  }
  v12 = 0LL;
  v9 = 0LL;
  v10 = 0x100000001LL;
  v11 = v14;
  v8 = 0LL;
  LODWORD(v8) = 56;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
             WdfDriverGlobals,
             &v8,
             (unsigned int)ExDefaultNonPagedPoolType,
             1748191317LL,
             40LL,
             &v15,
             &v13);
  v4 = result;
  if ( (int)result >= 0 )
  {
    v6 = v13;
    *(_OWORD *)v13 = 0LL;
    *(_OWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_DWORD *)v13 = 40;
    *(_QWORD *)(v13 + 8) = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(v13 + 16) = *(_QWORD *)(a1 + 248);
    *(_DWORD *)(v13 + 24) = *(unsigned __int16 *)(a1 + 48);
    if ( *(_DWORD *)(a1 + 256) == 2 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 1u);
      *(_DWORD *)(v13 + 28) = 1;
      if ( HUBDESC_ParseConfigurationDescriptor(
             *(_QWORD *)(a1 + 1256),
             *(_QWORD *)(a1 + 1256),
             -1,
             -1,
             9,
             -1,
             2,
             0LL,
             *(_QWORD *)(a1 + 2520)) )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 40), 2u);
        *(_DWORD *)(v13 + 28) = *(unsigned __int16 *)(a1 + 48);
      }
      *(_DWORD *)(v13 + 32) = (*(unsigned __int16 *)(a1 + 1183) >> 5) & 3;
    }
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
               WdfDriverGlobals,
               v1,
               v14,
               4788263LL,
               v15,
               0LL,
               0LL,
               0LL,
               0LL,
               0LL);
    v4 = result;
    if ( (int)result >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64))(WdfFunctions_01015 + 2080))(
        WdfDriverGlobals,
        v14,
        HUBUCX_UpdateHubInformationUsingUCXIoctlComplete,
        a1);
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, _QWORD))(WdfFunctions_01015
                                                                                                 + 2024))(
                 WdfDriverGlobals,
                 v14,
                 v1,
                 0LL);
      if ( !(_BYTE)result )
      {
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 2032))(
                   WdfDriverGlobals,
                   v14);
        v4 = result;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 64;
      goto LABEL_4;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 63;
LABEL_4:
    LODWORD(v7) = result;
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(a1 + 2520),
               2u,
               3u,
               v5,
               (__int64)&WPP_0fdba02233013f1195f31cf9301a7589_Traceguids,
               v7);
  }
LABEL_17:
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x41u,
        (__int64)&WPP_0fdba02233013f1195f31cf9301a7589_Traceguids,
        v7);
    }
    if ( v14 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    return HUBSM_AddEvent(a1 + 1264, 2038);
  }
  return result;
}
