/*
 * XREFs of HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C0027964
 * Callers:
 *     HUBHSM_GettingRootHubInfo @ 0x1C0009CB0 (HUBHSM_GettingRootHubInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall HUBUCX_GetRootHubInfoUsingUCXIoctl(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // edi
  int v9; // [rsp+28h] [rbp-41h]
  int v10; // [rsp+28h] [rbp-41h]
  __int64 v11; // [rsp+30h] [rbp-39h] BYREF
  __int128 v12; // [rsp+38h] [rbp-31h] BYREF
  __int64 v13; // [rsp+48h] [rbp-21h]
  __int64 v14; // [rsp+50h] [rbp-19h]
  __int128 v15; // [rsp+58h] [rbp-11h]
  __int64 v16; // [rsp+68h] [rbp-1h]
  _QWORD v17[9]; // [rsp+70h] [rbp+7h] BYREF

  v11 = 0LL;
  DWORD1(v12) = 0;
  memset(v17, 0, sizeof(v17));
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v3 = *(_QWORD *)(a1 + 16);
  v4 = v2;
  v13 = 0LL;
  v16 = 0LL;
  v15 = v3;
  v12 = 0LL;
  LODWORD(v12) = 56;
  v14 = 0x100000001LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         &v12,
         v2,
         &v11);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x29u,
        (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
        v9);
    }
LABEL_8:
    if ( v11 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    return HUBSM_AddEvent(a1 + 1264, 2038);
  }
  v6 = v11;
  *(_DWORD *)(a1 + 104) = 24;
  v17[1] = a1 + 104;
  LOBYTE(v17[0]) = 15;
  LODWORD(v17[3]) = 4788235;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v6,
    v17);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v11,
    HUBUCX_GetRootHubInfoUsingUCXIoctlComplete,
    a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             v11,
             v4,
             0LL);
  if ( !(_BYTE)result )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
               WdfDriverGlobals,
               v11);
    v8 = result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = result;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 2520),
                 2u,
                 3u,
                 0x2Au,
                 (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
                 v10);
    }
    if ( v8 < 0 )
      goto LABEL_8;
  }
  return result;
}
