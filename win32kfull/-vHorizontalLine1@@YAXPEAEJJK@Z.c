/*
 * XREFs of ?vHorizontalLine1@@YAXPEAEJJK@Z @ 0x1C02FE140
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

void __fastcall vHorizontalLine1(unsigned __int8 *a1, int a2, int a3, unsigned __int8 a4)
{
  unsigned int v5; // edi
  unsigned __int8 *v6; // rsi
  int v7; // r8d
  unsigned int v8; // eax
  __int64 v9; // rbx

  v5 = a3 - a2;
  if ( a3 != a2 )
  {
    v6 = &a1[(__int64)a2 >> 3];
    v7 = a2 & 7;
    if ( (a2 & 7) != 0 )
    {
      if ( v5 < 8 - v7 )
      {
        *v6 = (255 >> v7) & (-1 << (8 - v7 - v5)) & a4 | *v6 & ~((255 >> v7) & (-1 << (8 - v7 - v5)));
        return;
      }
      *v6 = (255 >> v7) & a4 | *v6 & ~(255 >> v7);
      ++v6;
      v5 = v7 + v5 - 8;
    }
    v8 = v5 >> 3;
    if ( v5 >> 3 )
    {
      v9 = v8;
      memset_0(v6, a4, v8);
      v6 += v9;
      v5 &= 7u;
    }
    if ( v5 )
      *v6 = (255 >> v5) & *v6 | a4 & ~(255 >> v5);
  }
}
