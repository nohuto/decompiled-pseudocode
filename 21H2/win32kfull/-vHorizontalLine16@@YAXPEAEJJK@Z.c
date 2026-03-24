/*
 * XREFs of ?vHorizontalLine16@@YAXPEAEJJK@Z @ 0x1C02D4F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vHorizontalLine16(unsigned __int8 *a1, int a2, int a3, unsigned int a4)
{
  unsigned __int8 *v4; // r10
  unsigned int v5; // r11d
  unsigned int v6; // ebx
  void *v7; // rsi
  unsigned __int64 v8; // r8

  v4 = &a1[2 * a2];
  v5 = a3 - a2;
  if ( a3 != a2 )
  {
    if ( (a2 & 1) != 0 )
    {
      *(_WORD *)v4 = a4;
      v4 += 2;
      --v5;
    }
    v6 = v5 >> 1;
    if ( !(v5 >> 1) )
      goto LABEL_11;
    v7 = v4;
    v8 = v6 & 0x3FFFFFFF;
    if ( (v6 & 0x3FFFFFFF) == 0 )
      goto LABEL_11;
    if ( ((unsigned __int8)v4 & 4) != 0 )
    {
      *(_DWORD *)v4 = a4;
      if ( !--v8 )
      {
LABEL_11:
        if ( (v5 & 1) != 0 )
          *(_WORD *)&v4[4 * v6] = a4;
        return;
      }
      v7 = v4 + 4;
    }
    memset64(v7, a4 | ((unsigned __int64)a4 << 32), v8 >> 1);
    if ( (v8 & 1) != 0 )
      *((_DWORD *)v7 + v8 - 1) = a4;
    goto LABEL_11;
  }
}
