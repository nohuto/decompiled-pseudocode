/*
 * XREFs of IopUnlockAndFreeMdl @ 0x1403F0844
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x1403F0CC0 (IopCopyCompleteReadIrp.c)
 *     IopFreeCopyObjectsFromIrp @ 0x1403F11A4 (IopFreeCopyObjectsFromIrp.c)
 * Callees:
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x14029D0C0 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x14035AB60 (IoFreeMdl.c)
 */

void __fastcall IopUnlockAndFreeMdl(PMDL Mdl)
{
  CSHORT MdlFlags; // cx
  struct _MDL *Next; // rbx

  do
  {
    MdlFlags = Mdl->MdlFlags;
    if ( (MdlFlags & 5) == 1 )
    {
      MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
      MdlFlags = Mdl->MdlFlags;
    }
    if ( (MdlFlags & 2) != 0 )
      MmUnlockPages(Mdl);
    Next = Mdl->Next;
    IoFreeMdl(Mdl);
    Mdl = Next;
  }
  while ( Next );
}
