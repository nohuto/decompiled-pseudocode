/*
 * XREFs of ExFetchLicenseData @ 0x1409F6720
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall ExFetchLicenseData(void *a1, unsigned int a2, unsigned int *a3)
{
  struct _LIST_ENTRY *Blink; // rsi
  __int64 v7; // r8
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *Flink; // rdx
  unsigned int v11; // [rsp+70h] [rbp+18h]

  v11 = 0;
  Blink = PsGetCurrentServerSiloGlobals()[56].Blink;
  if ( !v7 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Blink[2927].Blink, 0LL);
  if ( LOBYTE(Blink[2937].Flink) )
    goto LABEL_4;
  Flink = (unsigned int *)Blink[2927].Flink;
  if ( Blink->Flink )
    Flink = (unsigned int *)Blink->Flink;
  if ( !Flink )
  {
LABEL_4:
    v11 = -1073741595;
  }
  else
  {
    *a3 = *Flink;
    if ( a1 && a2 && a2 >= *Flink )
    {
      memmove(a1, Flink, *Flink);
      if ( a2 >= 0x14 )
        *((_DWORD *)a1 + 3) &= ~1u;
    }
    else
    {
      v11 = -1073741789;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Blink[2927].Blink, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&Blink[2927].Blink);
  KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v11;
}
