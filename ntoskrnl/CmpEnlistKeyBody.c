/*
 * XREFs of CmpEnlistKeyBody @ 0x14076EBCC
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 * Callees:
 *     CmpIsKeyStackDeleted @ 0x1406B5978 (CmpIsKeyStackDeleted.c)
 *     EnlistKeyBodyWithKCB @ 0x14076EC30 (EnlistKeyBodyWithKCB.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x1407A7560 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpLockKcbExclusive @ 0x1407AF778 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpEnlistKeyBody(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( (*(_DWORD *)(a2 + 184) & 0x400000) == 0 )
  {
    while ( (int)EnlistKeyBodyWithKCB(a1, (unsigned int)(a4 != 0) + 1) < 0 )
    {
      if ( (unsigned __int8)CmpTryConvertKcbLockSharedToExclusive(*(_QWORD *)(a1 + 8)) )
      {
        a4 = 1;
      }
      else
      {
        CmpUnlockKcb(*(_QWORD *)(a1 + 8));
        CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
        a4 = 1;
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 0x20000) != 0 || CmpIsKeyStackDeleted(a5) )
          return (unsigned int)-1073741444;
      }
    }
  }
  return v5;
}
