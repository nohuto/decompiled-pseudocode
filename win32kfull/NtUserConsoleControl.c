/*
 * XREFs of NtUserConsoleControl @ 0x1C003C4D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0012568 (UserSetLastStatus.c)
 *     xxxConsoleControl @ 0x1C003C5E8 (xxxConsoleControl.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtUserConsoleControl(unsigned int a1, volatile void *a2, unsigned int a3)
{
  __int64 v6; // rcx
  SIZE_T v7; // rsi
  unsigned int v8; // ebx
  __int128 Src; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-28h]

  Src = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( a1 > 6 )
  {
    v8 = -1073741823;
    UserSetLastStatus(-1073741811, 1);
  }
  else if ( a3 > 0x18 )
  {
    v8 = -1073741811;
  }
  else if ( a2 && a3 )
  {
    v7 = a3;
    ProbeForRead(a2, a3, 2u);
    memmove(&Src, (const void *)a2, a3);
    v8 = xxxConsoleControl(a1, &Src, a3);
    ProbeForWrite(a2, v7, 2u);
    memmove((void *)a2, &Src, v7);
  }
  else
  {
    v8 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
