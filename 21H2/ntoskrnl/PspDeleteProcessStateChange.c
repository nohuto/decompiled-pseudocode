/*
 * XREFs of PspDeleteProcessStateChange @ 0x1409AF690
 * Callers:
 *     <none>
 * Callees:
 *     PsThawMultiProcess @ 0x140257280 (PsThawMultiProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 */

LONG_PTR __fastcall PspDeleteProcessStateChange(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  if ( *(_DWORD *)(a1 + 16) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    PsThawMultiProcess(*(_QWORD *)a1, 0LL, *(_DWORD *)(a1 + 16));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  return ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x63507350u);
}
