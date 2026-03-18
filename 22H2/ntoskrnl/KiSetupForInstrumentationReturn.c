/*
 * XREFs of KiSetupForInstrumentationReturn @ 0x140571030
 * Callers:
 *     KiDispatchException @ 0x14030CAC0 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x14030EFF8 (KiInitializeUserApc.c)
 *     KeRaiseUserException @ 0x140570F30 (KeRaiseUserException.c)
 *     KiRaiseException @ 0x1405789A0 (KiRaiseException.c)
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
