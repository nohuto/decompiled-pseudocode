/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x140650610
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1402D44D0 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x1402DA25C (FsRtlpAttachOplockKey.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x140682B0C (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14068303C (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x140683164 (IopGraftName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoGetIrpExtraCreateParameter(PIRP Irp, struct _ECP_LIST **ExtraCreateParameter)
{
  if ( (Irp->Flags & 0x80u) == 0 )
    return -1073741811;
  *ExtraCreateParameter = (struct _ECP_LIST *)Irp->UserBuffer;
  return 0;
}
