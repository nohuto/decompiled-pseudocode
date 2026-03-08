/*
 * XREFs of _lambda_97c9cca63d1bce585f2b122b4771693f_::operator() @ 0x1C0125488
 * Callers:
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1C0125298 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall lambda_97c9cca63d1bce585f2b122b4771693f_::operator()(__int64 a1, __int64 a2)
{
  unsigned int i; // r9d
  __int64 j; // rdx
  __int64 v5; // rax
  unsigned int v6; // r10d
  __int64 v7; // rcx

  if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 28) )
    {
      for ( i = 0; i < *(_DWORD *)(a2 + 24); ++i )
      {
        for ( j = *(_QWORD *)(a2 + 8LL * i + 40); j; j = *(_QWORD *)(j + 8) )
        {
          v5 = *(_QWORD *)(j + 88);
          if ( v5 )
          {
            if ( (*(_DWORD *)(v5 + 40) & 0x8000) == 0 )
            {
              v6 = 0;
              for ( *(_BYTE *)(*(_QWORD *)(j + 80) + 12LL) = 1;
                    v6 < *(_DWORD *)(j + 36);
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(j + 200) + 8 * v7) + 16LL) = 0LL )
              {
                v7 = v6++;
              }
            }
          }
        }
      }
    }
  }
}
