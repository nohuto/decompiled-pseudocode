/*
 * XREFs of PiPnpRtlGetCurrentOperation @ 0x1406D0D80
 * Callers:
 *     PiPnpRtlBeginOperation @ 0x1406CDF98 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1406D0C78 (PiPnpRtlCacheObjectBaseKey.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall PiPnpRtlGetCurrentOperation(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v2; // ebx
  __int64 *v4; // rdi
  __int64 *v5; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  *a1 = 0LL;
  v4 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PiPnpRtlActiveOperationsLock, 1u);
  v5 = (__int64 *)PiPnpRtlActiveOperations;
  while ( v5 != &PiPnpRtlActiveOperations )
  {
    v4 = v5;
    if ( (struct _KTHREAD *)v5[2] == CurrentThread )
      break;
    v5 = (__int64 *)*v5;
    v4 = 0LL;
  }
  ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
  KeLeaveCriticalRegion();
  if ( v4 )
    *a1 = v4;
  else
    return (unsigned int)-1073741275;
  return v2;
}
