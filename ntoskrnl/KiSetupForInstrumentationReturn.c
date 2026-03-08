/*
 * XREFs of KiSetupForInstrumentationReturn @ 0x14056E9C0
 * Callers:
 *     KiDispatchException @ 0x140362740 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x1403664E8 (KiInitializeUserApc.c)
 *     KeRaiseUserException @ 0x14056E8C0 (KeRaiseUserException.c)
 *     KiRaiseException @ 0x140576490 (KiRaiseException.c)
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
