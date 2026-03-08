/*
 * XREFs of CmpLockTwoKcbsShared @ 0x1407ACF00
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1406B40B0 (NtNotifyChangeMultipleKeys.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14074BC50 (CmpFindSubkeyInHashByChildCell.c)
 *     CmQueryMultipleValueKey @ 0x1407A6F60 (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x1407ACAE0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1407AE5C0 (CmQueryKey.c)
 *     CmSaveMergedKeys @ 0x140A09144 (CmSaveMergedKeys.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A14D34 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpGetCorrectKcbLockOrder @ 0x14074BF78 (CmpGetCorrectKcbLockOrder.c)
 *     CmpLockKcbShared @ 0x140AF20D0 (CmpLockKcbShared.c)
 */

__int64 __fastcall CmpLockTwoKcbsShared(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1 != a2 )
      {
        CmpGetCorrectKcbLockOrder(a1, a2, &v3, &v4);
        CmpLockKcbShared(v3);
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
  return CmpLockKcbShared(a1);
}
