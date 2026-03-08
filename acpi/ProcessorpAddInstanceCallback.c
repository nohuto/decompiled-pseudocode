/*
 * XREFs of ProcessorpAddInstanceCallback @ 0x1C005E180
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibAcquireArbiterLock @ 0x1C005CC88 (IrqLibAcquireArbiterLock.c)
 *     ProcessorAddInstance @ 0x1C009A7C4 (ProcessorAddInstance.c)
 */

void __fastcall ProcessorpAddInstanceCallback(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  if ( ChangeContext->State == KeProcessorAddCompleteNotify )
  {
    IrqLibAcquireArbiterLock(0);
    ProcessorAddInstance((unsigned int)ChangeContext[1].State, ChangeContext->NtNumber);
    KeSetEvent((PRKEVENT)Object, 0, 0);
  }
}
