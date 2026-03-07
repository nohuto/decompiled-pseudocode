void __fastcall CmpUnblockHiveWrites(volatile signed __int32 *P, int a2, volatile signed __int32 *a3)
{
  volatile signed __int32 *v5; // rbx
  __int64 *NextHive; // rax

  v5 = P;
  if ( P )
  {
    HvUnlockHiveFlusherExclusive(P);
  }
  else
  {
    while ( 1 )
    {
      NextHive = CmpGetNextHive(P);
      v5 = (volatile signed __int32 *)NextHive;
      if ( !a2 || (a2 & (_DWORD)NextHive[514]) == a2 || NextHive == (__int64 *)CmpMasterHive )
      {
        HvUnlockHiveFlusherExclusive(NextHive);
        if ( _InterlockedExchangeAdd(v5 + 1058, 0xFFFFFFFF) == 1 )
          CmpDeleteHive(v5);
      }
      if ( v5 == a3 )
        break;
      P = v5;
    }
  }
  if ( _InterlockedExchangeAdd(v5 + 1058, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(v5);
}
