__int64 __fastcall xxxGetCursorPos(unsigned __int64 a1, int a2)
{
  struct tagTHREADINFO *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  int v8; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 SavedCursorPosition; // rax
  __int64 v11; // rcx
  struct tagPOINT v12; // rbx
  _BYTE *v13; // rdx

  v4 = PtiCurrentShared();
  v6 = 0LL;
  if ( !(unsigned int)CheckWinstaAttributeAccess(2u) )
    return 0LL;
  v7 = *((_QWORD *)v4 + 57);
  if ( v7 )
  {
    v5 = grpdeskRitInput;
    if ( v7 != grpdeskRitInput )
    {
      UserSetLastError(5LL);
      return 0LL;
    }
  }
  v8 = a2 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
      goto LABEL_6;
    return 0LL;
  }
  if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(v4) )
  {
    SavedCursorPosition = GetSavedCursorPosition();
    goto LABEL_7;
  }
LABEL_6:
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v5);
  SavedCursorPosition = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
LABEL_7:
  v12 = (struct tagPOINT)SavedCursorPosition;
  if ( !PsGetCurrentProcessWow64Process(v11) )
    v6 = 3LL;
  if ( (v6 & a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_BYTE *)MmUserProbeAddress;
  *v13 = *v13;
  v13[7] = v13[7];
  *(struct tagPOINT *)a1 = v12;
  return 1LL;
}
