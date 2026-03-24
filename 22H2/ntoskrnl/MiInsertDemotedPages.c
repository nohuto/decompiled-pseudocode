/*
 * XREFs of MiInsertDemotedPages @ 0x1402EF170
 * Callers:
 *     MiDemoteLocalLargePage @ 0x140231A80 (MiDemoteLocalLargePage.c)
 *     MiGetLargePage @ 0x1402840B4 (MiGetLargePage.c)
 *     MiDemoteLargeFreePage @ 0x1402EF04C (MiDemoteLargeFreePage.c)
 * Callees:
 *     MiInsertLargePageChain @ 0x14027EE04 (MiInsertLargePageChain.c)
 */

void __fastcall MiInsertDemotedPages(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5)
{
  int v8; // ebx
  unsigned int v9; // edi

  if ( a3 != a4 )
  {
    v8 = 0;
    do
    {
      v9 = a3 + 1;
      if ( a3 + 1 == a4 )
        v8 = 1;
      MiInsertLargePageChain(a1, a2, a5, a3, v8);
      a3 = v9;
    }
    while ( v9 != a4 );
  }
}
