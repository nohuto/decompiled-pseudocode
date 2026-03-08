/*
 * XREFs of IopUnlockAndFreeMdl @ 0x1402F9CA8
 * Callers:
 *     IopFreeCopyObjectsFromIrp @ 0x1402F98FC (IopFreeCopyObjectsFromIrp.c)
 *     IopCopyCompleteReadIrp @ 0x1402F99A0 (IopCopyCompleteReadIrp.c)
 *     IopMcTryUnlockMdl @ 0x14055D00C (IopMcTryUnlockMdl.c)
 *     IopAllocateAndLockMdl @ 0x1409410EC (IopAllocateAndLockMdl.c)
 *     IopDeleteIoRing @ 0x140946240 (IopDeleteIoRing.c)
 *     IopMcCreateBufferEntryMdl @ 0x14094E6D0 (IopMcCreateBufferEntryMdl.c)
 * Callees:
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 */

void __fastcall IopUnlockAndFreeMdl(PMDL Mdl)
{
  struct _MDL *Next; // rbx

  do
  {
    if ( (Mdl->MdlFlags & 5) == 1 )
      MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
    if ( (Mdl->MdlFlags & 2) != 0 )
      MmUnlockPages(Mdl);
    Next = Mdl->Next;
    IoFreeMdl(Mdl);
    Mdl = Next;
  }
  while ( Next );
}
