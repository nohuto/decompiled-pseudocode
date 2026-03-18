/*
 * XREFs of DrvNotifyModeChangeStartStop @ 0x1C0078988
 * Callers:
 *     ApplyPathsModality @ 0x1C00787AC (ApplyPathsModality.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     hdevEnumerate @ 0x1C006FCD0 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C006FE40 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C006FE80 (GreUnlockDisplayDevice.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0072044 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0078B50 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0089800 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall DrvNotifyModeChangeStartStop(char a1, __int64 a2)
{
  int v3; // edx
  int v4; // r8d
  struct PDEV **i; // rcx
  struct PDEV *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange, a2);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
  for ( i = 0LL; ; i = (struct PDEV **)v7 )
  {
    v6 = hdevEnumerate(i, v3, v4);
    v7 = (__int64)v6;
    if ( !v6 )
      break;
    v12 = *((_DWORD *)v6 + 10);
    v13 = v7;
    if ( (v12 & 1) != 0
      && (v12 & 0x400) == 0
      && (v12 & 0x20000) == 0
      && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v13) )
    {
      GreLockDisplayDevice(v7);
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v13,
        (struct _SURFOBJ *)((*(_QWORD *)(v7 + 2528) + 24LL) & -(__int64)(*(_QWORD *)(v7 + 2528) != 0LL)),
        0LL,
        a1 != 0 ? 30 : 18);
      GreUnlockDisplayDevice(v7);
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v8);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    PsLeavePriorityRegion(v9);
  }
  result = EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion(v11);
  }
  return result;
}
