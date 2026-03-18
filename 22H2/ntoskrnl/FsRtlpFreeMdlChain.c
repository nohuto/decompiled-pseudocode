/*
 * XREFs of FsRtlpFreeMdlChain @ 0x14093EFB8
 * Callers:
 *     FsRtlKernelFsControlFile @ 0x140772DD0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140773AC0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x1407D5EE0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryInformationFile @ 0x14093EDD0 (FsRtlQueryInformationFile.c)
 * Callees:
 *     IoFreeMdl @ 0x1402ACFB0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
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
