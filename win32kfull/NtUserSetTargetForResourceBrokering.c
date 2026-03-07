__int64 __fastcall NtUserSetTargetForResourceBrokering(int a1, unsigned int a2)
{
  __int64 v4; // rdi
  struct tagTHREADINFO *v5; // rsi
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx

  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  v5 = 0LL;
  if ( a1 )
    goto LABEL_2;
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 812LL) & 0x30) != 0x10 )
  {
LABEL_5:
    v6 = 5;
    goto LABEL_3;
  }
  if ( !a2 )
  {
LABEL_13:
    _SetTargetForCursorApiBrokering(gptiCurrent, v5);
    v4 = 1LL;
    goto LABEL_14;
  }
  v8 = PtiFromThreadId(a2);
  v5 = (struct tagTHREADINFO *)v8;
  if ( v8 )
  {
    if ( v8 == gptiCurrent )
    {
      v5 = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(v8 + 424);
      if ( (*(_DWORD *)(v9 + 812) & 0x30) != 0x10
        || !(unsigned __int8)PsIsWin32KFilterEnabledForProcess(*(_QWORD *)v9)
        && !(unsigned __int8)PsIsWin32KFilterAuditEnabledForProcess(**((_QWORD **)v5 + 53)) )
      {
        goto LABEL_5;
      }
    }
    goto LABEL_13;
  }
LABEL_2:
  v6 = 87;
LABEL_3:
  UserSetLastError(v6);
LABEL_14:
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
