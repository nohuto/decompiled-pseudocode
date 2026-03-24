/*
 * XREFs of FsRtlpFreeMdlChain @ 0x14088C4B0
 * Callers:
 *     FsRtlSetKernelEaFile @ 0x140669B30 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140669CD0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140669ED0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryInformationFile @ 0x14088C2D0 (FsRtlQueryInformationFile.c)
 * Callees:
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x14035AB60 (IoFreeMdl.c)
 */

void __fastcall FsRtlpFreeMdlChain(PMDL Mdl)
{
  PMDL v1; // rbx
  struct _MDL *Next; // rdi

  if ( Mdl )
  {
    v1 = Mdl;
    do
    {
      Next = v1->Next;
      if ( (v1->MdlFlags & 2) != 0 )
        MmUnlockPages(v1);
      IoFreeMdl(v1);
      v1 = Next;
    }
    while ( Next );
  }
}
