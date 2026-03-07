__int64 __fastcall CBaseInput::ivHandlePnpCreatePacket(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  unsigned int v5; // edi
  void *v6; // r9
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ecx
  int v11; // eax
  int v12; // r8d
  void *v13; // rdx
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v6 = &WPP_6faef5775b8438fac85e142323c35be9_Traceguids;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      31,
      (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids);
    v6 = &WPP_6faef5775b8438fac85e142323c35be9_Traceguids;
  }
  v7 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
  v15 = v4;
  *(_QWORD *)(v4 + 16) = v4 + v7;
  v8 = *(_QWORD *)(v4 + 72);
  if ( v8 )
    *(_QWORD *)(v4 + 72) = v4 + (v8 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( *(_DWORD *)(v4 + 24) == 2 )
  {
    v9 = *(_QWORD *)(v4 + 208);
    v10 = *(_DWORD *)(v4 + 64);
    if ( v9 )
      *(_QWORD *)(v4 + 208) = v4 + (v9 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v10 )
      CIVDeserializer::Deserialize((CIVDeserializer *)&v15, (struct _IV_HID_POINTER_DEVICE_INFO *)(v4 + 216));
  }
  *(_QWORD *)(v4 + 1360) = v4 + (*(_QWORD *)(v4 + 1360) & 0xFFFFFFFFFFFFFFFEuLL);
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      32,
      (__int64)v6);
  }
  v11 = RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification(v3, v4, v4 + 8);
  if ( v11 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      LOBYTE(v5) = 0;
    }
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = &WPP_6faef5775b8438fac85e142323c35be9_Traceguids;
      LOBYTE(v13) = v5;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v13,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        33,
        (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids,
        v11);
    }
    return 0;
  }
  return v5;
}
