/*
 * XREFs of ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x1C01470B0
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0147340 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0009C64 (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPMSLLHOOKSTRUCT(int a1, unsigned __int64 a2, struct tagMSLLHOOKSTRUCT *a3)
{
  __int128 v4; // [rsp+28h] [rbp-30h] BYREF
  __int128 v5; // [rsp+38h] [rbp-20h]

  v4 = 0LL;
  v5 = 0LL;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagMSLLHOOKSTRUCT *)MmUserProbeAddress;
  v4 = *(_OWORD *)a3;
  v5 = *((_OWORD *)a3 + 1);
  return xxxCallNextHookEx(a1, a2, (__int64)&v4);
}
