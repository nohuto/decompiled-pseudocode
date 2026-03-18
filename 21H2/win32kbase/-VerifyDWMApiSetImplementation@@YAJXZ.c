/*
 * XREFs of ?VerifyDWMApiSetImplementation@@YAJXZ @ 0x1C005B67C
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

__int64 VerifyDWMApiSetImplementation(void)
{
  char v0; // di
  NTSTATUS v1; // ebx
  int v2; // r8d
  int v4; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+27h] BYREF
  void *FileHandle; // [rsp+B0h] [rbp+67h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\dwminit.dll");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  v0 = 1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( v1 < 0 )
  {
    if ( v1 != -1073741772 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v0 = 0;
      }
      if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v4 = 16;
        LOBYTE(v4) = v0;
        LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v4,
          v2,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          25,
          16,
          (__int64)&WPP_11ad7c7350dd3b21899c34d304d73f52_Traceguids,
          v1);
      }
    }
  }
  else
  {
    ZwClose(FileHandle);
  }
  return (unsigned int)v1;
}
