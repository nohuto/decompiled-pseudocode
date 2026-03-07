__int64 __fastcall rimBlockingDeviceIoControlFile(
        HANDLE FileHandle,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PVOID OutputBuffer)
{
  int v6; // edx
  NTSTATUS Status; // ebx
  int v8; // r8d
  int v9; // edx
  int v10; // r8d
  PDEVICE_OBJECT v12; // rcx
  __int16 v13; // r9
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp+7h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+17h] BYREF
  void *EventHandle; // [rsp+B8h] [rbp+67h] BYREF

  EventHandle = 0LL;
  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.Length = 48;
  IoStatusBlock = 0LL;
  ObjectAttributes.Attributes = 512;
  Status = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( Status < 0 )
  {
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v8,
        (_DWORD)gRimLog,
        2,
        1,
        24,
        (__int64)&WPP_11533c3e880c32a58e181bbd9ba8979b_Traceguids,
        Status);
    }
    goto LABEL_4;
  }
  Status = ZwDeviceIoControlFile(
             FileHandle,
             EventHandle,
             0LL,
             0LL,
             &IoStatusBlock,
             0xB01A8u,
             0LL,
             0,
             OutputBuffer,
             0xCu);
  if ( Status != 259 )
    goto LABEL_3;
  Status = ZwWaitForSingleObject(EventHandle, 0, 0LL);
  if ( Status >= 0 )
  {
    Status = IoStatusBlock.Status;
LABEL_3:
    if ( Status < 0 )
    {
      v12 = WPP_GLOBAL_Control;
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 26;
        goto LABEL_33;
      }
    }
    goto LABEL_4;
  }
  v12 = WPP_GLOBAL_Control;
  LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = 25;
LABEL_33:
    WPP_RECORDER_AND_TRACE_SF_d(
      v12->AttachedDevice,
      v9,
      v10,
      (_DWORD)gRimLog,
      2,
      1,
      v13,
      (__int64)&WPP_11533c3e880c32a58e181bbd9ba8979b_Traceguids,
      Status);
  }
LABEL_4:
  if ( EventHandle )
    ZwClose(EventHandle);
  return (unsigned int)Status;
}
