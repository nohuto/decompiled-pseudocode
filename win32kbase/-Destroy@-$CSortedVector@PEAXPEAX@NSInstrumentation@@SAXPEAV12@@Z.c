/*
 * XREFs of ?Destroy@?$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C019B05C
 * Callers:
 *     ??1CLeakTrackingAllocator@NSInstrumentation@@QEAA@XZ @ 0x1C00D4B84 (--1CLeakTrackingAllocator@NSInstrumentation@@QEAA@XZ.c)
 *     ?InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAV?$CSortedVector@PEAXPEAX@2@@Z @ 0x1C019B3AC (-InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAV-$CSortedVector@PE.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CSortedVector<void *,void *>::Destroy(PVOID *P)
{
  ExFreePoolWithTag(P[6], 0);
  ExFreePoolWithTag(P, 0);
}
