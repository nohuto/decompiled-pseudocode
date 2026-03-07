__int64 __fastcall HUBUCX_UpdateHubInformationUsingUCXIoctl(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // eax
  int v4; // edi
  unsigned __int16 v5; // r9
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // [rsp+28h] [rbp-41h]
  __int128 v9; // [rsp+60h] [rbp-9h] BYREF
  __int64 v10; // [rsp+70h] [rbp+7h]
  __int64 v11; // [rsp+78h] [rbp+Fh]
  __int128 v12; // [rsp+80h] [rbp+17h]
  __int64 v13; // [rsp+90h] [rbp+27h]
  __int64 v14; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int64 v15; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+E0h] [rbp+77h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v16 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  v10 = 0LL;
  v11 = 0x100000001LL;
  v12 = *(unsigned __int64 *)(a1 + 16);
  v9 = 0LL;
  LODWORD(v9) = 56;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, unsigned __int64 *))(WdfFunctions_01015
                                                                                               + 1976))(
         WdfDriverGlobals,
         &v9,
         v1,
         &v15);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v13 = 0LL;
    v10 = 0LL;
    v11 = 0x100000001LL;
    v12 = v15;
    v9 = 0LL;
    LODWORD(v9) = 56;
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
           WdfDriverGlobals,
           &v9,
           (unsigned int)ExDefaultNonPagedPoolType,
           1748191317LL,
           40LL,
           &v16,
           &v14);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v6 = v14;
      *(_OWORD *)v14 = 0LL;
      *(_OWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v6 + 32) = 0LL;
      *(_DWORD *)v14 = 40;
      *(_QWORD *)(v14 + 8) = *(_QWORD *)(a1 + 248);
      *(_QWORD *)(v14 + 16) = *(_QWORD *)(a1 + 248);
      *(_DWORD *)(v14 + 24) = *(unsigned __int16 *)(a1 + 48);
      if ( *(_DWORD *)(a1 + 256) == 2 )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 40), 1u);
        *(_DWORD *)(v14 + 28) = 1;
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
          *(_DWORD *)(v14 + 28) = *(unsigned __int16 *)(a1 + 48);
        }
        *(_DWORD *)(v14 + 32) = (*(unsigned __int16 *)(a1 + 1183) >> 5) & 3;
      }
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
             WdfDriverGlobals,
             v1,
             v15,
             4788263LL,
             v16,
             0LL,
             0LL,
             0LL,
             0LL,
             0LL);
      v4 = v3;
      if ( v3 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64))(WdfFunctions_01015 + 2080))(
          WdfDriverGlobals,
          v15,
          HUBUCX_UpdateHubInformationUsingUCXIoctlComplete,
          a1);
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
                   WdfDriverGlobals,
                   v15,
                   v1,
                   0LL);
        if ( (_BYTE)result )
          return result;
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 2032))(
                   WdfDriverGlobals,
                   v15);
        v4 = result;
        if ( (int)result >= 0 )
          return result;
        goto LABEL_17;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = 64;
        goto LABEL_7;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 63;
      goto LABEL_7;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 62;
LABEL_7:
    LODWORD(v8) = v3;
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 2520), 2u, 3u, v5, (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids, v8);
LABEL_17:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x41u,
        (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
        v8);
    }
  }
  if ( v15 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return HUBSM_AddEvent(a1 + 1264, 2038);
}
