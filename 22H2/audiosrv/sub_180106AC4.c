/*
 * XREFs of sub_180106AC4 @ 0x180106AC4
 * Callers:
 *     sub_180108CC0 @ 0x180108CC0 (sub_180108CC0.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_180106AC4(__int64 a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v4; // r8
  __int64 v5; // rdx

  v2 = *a2;
  if ( !*a2 )
    sub_1800B8610(-2147467259);
  v4 = *(_QWORD *)(v2 + 40);
  if ( !v4 )
  {
    v5 = (unsigned int)(*(_DWORD *)(v2 + 48) % *(_DWORD *)(a1 + 16) + 1);
    do
    {
      if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 16) )
        break;
      if ( *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) )
        v4 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
      v5 = (unsigned int)(v5 + 1);
    }
    while ( !v4 );
  }
  *a2 = v4;
  return v2 + 8;
}
