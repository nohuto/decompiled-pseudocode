/*
 * XREFs of KeRegisterNmiCallback @ 0x140514850
 * Callers:
 *     HvlpInitializeHvCrashdump @ 0x1404F901C (HvlpInitializeHvCrashdump.c)
 * Callees:
 *     KiRegisterNmiSxCallback @ 0x140514BE4 (KiRegisterNmiSxCallback.c)
 *     KiTraceLogNmiCallback @ 0x1408BB2CC (KiTraceLogNmiCallback.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  void *v3; // rbx

  v3 = (void *)KiRegisterNmiSxCallback(CallbackRoutine, Context);
  if ( v3 )
    KiTraceLogNmiCallback(CallbackRoutine);
  return v3;
}
