/*
 * XREFs of EtwpQueryReferenceTime @ 0x1409E522C
 * Callers:
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpQueryReferenceTime(__int64 a1, unsigned int a2, _OWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v5; // rax
  unsigned int v6; // ebx

  if ( a2 == 0xFFFF )
    a2 = *(unsigned __int8 *)(a1 + 4232);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 0);
  v6 = 0;
  if ( v5 )
  {
    *a3 = *((_OWORD *)v5 + 19);
    EtwpReleaseLoggerContext(v5, 0);
  }
  else
  {
    v6 = -1073741162;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
