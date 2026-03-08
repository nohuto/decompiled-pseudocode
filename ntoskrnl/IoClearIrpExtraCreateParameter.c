/*
 * XREFs of IoClearIrpExtraCreateParameter @ 0x140554410
 * Callers:
 *     IopSymlinkAllocateAndAddECP @ 0x14077E41C (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     <none>
 */

void __stdcall IoClearIrpExtraCreateParameter(PIRP Irp)
{
  if ( (Irp->Flags & 0x80u) != 0 )
    Irp->UserBuffer = 0LL;
}
