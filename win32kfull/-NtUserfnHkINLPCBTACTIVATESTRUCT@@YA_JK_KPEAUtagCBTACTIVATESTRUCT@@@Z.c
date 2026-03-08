/*
 * XREFs of ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x1C01CD20C
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0147340 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0009C64 (xxxCallNextHookEx.c)
 */

__int64 __fastcall NtUserfnHkINLPCBTACTIVATESTRUCT(int a1, unsigned __int64 a2, struct tagCBTACTIVATESTRUCT *a3)
{
  __int128 v4; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0LL;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagCBTACTIVATESTRUCT *)MmUserProbeAddress;
  v4 = *(_OWORD *)a3;
  return xxxCallNextHookEx(a1, a2, (__int64)&v4);
}
