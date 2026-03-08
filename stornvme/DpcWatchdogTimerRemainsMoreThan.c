/*
 * XREFs of DpcWatchdogTimerRemainsMoreThan @ 0x1C0025BD0
 * Callers:
 *     CheckDpcWatchdogTimerExpireSoon @ 0x1C0025AB8 (CheckDpcWatchdogTimerExpireSoon.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003260 (__security_check_cookie.c)
 */

char __fastcall DpcWatchdogTimerRemainsMoreThan(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  bool v6; // dl
  _BYTE v7[8]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  int v9; // [rsp+38h] [rbp-20h]

  if ( !a3 )
  {
    v7[0] = 0;
    StorPortExtendedFunction(109LL, a1, v7, a4);
    if ( v7[0] != 2 )
      return 1;
  }
  v9 = 0;
  v8 = 0LL;
  if ( (unsigned int)StorPortExtendedFunction(106LL, a1, &v8, a4) )
    return 1;
  v6 = 1;
  if ( DWORD2(v8) )
    v6 = 100 * HIDWORD(v8) >= (unsigned int)(5 * DWORD2(v8));
  if ( (_DWORD)v8 )
  {
    if ( 100 * DWORD1(v8) < (unsigned int)(5 * v8) )
      return 0;
  }
  return v6;
}
