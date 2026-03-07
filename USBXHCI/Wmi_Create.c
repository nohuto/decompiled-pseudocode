__int64 __fastcall Wmi_Create(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // eax
  int v7; // edx
  _QWORD *v8; // rax
  __int64 v10; // [rsp+30h] [rbp-69h] BYREF
  _DWORD v11[2]; // [rsp+38h] [rbp-61h] BYREF
  void (__fastcall *v12)(__int64); // [rsp+40h] [rbp-59h]
  __int64 v13; // [rsp+48h] [rbp-51h]
  int v14; // [rsp+50h] [rbp-49h]
  int v15; // [rsp+54h] [rbp-45h]
  __int128 v16; // [rsp+58h] [rbp-41h]
  void *v17; // [rsp+68h] [rbp-31h]
  _QWORD v18[8]; // [rsp+70h] [rbp-29h] BYREF
  int v19; // [rsp+B0h] [rbp+17h] BYREF
  GUID v20; // [rsp+B4h] [rbp+1Bh]
  __int128 v21; // [rsp+C4h] [rbp+2Bh]
  int v22; // [rsp+D4h] [rbp+3Bh]

  v10 = 0LL;
  v22 = 0;
  v19 = 40;
  v21 = 0LL;
  v20 = GUID_USBXHCI_GET_CONTROLLER_CAPABILITIES;
  memset(v18, 0, sizeof(v18));
  v11[1] = 0;
  v13 = 0LL;
  v18[2] = &v19;
  v17 = off_1C00632E8;
  v14 = 1;
  v12 = Wmi_WdfEvtCleanupCallback;
  v15 = 1;
  BYTE1(v18[3]) = 1;
  v18[4] = &Wmi_WdfEvtWmi_GetControllerCapabilities;
  LODWORD(v18[0]) = 64;
  v16 = 0LL;
  v11[0] = 56;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _DWORD *, __int64 *))(WdfFunctions_01023 + 2984))(
         WdfDriverGlobals,
         a1,
         v18,
         v11,
         &v10);
  if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), v7, 15, 10, (__int64)&WPP_ad99758670fa36758206abbbc9141c99_Traceguids, v6);
  }
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   v10,
                   off_1C00632E8);
  *v8 = a2;
  *a3 = v8;
  return 0LL;
}
