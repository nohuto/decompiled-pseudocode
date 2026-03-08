/*
 * XREFs of ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z @ 0x1C00D0688
 * Callers:
 *     GetOemBitmapInfoForDpi @ 0x1C00D05EC (GetOemBitmapInfoForDpi.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C01166A8 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 * Callees:
 *     ?UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z @ 0x1C00A41E4 (-UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z.c)
 *     ?ArrangeFrameControls@@YAFHHPEAUOEMBITMAPSET@@@Z @ 0x1C00D07C4 (-ArrangeFrameControls@@YAFHHPEAUOEMBITMAPSET@@@Z.c)
 */

void __fastcall EnsureOemBitmapInfoForDpiSlot(struct OEMBITMAPSET *a1, unsigned int a2)
{
  int updated; // r10d
  int v4; // esi
  char *v5; // rax
  unsigned int v6; // r11d
  __int16 v7; // r13
  __int16 v8; // bx
  __int16 v9; // bp
  __int64 v10; // r15
  __int16 *v11; // rdi
  int v12; // r12d
  __int16 v13; // ax
  int v14; // edx
  int v15; // r8d
  __int16 v16; // r9
  __int16 v17; // ax
  int v18; // r14d
  int v19; // r8d
  int v21; // [rsp+70h] [rbp+18h]
  char *v22; // [rsp+78h] [rbp+20h]

  v21 = 1;
  if ( !*((_DWORD *)a1 + 2) || !*((_DWORD *)a1 + 3) )
  {
    updated = (__int16)UpdateFrameControlMetricsSize(a1, a2);
    v4 = 0x7FFFFFFF;
    v5 = (char *)a1 + 22;
    v6 = 1;
    v22 = (char *)a1 + 22;
    do
    {
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 93LL;
      v11 = (__int16 *)v5;
      do
      {
        v12 = *(v11 - 1);
        if ( *(v11 - 1) )
        {
          v13 = 0;
          v14 = updated * v6;
          v15 = v12 + v8;
          v16 = 0;
          if ( v15 <= (int)(updated * v6) )
            v13 = v8;
          if ( v15 <= v14 )
            v16 = v7;
          v8 = v12 + v13;
          v17 = v9 + v7;
          v7 = *v11;
          if ( v15 <= v14 )
            v17 = v9;
          v9 = v17;
          if ( v16 >= *v11 )
            v7 = v16;
        }
        v11 += 4;
        --v10;
      }
      while ( v10 );
      v5 = v22;
      v18 = v6;
      v19 = v6 * (__int16)(v7 + v9);
      if ( v4 <= v19 )
        v18 = v21;
      ++v6;
      v21 = v18;
      if ( v4 <= v19 )
        v19 = v4;
      v4 = v19;
    }
    while ( v6 <= 5 );
    *((_DWORD *)a1 + 2) = v18 * updated;
    *((_DWORD *)a1 + 3) = ArrangeFrameControls(v18 * updated, 1, a1);
  }
}
