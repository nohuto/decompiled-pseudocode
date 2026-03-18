/*
 * XREFs of PopFxCompleteComponentActivation @ 0x140355774
 * Callers:
 *     PopFxProcessWork @ 0x140354CBC (PopFxProcessWork.c)
 *     PopFxActivateComponentWorker @ 0x140355144 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140355534 (PopFxIdleWorkerTail.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PopFxIdleComponent @ 0x140355830 (PopFxIdleComponent.c)
 *     PopFxActivateComponentDependents @ 0x140355A50 (PopFxActivateComponentDependents.c)
 */

LONG __fastcall PopFxCompleteComponentActivation(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  LONG result; // eax

  _InterlockedOr((volatile signed __int32 *)(a2 + 88), 0x80000000);
  KeSetEvent((PRKEVENT)(a2 + 104), 0, 0);
  if ( a3 )
    PopFxActivateComponentDependents(a2);
  PopFxIdleComponent(BugCheckParameter2, *(unsigned int *)(a2 + 16));
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 248), 0, 0);
  return result;
}
