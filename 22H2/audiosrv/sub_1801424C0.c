/*
 * XREFs of sub_1801424C0 @ 0x1801424C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1801424C0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 *i; // rcx

  result = 0LL;
  if ( !a3 || !a2 )
    return 2147500035LL;
  *a3 = 0;
  for ( i = *(__int64 **)(a1 + 24); i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == *(_DWORD *)(a2 + 4) )
      goto LABEL_9;
  }
  i = 0LL;
LABEL_9:
  if ( i )
    *a3 = 1;
  return result;
}
