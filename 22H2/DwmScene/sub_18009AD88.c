/*
 * XREFs of sub_18009AD88 @ 0x18009AD88
 * Callers:
 *     sub_180034B50 @ 0x180034B50 (sub_180034B50.c)
 *     sub_180037A70 @ 0x180037A70 (sub_180037A70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009AD88(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 112);
  result = 0LL;
  if ( v1 )
    v3 = *v1;
  else
    v3 = 0LL;
  if ( v3 )
    return *(unsigned int *)(v3 + 8);
  return result;
}
