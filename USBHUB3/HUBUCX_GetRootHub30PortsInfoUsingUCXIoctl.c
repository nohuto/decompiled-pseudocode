__int64 __fastcall HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl(__int64 a1)
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
  unsigned int v13; // r10d
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // r9
  int v17; // esi
  __int64 result; // rax
  int v19; // [rsp+28h] [rbp-51h]
  __int64 v20; // [rsp+28h] [rbp-51h]
  __int128 v21; // [rsp+60h] [rbp-19h] BYREF
  __int128 v22; // [rsp+70h] [rbp-9h]
  __int128 v23; // [rsp+80h] [rbp+7h]
  __int64 v24; // [rsp+90h] [rbp+17h]
  unsigned __int64 v25; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v26; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v27; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v28; // [rsp+F8h] [rbp+7Fh] BYREF

  DWORD1(v21) = 0;
  v27 = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  if ( !*(_WORD *)(a1 + 114) )
  {
    *(_QWORD *)(a1 + 136) = 0LL;
    v2 = 2042;
    v3 = a1 + 1264;
    return HUBSM_AddEvent(v3, v2);
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v5 = *(_QWORD *)(a1 + 16);
  v6 = v4;
  *(_QWORD *)&v22 = 0LL;
  v24 = 0LL;
  v23 = v5;
  v21 = 0LL;
  LODWORD(v21) = 56;
  *((_QWORD *)&v22 + 1) = 0x100000001LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, unsigned __int64 *))(WdfFunctions_01015
                                                                                               + 1976))(
         WdfDriverGlobals,
         &v21,
         v4,
         &v25);
  if ( v7 < 0 )
  {
    v25 = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = v7;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x32u,
        (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
        v19);
    }
    v8 = (_QWORD *)(a1 + 136);
    goto LABEL_23;
  }
  v8 = (_QWORD *)(a1 + 136);
  v9 = 224LL * *(unsigned __int16 *)(a1 + 114);
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  *(_QWORD *)&v23 = *(_QWORD *)(a1 + 16);
  v21 = 0LL;
  LODWORD(v21) = 56;
  *((_QWORD *)&v22 + 1) = 0x100000001LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          &v21,
          (unsigned int)ExDefaultNonPagedPoolType,
          1882409045LL,
          v9,
          &v28,
          a1 + 136);
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_23:
      if ( v25 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
      if ( v28 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
        *v8 = 0LL;
      }
      v3 = a1 + 1264;
      v2 = 2038;
      return HUBSM_AddEvent(v3, v2);
    }
    v11 = 51;
LABEL_10:
    LODWORD(v20) = v10;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      v11,
      (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
      v20);
    goto LABEL_23;
  }
  v24 = 0LL;
  *(_QWORD *)&v22 = 0LL;
  *((_QWORD *)&v22 + 1) = 0x100000001LL;
  v23 = v25;
  v21 = 0LL;
  LODWORD(v21) = 56;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          &v21,
          (unsigned int)ExDefaultNonPagedPoolType,
          1882409045LL,
          16LL,
          &v27,
          &v26);
  if ( v10 < 0 )
  {
    v27 = 0LL;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v11 = 52;
    goto LABEL_10;
  }
  v12 = (_QWORD *)*v8;
  v13 = 0;
  *(_DWORD *)v26 = 16;
  *(_WORD *)(v26 + 4) = *(_WORD *)(a1 + 114);
  *(_WORD *)(v26 + 6) = 24;
  *(_QWORD *)(v26 + 8) = v12;
  v14 = *(unsigned __int16 *)(v26 + 4);
  v15 = &v12[v14];
  v16 = &v15[3 * v14];
  if ( (_WORD)v14 )
  {
    do
    {
      *v12 = v15;
      ++v13;
      v15[2] = v16;
      ++v12;
      *((_WORD *)v15 + 1) = 0;
      v16 += 24;
      *((_DWORD *)v15 + 3) = 48;
      v15 += 3;
    }
    while ( v13 < *(unsigned __int16 *)(v26 + 4) );
  }
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
          WdfDriverGlobals,
          v6,
          v25,
          4788243LL,
          v27,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
  v17 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v11 = 53;
    goto LABEL_10;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v25,
    HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete,
    a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             v25,
             v6,
             0LL);
  if ( !(_BYTE)result )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 2032))(
               WdfDriverGlobals,
               v25);
    v17 = result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = result;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 2520),
                 2u,
                 3u,
                 0x36u,
                 (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
                 v20);
    }
  }
  if ( v17 < 0 )
    goto LABEL_23;
  return result;
}
