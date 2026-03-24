/*
 * XREFs of ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x1C01F5CB0
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0150DB0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0020274 (xxxCallNextHookEx.c)
 */

__int64 __fastcall NtUserfnHkINLPCBTACTIVATESTRUCT(__int64 a1, __int64 a2, struct tagCBTACTIVATESTRUCT *a3)
{
  return xxxCallNextHookEx();
}
