/*
 * XREFs of NtUserRegisterBSDRWindow @ 0x1C011EE00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsPrivileged @ 0x1C00A2D80 (IsPrivileged.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall NtUserRegisterBSDRWindow(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

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
      v9[1] = v6;
      v9[0] = &gspwndBSDR;
      HMAssignmentLock(v9, 0LL);
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
    UserSetLastError(5LL, v7);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
