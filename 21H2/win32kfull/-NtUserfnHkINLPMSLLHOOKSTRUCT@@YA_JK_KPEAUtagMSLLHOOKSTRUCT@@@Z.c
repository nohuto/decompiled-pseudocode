/*
 * XREFs of ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x1C01F0E84
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C01406C0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C00EA54C (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPMSLLHOOKSTRUCT(unsigned int a1, unsigned __int64 a2, struct tagMSLLHOOKSTRUCT *a3)
{
  __int64 v4[2]; // [rsp+28h] [rbp-30h] BYREF
  __int128 v5; // [rsp+38h] [rbp-20h]

  *(_OWORD *)v4 = 0LL;
  v5 = 0LL;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagMSLLHOOKSTRUCT *)MmUserProbeAddress;
  *(_OWORD *)v4 = *(_OWORD *)a3;
  v5 = *((_OWORD *)a3 + 1);
  return xxxCallNextHookEx(a1, a2, (__int64)v4);
}
