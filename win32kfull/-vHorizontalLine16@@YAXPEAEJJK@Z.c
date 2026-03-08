/*
 * XREFs of ?vHorizontalLine16@@YAXPEAEJJK@Z @ 0x1C02FE0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vHorizontalLine16(unsigned __int8 *a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4; // r8d
  unsigned __int8 *v5; // r10
  __int64 v6; // r11
  unsigned __int64 v7; // rbx
  void *v8; // rsi

  v4 = a3 - a2;
  if ( v4 )
  {
    v5 = &a1[2 * a2];
    if ( (a2 & 1) != 0 )
    {
      *(_WORD *)v5 = a4;
      v5 += 2;
      --v4;
    }
    v6 = v4 >> 1;
    if ( !(v4 >> 1) )
      goto LABEL_10;
    v7 = (unsigned int)v6;
    v8 = v5;
    if ( ((unsigned __int8)v5 & 4) != 0 )
    {
      *(_DWORD *)v5 = a4;
      v7 = (unsigned int)v6 - 1LL;
      if ( (unsigned int)v6 == 1LL )
      {
LABEL_10:
        if ( (v4 & 1) != 0 )
          *(_WORD *)&v5[4 * v6] = a4;
        return;
      }
      v8 = v5 + 4;
    }
    memset64(v8, a4 | ((unsigned __int64)a4 << 32), v7 >> 1);
    if ( (v7 & 1) != 0 )
      *((_DWORD *)v8 + v7 - 1) = a4;
    goto LABEL_10;
  }
}
