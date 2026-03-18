/*
 * XREFs of IrqLibAcquireArbiterLock @ 0x1C005CCA8
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1C005CD70 (IrqLibpGetVectorInput.c)
 *     ProcessorpAddInstanceCallback @ 0x1C005E1A0 (ProcessorpAddInstanceCallback.c)
 *     AcpiUpdateInterruptProperties @ 0x1C0084170 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C0098FB0 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C0099260 (IrqLibFreeMessageTarget.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C0099730 (LinkNodepAddLinkNodeWorker.c)
 *     IrqTransGetInterruptVector @ 0x1C009A420 (IrqTransGetInterruptVector.c)
 *     IrqTranslateResources @ 0x1C009A530 (IrqTranslateResources.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IrqLibAcquireArbiterLock(char a1)
{
  NTSTATUS result; // eax

  result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  if ( a1 )
  {
    while ( byte_1C006E7E8 )
    {
      KeSetEvent((PRKEVENT)Object, 0, 0);
      KeWaitForSingleObject(qword_1C006E7F0, Executive, 0, 0, 0LL);
      result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
