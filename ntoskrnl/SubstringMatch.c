/*
 * XREFs of SubstringMatch @ 0x140A6C2AC
 * Callers:
 *     PropertyEval @ 0x1407622B0 (PropertyEval.c)
 *     StringListElementSubstringMatch @ 0x140A6C1B4 (StringListElementSubstringMatch.c)
 * Callees:
 *     wcsstr @ 0x1403D6020 (wcsstr.c)
 *     _wcsistr @ 0x140A6C33C (_wcsistr.c)
 */

__int64 __fastcall SubstringMatch(const wchar_t *a1, const wchar_t *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  wchar_t *v8; // rax
  wchar_t *v9; // r8
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rcx

  v4 = 0;
  if ( a3 )
    v8 = (wchar_t *)wcsistr();
  else
    v8 = wcsstr(a1, a2);
  v9 = v8;
  if ( v8 )
  {
    if ( a4 == 9 )
    {
      v10 = v8 == a1;
    }
    else if ( a4 == 10 )
    {
      v11 = -1LL;
      v12 = -1LL;
      do
        ++v12;
      while ( v9[v12] );
      do
        ++v11;
      while ( a2[v11] );
      v10 = v12 == v11;
    }
    else
    {
      v10 = a4 == 11;
    }
    if ( v10 )
      return 1;
  }
  return v4;
}
