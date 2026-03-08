/*
 * XREFs of NtUserHandleDelegatedInput @ 0x1C0147BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C00148B0 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall NtUserHandleDelegatedInput(_OWORD *a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  _OWORD v7[4]; // [rsp+28h] [rbp-40h] BYREF

  EnterCrit(0LL, 0LL);
  if ( a2 - 1 <= 2 )
  {
    if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x2000) != 0 )
    {
      if ( a2 == 3 )
      {
        v5 = 1;
      }
      else
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (_OWORD *)MmUserProbeAddress;
        v7[0] = *a1;
        v7[1] = a1[1];
        v7[2] = a1[2];
        v5 = _HandleDelegatedInput(gptiCurrent, a2, (struct tagMSG *)v7);
      }
    }
    else
    {
      v5 = 0;
      UserSetLastError(5);
    }
  }
  else
  {
    UserSetLastError(87);
    v5 = 0;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
