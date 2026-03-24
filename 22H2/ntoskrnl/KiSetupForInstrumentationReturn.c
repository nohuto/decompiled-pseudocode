/*
 * XREFs of KiSetupForInstrumentationReturn @ 0x14036C8F8
 * Callers:
 *     KiInitializeUserApc @ 0x140309CE4 (KiInitializeUserApc.c)
 *     KiDispatchException @ 0x14033C330 (KiDispatchException.c)
 *     KeRaiseUserException @ 0x140515E60 (KeRaiseUserException.c)
 *     KiRaiseException @ 0x140521DD0 (KiRaiseException.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall KiSetupForInstrumentationReturn(__int64 a1)
{
  struct _KTHREAD *result; // rax
  void *InstrumentationCallback; // r8

  result = KeGetCurrentThread();
  InstrumentationCallback = result->ApcState.Process->InstrumentationCallback;
  if ( InstrumentationCallback )
  {
    if ( *(_WORD *)(a1 + 368) == 51 )
    {
      result = *(struct _KTHREAD **)(a1 + 360);
      *(_QWORD *)(a1 + 88) = result;
      *(_QWORD *)(a1 + 360) = InstrumentationCallback;
    }
  }
  return result;
}
