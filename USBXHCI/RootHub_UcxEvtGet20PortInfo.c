__int64 __fastcall RootHub_UcxEvtGet20PortInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r9
  __int64 v5; // rdi
  unsigned int v6; // edx
  __int64 v7; // r14
  unsigned __int16 v8; // cx
  __int64 v9; // r8
  unsigned __int16 v10; // si
  __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // r11
  int v14; // ecx
  int v15; // eax
  int v17; // r9d
  __int16 v18; // [rsp+28h] [rbp-60h]
  _OWORD v19[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+50h] [rbp-38h]

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
  v5 = *((_QWORD *)&v19[0] + 1);
  v6 = **((_DWORD **)&v19[0] + 1);
  v7 = *(_QWORD *)(*((_QWORD *)&v19[0] + 1) + 8LL);
  if ( **((_DWORD **)&v19[0] + 1) < 0x10u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_20:
      v9 = 3221225485LL;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               a2,
               v9,
               v4);
    }
    v17 = 200;
    goto LABEL_18;
  }
  v8 = *(_WORD *)(*((_QWORD *)&v19[0] + 1) + 4LL);
  if ( v8 != *(_WORD *)(v3 + 20) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v18 = *(_WORD *)(*((_QWORD *)&v19[0] + 1) + 4LL);
    v17 = 201;
    goto LABEL_19;
  }
  v6 = *(unsigned __int16 *)(*((_QWORD *)&v19[0] + 1) + 6LL);
  if ( v6 < 0x14 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v17 = 202;
LABEL_18:
    LOBYTE(v18) = v6;
LABEL_19:
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v6,
      11,
      v17,
      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
      v18);
    goto LABEL_20;
  }
  v9 = 0LL;
  v10 = 0;
  v4 = 0LL;
  while ( (unsigned int)(unsigned __int16)v4 < *(_DWORD *)(v3 + 16) )
  {
    if ( v10 >= v8 )
      break;
    v11 = (unsigned __int16)v4;
    LOWORD(v4) = v4 + 1;
    v12 = 120 * v11;
    if ( *(_BYTE *)(120 * v11 + *(_QWORD *)(v3 + 48) + 13) == 2 )
    {
      v13 = v10;
      v14 = 102;
      **(_WORD **)(v7 + 8LL * v10) = v4;
      if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v12 + 17) == 1 )
        v14 = 116;
      *(_DWORD *)(*(_QWORD *)(v7 + 8LL * v10) + 4LL) = v14;
      v15 = 116;
      if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v12 + 16) != 1 )
        v15 = 102;
      *(_DWORD *)(*(_QWORD *)(v7 + 8LL * v10) + 8LL) = v15;
      if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 336LL) & 0x400000LL) == 0 )
        *(_BYTE *)(*(_QWORD *)(v7 + 8LL * v10) + 16LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v12 + 19);
      ++v10;
      *(_BYTE *)(*(_QWORD *)(v7 + 8 * v13) + 2LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v12 + 12);
      *(_BYTE *)(*(_QWORD *)(v7 + 8 * v13) + 3LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v12 + 14);
      v8 = *(_WORD *)(v5 + 4);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v9,
           v4);
}
