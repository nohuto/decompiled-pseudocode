/*
 * XREFs of DrvNotifyModeChangeStartStop @ 0x1C001D468
 * Callers:
 *     ApplyPathsModality @ 0x1C00C89C8 (ApplyPathsModality.c)
 * Callees:
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0017690 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C001F7C4 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     GreUnlockDisplayDevice @ 0x1C001F8B0 (GreUnlockDisplayDevice.c)
 *     GreLockDisplayDevice @ 0x1C001F900 (GreLockDisplayDevice.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0047AF0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D990 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 */

__int64 __fastcall DrvNotifyModeChangeStartStop(__int64 a1)
{
  char v1; // si
  __int64 v2; // rbx
  __int64 i; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  struct _ERESOURCE *v6; // rcx
  struct _ERESOURCE *v7; // rcx
  __int64 result; // rax
  struct _ERESOURCE *v9; // rcx
  int v10; // ecx
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( *(_QWORD *)(v2 + 80) )
    ExEnterPriorityRegionAndAcquireResourceShared();
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v2 + 80));
  EngAcquireSemaphore(*(HSEMAPHORE *)(v2 + 120));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", *(_QWORD *)(v2 + 120), 2LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v2 + 88));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDCVisRgn", *(_QWORD *)(v2 + 88), 3LL);
  for ( i = 0LL; ; i = v5 )
  {
    v4 = hdevEnumerate<1>(i);
    v5 = v4;
    if ( !v4 )
      break;
    v10 = *(_DWORD *)(v4 + 40) & 0x20401;
    v11 = v4;
    if ( v10 == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v11) )
    {
      GreLockDisplayDevice(v5);
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v11,
        (struct _SURFOBJ *)((*(_QWORD *)(v5 + 2528) + 24LL) & -(__int64)(*(_QWORD *)(v5 + 2528) != 0LL)),
        0LL,
        v1 != 0 ? 30 : 18);
      GreUnlockDisplayDevice(v5);
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn", *(_QWORD *)(v2 + 88));
  v6 = *(struct _ERESOURCE **)(v2 + 88);
  if ( v6 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v6);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock", *(_QWORD *)(v2 + 120));
  v7 = *(struct _ERESOURCE **)(v2 + 120);
  if ( v7 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    PsLeavePriorityRegion();
  }
  result = EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v2 + 80));
  v9 = *(struct _ERESOURCE **)(v2 + 80);
  if ( v9 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v9);
    return PsLeavePriorityRegion();
  }
  return result;
}
