/*
 * XREFs of sub_1800F4CBC @ 0x1800F4CBC
 * Callers:
 *     sub_1800661E0 @ 0x1800661E0 (sub_1800661E0.c)
 *     sub_1800F23A0 @ 0x1800F23A0 (sub_1800F23A0.c)
 *     sub_1800F3EAC @ 0x1800F3EAC (sub_1800F3EAC.c)
 *     sub_1800F4CBC @ 0x1800F4CBC (sub_1800F4CBC.c)
 *     sub_180138D68 @ 0x180138D68 (sub_180138D68.c)
 *     sub_180138FF0 @ 0x180138FF0 (sub_180138FF0.c)
 *     sub_180140DD4 @ 0x180140DD4 (sub_180140DD4.c)
 *     sub_180141540 @ 0x180141540 (sub_180141540.c)
 *     sub_1801419F8 @ 0x1801419F8 (sub_1801419F8.c)
 * Callees:
 *     sub_1800524BC @ 0x1800524BC (sub_1800524BC.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800F4CBC @ 0x1800F4CBC (sub_1800F4CBC.c)
 */

void __fastcall sub_1800F4CBC(__int64 a1)
{
  _QWORD *v2; // rcx
  bool v3; // zf
  __int64 v4; // rax
  _QWORD *v5; // rcx

  if ( *(_QWORD *)(a1 + 16) )
  {
    do
    {
      v2 = *(_QWORD **)a1;
      if ( !*(_QWORD *)a1 )
        sub_1800B8610(-2147467259);
      *(_QWORD *)a1 = *v2;
      *v2 = *(_QWORD *)(a1 + 32);
      v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
      v4 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 32) = v2;
      if ( v3 )
      {
        sub_1800F4CBC(a1);
        v4 = *(_QWORD *)(a1 + 16);
      }
    }
    while ( v4 );
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = *(_QWORD **)(a1 + 24);
  if ( v5 )
  {
    sub_1800524BC(v5);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
