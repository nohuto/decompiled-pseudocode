/*
 * XREFs of IopIsActivityTracingEnabled @ 0x1402E66C0
 * Callers:
 *     IopQueueWorkItemProlog @ 0x140206630 (IopQueueWorkItemProlog.c)
 *     IopAllocateIrpWithExtension @ 0x1402E5F20 (IopAllocateIrpWithExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402E6098 (IoMakeAssociatedIrpPriv.c)
 *     IopAllocateBackpocketIrp @ 0x1404FFD50 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1404FFFF0 (IopAllocateReserveIrp.c)
 *     IovAllocateIrp @ 0x1409C47B0 (IovAllocateIrp.c)
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
