/*
 * XREFs of NtUserRegisterBSDRWindow @ 0x1C00F3260
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     IsPrivileged @ 0x1C00DD9E0 (IsPrivileged.c)
 */

__int64 __fastcall NtUserRegisterBSDRWindow(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = a2;
  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  if ( a1 )
  {
    v6 = ValidateHwnd(a1);
    if ( !v6 )
      goto LABEL_8;
  }
  else
  {
    v6 = 0LL;
  }
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogonUI || !gpidLogonUI && (unsigned int)IsPrivileged(psTcb) )
  {
    if ( v6 )
    {
      v8[1] = v6;
      v8[0] = &gspwndBSDR;
      HMAssignmentLock(v8, 0LL);
    }
    if ( (_DWORD)v2 )
    {
      v5 = gptiShutdownWaiter;
      if ( gptiShutdownWaiter )
        PostEventMessageEx(
          gptiShutdownWaiter,
          *(struct tagQ **)(gptiShutdownWaiter + 432LL),
          0x13u,
          0LL,
          0x329u,
          v2,
          0xFFFFFFFFLL,
          0LL);
    }
    v4 = 1LL;
  }
  else
  {
    UserSetLastError(5);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
