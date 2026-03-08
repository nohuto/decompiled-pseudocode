/*
 * XREFs of PopNewProcessorCallback @ 0x14097D420
 * Callers:
 *     <none>
 * Callees:
 *     PpmIdleRegisterDefaultStates @ 0x14080FA58 (PpmIdleRegisterDefaultStates.c)
 *     PpmCheckInitProcessors @ 0x140827DA4 (PpmCheckInitProcessors.c)
 *     PpmEnableWmiInterface @ 0x14084E6B0 (PpmEnableWmiInterface.c)
 *     PopCheckSkipTick @ 0x140860800 (PopCheckSkipTick.c)
 */

void __fastcall PopNewProcessorCallback(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  if ( ChangeContext->State == KeProcessorAddCompleteNotify )
  {
    if ( !PoSkipTickMode && PopSkipTickPolicy == 1 )
      PoSkipTickMode = !PopCheckSkipTick();
    PpmCheckInitProcessors(0, 1);
    PpmEnableWmiInterface();
    PpmIdleRegisterDefaultStates();
  }
}
