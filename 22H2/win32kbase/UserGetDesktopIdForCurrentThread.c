/*
 * XREFs of UserGetDesktopIdForCurrentThread @ 0x1C000D804
 * Callers:
 *     NtDCompositionGetMaterialProperty @ 0x1C000D6F0 (NtDCompositionGetMaterialProperty.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 */

__int64 __fastcall UserGetDesktopIdForCurrentThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v10; // rax

  v8 = 0LL;
  if ( (unsigned int)IsEtwUserCritEnabled(a1, a2, a3, a4) )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v10 = SGDGetUserSessionState(v5, v4, v6, v7);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v10 + 8));
  EtwTraceAcquiredSharedUserCrit();
  if ( *((_QWORD *)PtiCurrentShared() + 57) )
    v8 = ***(_QWORD ***)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL);
  UserSessionSwitchLeaveCrit();
  return v8;
}
