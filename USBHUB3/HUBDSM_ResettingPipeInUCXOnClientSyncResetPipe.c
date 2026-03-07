__int64 __fastcall HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rdx
  _QWORD *v4; // r8
  int v5; // edx
  _OWORD v7[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v8; // [rsp+60h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 960);
  v8 = 0LL;
  memset(v7, 0, sizeof(v7));
  v2 = *(_QWORD *)(v1 + 456);
  LOWORD(v7[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(WdfDriverGlobals, v2, v7);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
         WdfDriverGlobals,
         *(_QWORD *)(v1 + 432),
         0LL);
  *(_OWORD *)v3 = 0LL;
  *(_OWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 32) = 0LL;
  v4 = *(_QWORD **)(v1 + 1656);
  if ( v4 )
  {
    *(_DWORD *)v3 = 40;
    *(_QWORD *)(v3 + 8) = *(_QWORD *)(*(_QWORD *)v1 + 248LL);
    *(_QWORD *)(v3 + 16) = *(_QWORD *)(v1 + 24);
    *(_QWORD *)(v3 + 24) = *v4;
    *(_DWORD *)(v3 + 32) = 1;
    v5 = HUBUCX_SubmitUcxIoctl(v1, 4788287LL);
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ld(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        v5,
        5,
        58,
        (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
        63,
        v5);
  }
  else
  {
    *(_DWORD *)(v1 + 1564) = -2147482112;
    *(_DWORD *)(v1 + 1560) = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x39u,
        (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids);
    HUBSM_AddEvent(v1 + 504, 4020);
  }
  return 1000LL;
}
