/*
 * XREFs of EtwpGetSoftRestartInformation @ 0x1409EA544
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x14085C154 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     EtwpCheckLoggerControlAccess @ 0x140692E00 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpGetSoftRestartInformation(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // edi
  char v6; // r14
  unsigned int v8; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v10; // rax
  unsigned int *v11; // rdi
  int v12; // ebx
  __int64 v13; // rax

  v4 = a2;
  v6 = 0;
  if ( !EtwpKsrCallbackObject || PsIsCurrentThreadInServerSilo(a1, a2) )
    return 3221225659LL;
  *a3 = 24;
  if ( v4 < 0x18 )
    return 3221225476LL;
  v8 = (unsigned __int16)*(_QWORD *)(a1 + 8);
  if ( v8 == 0xFFFF )
    v8 = *(unsigned __int8 *)(EtwpHostSiloState + 4232);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v8, 1);
  v11 = v10;
  if ( v10 )
  {
    v12 = EtwpCheckLoggerControlAccess(1u, (__int64)v10);
    if ( v12 >= 0 )
    {
      v13 = *((_QWORD *)v11 + 136);
      if ( v13 )
        v6 = *(_BYTE *)(v13 + 32);
    }
    EtwpReleaseLoggerContext(v11, 1);
  }
  else
  {
    v12 = -1073741162;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v12 >= 0 )
    *(_BYTE *)(a1 + 16) = v6;
  return (unsigned int)v12;
}
