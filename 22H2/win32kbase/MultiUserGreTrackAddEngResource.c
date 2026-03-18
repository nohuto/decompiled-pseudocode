/*
 * XREFs of MultiUserGreTrackAddEngResource @ 0x1C00780A0
 * Callers:
 *     GreCreateSemaphoreInternal @ 0x1C0077FFC (GreCreateSemaphoreInternal.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 */

__int64 __fastcall MultiUserGreTrackAddEngResource(__int64 a1, int a2)
{
  __int64 v4; // rsi
  HSEMAPHORE v5; // rcx
  __int64 result; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  struct _ERESOURCE *v9; // rcx

  v4 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  *(_DWORD *)(a1 + 16) = a2;
  v5 = *(HSEMAPHORE *)(v4 + 3216);
  if ( v5 )
    EngAcquireSemaphore(v5);
  result = v4 + 3200;
  v7 = *(_QWORD **)(v4 + 3208);
  if ( *v7 != v4 + 3200 )
    __fastfail(3u);
  *(_QWORD *)a1 = result;
  *(_QWORD *)(a1 + 8) = v7;
  *v7 = a1;
  *(_QWORD *)(v4 + 3208) = a1;
  v8 = *(_QWORD *)(v4 + 3216);
  if ( v8 )
  {
    result = EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.MultiUserEngAllocListLock", v8);
    v9 = *(struct _ERESOURCE **)(v4 + 3216);
    if ( v9 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v9);
      return PsLeavePriorityRegion();
    }
  }
  return result;
}
