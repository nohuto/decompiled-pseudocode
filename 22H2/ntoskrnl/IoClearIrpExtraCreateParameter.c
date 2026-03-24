/*
 * XREFs of IoClearIrpExtraCreateParameter @ 0x140505610
 * Callers:
 *     IopSymlinkAllocateAndAddECP @ 0x14068303C (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     <none>
 */

void __stdcall IoClearIrpExtraCreateParameter(PIRP Irp)
{
  if ( (Irp->Flags & 0x80u) != 0 )
    Irp->UserBuffer = 0LL;
}
