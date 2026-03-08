/*
 * XREFs of MiYieldPageTableWalk @ 0x1402D4558
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x140223160 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x1402D45CC (MiReleaseWalkLocks.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiYieldPageTableWalk(__int64 a1, int a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  char v5; // cl
  int v6; // edi

  v2 = *(__int64 (__fastcall **)(__int64))(a1 + 160);
  v5 = *(_BYTE *)(a1 + 4) | 2;
  *(_BYTE *)(a1 + 4) = v5;
  if ( v2 )
  {
    v6 = v2(a1);
  }
  else
  {
    v6 = 0;
    if ( *(_BYTE *)(a1 + 7) == 17 )
    {
      *(_BYTE *)(a1 + 4) = v5 & 0xFD;
      return 0LL;
    }
  }
  *(_BYTE *)(a1 + 4) &= ~2u;
  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 && v6 < 4 )
  {
    if ( a2 )
      MiReleaseWalkLocks(a1);
  }
  return (unsigned int)v6;
}
