__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsAdd(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r14d
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  _DWORD *v8; // r12
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // r15
  int v16; // edx
  __int64 v17; // rsi
  __int64 v18; // rcx
  int v19; // edx
  __int64 v21; // [rsp+50h] [rbp-39h] BYREF
  __int64 v22; // [rsp+58h] [rbp-31h]
  __int128 v23; // [rsp+60h] [rbp-29h] BYREF
  unsigned int v24; // [rsp+70h] [rbp-19h]
  int v25; // [rsp+74h] [rbp-15h]
  _QWORD v26[3]; // [rsp+78h] [rbp-11h] BYREF
  int v27; // [rsp+90h] [rbp+7h]
  int v28; // [rsp+94h] [rbp+Bh]
  __int64 v29; // [rsp+98h] [rbp+Fh]
  __int64 v30; // [rsp+A0h] [rbp+17h]
  void *v31; // [rsp+A8h] [rbp+1Fh]
  __int64 v32; // [rsp+100h] [rbp+77h] BYREF
  unsigned int v33; // [rsp+108h] [rbp+7Fh]

  v32 = a3;
  v24 = 0;
  HIDWORD(v26[0]) = 0;
  v3 = 0;
  v5 = a2;
  v23 = 0LL;
  v21 = 0LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00631A8);
  v7 = v6;
  v8 = (_DWORD *)(v6 + 144);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v6 + 80),
      v9,
      13,
      98,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL),
      *v8,
      v5);
  }
  if ( !*(_BYTE *)(v7 + 37) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v7 + 80),
        2,
        13,
        99,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v7 + 16) + 135LL),
        *v8);
    return (unsigned int)-1073741811;
  }
  if ( !(_DWORD)v5 || (unsigned int)v5 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 88LL) + 116LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v7 + 80),
        2,
        13,
        100,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v7 + 16) + 135LL),
        *v8,
        v5);
    return (unsigned int)-1073741811;
  }
  v31 = off_1C0063338;
  v26[0] = 56LL;
  v27 = 1;
  v26[1] = Endpoint_EvtStaticStreamsCleanupCallback;
  v10 = 1;
  v28 = 1;
  v26[2] = 0LL;
  v29 = 0LL;
  v30 = 104 * v5 + 48;
  if ( *(_BYTE *)(v7 + 1344) )
    v10 = 2;
  v27 = v10;
  v11 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, _QWORD *, __int64 *))qword_1C0064880)(
          UcxDriverGlobals,
          a1,
          &v32,
          v26,
          &v21);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v21,
            off_1C0063338);
    v15 = v14;
    *(_QWORD *)v14 = v7;
    *(_DWORD *)(v14 + 8) = v5;
    if ( (unsigned int)v5 >= 4 )
    {
      if ( (unsigned int)v5 >= 8 )
      {
        if ( (unsigned int)v5 >= 0x10 )
        {
          if ( (unsigned int)v5 >= 0x20 )
          {
            if ( (unsigned int)v5 >= 0x40 )
            {
              if ( (unsigned int)v5 >= 0x80 )
                *(_DWORD *)(v14 + 12) = 7;
              else
                *(_DWORD *)(v14 + 12) = 6;
            }
            else
            {
              *(_DWORD *)(v14 + 12) = 5;
            }
          }
          else
          {
            *(_DWORD *)(v14 + 12) = 4;
          }
        }
        else
        {
          *(_DWORD *)(v14 + 12) = 3;
        }
      }
      else
      {
        *(_DWORD *)(v14 + 12) = 2;
      }
    }
    else
    {
      *(_DWORD *)(v14 + 12) = 1;
    }
    v22 = v14 + 48;
    while ( 1 )
    {
      v33 = v3 + 1;
      v12 = TR_Create(*(_QWORD *)v7, v7, v21, v3 + 1, 104LL * v3 + v15 + 48);
      if ( v12 < 0 )
        break;
      v17 = v22;
      v3 = v33;
      v18 = *(_QWORD *)(*(_QWORD *)v22 + 72LL);
      v25 = 0;
      *((_QWORD *)&v23 + 1) = v18;
      *(_QWORD *)&v23 = 24LL;
      v24 = v33;
      ((void (__fastcall *)(__int64, __int64, __int128 *))qword_1C0064878)(UcxDriverGlobals, v21, &v23);
      v22 = v17 + 104;
      if ( v3 >= (unsigned int)v5 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 4;
          WPP_RECORDER_SF_ddd(
            *(_QWORD *)(v7 + 80),
            v19,
            13,
            103,
            (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
            *(_BYTE *)(*(_QWORD *)(v7 + 16) + 135LL),
            *v8,
            v5);
        }
        return 0;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(v7 + 80),
        v16,
        13,
        102,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v7 + 16) + 135LL),
        *v8,
        v3,
        v12);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v7 + 80),
      v13,
      13,
      101,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v7 + 16) + 135LL),
      *v8,
      v11);
  }
  return (unsigned int)v12;
}
