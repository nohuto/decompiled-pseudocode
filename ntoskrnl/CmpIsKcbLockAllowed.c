/*
 * XREFs of CmpIsKcbLockAllowed @ 0x14074BF34
 * Callers:
 *     CmpFindSubkeyInHashByChildCell @ 0x14074BC50 (CmpFindSubkeyInHashByChildCell.c)
 * Callees:
 *     CmpGetCorrectKcbLockOrder @ 0x14074BF78 (CmpGetCorrectKcbLockOrder.c)
 */

bool __fastcall CmpIsKcbLockAllowed(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  *a3 = 0;
  if ( a1 == a2 )
  {
    *a3 = 1;
    return 1;
  }
  else
  {
    CmpGetCorrectKcbLockOrder(a1, a2, &v6, &v5);
    return v5 == a2;
  }
}
