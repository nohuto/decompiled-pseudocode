// write access to const memory has been detected, the output may be wrong!
__int64 zzzCancelJournalling()
{
  __int64 v0; // rcx
  __int64 GlobalValid; // rdi
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 Valid; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx

  ForceResetMouseButtonsDownState();
  ++gdwDeferWinEvent;
  GlobalValid = PhkFirstGlobalValid(gptiRit, 1LL);
  if ( GlobalValid )
  {
    do
    {
      v7 = *(_QWORD *)(GlobalValid + 16);
      if ( v7 )
      {
        PostThreadMessage(*(_QWORD *)(GlobalValid + 16), 75LL, 0LL);
        SendMsgCleanup(v7);
      }
      Valid = PhkNextValid(GlobalValid);
      zzzUnhookWindowsHookEx((struct tagHOOK *)GlobalValid);
      GlobalValid = Valid;
    }
    while ( Valid );
  }
  zzzEndDeferWinEventNotify(v0);
  ++gdwDeferWinEvent;
  v3 = PhkFirstGlobalValid(gptiRit, 0LL);
  if ( v3 )
  {
    do
    {
      v9 = *(_QWORD *)(v3 + 16);
      if ( v9 )
      {
        PostThreadMessage(*(_QWORD *)(v3 + 16), 75LL, 0LL);
        SendMsgCleanup(v9);
      }
      v10 = PhkNextValid(v3);
      zzzUnhookWindowsHookEx((struct tagHOOK *)v3);
      v3 = v10;
    }
    while ( v10 );
  }
  zzzEndDeferWinEventNotify(v2);
  gppiLockSFW = 0LL;
  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    v5 = *(_QWORD *)(grpdeskRitInput + 8LL);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 24);
      if ( v6 )
      {
        result = *(_QWORD *)(v6 + 40);
        if ( (*(_BYTE *)(result + 31) & 8) != 0 )
          return SetOrClrWF(0LL, v6, 3848LL, 1LL);
      }
    }
  }
  return result;
}
