/*
 * XREFs of BiGetPartitionVhdFilePathFromUnicodeString @ 0x1408300C8
 * Callers:
 *     BiGetPartitionVhdFilePath @ 0x140830098 (BiGetPartitionVhdFilePath.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1404123F0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 *     BiTranslateSymbolicLinkFile @ 0x140A5A968 (BiTranslateSymbolicLinkFile.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

ULONG *__fastcall BiGetPartitionVhdFilePathFromUnicodeString(UNICODE_STRING *a1)
{
  ULONG *v1; // rbx
  ULONG OutputBufferLength; // edi
  int i; // esi
  ULONG *OutputBuffer; // rax
  NTSTATUS v5; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  int InputBuffer; // [rsp+B0h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+B8h] [rbp+6Fh] BYREF
  ULONG *v11; // [rsp+C0h] [rbp+77h]

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  InputBuffer = 0;
  v11 = 0LL;
  FileHandle = 0LL;
  v1 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  IoStatusBlock = 0LL;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u) >= 0 )
  {
    OutputBufferLength = 520;
    for ( i = 1; ; i = 2 )
    {
      OutputBuffer = (ULONG *)ExAllocatePool2(258LL, OutputBufferLength, 1262764866LL);
      v1 = OutputBuffer;
      if ( !OutputBuffer )
        break;
      InputBuffer = 1;
      v5 = ZwDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x2D5928u,
             &InputBuffer,
             4u,
             OutputBuffer,
             OutputBufferLength);
      if ( v5 != -1073741789 )
      {
        if ( v5 < 0 )
        {
LABEL_6:
          ExFreePoolWithTag(v1, 0x4B444342u);
          v1 = 0LL;
          break;
        }
        if ( (int)BiTranslateSymbolicLinkFile((PCWSTR)v1) >= 0 )
        {
          ExFreePoolWithTag(v1, 0x4B444342u);
          v1 = v11;
        }
        break;
      }
      if ( i != 1 )
        goto LABEL_6;
      OutputBufferLength = *v1;
      ExFreePoolWithTag(v1, 0x4B444342u);
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return v1;
}
