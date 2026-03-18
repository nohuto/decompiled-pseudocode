/*
 * XREFs of NtUserGetKeyboardLayout @ 0x1C0069A60
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     _GetKeyboardLayout @ 0x1C0069AE0 (_GetKeyboardLayout.c)
 */

__int64 __fastcall NtUserGetKeyboardLayout(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 KeyboardLayout; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  if ( IsEtwUserCritEnabled() )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v7 = SGDGetUserSessionState(v3, v2, v4, v5);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v7 + 8));
  EtwTraceAcquiredSharedUserCrit(v9, v8, v10, v11);
  KeyboardLayout = GetKeyboardLayout(a1);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return KeyboardLayout;
}
