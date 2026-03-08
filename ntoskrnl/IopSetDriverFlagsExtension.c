/*
 * XREFs of IopSetDriverFlagsExtension @ 0x1402B22A0
 * Callers:
 *     IoPageReadEx @ 0x14027F4F0 (IoPageReadEx.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402B19E8 (IoMakeAssociatedIrpPriv.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x1402B22EC (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IopSetDriverFlagsExtension(__int64 a1, __int64 a2)
{
  __int64 IrpExtension; // rax

  IrpExtension = IopAllocateIrpExtension(a1, 8LL);
  if ( !IrpExtension )
    return 3221225626LL;
  *(_QWORD *)(IrpExtension + 56) = a2;
  return 0LL;
}
