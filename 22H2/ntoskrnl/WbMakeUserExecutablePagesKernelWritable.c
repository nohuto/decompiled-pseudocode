/*
 * XREFs of WbMakeUserExecutablePagesKernelWritable @ 0x1406666C8
 * Callers:
 *     sub_1405D7AAC @ 0x1405D7AAC (sub_1405D7AAC.c)
 *     WbAllocateMemoryBlock @ 0x140666584 (WbAllocateMemoryBlock.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140226C80 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     MmProbeAndLockPagesPrivate @ 0x1402F67E8 (MmProbeAndLockPagesPrivate.c)
 *     IoAllocateMdl @ 0x14035A110 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x14035AB60 (IoFreeMdl.c)
 */

__int64 __fastcall WbMakeUserExecutablePagesKernelWritable(void *a1, ULONG a2, PMDL *a3, _QWORD *a4)
{
  int v6; // esi
  unsigned int v7; // edi
  PMDL Mdl; // rax
  PMDL v9; // rbx
  PVOID MappedSystemVa; // rax

  v6 = 0;
  v7 = 0;
  Mdl = IoAllocateMdl(a1, a2, 0, 0, 0LL);
  v9 = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPagesPrivate((__int64)Mdl);
    v6 = 1;
    if ( (v9->MdlFlags & 5) != 0 )
      MappedSystemVa = v9->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000020u);
    if ( MappedSystemVa )
    {
      if ( a4 )
        *a4 = MappedSystemVa;
      if ( a3 )
      {
        *a3 = v9;
        v9 = 0LL;
      }
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = -1073741801;
  }
  if ( v9 )
  {
    if ( v6 )
      MmUnlockPages(v9);
    IoFreeMdl(v9);
  }
  return v7;
}
