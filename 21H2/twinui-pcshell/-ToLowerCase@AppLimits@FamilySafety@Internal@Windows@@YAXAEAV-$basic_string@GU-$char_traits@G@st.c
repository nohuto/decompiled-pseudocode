/*
 * XREFs of ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DCD88
 * Callers:
 *     ?TryGetMainClassNameFromJavaEngineProcess@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x1804CF554 (-TryGetMainClassNameFromJavaEngineProcess@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::ToLowerCase(char *a1)
{
  bool v1; // cf
  char *v2; // rbx
  __int64 result; // rax
  char *v4; // rdx
  __int64 v5; // rsi
  unsigned __int64 v6; // rdi

  v1 = *((_QWORD *)a1 + 3) < 8uLL;
  v2 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    a1 = *(char **)a1;
  result = *((_QWORD *)v2 + 2);
  v4 = &a1[2 * result];
  if ( !v1 )
    v2 = *(char **)v2;
  v5 = 0LL;
  v6 = (unsigned __int64)(v4 - v2 + 1) >> 1;
  if ( v2 > v4 )
    v6 = 0LL;
  if ( v6 )
  {
    do
    {
      result = _o_towlower(*(unsigned __int16 *)v2);
      ++v5;
      *(_WORD *)v2 = result;
      v2 += 2;
    }
    while ( v5 != v6 );
  }
  return result;
}
