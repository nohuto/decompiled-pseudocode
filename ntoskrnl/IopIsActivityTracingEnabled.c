/*
 * XREFs of IopIsActivityTracingEnabled @ 0x1402B1D90
 * Callers:
 *     IopAllocateIrpWithExtension @ 0x1402B18A4 (IopAllocateIrpWithExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402B19E8 (IoMakeAssociatedIrpPriv.c)
 *     IopAllocateBackpocketIrp @ 0x1405525E0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140552878 (IopAllocateReserveIrp.c)
 *     IovAllocateIrp @ 0x140ABDCE0 (IovAllocateIrp.c)
 * Callees:
 *     <none>
 */

char IopIsActivityTracingEnabled()
{
  char v0; // cl

  if ( (IopFunctionPointerMask & 4) == 0 )
    return 0;
  v0 = 1;
  if ( (IopIrpExtensionStatus & 1) == 0 )
    return 0;
  return v0;
}
