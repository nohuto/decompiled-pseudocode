/*
 * XREFs of ?SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01C0658
 * Callers:
 *     ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01C00C4 (-IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall SendSyncOutputIrpRequest(
        ULONG IoControlCode,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        struct _FILE_OBJECT *a4,
        struct _DEVICE_OBJECT *DeviceObject)
{
  unsigned int Status; // ebp
  PIRP v10; // rax
  int v11; // r8d
  int v12; // edx
  PDEVICE_OBJECT v13; // rcx
  __int16 v14; // ax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  Status = -1073741668;
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v10 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          DeviceObject,
          0LL,
          0,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Object,
          &IoStatusBlock);
  v12 = (int)v10;
  if ( v10 )
  {
    v10->Tail.Overlay.CurrentStackLocation[-1].FileObject = a4;
    Status = IofCallDriver(DeviceObject, v10);
    if ( Status == 259 )
    {
      LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v11,
          (_DWORD)gRimLog,
          4,
          1,
          10,
          (__int64)&WPP_3ba5ca1bd3d034373d45e0ad3df26bc4_Traceguids);
      }
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status )
    {
      v13 = WPP_GLOBAL_Control;
      LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 11;
LABEL_29:
        WPP_RECORDER_AND_TRACE_SF_(
          v13->AttachedDevice,
          v12,
          v11,
          (_DWORD)gRimLog,
          3,
          1,
          v14,
          (__int64)&WPP_3ba5ca1bd3d034373d45e0ad3df26bc4_Traceguids);
      }
    }
  }
  else
  {
    v13 = WPP_GLOBAL_Control;
    LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 12;
      goto LABEL_29;
    }
  }
  return Status;
}
