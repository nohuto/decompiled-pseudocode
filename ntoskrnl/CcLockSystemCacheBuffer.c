/*
 * XREFs of CcLockSystemCacheBuffer @ 0x140535340
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x14021E4C0 (CcCopyBytesToUserBuffer.c)
 * Callees:
 *     IopAllocateMdl @ 0x140241F90 (IopAllocateMdl.c)
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     FsRtlIsNtstatusExpected @ 0x1402ECFB0 (FsRtlIsNtstatusExpected.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 */

PVOID __fastcall CcLockSystemCacheBuffer(__int64 a1, struct _MDL **a2, unsigned int a3, __int64 a4, int *a5)
{
  int v5; // r14d
  PVOID MappedSystemVa; // rsi
  struct _MDL *Mdl; // rax
  struct _MDL *v9; // rbx
  int v10; // ecx

  v5 = a4;
  MappedSystemVa = 0LL;
  *a5 = 0;
  Mdl = (struct _MDL *)IopAllocateMdl(a1, a3, 0, a4, 0LL, 0);
  v9 = Mdl;
  if ( !Mdl )
    goto LABEL_7;
  MiProbeAndLockPages(Mdl, 0, v5 != 0);
  v10 = *a5;
  if ( *a5 >= 0 )
  {
    if ( (v9->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = v9->MappedSystemVa;
    }
    else
    {
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000000u);
      v10 = *a5;
    }
    if ( MappedSystemVa )
    {
LABEL_8:
      if ( v10 >= 0 )
        goto LABEL_11;
      goto LABEL_9;
    }
LABEL_7:
    v10 = -1073741670;
    *a5 = -1073741670;
    goto LABEL_8;
  }
LABEL_9:
  if ( v9 )
  {
    MmUnlockPages(v9);
    IoFreeMdl(v9);
    v9 = 0LL;
  }
LABEL_11:
  *a2 = v9;
  return MappedSystemVa;
}
