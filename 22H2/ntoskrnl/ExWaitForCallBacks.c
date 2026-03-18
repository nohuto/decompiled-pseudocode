/*
 * XREFs of ExWaitForCallBacks @ 0x1409FB5D0
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x140557580 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x14056C3A0 (KeDeregisterBoundCallback.c)
 *     ExpDeleteSiloState @ 0x140608FF0 (ExpDeleteSiloState.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14030A210 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
