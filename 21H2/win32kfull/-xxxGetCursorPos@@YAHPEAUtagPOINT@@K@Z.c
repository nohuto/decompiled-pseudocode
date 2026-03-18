/*
 * XREFs of ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C009E99C
 * Callers:
 *     NtUserGetCursorPos @ 0x1C009E950 (NtUserGetCursorPos.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     CheckWinstaAttributeAccess @ 0x1C009EAE0 (CheckWinstaAttributeAccess.c)
 */

__int64 __fastcall xxxGetCursorPos(unsigned __int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 SavedCursorPosition; // rax
  __int64 v12; // rcx
  struct tagPOINT v13; // rbx
  _BYTE *v14; // rdx

  v4 = 0LL;
  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  if ( !(unsigned int)CheckWinstaAttributeAccess(2u) )
    return 0LL;
  v8 = *(_QWORD *)(v5 + 456);
  if ( v8 && v8 != grpdeskRitInput )
  {
    UserSetLastError(5LL, v7);
    return 0LL;
  }
  v9 = a2 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
      goto LABEL_8;
    return 0LL;
  }
  if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(v5) )
  {
    SavedCursorPosition = GetSavedCursorPosition();
    goto LABEL_9;
  }
LABEL_8:
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8, v7);
  SavedCursorPosition = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
LABEL_9:
  v13 = (struct tagPOINT)SavedCursorPosition;
  if ( !PsGetCurrentProcessWow64Process(v12) )
    v4 = 3LL;
  if ( (v4 & a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = (_BYTE *)MmUserProbeAddress;
  *v14 = *v14;
  v14[7] = v14[7];
  *(struct tagPOINT *)a1 = v13;
  return 1LL;
}
