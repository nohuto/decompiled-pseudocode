/*
 * XREFs of ExWaitForCallBacks @ 0x14094F05C
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x140506290 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x140514070 (KeDeregisterBoundCallback.c)
 *     ExpDeleteSiloState @ 0x1405B2B2C (ExpDeleteSiloState.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1403427F0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
