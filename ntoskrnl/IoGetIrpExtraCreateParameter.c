/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x1406B1D50
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x14023AE40 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x14023FE88 (FsRtlpAttachOplockKey.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14077E41C (IopSymlinkAllocateAndAddECP.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopGraftName @ 0x14087A8D0 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x14087BDFC (IopSymlinkUpdateECP.c)
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
