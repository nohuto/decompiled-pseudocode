/*
 * XREFs of RIMGetDeviceObjectPointer @ 0x1C0031148
 * Callers:
 *     RIMGetMouseDeviceHardwareId @ 0x1C002FBE8 (RIMGetMouseDeviceHardwareId.c)
 *     RIMGetDeviceParent @ 0x1C002FF2C (RIMGetDeviceParent.c)
 *     RIMLoadDeviceLegacyInfo @ 0x1C00305E4 (RIMLoadDeviceLegacyInfo.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1C0030CF0 (RIMRegOpenDeviceInstanceKey.c)
 *     IsMouseDeviceOnIgnoreList @ 0x1C0031278 (IsMouseDeviceOnIgnoreList.c)
 *     rimOnPnpArrived @ 0x1C00889C0 (rimOnPnpArrived.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C01A46A0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMConfigureDeviceFeedback @ 0x1C01ACF00 (RIMConfigureDeviceFeedback.c)
 *     RIMDeliverConfigRequest @ 0x1C01AD678 (RIMDeliverConfigRequest.c)
 *     RIMHidGetPreparsedData @ 0x1C01AEB00 (RIMHidGetPreparsedData.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C01AFB54 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C01B0170 (RIMSetDeviceIdleTimeout.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01C21B8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C007E6B0 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall RIMGetDeviceObjectPointer(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        void **a4,
        PVOID *a5,
        PDEVICE_OBJECT *a6)
{
  int v7; // edx
  NTSTATUS v8; // ebx
  int v9; // r8d
  struct _FILE_OBJECT *v10; // rcx
  void *FileHandle; // [rsp+60h] [rbp-49h] BYREF
  PVOID Object; // [rsp+68h] [rbp-41h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-9h] BYREF
  _DWORD v16[4]; // [rsp+B0h] [rbp+7h] BYREF

  ObjectAttributes.ObjectName = a1;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.SecurityQualityOfService = v16;
  IoStatusBlock = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  v16[2] = 257;
  v16[0] = 12;
  v16[1] = 2;
  v8 = ZwOpenFile(&FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v8 >= 0 )
  {
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v8 >= 0 )
    {
      v10 = (struct _FILE_OBJECT *)Object;
      *a5 = Object;
      *a6 = IoGetRelatedDeviceObject(v10);
      *a4 = FileHandle;
      return (unsigned int)v8;
    }
    ZwClose(FileHandle);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      v9,
      (_DWORD)gRimLog,
      4,
      1,
      29,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      0,
      3,
      v8);
  }
  return (unsigned int)v8;
}
