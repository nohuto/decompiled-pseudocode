/*
 * XREFs of CmpBlockHiveWrites @ 0x140A10B04
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x1407B6770 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x140A17568 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A17764 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     CmpGetNextHive @ 0x1406BE36C (CmpGetNextHive.c)
 *     CmpDeleteHive @ 0x14074C680 (CmpDeleteHive.c)
 *     CmpReferenceHive @ 0x1407AB230 (CmpReferenceHive.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF2098 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpBlockHiveWrites(__int64 *a1, int a2, volatile signed __int32 **a3)
{
  volatile signed __int32 *i; // rcx
  __int64 *NextHive; // rax
  volatile signed __int32 *v8; // rbx

  for ( i = 0LL; ; i = v8 )
  {
    NextHive = CmpGetNextHive(i);
    v8 = (volatile signed __int32 *)NextHive;
    if ( !NextHive )
      return a1 != 0LL ? 0xC0000034 : 0;
    if ( a1 == NextHive || !a1 )
    {
      if ( !a2 || (a2 & (_DWORD)NextHive[514]) == a2 || NextHive == (__int64 *)CmpMasterHive )
      {
        CmpReferenceHive((__int64)NextHive);
        if ( a3 )
          *a3 = v8;
        HvLockHiveFlusherExclusive(v8);
      }
      if ( a1 == (__int64 *)v8 )
        break;
    }
  }
  if ( _InterlockedExchangeAdd(v8 + 1058, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(v8);
  return 0LL;
}
