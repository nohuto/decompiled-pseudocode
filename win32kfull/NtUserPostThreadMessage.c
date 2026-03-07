__int64 __fastcall NtUserPostThreadMessage(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // ebx
  _QWORD *v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+38h] [rbp-8h] BYREF

  EnterCrit(0LL, 0LL);
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    v10 = 0;
    goto LABEL_6;
  }
  v8 = PtiFromThreadId(a1);
  v10 = 0;
  v11 = (_QWORD *)v8;
  if ( !v8 )
    goto LABEL_7;
  if ( *(_QWORD *)(gptiCurrent + 456LL) == *(_QWORD *)(v8 + 456)
    || (*(_DWORD *)(gptiCurrent + 488LL) & 8) != 0
    || GetDesktopView(*(_QWORD *)(gptiCurrent + 424LL)) )
  {
    goto LABEL_4;
  }
  v18 = 0LL;
  v17 = 0LL;
  if ( !(unsigned int)IsPrivileged(psTcb) )
    goto LABEL_7;
  if ( !(unsigned __int8)Enforced(v16) )
  {
    if ( (int)GetProcessLuid(*gptiCurrent, &v18) >= 0 && (int)GetProcessLuid(*v11, &v17) >= 0 && v18 == v17 )
      goto LABEL_4;
LABEL_7:
    v15 = 1444LL;
LABEL_8:
    UserSetLastError(v15);
    goto LABEL_6;
  }
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 864LL, v11[53] + 864LL) )
  {
    UserSetLastError(1444LL);
    EtwTraceUIPIMsgError(*(_QWORD *)(gptiCurrent + 424LL), v11[53], a2, a3, a4);
    goto LABEL_6;
  }
LABEL_4:
  v12 = v11[53];
  v13 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( v12 != v13 )
  {
    if ( a2 == 717 )
      goto LABEL_6;
    if ( !(unsigned int)IsMessageAllowedByFilterEx(*(void *const **)(v12 + 840), a2, 0LL, 0LL)
      && !(unsigned int)IsMessageAlwaysAllowedAcrossIL(a2)
      && (a2 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792) )
    {
      v17 = *(_QWORD *)v12 == gpepCSRSS ? 0x2000LL : *(_QWORD *)(v12 + 864);
      if ( !(unsigned __int8)CheckAccess(v13 + 864, &v17) )
      {
        EtwTraceUIPIMsgError(v13, v12, a2, a3, a4);
        v15 = 5LL;
        goto LABEL_8;
      }
    }
  }
  v18 = 0LL;
  SetUnavailableInputSource(&v18);
  v10 = PostThreadMessageEx(v11, a2, a3, a4, &v18);
LABEL_6:
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
