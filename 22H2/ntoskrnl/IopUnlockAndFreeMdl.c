/*
 * XREFs of IopUnlockAndFreeMdl @ 0x14028CE0C
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x14028C2B0 (IopCopyCompleteReadIrp.c)
 *     IopFreeCopyObjectsFromIrp @ 0x14028F090 (IopFreeCopyObjectsFromIrp.c)
 *     IopMcTryUnlockMdl @ 0x14055F4AC (IopMcTryUnlockMdl.c)
 *     IopAllocateAndLockMdl @ 0x14094410C (IopAllocateAndLockMdl.c)
 *     IopDeleteIoRing @ 0x140949260 (IopDeleteIoRing.c)
 *     IopMcCreateBufferEntryMdl @ 0x1409516F0 (IopMcCreateBufferEntryMdl.c)
 * Callees:
 *     IoFreeMdl @ 0x1402ACFB0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x1402CB700 (MmUnmapLockedPages.c)
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
