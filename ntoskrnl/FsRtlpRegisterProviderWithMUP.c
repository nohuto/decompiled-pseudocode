/*
 * XREFs of FsRtlpRegisterProviderWithMUP @ 0x14084F0A8
 * Callers:
 *     FsRtlpRegisterUncProvider @ 0x14084EEE8 (FsRtlpRegisterUncProvider.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x140412390 (ZwWaitForSingleObject.c)
 *     ZwFsControlFile @ 0x140412A30 (ZwFsControlFile.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlpRegisterProviderWithMUP(HANDLE Handle, const void **a2, __int64 a3, __int64 a4)
{
  ULONG InputBufferLength; // edi
  __int64 Pool2; // rax
  void *InputBuffer; // rbx
  unsigned int Status; // edi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF

  InputBufferLength = *(unsigned __int16 *)a2 + 32;
  IoStatusBlock = 0LL;
  Pool2 = ExAllocatePool2(64LL, InputBufferLength, 1853182790LL);
  InputBuffer = (void *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 32;
  *(_WORD *)Pool2 = *(_WORD *)a2;
  *(_WORD *)(Pool2 + 2) = *(_WORD *)a2;
  *(_QWORD *)(Pool2 + 16) = a3;
  *(_QWORD *)(Pool2 + 24) = a4;
  memmove((void *)(Pool2 + 32), a2[1], *(unsigned __int16 *)a2);
  Status = ZwFsControlFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x100004u, InputBuffer, InputBufferLength, 0LL, 0);
  if ( Status == 259 )
  {
    ZwWaitForSingleObject(Handle, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  ExFreePoolWithTag(InputBuffer, 0);
  return Status;
}
