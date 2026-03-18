/*
 * XREFs of PopDispatchAcDcCallback @ 0x140994540
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x14033BD40 (ExNotifyCallback.c)
 */

struct _KTHREAD *PopDispatchAcDcCallback()
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(ExCbPowerState, (PVOID)1, (PVOID)(dword_140C3D90C == 0));
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
