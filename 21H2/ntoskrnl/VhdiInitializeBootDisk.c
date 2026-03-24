/*
 * XREFs of VhdiInitializeBootDisk @ 0x140A94990
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140265AF0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbPrintfW @ 0x14027EB50 (RtlStringCbPrintfW.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1403FA480 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwOpenFile @ 0x1403FAA00 (ZwOpenFile.c)
 *     RtlCompareMemory @ 0x1404081B0 (RtlCompareMemory.c)
 *     IoGetConfigurationInformation @ 0x140781B10 (IoGetConfigurationInformation.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1407A7040 (RtlCreateUnicodeStringFromAsciiz.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 *     VhdiGetPartitionNumber @ 0x140A9477C (VhdiGetPartitionNumber.c)
 *     VhdiGetVolumeNumber @ 0x140A94818 (VhdiGetVolumeNumber.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140A951A8 (VhdiQueryVolumeVhdFilePath.c)
 */

__int64 __fastcall VhdiInitializeBootDisk(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  _QWORD *v3; // r12
  const void *v4; // r13
  int *v6; // rdi
  char v7; // r15
  unsigned int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  int inited; // ebx
  ULONG_PTR VolumeVhdFilePath; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // r9
  ULONG OutputBufferLength; // esi
  int *OutputBuffer; // rax
  int v19; // ecx
  bool v20; // zf
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+58h] [rbp-A8h] BYREF
  ULONG DiskCount; // [rsp+5Ch] [rbp-A4h]
  _DWORD *v24; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszDest[64]; // [rsp+C0h] [rbp-40h] BYREF

  v22 = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  v3 = *(_QWORD **)a2;
  v4 = *(const void **)(a2 + 8);
  if ( !*(_QWORD *)a2 )
    return 3221225485LL;
  if ( !v4 )
    return 3221225485LL;
  if ( !*(_QWORD *)(a2 + 16) )
    return 3221225485LL;
  v24 = *(_DWORD **)(a2 + 24);
  if ( !v24 )
    return 3221225485LL;
  if ( !RtlCreateUnicodeStringFromAsciiz(a3, *(const char **)(a1 + 184)) )
    return 3221225473LL;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  DiskCount = IoGetConfigurationInformation()->DiskCount;
  Handle = 0LL;
  if ( !DiskCount )
    goto LABEL_39;
  while ( 1 )
  {
    inited = RtlStringCbPrintfW(pszDest, 0x80uLL, L"\\Device\\Harddisk%d\\Partition0", v8);
    if ( inited < 0 )
      goto LABEL_35;
    inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( inited < 0 )
      goto LABEL_35;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( Handle )
    {
      ZwClose(Handle);
      Handle = 0LL;
    }
    inited = ZwOpenFile(&Handle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
    if ( inited < 0 )
      goto LABEL_35;
    VolumeVhdFilePath = VhdiQueryVolumeVhdFilePath(Handle);
    if ( !VolumeVhdFilePath )
      break;
    ExFreeHeapPool(VolumeVhdFilePath, v14, v15, v16);
LABEL_35:
    if ( ++v8 >= DiskCount )
      goto LABEL_38;
  }
  if ( v6 )
    ExFreeHeapPool((ULONG_PTR)v6, v14, v15, v16);
  for ( OutputBufferLength = 4096; ; OutputBufferLength *= 2 )
  {
    OutputBuffer = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, OutputBufferLength, 0x42646856u);
    v6 = OutputBuffer;
    if ( !OutputBuffer )
      break;
    inited = ZwDeviceIoControlFile(
               Handle,
               0LL,
               0LL,
               0LL,
               &IoStatusBlock,
               0x70050u,
               0LL,
               0,
               OutputBuffer,
               OutputBufferLength);
    if ( inited != -1073741789 )
      goto LABEL_25;
    ExFreeHeapPool((ULONG_PTR)v6, v9, v10, v11);
  }
  inited = -1073741801;
LABEL_25:
  if ( inited < 0 )
    goto LABEL_35;
  v19 = *(_DWORD *)v3;
  if ( *v6 == *(_DWORD *)v3 )
  {
    if ( v19 )
    {
      if ( v19 != 1 )
        goto LABEL_34;
      v20 = RtlCompareMemory(v6 + 2, v4, 0x10uLL) == 16;
    }
    else
    {
      v20 = RtlCompareMemory(v6 + 2, v4, 4uLL) == 4;
    }
    if ( v20 )
    {
      inited = VhdiGetPartitionNumber(v6, v3, &v22);
      if ( inited >= 0 )
        v7 = 1;
    }
  }
LABEL_34:
  if ( !v7 )
    goto LABEL_35;
  inited = VhdiGetVolumeNumber((__int64)Handle, v8, v22, v24);
LABEL_38:
  if ( !v7 )
LABEL_39:
    inited = -1073741810;
  if ( v6 )
    ExFreeHeapPool((ULONG_PTR)v6, v9, v10, v11);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
