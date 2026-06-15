/*
 * XREFs of sub_1800356E8 @ 0x1800356E8
 * Callers:
 *     sub_180035610 @ 0x180035610 (sub_180035610.c)
 *     sub_18004FEF0 @ 0x18004FEF0 (sub_18004FEF0.c)
 *     sub_18007D060 @ 0x18007D060 (sub_18007D060.c)
 *     sub_1800B7CAC @ 0x1800B7CAC (sub_1800B7CAC.c)
 *     sub_1800B8C28 @ 0x1800B8C28 (sub_1800B8C28.c)
 *     sub_1800BB014 @ 0x1800BB014 (sub_1800BB014.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800B8C28 @ 0x1800B8C28 (sub_1800B8C28.c)
 */

__int64 __fastcall sub_1800356E8(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx
  __int64 result; // rax

  for ( ; *(_QWORD *)(a1 + 16); result = sub_1800B8C28(a1) )
  {
    if ( !*(_QWORD *)a1 )
      sub_1800B8610(2147500037LL);
    *(_QWORD *)a1 = **(_QWORD **)a1;
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v2 = *(_QWORD **)(a1 + 24);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      result = _o_free(v2);
      v2 = v3;
    }
    while ( v3 );
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
