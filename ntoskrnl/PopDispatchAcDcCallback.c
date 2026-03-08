/*
 * XREFs of PopDispatchAcDcCallback @ 0x140991490
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x1402D2F00 (ExNotifyCallback.c)
 */

struct _KTHREAD *PopDispatchAcDcCallback()
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(ExCbPowerState, (PVOID)1, (PVOID)(dword_140C3D48C == 0));
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
