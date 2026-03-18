/*
 * XREFs of KiInitializeCacheErrataSupport @ 0x140B9723C
 * Callers:
 *     KiInitMachineDependent @ 0x14039A528 (KiInitMachineDependent.c)
 * Callees:
 *     KeStartProfile @ 0x140573F7C (KeStartProfile.c)
 *     KiDisableCacheErrataSource @ 0x140579280 (KiDisableCacheErrataSource.c)
 *     KeInitializeProfileCallback @ 0x140975010 (KeInitializeProfileCallback.c)
 *     KeSetIntervalProfile @ 0x1409751C8 (KeSetIntervalProfile.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

char __fastcall KiInitializeCacheErrataSupport(char a1)
{
  __int64 Pool2; // rax
  unsigned int v3; // ebx
  int *v4; // rdi
  unsigned int v5; // r9d
  int *i; // r8

  if ( KiTLBCOverride )
  {
    KiDisableCacheErrataSource();
    if ( !a1 )
    {
LABEL_4:
      LOBYTE(Pool2) = 1;
      return Pool2;
    }
LABEL_3:
    KiCacheErrataMonitor = 0LL;
    goto LABEL_4;
  }
  if ( !a1 )
    goto LABEL_4;
  v3 = KeNumberProcessors_0;
  if ( (_DWORD)KeNumberProcessors_0 == 1 )
  {
    KiTLBCOverride = 1;
    KiDisableCacheErrataSource();
    goto LABEL_3;
  }
  Pool2 = ExAllocatePool2(64LL, 16 * ((unsigned int)KeNumberProcessors_0 + 39LL), 0x2020654Bu);
  v4 = (int *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 0x393870 / v3;
    KeInitializeProfileCallback((unsigned __int16 *)(Pool2 + 8), (__int64)KiMonitorCacheErrata, 0LL, 0);
    v5 = 0;
    for ( i = v4 + 156; v5 < v3; *(i - 1) = v5 % v3 )
    {
      *(_QWORD *)i = -1LL;
      i[2] = 0;
      i += 4;
      ++v5;
    }
    _InterlockedExchange64(&KiCacheErrataMonitor, (__int64)v4);
    KeSetIntervalProfile(*v4, 0);
    LOBYTE(Pool2) = (int)KeStartProfile((ULONG_PTR)(v4 + 2)) >= 0;
  }
  return Pool2;
}
