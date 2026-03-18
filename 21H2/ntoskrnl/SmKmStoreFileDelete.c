/*
 * XREFs of SmKmStoreFileDelete @ 0x1409D6C58
 * Callers:
 *     SmKmStoreFileCreate @ 0x1409D64F8 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x1409D69A8 (SmKmStoreFileCreateForIoType.c)
 *     SmcCacheCleanup @ 0x1409D790C (SmcCacheCleanup.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1402A0800 (IoSetThreadHardErrorMode.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 */

__int64 __fastcall SmKmStoreFileDelete(__int64 a1)
{
  BOOLEAN v2; // al
  void *v3; // rcx
  BOOLEAN v4; // si
  NTSTATUS Status; // eax
  unsigned int v6; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  char FileInformation; // [rsp+50h] [rbp+8h] BYREF

  IoStatusBlock = 0LL;
  v2 = IoSetThreadHardErrorMode(0);
  v3 = *(void **)a1;
  FileInformation = 1;
  v4 = v2;
  Status = ZwSetInformationFile(v3, &IoStatusBlock, &FileInformation, 1u, FileDispositionInformation);
  v6 = 0;
  if ( Status == 259 )
  {
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 8) + 152LL), Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status < 0 )
    v6 = Status;
  IoSetThreadHardErrorMode(v4);
  return v6;
}
