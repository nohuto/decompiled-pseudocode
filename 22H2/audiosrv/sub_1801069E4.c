/*
 * XREFs of sub_1801069E4 @ 0x1801069E4
 * Callers:
 *     sub_180106DAC @ 0x180106DAC (sub_180106DAC.c)
 *     sub_180106EC4 @ 0x180106EC4 (sub_180106EC4.c)
 *     sub_180108588 @ 0x180108588 (sub_180108588.c)
 *     sub_180109280 @ 0x180109280 (sub_180109280.c)
 * Callees:
 *     sub_180106A68 @ 0x180106A68 (sub_180106A68.c)
 */

__int64 __fastcall sub_1801069E4(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx

  v2 = a1 + 232;
  result = 0LL;
  if ( *(_QWORD *)(a1 + 304) )
    result = sub_180106A68(a1 + 232);
  while ( result && *(_DWORD *)(result + 52) != a2 )
  {
    v5 = *(_QWORD *)(v2 + 72);
    result = 0LL;
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 104);
      if ( !v6 )
      {
        v7 = (unsigned int)(*(_DWORD *)(v5 + 112) % *(_DWORD *)(v2 + 16) + 1);
        do
        {
          if ( (unsigned int)v7 >= *(_DWORD *)(v2 + 16) )
            break;
          if ( *(_QWORD *)(*(_QWORD *)v2 + 8 * v7) )
            v6 = *(_QWORD *)(*(_QWORD *)v2 + 8 * v7);
          v7 = (unsigned int)(v7 + 1);
        }
        while ( !v6 );
      }
      *(_QWORD *)(v2 + 72) = v6;
      result = v5 + 8;
    }
  }
  return result;
}
