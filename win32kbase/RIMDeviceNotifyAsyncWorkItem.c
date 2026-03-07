__int64 __fastcall RIMDeviceNotifyAsyncWorkItem(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  unsigned int v4; // esi
  bool v5; // r11
  char v6; // r11
  int v7; // edx
  __int64 v8; // r10
  int v9; // r8d
  int v10; // r8d
  __int64 v11; // r9
  int v12; // edx
  __int64 v13; // r8
  int v15; // [rsp+80h] [rbp+8h] BYREF
  int v16; // [rsp+88h] [rbp+10h] BYREF
  int v17; // [rsp+90h] [rbp+18h] BYREF

  Feature_RIMUserCritOpt__private_ReportDeviceUsage();
  v2 = *(_QWORD *)(a1 + 24);
  v3 = (*(_QWORD *)(a1 + 56) + 72LL) & -(__int64)(*(_QWORD *)(a1 + 56) != 0LL);
  v4 = 0;
  v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    RimDeviceTypeToRimInputType(v3, *(unsigned __int8 *)(v3 + 48));
    LOBYTE(v7) = v6;
    WPP_RECORDER_AND_TRACE_SF_Sd(*(_QWORD *)(v8 + 24), v7, v9, (_DWORD)gRimLog);
  }
  v17 = 0;
  v15 = 0;
  v16 = 0;
  RIMGetPnpActionBitsFromGuid(v2, v3, a1 + 80, &v17, &v15, &v16);
  v12 = v16;
  if ( v17 || v15 || v16 )
  {
    v13 = (v16 != 0 ? 8 : 0) | (v15 != 0 ? 4 : 0) | (v17 != 0 ? 2 : 0) | *(_DWORD *)(v3 + 184) & 0xFFFFFFF0;
    *(_DWORD *)(v3 + 184) = v13;
    v4 = RIMDoOnPnpNotification(v2, v3, v13, v11);
  }
  LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v10,
      (_DWORD)gRimLog,
      4,
      1,
      31,
      (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
      v4);
  }
  return v4;
}
