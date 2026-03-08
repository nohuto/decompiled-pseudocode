/*
 * XREFs of PopDispatchCallback @ 0x14085D520
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x1402D2F00 (ExNotifyCallback.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallback(PVOID Argument1)
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(ExCbPowerState, (PVOID)(unsigned int)Argument1, 0LL);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
