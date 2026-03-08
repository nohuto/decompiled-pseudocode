/*
 * XREFs of PspInitializeCpuPartitionsPhase1 @ 0x140B42590
 * Callers:
 *     PspInitPhase1 @ 0x140B422C8 (PspInitPhase1.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x140413850 (ZwCreateDirectoryObject.c)
 *     ObInsertObject @ 0x1407F0A20 (ObInsertObject.c)
 */

NTSTATUS PspInitializeCpuPartitionsPhase1()
{
  NTSTATUS v0; // ebx
  NTSTATUS result; // eax
  HANDLE v2; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE DirectoryHandle; // [rsp+70h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+18h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  DirectoryHandle = 0LL;
  Handle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"8:";
  ObjectAttributes.Attributes = 592;
  v0 = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  if ( v0 < 0 )
    goto LABEL_5;
  result = ObInsertObject(PspSystemCpuPartition, 0LL, 0xF0007u, 0, 0LL, &Handle);
  v0 = result;
  if ( result < 0 )
    return result;
  v2 = DirectoryHandle;
  DirectoryHandle = 0LL;
  PspCpuPartitionDirectoryHandle = (__int64)v2;
  if ( Handle )
  {
    ZwClose(Handle);
LABEL_5:
    if ( DirectoryHandle )
      ZwClose(DirectoryHandle);
  }
  return v0;
}
