/*
 * XREFs of PfpScenCtxPrefetchStateSet @ 0x140A9D178
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1407E2A94 (PfSetSuperfetchInformation.c)
 *     PfpScenCtxScenarioSet @ 0x140A84910 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall PfpScenCtxPrefetchStateSet(ULONG_PTR BugCheckParameter2, int a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // esi
  int v10; // ecx

  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    if ( a3 == 1 && (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
    {
      v9 = -1073741431;
    }
    else
    {
      v10 = *(_DWORD *)(BugCheckParameter2 + 8);
      if ( (v10 & 0xC) == 4 )
      {
        KeSetEvent((PRKEVENT)(BugCheckParameter2 + 16), 1, 0);
        *(_DWORD *)(BugCheckParameter2 + 8) &= 0xFFFFFFF3;
        v10 = *(_DWORD *)(BugCheckParameter2 + 8);
      }
      *(_DWORD *)(BugCheckParameter2 + 8) = v10 ^ ((unsigned __int8)a3 ^ (unsigned __int8)v10) & 3;
      v9 = 0;
    }
  }
  else
  {
    v9 = -1073741735;
  }
  if ( !a4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
  return v9;
}
