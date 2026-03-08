/*
 * XREFs of EtwpStartTrace @ 0x140796150
 * Callers:
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x1409E8BFC (EtwWmitraceWorker.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 */

__int64 __fastcall EtwpStartTrace(ULONGLONG a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KMUTANT *v3; // rdi

  CurrentThread = KeGetCurrentThread();
  v3 = (struct _KMUTANT *)(a1 + 4608);
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject((PVOID)(a1 + 4608), Executive, 0, 0, 0LL);
  LODWORD(a2) = EtwpStartLogger(a1, a2);
  KeReleaseMutex(v3, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)a2;
}
