/*
 * XREFs of ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1C005D92C
 * Callers:
 *     GreGetDeviceCaps @ 0x1C005D880 (GreGetDeviceCaps.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C015F630 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0041790 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

NEEDDYNAMICMODECHANGESHARELOCK *__fastcall NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
        NEEDDYNAMICMODECHANGESHARELOCK *this,
        char a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx

  *(_BYTE *)this = a2;
  if ( a2 )
  {
    v3 = *(_QWORD *)(SGDGetSessionState(this) + 24);
    v4 = *(_QWORD *)(v3 + 80);
    if ( v4 )
      ExEnterPriorityRegionAndAcquireResourceShared(v4);
    EtwTraceGreLockAcquireSemaphoreShared((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v3 + 80));
  }
  return this;
}
