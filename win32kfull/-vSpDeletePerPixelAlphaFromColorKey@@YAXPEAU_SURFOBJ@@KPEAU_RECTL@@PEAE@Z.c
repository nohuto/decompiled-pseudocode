/*
 * XREFs of ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x1C0283440
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C012AFAC (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1C0282F08 (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0083D50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 */

void __fastcall vSpDeletePerPixelAlphaFromColorKey(struct _SURFOBJ *a1, int a2, struct _RECTL *a3, unsigned __int8 *a4)
{
  int v7; // r15d
  LONG cy; // r8d
  LONG cx; // r14d
  int v10; // edx
  int v11; // eax
  LONG lDelta; // r13d
  int v13; // r14d
  int v14; // r8d
  int v15; // r11d
  char *i; // r10
  int v17; // r9d
  char *v18; // rdx
  int v19; // eax
  __int64 v20; // [rsp+28h] [rbp-60h] BYREF
  LONG v21; // [rsp+30h] [rbp-58h]
  LONG v22; // [rsp+34h] [rbp-54h]
  int v23; // [rsp+38h] [rbp-50h]
  LONG v24; // [rsp+3Ch] [rbp-4Ch]
  int v25; // [rsp+40h] [rbp-48h]
  char *v26; // [rsp+48h] [rbp-40h]
  char *v27; // [rsp+50h] [rbp-38h]
  unsigned __int8 *v28; // [rsp+58h] [rbp-30h]

  v28 = a4;
  if ( a1->iBitmapFormat == 6 && !a1->iType )
  {
    v7 = a2 & 0xFF00 | ((unsigned __int8)a2 << 16) | BYTE2(a2);
    v23 = v7;
    cy = a1->sizlBitmap.cy;
    cx = a1->sizlBitmap.cx;
    v10 = 0;
    v20 = 0LL;
    v11 = 0;
    v21 = cx;
    v22 = cy;
    if ( a3 )
    {
      ERECTL::operator*=((int *)&v20, &a3->left);
      cy = v22;
      cx = v21;
      v11 = HIDWORD(v20);
      v10 = v20;
    }
    lDelta = a1->lDelta;
    v24 = lDelta;
    v13 = cx - v10;
    v25 = v13;
    v14 = cy - v11;
    v15 = 0;
    for ( i = (char *)a1->pvScan0 + 4 * v10 + lDelta * v11; ; i += lDelta )
    {
      v27 = i;
      if ( !v14 )
        break;
      v17 = v13;
      v18 = i;
      while ( 1 )
      {
        v26 = v18;
        if ( !v17 )
          break;
        if ( !*(_DWORD *)v18 )
          *(_DWORD *)v18 = v7;
        if ( a4 )
          v18[3] = a4[v15];
        --v17;
        v18 += 4;
        v19 = v15 + 1;
        if ( !a4 )
          v19 = v15;
        v15 = v19;
      }
      --v14;
    }
    if ( a4 )
      Win32FreePool(a4);
  }
}
