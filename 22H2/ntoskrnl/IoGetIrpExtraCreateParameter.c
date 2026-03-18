/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x140765840
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1402FD950 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x14030287C (FsRtlpAttachOplockKey.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1407CDE5C (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x14087F9E8 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x140880C2C (IopSymlinkUpdateECP.c)
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
