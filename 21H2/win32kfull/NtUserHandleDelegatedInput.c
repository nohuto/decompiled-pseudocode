/*
 * XREFs of NtUserHandleDelegatedInput @ 0x1C01F77A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C0004798 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserHandleDelegatedInput(_OWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  _OWORD v8[4]; // [rsp+28h] [rbp-40h] BYREF

  EnterCrit(0LL, 0LL);
  if ( a2 - 1 <= 2 )
  {
    if ( (*(_DWORD *)(gptiCurrent + 1256LL) & 0x2000) != 0 )
    {
      if ( a2 == 3 )
      {
        v6 = 1;
      }
      else
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (_OWORD *)MmUserProbeAddress;
        v8[0] = *a1;
        v8[1] = a1[1];
        v8[2] = a1[2];
        v6 = _HandleDelegatedInput(gptiCurrent, a2, (struct tagMSG *)v8);
      }
    }
    else
    {
      v6 = 0;
      UserSetLastError(5LL, v4);
    }
  }
  else
  {
    UserSetLastError(87LL, v4);
    v6 = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
