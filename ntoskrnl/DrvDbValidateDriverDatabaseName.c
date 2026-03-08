/*
 * XREFs of DrvDbValidateDriverDatabaseName @ 0x140A6ABA4
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x140864BE0 (DrvDbDispatchDriverDatabase.c)
 * Callees:
 *     wcschr @ 0x1403D5D90 (wcschr.c)
 */

__int64 __fastcall DrvDbValidateDriverDatabaseName(__int64 a1, const wchar_t *a2)
{
  unsigned int v2; // edi
  wchar_t *v4; // rax
  const wchar_t *v5; // rax

  v2 = 0;
  if ( *a2 == 64 )
  {
    v4 = wcschr(a2 + 1, 0x3Au);
    if ( v4 )
    {
      v5 = v4 + 1;
      if ( v5 )
      {
        if ( v5 != a2 )
          return (unsigned int)-1073741773;
      }
    }
  }
  if ( wcschr(a2, 0x5Cu) || *a2 == 64 )
    return (unsigned int)-1073741773;
  return v2;
}
