/*
 * XREFs of NtUserHandleDelegatedInput @ 0x1C01548F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C0015660 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserHandleDelegatedInput(_OWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  _OWORD v10[4]; // [rsp+28h] [rbp-40h] BYREF

  EnterCrit(0LL, 0LL);
  if ( a2 - 1 <= 2 )
  {
    v7 = gptiCurrent;
    if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x2000) != 0 )
    {
      if ( a2 == 3 )
      {
        v8 = 1;
      }
      else
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (_OWORD *)MmUserProbeAddress;
        v10[0] = *a1;
        v10[1] = a1[1];
        v10[2] = a1[2];
        v8 = _HandleDelegatedInput(gptiCurrent, a2, (struct tagMSG *)v10);
      }
    }
    else
    {
      v8 = 0;
      UserSetLastError(5);
    }
  }
  else
  {
    UserSetLastError(87);
    v8 = 0;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
