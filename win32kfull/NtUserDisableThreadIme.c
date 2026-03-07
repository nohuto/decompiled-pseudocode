__int64 __fastcall NtUserDisableThreadIme(unsigned int a1)
{
  struct tagTHREADINFO *v2; // rcx
  __int64 v3; // rbx
  bool v5; // dl

  EnterCrit(0LL, 0LL);
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120);
    v3 = 0LL;
    goto LABEL_3;
  }
  if ( a1 == -1 )
  {
    UserDisableImeForProcess(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL));
LABEL_6:
    v3 = 1LL;
    goto LABEL_3;
  }
  v3 = 0LL;
  if ( !a1 )
  {
    v5 = 1;
    v2 = (struct tagTHREADINFO *)gptiCurrent;
LABEL_9:
    UserDisableImeForThread(v2, v5);
    goto LABEL_6;
  }
  v2 = (struct tagTHREADINFO *)PtiFromThreadId(a1);
  if ( v2 && *((_QWORD *)v2 + 53) == *(_QWORD *)(gptiCurrent + 424LL) )
  {
    v5 = v2 == (struct tagTHREADINFO *)gptiCurrent;
    goto LABEL_9;
  }
LABEL_3:
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
