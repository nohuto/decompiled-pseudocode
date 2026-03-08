/*
 * XREFs of PspDeleteProcessStateChange @ 0x1409AE120
 * Callers:
 *     <none>
 * Callees:
 *     PsThawMultiProcess @ 0x1402FFE80 (PsThawMultiProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PspDeleteProcessStateChange(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  if ( *(_DWORD *)(a1 + 16) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    PsThawMultiProcess(*(_QWORD *)a1, 0LL, *(_DWORD *)(a1 + 16));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x63507350u);
}
