/*
 * XREFs of PopFreeHiberContext @ 0x1409855F0
 * Callers:
 *     PopAllocateHiberContext @ 0x140984D38 (PopAllocateHiberContext.c)
 *     PopUnlockAfterSleepWorker @ 0x140AA37E0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x1402C0DB0 (MmFreePagesFromMdl.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x140550768 (IopDumpTraceFreeDumpStackFailure.c)
 *     PopInternalAddToDumpFile @ 0x140580CC0 (PopInternalAddToDumpFile.c)
 *     PopBcdClearPendingResume @ 0x14082B2FC (PopBcdClearPendingResume.c)
 *     BcdCloseStore @ 0x14082C570 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x14082C814 (BcdOpenStore.c)
 *     VslFreeSecureHibernateResources @ 0x14093F3B0 (VslFreeSecureHibernateResources.c)
 *     PopClearHiberFileSignature @ 0x14098544C (PopClearHiberFileSignature.c)
 *     MmUnlockPreChargedPagedPool @ 0x140A2DD70 (MmUnlockPreChargedPagedPool.c)
 *     MmReleaseDumpHibernateResources @ 0x140A2DDF8 (MmReleaseDumpHibernateResources.c)
 *     BgkResumeFinished @ 0x140A969B8 (BgkResumeFinished.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

_UNKNOWN **PopFreeHiberContext()
{
  _UNKNOWN **result; // rax
  ULONG_PTR v1; // rbx
  void *v2; // rcx
  __int64 v3; // rdi
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  int v8; // eax
  void *v9; // rcx
  __int64 v10; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v1 = qword_140C3CDA0;
  v12 = 0LL;
  if ( qword_140C3CDA0 )
  {
    if ( (int)BcdOpenStore(0LL, 2u, &v12) >= 0 )
    {
      PopBcdClearPendingResume(v12);
      BcdCloseStore(v12);
    }
    v2 = *(void **)(v1 + 240);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0);
      *(_QWORD *)(v1 + 240) = 0LL;
    }
    while ( 1 )
    {
      v3 = *(_QWORD *)(v1 + 128);
      if ( !v3 )
        break;
      *(_QWORD *)(v1 + 128) = *(_QWORD *)v3;
      *(_QWORD *)(v1 + 136) -= (unsigned __int64)*(unsigned int *)(v3 + 40) >> 12;
      if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
        MmUnmapLockedPages(*(PVOID *)(v3 + 24), (PMDL)v3);
      MmFreePagesFromMdl((PMDL)v3);
      ExFreePoolWithTag((PVOID)v3, 0);
    }
    *(_QWORD *)(v1 + 232) = 0LL;
    v4 = (_QWORD **)(v1 + 64);
    *(_QWORD *)(v1 + 224) = 0LL;
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 == v4 )
        break;
      v6 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      ExFreePoolWithTag(v5, 0);
      --*(_DWORD *)(v1 + 80);
    }
    if ( *(_QWORD *)(v1 + 168) )
    {
      if ( CrashdmpImageEntry )
      {
        if ( qword_140C6A8C0 )
        {
          v8 = qword_140C6A8C0();
          if ( v8 < 0 )
            IopDumpTraceFreeDumpStackFailure(v8);
        }
      }
    }
    if ( *(_QWORD *)(v1 + 136) )
    {
      PopInternalAddToDumpFile(v1, 0x1C8u, 0LL);
      KeBugCheckEx(0xA0u, 0x103uLL, 0xAuLL, v1, 0LL);
    }
    if ( *(_DWORD *)(v1 + 188) == 1073742484 )
      PopClearHiberFileSignature();
    *(_BYTE *)(v1 + 28) = 0;
    MmUnlockPreChargedPagedPool(qword_140C3CAB0, Length);
    v9 = *(void **)(v1 + 288);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x72626968u);
    v10 = *(_QWORD *)(v1 + 304);
    if ( v10 )
      MmReleaseDumpHibernateResources(v10, (unsigned int)(*(_DWORD *)(v1 + 256) << 16));
    if ( PopBgkResumePrepared )
    {
      BgkResumeFinished();
      PopBgkResumePrepared = 0;
    }
    if ( *(_BYTE *)(v1 + 452) )
      VslFreeSecureHibernateResources();
    if ( (HvlpFlags & 2) != 0 && HvlpHibernateScratchPage )
    {
      ExFreePoolWithTag(HvlpHibernateScratchPage, 0x204C5648u);
      HvlpHibernateScratchPage = 0LL;
      HvlpHibernateScratchPageCount = 0;
    }
    result = (_UNKNOWN **)memset((void *)v1, 0, 0x1C8uLL);
    qword_140C3CDA0 = 0LL;
  }
  return result;
}
