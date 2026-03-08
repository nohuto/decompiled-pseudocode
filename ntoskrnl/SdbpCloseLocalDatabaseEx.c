/*
 * XREFs of SdbpCloseLocalDatabaseEx @ 0x140A4F7D4
 * Callers:
 *     SdbpCleanupLocalDatabaseSupport @ 0x14079C9C0 (SdbpCleanupLocalDatabaseSupport.c)
 *     SdbpOpenLocalDatabaseEx @ 0x140A4F86C (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     SdbCloseDatabaseRead @ 0x14079CA28 (SdbCloseDatabaseRead.c)
 */

__int64 __fastcall SdbpCloseLocalDatabaseEx(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // ebp
  __int64 v6; // rsi
  _QWORD *v7; // rcx

  if ( a3 != 1 && a3 - 3 > 0xC )
    return 0LL;
  v5 = 1 << a3;
  if ( ((1 << a3) & *(_DWORD *)(a1 + 36)) == 0 )
    return 0LL;
  v6 = 32LL * a3;
  if ( (*(_DWORD *)(v6 + a1 + 64) & 2) != 0 )
  {
    v7 = *(_QWORD **)(v6 + a1 + 56);
    if ( v7 )
      SdbCloseDatabaseRead(v7);
  }
  *(_OWORD *)(v6 + a1 + 40) = 0LL;
  *(_OWORD *)(v6 + a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 36) &= ~v5;
  if ( a3 == 1 )
    *(_QWORD *)(a1 + 24) = 0LL;
  return 1LL;
}
