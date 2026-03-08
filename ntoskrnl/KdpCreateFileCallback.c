/*
 * XREFs of KdpCreateFileCallback @ 0x140AB0BD0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     ZwCreateFile @ 0x140412DB0 (ZwCreateFile.c)
 */

__int64 __fastcall KdpCreateFileCallback(__int64 a1, UNICODE_STRING *a2, LARGE_INTEGER a3)
{
  ULONG v3; // eax
  ULONG CreateOptions; // edx
  ULONG FileAttributes; // eax
  NTSTATUS v6; // ebx
  ULONG CreateDisposition; // [rsp+38h] [rbp-11h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+27h] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+B0h] [rbp+67h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  AllocationSize = a3;
  v3 = *(_DWORD *)(a1 + 4);
  ObjectAttributes.Attributes = 576;
  CreateOptions = *(_DWORD *)(a1 + 8) | (CmStateSeparationEnabled != 0 ? 0x80000 : 0);
  CreateDisposition = v3;
  FileAttributes = *(_DWORD *)a1;
  IoStatusBlock = 0LL;
  v6 = ZwCreateFile(
         (PHANDLE)(a1 + 16),
         0x120116u,
         &ObjectAttributes,
         &IoStatusBlock,
         &AllocationSize,
         FileAttributes,
         0,
         CreateDisposition,
         CreateOptions,
         0LL,
         0);
  DbgPrintEx(0, 0, "KdPullRemoteFile(%p): Return from ZwCreateFile with status %x\n", KeGetCurrentThread(), v6);
  if ( v6 < 0 )
    DbgPrintEx(0, 2u, "\nKdPullRemoteFile: Local file open failed, 0x%08x\n", v6);
  return (unsigned int)v6;
}
