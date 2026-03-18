/*
 * XREFs of NtUserConsoleControl @ 0x1C00E3140
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C00132A8 (UserSetLastStatus.c)
 *     xxxConsoleControl @ 0x1C00E3258 (xxxConsoleControl.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 */

__int64 __fastcall NtUserConsoleControl(unsigned int a1, volatile void *a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  SIZE_T v10; // rsi
  unsigned int v11; // ebx
  __int128 Src; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]

  Src = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( a1 > 6 )
  {
    v11 = -1073741823;
    UserSetLastStatus(-1073741811, 1);
  }
  else if ( a3 > 0x18 )
  {
    v11 = -1073741811;
  }
  else if ( a2 && a3 )
  {
    v10 = a3;
    ProbeForRead(a2, a3, 2u);
    memmove(&Src, (const void *)a2, a3);
    v11 = xxxConsoleControl(a1, &Src, a3);
    ProbeForWrite(a2, v10, 2u);
    memmove((void *)a2, &Src, v10);
  }
  else
  {
    v11 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v11;
}
