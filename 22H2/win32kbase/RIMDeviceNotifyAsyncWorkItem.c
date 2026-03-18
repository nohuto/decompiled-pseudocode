/*
 * XREFs of RIMDeviceNotifyAsyncWorkItem @ 0x1C01A1D2C
 * Callers:
 *     RIMDoAsyncPnpWorkItem @ 0x1C00756D4 (RIMDoAsyncPnpWorkItem.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0005B28 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMDoOnPnpNotification @ 0x1C0199BF8 (RIMDoOnPnpNotification.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C0199D68 (RIMGetPnpActionBitsFromGuid.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sd @ 0x1C01A324C (WPP_RECORDER_AND_TRACE_SF_Sd.c)
 */

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
  __int64 v10; // r8
  char v11; // dl
  __int64 v13; // [rsp+40h] [rbp-38h]
  int v14; // [rsp+48h] [rbp-30h]
  int v15; // [rsp+80h] [rbp+8h] BYREF
  int v16; // [rsp+88h] [rbp+10h] BYREF
  int v17; // [rsp+90h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (*(_QWORD *)(a1 + 56) + 72LL) & -(__int64)(*(_QWORD *)(a1 + 56) != 0LL);
  v4 = 0;
  v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = RimDeviceTypeToRimInputType(v3, *(unsigned __int8 *)(v3 + 48));
    LOBYTE(v7) = v6;
    v13 = *(_QWORD *)(v3 + 216);
    WPP_RECORDER_AND_TRACE_SF_Sd(*(_QWORD *)(v8 + 24), v7, v9, (_DWORD)gRimLog);
  }
  v17 = 0;
  v15 = 0;
  v16 = 0;
  RIMGetPnpActionBitsFromGuid(v2, v3, a1 + 80, &v17, &v15, &v16);
  if ( v17 || v15 || v16 )
  {
    v10 = (v16 != 0 ? 8 : 0) | (v15 != 0 ? 4 : 0) | (v17 != 0 ? 2 : 0) | *(_DWORD *)(v3 + 184) & 0xFFFFFFF0;
    *(_DWORD *)(v3 + 184) = v10;
    v4 = RIMDoOnPnpNotification(v2, v3, v10);
  }
  v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = v4;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x1Du,
      (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
      v13,
      v14);
  }
  return v4;
}
