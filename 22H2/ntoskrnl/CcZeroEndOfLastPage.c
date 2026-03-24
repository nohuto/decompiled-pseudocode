/*
 * XREFs of CcZeroEndOfLastPage @ 0x1402D78AC
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14035A570 (FsRtlCreateSectionForDataScan.c)
 *     MiCreateSystemSection @ 0x1403728BC (MiCreateSystemSection.c)
 *     MmCreateSpecialImageSection @ 0x140608BE4 (MmCreateSpecialImageSection.c)
 *     MiCreateSectionCommon @ 0x140654AC0 (MiCreateSectionCommon.c)
 *     MiCreateImageFileMap @ 0x140700CC4 (MiCreateImageFileMap.c)
 * Callees:
 *     CcFlushCachePriv @ 0x14022C510 (CcFlushCachePriv.c)
 *     CcPurgeCacheSection @ 0x140270FA0 (CcPurgeCacheSection.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     FsRtlAcquireFileExclusive @ 0x1406550D0 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x140655100 (FsRtlReleaseFile.c)
 */

void __fastcall CcZeroEndOfLastPage(PFILE_OBJECT FileObject)
{
  char v1; // di
  PVOID FsContext; // rcx
  char v4; // al
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  v5 = 0LL;
  if ( !KeGetCurrentThread()[1].TrapFrame )
  {
    v1 = 1;
    KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
    FsRtlAcquireFileExclusive(FileObject);
  }
  FsContext = FileObject->FsContext;
  v4 = *((_BYTE *)FsContext + 4);
  if ( (v4 & 0x40) != 0 )
  {
    ExAcquireFastMutex(*((PFAST_MUTEX *)FsContext + 6));
    *((_BYTE *)FileObject->FsContext + 4) |= 0x20u;
    KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)FileObject->FsContext + 6));
  }
  else
  {
    *((_BYTE *)FsContext + 4) = v4 | 0x20;
  }
  if ( (*((_BYTE *)FileObject->FsContext + 6) & 4) != 0 )
  {
    CcFlushCachePriv((__int64)FileObject->SectionObjectPointer, 0LL, 0, 0LL, 0, &v5);
    if ( !(_DWORD)v5 )
      CcPurgeCacheSection(FileObject->SectionObjectPointer, 0LL, 0, 0);
  }
  if ( v1 )
  {
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    FsRtlReleaseFile(FileObject);
  }
}
