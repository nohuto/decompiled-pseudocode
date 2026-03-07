__int64 __fastcall NtUserShellHandwritingHandleDelegatedInput(_OWORD *a1, unsigned int a2)
{
  __int64 v5; // rcx
  int v6; // ebx
  _OWORD v7[4]; // [rsp+28h] [rbp-40h] BYREF

  if ( a2 - 1 <= 2 )
  {
    EnterCrit(0LL, 0LL);
    if ( (*(_DWORD *)(gptiCurrent + 1276LL) & 0x40) != 0 )
    {
      if ( a2 == 3 )
      {
        v6 = 1;
      }
      else
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (_OWORD *)MmUserProbeAddress;
        v7[0] = *a1;
        v7[1] = a1[1];
        v7[2] = a1[2];
        v6 = _HandleShellHandwritingDelegatedInput(gptiCurrent, a2, (struct tagMSG *)v7);
      }
    }
    else
    {
      v6 = 0;
      UserSetLastError(5);
    }
    UserSessionSwitchLeaveCrit(v5);
    return v6;
  }
  else
  {
    UserSetLastError(87);
    return 0LL;
  }
}
