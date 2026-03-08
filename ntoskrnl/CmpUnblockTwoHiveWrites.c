/*
 * XREFs of CmpUnblockTwoHiveWrites @ 0x140A10D8C
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x140A1798C (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140A17B40 (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpDeleteHive @ 0x14074C680 (CmpDeleteHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF20B4 (HvUnlockHiveFlusherExclusive.c)
 */

void __fastcall CmpUnblockTwoHiveWrites(volatile signed __int32 *P, volatile signed __int32 *a2)
{
  if ( P )
    HvUnlockHiveFlusherExclusive(P);
  if ( a2 )
    HvUnlockHiveFlusherExclusive(a2);
  if ( P && _InterlockedExchangeAdd(P + 1058, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
  if ( a2 )
  {
    if ( _InterlockedExchangeAdd(a2 + 1058, 0xFFFFFFFF) == 1 )
      CmpDeleteHive(a2);
  }
}
