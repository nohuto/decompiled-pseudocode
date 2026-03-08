/*
 * XREFs of PopFxDirectedPowerTransitionWorker @ 0x140587BB0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PopFxHandleDirectedPowerTransition @ 0x140588000 (PopFxHandleDirectedPowerTransition.c)
 */

LONG __fastcall PopFxDirectedPowerTransitionWorker(ULONG_PTR BugCheckParameter3)
{
  LONG result; // eax

  do
    PopFxHandleDirectedPowerTransition(BugCheckParameter3);
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter3 + 952), 0xFFFFFFFF) != 1 );
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter3 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(BugCheckParameter3 + 248), 0, 0);
  return result;
}
