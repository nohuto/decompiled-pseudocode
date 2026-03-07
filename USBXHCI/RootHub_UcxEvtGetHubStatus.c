__int64 __fastcall RootHub_UcxEvtGetHubStatus(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rbp
  int v5; // eax
  _OWORD v7[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v8; // [rsp+90h] [rbp-38h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063248);
  v8 = 0LL;
  memset(v7, 0, sizeof(v7));
  LOWORD(v7[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(WdfDriverGlobals, a2, v7);
  v4 = *((_QWORD *)&v7[0] + 1);
  if ( *(_WORD *)(*((_QWORD *)&v7[0] + 1) + 128LL) == 160
    && !*(_DWORD *)(*((_QWORD *)&v7[0] + 1) + 130LL)
    && *(_WORD *)(*((_QWORD *)&v7[0] + 1) + 134LL) == 4 )
  {
    **(_DWORD **)(*((_QWORD *)&v7[0] + 1) + 40LL) = 0;
    v5 = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDDDDDD(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        *(unsigned __int8 *)(*((_QWORD *)&v7[0] + 1) + 134LL),
        *(unsigned __int8 *)(*((_QWORD *)&v7[0] + 1) + 133LL),
        106);
    v5 = -1073741820;
  }
  *(_DWORD *)(v4 + 4) = v5;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2104))(WdfDriverGlobals, a2);
}
