/*
 * XREFs of NtUserVkKeyScanEx @ 0x1C0007F80
 * Callers:
 *     <none>
 * Callees:
 *     InternalVkKeyScanEx @ 0x1C0008050 (InternalVkKeyScanEx.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     HKLtoPKL @ 0x1C006C150 (HKLtoPKL.c)
 */

__int64 __fastcall NtUserVkKeyScanEx(unsigned __int16 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v11; // rax
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rax
  __int16 v14; // bx

  if ( (unsigned int)IsEtwUserCritEnabled() )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v11 = SGDGetUserSessionState(v7, v6, v8, v9);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v11 + 8));
  EtwTraceAcquiredSharedUserCrit();
  v12 = PtiCurrentShared();
  if ( a3 )
    v13 = HKLtoPKL(v12, a2);
  else
    v13 = *((_QWORD *)v12 + 55);
  if ( v13 )
    v14 = InternalVkKeyScanEx(a1, *(_QWORD *)(*(_QWORD *)(v13 + 48) + 32LL));
  else
    v14 = -1;
  UserSessionSwitchLeaveCrit();
  return v14;
}
