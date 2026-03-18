/*
 * XREFs of CcZeroEndOfLastPage @ 0x1402A21C8
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140305100 (FsRtlCreateSectionForDataScan.c)
 *     MiCreateSystemSection @ 0x14035F150 (MiCreateSystemSection.c)
 *     MiCreateImageFileMap @ 0x1406A8928 (MiCreateImageFileMap.c)
 *     MmCreateSpecialImageSection @ 0x1406B9664 (MmCreateSpecialImageSection.c)
 *     MiCreateSectionCommon @ 0x140722780 (MiCreateSectionCommon.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     CcFlushCachePriv @ 0x14029CC14 (CcFlushCachePriv.c)
 *     CcPurgeCacheSection @ 0x1402F07D0 (CcPurgeCacheSection.c)
 *     FsRtlAcquireFileExclusive @ 0x140723950 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x140723980 (FsRtlReleaseFile.c)
 */

void __fastcall CcZeroEndOfLastPage(PFILE_OBJECT FileObject)
{
  char v1; // di
  PVOID FsContext; // rcx
  char v4; // al
  __int128 v5; // [rsp+40h] [rbp-18h] BYREF

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
    ExReleaseFastMutex(*((PFAST_MUTEX *)FileObject->FsContext + 6));
  }
  else
  {
    *((_BYTE *)FsContext + 4) = v4 | 0x20;
  }
  if ( (*((_BYTE *)FileObject->FsContext + 6) & 4) != 0 )
  {
    CcFlushCachePriv(FileObject->SectionObjectPointer, 0LL, 0, 0LL, 0, &v5, 0LL);
    if ( !(_DWORD)v5 )
      CcPurgeCacheSection(FileObject->SectionObjectPointer, 0LL, 0, 0);
  }
  if ( v1 )
  {
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    FsRtlReleaseFile(FileObject);
  }
}
