/*
 * XREFs of ExpGetPartitionTableInfo @ 0x1409F9DB4
 * Callers:
 *     ExpFindDiskSignature @ 0x1409F983C (ExpFindDiskSignature.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwDeviceIoControlFile @ 0x1404123F0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ExpGetPartitionTableInfo(PCWSTR SourceString, _QWORD *a2)
{
  NTSTATUS result; // eax
  __int64 OutputBufferLength; // rsi
  __int64 i; // rdx
  NTSTATUS v6; // edi
  void *OutputBuffer; // rbx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+D0h] [rbp+77h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x60u);
  if ( result >= 0 )
  {
    LODWORD(OutputBufferLength) = 2352;
    for ( i = 2352LL; ; i = OutputBufferLength )
    {
      OutputBuffer = (void *)ExAllocatePool2(64LL, i, 1920364101LL);
      if ( !OutputBuffer )
      {
        ZwClose(FileHandle);
        return -1073741670;
      }
      v6 = ZwDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x70050u,
             0LL,
             0,
             OutputBuffer,
             OutputBufferLength);
      if ( v6 >= 0 )
        break;
      ExFreePoolWithTag(OutputBuffer, 0);
      if ( v6 != -1073741789 )
        goto LABEL_10;
      OutputBufferLength = (unsigned int)(2 * OutputBufferLength);
    }
    *a2 = OutputBuffer;
LABEL_10:
    ZwClose(FileHandle);
    return v6;
  }
  return result;
}
