/*
 * XREFs of IopAllocateAndLockMdl @ 0x1409410EC
 * Callers:
 *     NtCreateIoRing @ 0x140947140 (NtCreateIoRing.c)
 *     IopMcCreateBufferEntryMdl @ 0x14094E6D0 (IopMcCreateBufferEntryMdl.c)
 * Callees:
 *     IoAllocateMdl @ 0x14020CAD0 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     IopUnlockAndFreeMdl @ 0x1402F9CA8 (IopUnlockAndFreeMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 */

__int64 __fastcall IopAllocateAndLockMdl(
        void *a1,
        ULONG a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        struct _MDL **a5,
        _QWORD *a6)
{
  unsigned int v7; // edi
  struct _MDL *Mdl; // rax
  struct _MDL *v9; // rbx
  PVOID MappedSystemVa; // rax

  v7 = 0;
  Mdl = IoAllocateMdl(a1, a2, 0, 0, 0LL);
  v9 = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, a3, IoWriteAccess);
    if ( a6 )
    {
      if ( (v9->MdlFlags & 5) != 0 )
        MappedSystemVa = v9->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000010u);
      *a6 = MappedSystemVa;
    }
    *a5 = v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
