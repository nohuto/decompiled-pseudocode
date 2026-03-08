/*
 * XREFs of KeRegisterNmiCallback @ 0x14056A660
 * Callers:
 *     <none>
 * Callees:
 *     KiRegisterNmiSxCallback @ 0x14056AA40 (KiRegisterNmiSxCallback.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  return (PVOID)KiRegisterNmiSxCallback(CallbackRoutine, Context);
}
