/*
 * XREFs of ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x1C01F0F0C
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C01406C0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C00EA54C (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPRECT(unsigned int a1, unsigned __int64 a2, struct tagRECT *a3)
{
  __int64 v4[2]; // [rsp+28h] [rbp-20h] BYREF

  *(_OWORD *)v4 = 0LL;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagRECT *)MmUserProbeAddress;
  *(struct tagRECT *)v4 = *a3;
  return xxxCallNextHookEx(a1, a2, (__int64)v4);
}
