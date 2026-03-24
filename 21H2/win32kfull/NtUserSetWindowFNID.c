/*
 * XREFs of NtUserSetWindowFNID @ 0x1C0035690
 * Callers:
 *     <none>
 * Callees:
 *     ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z @ 0x1C0033CBC (--9-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C00388DC (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetWindowFNID(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  int v11; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v5 = *(_QWORD *)(v7 + 16);
    if ( *(_QWORD *)(v5 + 424) != CurrentProcessWin32Process )
    {
      v9 = 5LL;
LABEL_4:
      UserSetLastError(v9);
      goto LABEL_16;
    }
    if ( a2 != 0x4000 )
    {
      if ( (unsigned int)IsWindowBeingDestroyed(v7) )
      {
LABEL_7:
        v9 = 87LL;
        goto LABEL_4;
      }
      if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
      {
        if ( a2 != 681 )
          goto LABEL_7;
      }
      else if ( (unsigned __int16)(a2 - 673) > 9u )
      {
        goto LABEL_7;
      }
      if ( (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFF) != 0 )
        goto LABEL_7;
      v11 = 0;
      if ( tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(v7 + 321, &v11) )
      {
        v11 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8211LL);
        goto LABEL_7;
      }
    }
    v6 = 1LL;
    *(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) |= a2;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
