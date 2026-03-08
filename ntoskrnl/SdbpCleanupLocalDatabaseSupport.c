/*
 * XREFs of SdbpCleanupLocalDatabaseSupport @ 0x14079C9C0
 * Callers:
 *     SdbReleaseDatabase @ 0x14079C878 (SdbReleaseDatabase.c)
 * Callees:
 *     SdbpCloseLocalDatabaseEx @ 0x140A4F7D4 (SdbpCloseLocalDatabaseEx.c)
 */

__int64 __fastcall SdbpCleanupLocalDatabaseSupport(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int i; // edi

  v2 = *(_DWORD *)(a1 + 36);
  if ( (v2 & 0xFFF8) != 0 )
  {
    for ( i = 3; i < 0x10; ++i )
    {
      if ( _bittest(&v2, i) )
      {
        SdbpCloseLocalDatabaseEx(a1, a2, i);
        v2 = *(_DWORD *)(a1 + 36);
      }
    }
  }
  if ( *(_QWORD *)(a1 + 24) )
    SdbpCloseLocalDatabaseEx(a1, a2, 1LL);
  return 1LL;
}
