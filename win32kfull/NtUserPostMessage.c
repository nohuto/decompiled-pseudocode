__int64 __fastcall NtUserPostMessage(unsigned __int64 a1, unsigned int a2, unsigned __int64 a3, volatile void *a4)
{
  __int64 v4; // rbx
  __int16 *v8; // rcx
  int v9; // edi
  __int64 v10; // rsi
  BOOL v11; // ebp
  __int64 v12; // r14
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v14; // rbp
  struct tagQMSG *v15; // rax
  void *const *WindowMessageFilter; // rax
  int v18; // ecx
  __int64 v20; // rdx
  __int64 v21; // [rsp+50h] [rbp-38h] BYREF

  v4 = a2;
  EnterCrit(0LL, 1LL);
  if ( (v4 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    v9 = 0;
    goto LABEL_25;
  }
  if ( (unsigned int)v4 < 0x400 )
  {
    v8 = MessageTable;
    if ( _bittest16(&MessageTable[v4], 0xDu) )
    {
      v9 = 0;
      v18 = 5;
      goto LABEL_36;
    }
  }
  v9 = 0;
  if ( a1 >= 0x10000 && a1 != -1LL )
    goto LABEL_6;
  if ( !a1 )
  {
    v10 = 0LL;
    goto LABEL_7;
  }
  if ( a1 == 0xFFFF || a1 == -1LL )
  {
    v10 = -1LL;
  }
  else
  {
LABEL_6:
    v10 = ValidateHwnd(a1);
    if ( !v10 )
    {
      if ( (_DWORD)v4 == 993 )
        v9 = 1;
      goto LABEL_25;
    }
  }
LABEL_7:
  if ( (_DWORD)v4 == 576 )
  {
    if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v9 = ForwardTouchMessage(gptiCurrent, a4, 1, 0LL, 0, 0LL);
      goto LABEL_25;
    }
    v18 = 1400;
    goto LABEL_36;
  }
  if ( (((_DWORD)v4 - 281) & 0xFFFFFFFD) == 0
    || (unsigned int)(v4 - 577) <= 3
    || (unsigned int)(v4 - 581) <= 0x12 && (_DWORD)v4 != 589 )
  {
    v18 = 1002;
    goto LABEL_36;
  }
  v11 = 0;
  if ( (unsigned int)(v4 - 992) <= 8 )
    v11 = ValidateDDEConvPair(a3, v10) != 0;
  if ( (_DWORD)v4 == 274 && a3 == 61488 )
  {
    if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
      v11 = 1;
  }
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !v11 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL);
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v8);
    v14 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
      v14 = 0LL;
    if ( (_QWORD *)v12 != v14 )
    {
      if ( (_DWORD)v4 == 717 )
        goto LABEL_25;
      if ( !(unsigned int)IsMessageAllowedByFilterEx(*(void *const **)(v12 + 840), v4, 0LL, 0LL) )
      {
        WindowMessageFilter = GetWindowMessageFilter((struct tagWND *)v10);
        if ( !(unsigned int)IsMessageAllowedByFilterEx(WindowMessageFilter, v4, 0LL, 0LL)
          && !(unsigned int)IsMessageAlwaysAllowedAcrossIL(v4)
          && ((_DWORD)v4 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792) )
        {
          v21 = *(_QWORD *)v12 == gpepCSRSS ? 0x2000LL : *(_QWORD *)(v12 + 864);
          if ( !(unsigned __int8)CheckAccess(v14 + 108, &v21) )
          {
            if ( (_DWORD)v4 != 793
              || (v20 = *(_QWORD *)(v10 + 16), *(_QWORD *)(v20 + 1432) != v10)
              || *(_QWORD *)(v20 + 432) != *(_QWORD *)(gptiCurrent + 432LL) )
            {
              EtwTraceUIPIMsgError(v14, v12, (unsigned int)v4, a3, a4);
              v18 = 5;
LABEL_36:
              UserSetLastError(v18);
              goto LABEL_25;
            }
          }
        }
      }
    }
  }
  v15 = _PostTransformableMessageExtended((struct tagWND *)v10, v4, a3, (__int64)a4, 0LL, 1);
  v8 = (__int16 *)MmSystemRangeStart;
  if ( v15 >= MmSystemRangeStart )
  {
    if ( v15 )
      v9 = 1;
    LODWORD(v15) = v9;
  }
  v9 = (int)v15;
LABEL_25:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
