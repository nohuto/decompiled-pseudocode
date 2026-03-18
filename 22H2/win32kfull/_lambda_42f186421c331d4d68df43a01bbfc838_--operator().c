/*
 * XREFs of _lambda_42f186421c331d4d68df43a01bbfc838_::operator() @ 0x1C013FD78
 * Callers:
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1C0086ACC (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 * Callees:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013E750 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

void __fastcall lambda_42f186421c331d4d68df43a01bbfc838_::operator()(__int64 a1, __int64 a2)
{
  __int64 i; // rdi
  struct PFF *j; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct PFF *v8; // rax

  if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 28) )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 24); i = (unsigned int)(i + 1) )
      {
        for ( j = *(struct PFF **)(a2 + 8 * i + 40); ; j = (struct PFF *)*((_QWORD *)v8 + 1) )
        {
          v8 = SkipInvalidPff(j);
          if ( !v8 )
            break;
          v5 = *((_QWORD *)v8 + 11);
          if ( v5 )
          {
            if ( (*(_DWORD *)(v5 + 40) & 0x8000) == 0 )
            {
              v6 = 0LL;
              for ( *(_BYTE *)(*((_QWORD *)v8 + 10) + 12LL) = 1;
                    (unsigned int)v6 < *((_DWORD *)v8 + 9);
                    *(_QWORD *)(v7 + 16) = 0LL )
              {
                v7 = *(_QWORD *)(*((_QWORD *)v8 + 25) + 8 * v6);
                v6 = (unsigned int)(v6 + 1);
              }
            }
          }
        }
      }
    }
  }
}
