/*
 * XREFs of CmpUnlockTwoKcbs @ 0x1406DBDC4
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1406CFBE8 (CmQueryMultipleValueKey.c)
 *     CmQueryKey @ 0x1406D7280 (CmQueryKey.c)
 *     CmEnumerateKey @ 0x1406DC4F0 (CmEnumerateKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140767040 (NtNotifyChangeMultipleKeys.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407697F0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmSaveMergedKeys @ 0x140A0BE34 (CmSaveMergedKeys.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A17A84 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpGetCorrectKcbLockOrder @ 0x14076AC78 (CmpGetCorrectKcbLockOrder.c)
 *     CmpUnlockKcb @ 0x140AF65A0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpUnlockTwoKcbs(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v3 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1 != a2 )
      {
        CmpGetCorrectKcbLockOrder(a1, a2, &v4, &v3);
        CmpUnlockKcb(v3);
        a1 = v4;
      }
    }
  }
  else
  {
    if ( !a2 )
      return result;
    a1 = a2;
  }
  return CmpUnlockKcb(a1);
}
