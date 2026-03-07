__int64 __fastcall RootHub_UcxEvtGet30PortInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int v5; // edx
  __int64 v6; // r14
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // bp
  unsigned __int16 v9; // di
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // r9d
  char v18; // [rsp+28h] [rbp-70h]
  _OWORD v19[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063248);
  v20 = 0LL;
  memset(v19, 0, sizeof(v19));
  LOWORD(v19[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v19);
  v4 = *((_QWORD *)&v19[0] + 1);
  v5 = **((_DWORD **)&v19[0] + 1);
  v6 = *(_QWORD *)(*((_QWORD *)&v19[0] + 1) + 8LL);
  if ( **((_DWORD **)&v19[0] + 1) < 0x10u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_21:
      v12 = 3221225485LL;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               a2,
               v12);
    }
    v17 = 203;
    goto LABEL_19;
  }
  v7 = *(_WORD *)(*((_QWORD *)&v19[0] + 1) + 4LL);
  if ( v7 != *(_WORD *)(v3 + 22) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v18 = *(_WORD *)(*((_QWORD *)&v19[0] + 1) + 4LL);
    v17 = 204;
    goto LABEL_20;
  }
  v5 = *(unsigned __int16 *)(*((_QWORD *)&v19[0] + 1) + 6LL);
  if ( v5 < 0xC )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v17 = 205;
LABEL_19:
    v18 = v5;
LABEL_20:
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v5,
      11,
      v17,
      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
      v18);
    goto LABEL_21;
  }
  v8 = 0;
  v9 = 0;
  if ( *(_DWORD *)(v3 + 16) )
  {
    while ( v8 < v7 )
    {
      v10 = v9++;
      v11 = 120 * v10;
      if ( *(_BYTE *)(120 * v10 + *(_QWORD *)(v3 + 48) + 13) == 3 )
      {
        v14 = 102;
        **(_WORD **)(v6 + 8LL * v8) = v9;
        if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 17) == 1 )
          v14 = 116;
        *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v8) + 4LL) = v14;
        v15 = 116;
        if ( *(_BYTE *)(v3 + 56) != 1 )
          v15 = 102;
        *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v8) + 8LL) = v15;
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v8) + 2LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 12);
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v8) + 3LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 14);
        if ( *(_WORD *)(v4 + 6) >= 0x18u )
        {
          v16 = RootHub_Read30PortSpeeds(
                  v3,
                  *(_QWORD *)(*(_QWORD *)(v6 + 8LL * v8) + 16LL),
                  (unsigned int)*(_QWORD *)(v6 + 8LL * v8) + 14,
                  *(unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * v8) + 12LL),
                  *(_QWORD *)(*(_QWORD *)(v3 + 48) + v11 + 56),
                  *(_WORD *)(*(_QWORD *)(v3 + 48) + v11 + 54),
                  *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 12));
          v12 = v16;
          if ( v16 )
            return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
                     WdfDriverGlobals,
                     a2,
                     v12);
        }
        v7 = *(_WORD *)(v4 + 4);
        ++v8;
      }
      if ( (unsigned int)v9 >= *(_DWORD *)(v3 + 16) )
        break;
    }
  }
  v12 = 0LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v12);
}
