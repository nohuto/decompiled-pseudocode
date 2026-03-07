void __fastcall DeferredSetVprCompletionCallback(_QWORD **a1)
{
  KeSetEvent(*(PRKEVENT *)(*a1[5] + 176LL), 0, 0);
}
