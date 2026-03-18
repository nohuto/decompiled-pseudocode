/*
 * XREFs of CcCoalescingCallBack @ 0x140535550
 * Callers:
 *     <none>
 * Callees:
 *     CcForEachPartition @ 0x140310BEC (CcForEachPartition.c)
 */

LONG_PTR __fastcall CcCoalescingCallBack(int a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  return CcForEachPartition(
           (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))CcCoalescingCallBackHelper,
           (__int64)&v2,
           0,
           0);
}
