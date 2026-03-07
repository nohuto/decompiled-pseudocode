__int64 __fastcall RootHub_UcxEvtClearHubFeature(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  int v8; // edx
  __int64 v9; // rbp
  int v10; // r9d
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  _OWORD v15[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v16; // [rsp+90h] [rbp-38h]

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063248);
  if ( *(_BYTE *)(*(_QWORD *)(v4 + 8) + 601LL) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v5, v6, v7);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v16 = 0LL;
  memset(v15, 0, sizeof(v15));
  LOWORD(v15[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v15);
  v9 = *((_QWORD *)&v15[0] + 1);
  if ( *(_WORD *)(*((_QWORD *)&v15[0] + 1) + 128LL) != 288 || *(_DWORD *)(*((_QWORD *)&v15[0] + 1) + 132LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(unsigned __int8 *)(*((_QWORD *)&v15[0] + 1) + 134LL);
      v10 = 34;
      v12 = *(unsigned __int8 *)(*((_QWORD *)&v15[0] + 1) + 133LL);
      goto LABEL_21;
    }
LABEL_22:
    v3 = -1073741823;
    *(_DWORD *)(v9 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v3);
  }
  if ( *(_WORD *)(*((_QWORD *)&v15[0] + 1) + 130LL) )
  {
    if ( *(_WORD *)(*((_QWORD *)&v15[0] + 1) + 130LL) != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 37;
        v11 = *(unsigned __int8 *)(*((_QWORD *)&v15[0] + 1) + 134LL);
        v12 = *(unsigned __int8 *)(*((_QWORD *)&v15[0] + 1) + 133LL);
LABEL_21:
        WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), v11, v12, v10);
        goto LABEL_22;
      }
      goto LABEL_22;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 36;
LABEL_17:
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v8,
        11,
        v13,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = 35;
    goto LABEL_17;
  }
  *(_DWORD *)(v9 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v3);
}
