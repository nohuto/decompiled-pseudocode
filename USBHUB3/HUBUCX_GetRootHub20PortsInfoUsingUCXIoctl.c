/*
 * XREFs of HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1C0027C54
 * Callers:
 *     HUBHSM_GettingRootHub20PortsInfo @ 0x1C0009C50 (HUBHSM_GettingRootHub20PortsInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r15
  int v7; // eax
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  unsigned __int16 v11; // r9
  _QWORD *v12; // r8
  unsigned int v13; // r9d
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  int v16; // esi
  __int64 result; // rax
  int v18; // [rsp+28h] [rbp-51h]
  __int64 v19; // [rsp+28h] [rbp-51h]
  __int128 v20; // [rsp+60h] [rbp-19h] BYREF
  __int128 v21; // [rsp+70h] [rbp-9h]
  __int128 v22; // [rsp+80h] [rbp+7h]
  __int64 v23; // [rsp+90h] [rbp+17h]
  unsigned __int64 v24; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v26; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v27; // [rsp+F8h] [rbp+7Fh] BYREF

  DWORD1(v20) = 0;
  v26 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  if ( !*(_WORD *)(a1 + 112) )
  {
    *(_QWORD *)(a1 + 128) = 0LL;
    v2 = 2042;
    v3 = a1 + 1264;
    return HUBSM_AddEvent(v3, v2);
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v5 = *(_QWORD *)(a1 + 16);
  v6 = v4;
  *(_QWORD *)&v21 = 0LL;
  v23 = 0LL;
  v22 = v5;
  v20 = 0LL;
  LODWORD(v20) = 56;
  *((_QWORD *)&v21 + 1) = 0x100000001LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, unsigned __int64 *))(WdfFunctions_01015
                                                                                               + 1976))(
         WdfDriverGlobals,
         &v20,
         v4,
         &v24);
  if ( v7 < 0 )
  {
    v24 = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = v7;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x2Cu,
        (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
        v18);
    }
    v8 = (_QWORD *)(a1 + 128);
    goto LABEL_23;
  }
  v8 = (_QWORD *)(a1 + 128);
  v9 = 28LL * *(unsigned __int16 *)(a1 + 112);
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  *(_QWORD *)&v22 = *(_QWORD *)(a1 + 16);
  v20 = 0LL;
  LODWORD(v20) = 56;
  *((_QWORD *)&v21 + 1) = 0x100000001LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          &v20,
          (unsigned int)ExDefaultNonPagedPoolType,
          1882409045LL,
          v9,
          &v27,
          a1 + 128);
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_23:
      if ( v24 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
      if ( v27 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
        *v8 = 0LL;
      }
      v3 = a1 + 1264;
      v2 = 2038;
      return HUBSM_AddEvent(v3, v2);
    }
    v11 = 45;
LABEL_10:
    LODWORD(v19) = v10;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      v11,
      (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
      v19);
    goto LABEL_23;
  }
  v23 = 0LL;
  *(_QWORD *)&v21 = 0LL;
  *((_QWORD *)&v21 + 1) = 0x100000001LL;
  v22 = v24;
  v20 = 0LL;
  LODWORD(v20) = 56;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          &v20,
          (unsigned int)ExDefaultNonPagedPoolType,
          1882409045LL,
          16LL,
          &v26,
          &v25);
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v11 = 46;
    goto LABEL_10;
  }
  v12 = (_QWORD *)*v8;
  v13 = 0;
  *(_DWORD *)v25 = 16;
  *(_WORD *)(v25 + 4) = *(_WORD *)(a1 + 112);
  *(_WORD *)(v25 + 6) = 20;
  *(_QWORD *)(v25 + 8) = v12;
  v14 = *(unsigned __int16 *)(v25 + 4);
  v15 = &v12[v14];
  if ( (_WORD)v14 )
  {
    do
    {
      *v12 = v15;
      ++v13;
      *((_WORD *)v15 + 1) = 0;
      ++v12;
      v15 = (_QWORD *)((char *)v15 + 20);
    }
    while ( v13 < *(unsigned __int16 *)(v25 + 4) );
  }
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
          WdfDriverGlobals,
          v6,
          v24,
          4788239LL,
          v26,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
  v16 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v11 = 47;
    goto LABEL_10;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v24,
    HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete,
    a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             v24,
             v6,
             0LL);
  if ( !(_BYTE)result )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 2032))(
               WdfDriverGlobals,
               v24);
    v16 = result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = result;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 2520),
                 2u,
                 3u,
                 0x30u,
                 (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
                 v19);
    }
  }
  if ( v16 < 0 )
    goto LABEL_23;
  return result;
}
