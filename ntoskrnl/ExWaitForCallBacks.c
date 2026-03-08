/*
 * XREFs of ExWaitForCallBacks @ 0x1409F8740
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x1405550E0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x140569F00 (KeDeregisterBoundCallback.c)
 *     ExpDeleteSiloState @ 0x140606BA0 (ExpDeleteSiloState.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
