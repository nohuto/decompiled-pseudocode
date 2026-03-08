/*
 * XREFs of IrqLibReleaseArbiterLock @ 0x1C005CD28
 * Callers:
 *     AcpiUpdateInterruptProperties @ 0x1C0084160 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C0098FA0 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C0099250 (IrqLibFreeMessageTarget.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C0099720 (LinkNodepAddLinkNodeWorker.c)
 *     IrqTransGetInterruptVector @ 0x1C009A410 (IrqTransGetInterruptVector.c)
 *     IrqTranslateResources @ 0x1C009A520 (IrqTranslateResources.c)
 * Callees:
 *     <none>
 */

LONG IrqLibReleaseArbiterLock()
{
  return KeSetEvent((PRKEVENT)Object, 0, 0);
}
