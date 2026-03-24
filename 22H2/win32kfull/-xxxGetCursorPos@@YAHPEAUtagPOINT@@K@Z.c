/*
 * XREFs of ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C0033220
 * Callers:
 *     <none>
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C0033350 (CheckWinstaAttributeAccess.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall xxxGetCursorPos(unsigned __int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 SavedCursorPosition; // rax
  __int64 v9; // rcx
  struct tagPOINT v10; // rbx
  _BYTE *v11; // rdx

  v4 = 0LL;
  if ( !(unsigned int)CheckWinstaAttributeAccess(2u) )
    return 0LL;
  v5 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v5 && v5 != grpdeskRitInput )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  v6 = a2 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
      goto LABEL_6;
    return 0LL;
  }
  if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(gptiCurrent) )
  {
    SavedCursorPosition = GetSavedCursorPosition();
    goto LABEL_7;
  }
LABEL_6:
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  SavedCursorPosition = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
LABEL_7:
  v10 = (struct tagPOINT)SavedCursorPosition;
  if ( !PsGetCurrentProcessWow64Process(v9) )
    v4 = 3LL;
  if ( (v4 & a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (_BYTE *)MmUserProbeAddress;
  *v11 = *v11;
  v11[7] = v11[7];
  *(struct tagPOINT *)a1 = v10;
  return 1LL;
}
