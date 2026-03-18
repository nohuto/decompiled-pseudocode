/*
 * XREFs of IopIsActivityTracingEnabled @ 0x140290190
 * Callers:
 *     IopAllocateIrpWithExtension @ 0x14028FCA0 (IopAllocateIrpWithExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x14028FDE8 (IoMakeAssociatedIrpPriv.c)
 *     IopAllocateBackpocketIrp @ 0x140554A80 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140554D18 (IopAllocateReserveIrp.c)
 *     IovAllocateIrp @ 0x140AC1CE0 (IovAllocateIrp.c)
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
