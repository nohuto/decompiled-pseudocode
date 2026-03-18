/*
 * XREFs of NtUserShellHandwritingHandleDelegatedInput @ 0x1C01DDAF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C01B62A4 (-_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 */

__int64 __fastcall NtUserShellHandwritingHandleDelegatedInput(_OWORD *a1, unsigned int a2)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  _OWORD v10[4]; // [rsp+28h] [rbp-40h] BYREF

  if ( a2 - 1 <= 2 )
  {
    EnterCrit(0LL, 0LL);
    v8 = gptiCurrent;
    if ( (*(_DWORD *)(gptiCurrent + 1276LL) & 0x40) != 0 )
    {
      if ( a2 == 3 )
      {
        v9 = 1;
      }
      else
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (_OWORD *)MmUserProbeAddress;
        v10[0] = *a1;
        v10[1] = a1[1];
        v10[2] = a1[2];
        v9 = _HandleShellHandwritingDelegatedInput(gptiCurrent, a2, (struct tagMSG *)v10);
      }
    }
    else
    {
      v9 = 0;
      UserSetLastError(5);
    }
    UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
    return v9;
  }
  else
  {
    UserSetLastError(87);
    return 0LL;
  }
}
