/*
 * XREFs of GreUnlockSprite @ 0x1C001F940
 * Callers:
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C001F834 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C006D050 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockSprite(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  struct _ERESOURCE *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  result = EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite", *(_QWORD *)(v1 + 112));
  v3 = *(struct _ERESOURCE **)(v1 + 112);
  if ( v3 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    return PsLeavePriorityRegion(v5, v4);
  }
  return result;
}
