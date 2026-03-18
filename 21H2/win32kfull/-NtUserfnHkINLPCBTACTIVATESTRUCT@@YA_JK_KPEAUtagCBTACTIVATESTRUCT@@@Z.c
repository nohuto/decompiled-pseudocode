/*
 * XREFs of ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x1C01F0A50
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C01406C0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C00EA54C (xxxCallNextHookEx.c)
 */

__int64 __fastcall NtUserfnHkINLPCBTACTIVATESTRUCT(
        unsigned int a1,
        unsigned __int64 a2,
        struct tagCBTACTIVATESTRUCT *a3)
{
  __int64 v4[2]; // [rsp+28h] [rbp-20h] BYREF

  *(_OWORD *)v4 = 0LL;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagCBTACTIVATESTRUCT *)MmUserProbeAddress;
  *(_OWORD *)v4 = *(_OWORD *)a3;
  return xxxCallNextHookEx(a1, a2, (__int64)v4);
}
