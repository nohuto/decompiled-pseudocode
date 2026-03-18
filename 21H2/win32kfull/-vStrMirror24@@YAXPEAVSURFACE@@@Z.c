/*
 * XREFs of ?vStrMirror24@@YAXPEAVSURFACE@@@Z @ 0x1C02C2B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStrMirror24(struct SURFACE *a1)
{
  __int16 *v2; // r9
  int v3; // r10d
  __int64 i; // r11
  __int16 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int16 v8; // cx
  char v9; // dl

  v2 = (__int16 *)*((_QWORD *)a1 + 10);
  v3 = 0;
  for ( i = (unsigned int)(*((_DWORD *)a1 + 14) / 2);
        v3 < *((_DWORD *)a1 + 15);
        v2 = (__int16 *)((char *)v2 + *((int *)a1 + 22)) )
  {
    v5 = v2;
    v6 = (__int64)&v2[*((int *)a1 + 14) - 1] + *((int *)a1 + 14) - 1;
    if ( (int)i > 0 )
    {
      v7 = i;
      do
      {
        v8 = *v5;
        v9 = *((_BYTE *)v5 + 2);
        *v5 = *(_WORD *)v6;
        v5 = (__int16 *)((char *)v5 + 3);
        *((_BYTE *)v5 - 1) = *(_BYTE *)(v6 + 2);
        *(_WORD *)v6 = v8;
        *(_BYTE *)(v6 + 2) = v9;
        v6 -= 3LL;
        --v7;
      }
      while ( v7 );
    }
    ++v3;
  }
}
