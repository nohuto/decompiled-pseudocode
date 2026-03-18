/*
 * XREFs of NtUserEnumDisplayDevices @ 0x1C0023AB0
 * Callers:
 *     <none>
 * Callees:
 *     DrvEnumDisplayDevices @ 0x1C0023B90 (DrvEnumDisplayDevices.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 */

__int64 __fastcall NtUserEnumDisplayDevices(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v11; // rax
  unsigned int v12; // ebx

  v4 = a4;
  if ( (unsigned int)IsEtwUserCritEnabled(a1, a2, a3, a4) )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v11 = SGDGetUserSessionState(v7, v6, v8, v9);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v11 + 8));
  EtwTraceAcquiredSharedUserCrit();
  if ( gbVideoInitialized )
    v12 = DrvEnumDisplayDevices(a1, v4, 1);
  else
    v12 = -1073741823;
  UserSessionSwitchLeaveCrit();
  return v12;
}
