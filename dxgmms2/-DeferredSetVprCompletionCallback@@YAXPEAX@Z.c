/*
 * XREFs of ?DeferredSetVprCompletionCallback@@YAXPEAX@Z @ 0x1C00F95E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DeferredSetVprCompletionCallback(_QWORD **a1)
{
  KeSetEvent(*(PRKEVENT *)(*a1[5] + 176LL), 0, 0);
}
