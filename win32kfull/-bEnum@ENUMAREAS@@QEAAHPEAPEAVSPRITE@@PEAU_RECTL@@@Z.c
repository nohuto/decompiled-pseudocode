/*
 * XREFs of ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0018A84
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0018CB0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0056EF0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02803E0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C02810C0 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0282C68 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0283608 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C028445C (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02846B0 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C028512C (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0286E00 (vSpUnTearDownSprites.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ENUMAREAS::bEnum(ENUMAREAS *this, struct SPRITE **a2, struct _RECTL *a3)
{
  __int64 i; // r9
  LONG v5; // ecx
  LONG v6; // ecx
  int v7; // ecx
  __int64 v8; // r9
  int *v10; // r9
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rdx
  int *v18; // rdx
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx

  i = *((_QWORD *)this + 7);
  *((_QWORD *)this + 8) = *((_QWORD *)this + 6);
  *((_QWORD *)this + 9) = i;
  v5 = *(_DWORD *)i;
  *a2 = *(struct SPRITE **)(i + 8);
  if ( v5 <= *((_DWORD *)this + 1) )
    v5 = *((_DWORD *)this + 1);
  a3->left = v5;
  v6 = *(_DWORD *)(i + 4);
  if ( v6 >= *((_DWORD *)this + 3) )
    v6 = *((_DWORD *)this + 3);
  a3->right = v6;
  a3->top = *((_DWORD *)this + 9);
  a3->bottom = *((_DWORD *)this + 10);
  v7 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 1) != 0 )
  {
    if ( *(_DWORD *)i > *((_DWORD *)this + 1) )
    {
      do
      {
        v19 = (_DWORD *)i;
        i -= 16LL;
      }
      while ( *v19 == *(_DWORD *)i );
    }
    else
    {
      v17 = *((_QWORD *)this + 6);
      if ( v7 == 1 )
      {
        if ( *(_DWORD *)(v17 + 4) >= *((_DWORD *)this + 4) )
          return 0LL;
        v18 = (int *)(*(_QWORD *)(v17 + 8) + v17);
      }
      else
      {
        if ( *(_DWORD *)v17 <= *((_DWORD *)this + 2) )
          return 0LL;
        v18 = (int *)(v17 - *(_QWORD *)(v17 + 16));
      }
      v20 = *((_DWORD *)this + 2);
      *((_QWORD *)this + 6) = v18;
      v21 = *v18;
      if ( *v18 <= v20 )
        v21 = v20;
      v22 = *((_DWORD *)this + 4);
      *((_DWORD *)this + 9) = v21;
      v23 = v18[1];
      if ( v23 >= v22 )
        v23 = v22;
      *((_DWORD *)this + 10) = v23;
      for ( i = (__int64)v18 + *((_QWORD *)v18 + 1) - 16; *(_DWORD *)i >= *((_DWORD *)this + 3); i -= 16LL )
        ;
    }
  }
  else if ( *(_DWORD *)(i + 4) < *((_DWORD *)this + 3) )
  {
    do
    {
      v11 = (_DWORD *)i;
      i += 16LL;
    }
    while ( *v11 == *(_DWORD *)i );
  }
  else
  {
    v8 = *((_QWORD *)this + 6);
    if ( v7 )
    {
      if ( *(_DWORD *)v8 <= *((_DWORD *)this + 2) )
        return 0LL;
      v10 = (int *)(v8 - *(_QWORD *)(v8 + 16));
    }
    else
    {
      if ( *(_DWORD *)(v8 + 4) >= *((_DWORD *)this + 4) )
        return 0LL;
      v10 = (int *)(*(_QWORD *)(v8 + 8) + v8);
    }
    v12 = *((_DWORD *)this + 2);
    *((_QWORD *)this + 6) = v10;
    v13 = *v10;
    if ( *v10 <= v12 )
      v13 = v12;
    v14 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 9) = v13;
    v15 = v10[1];
    if ( v15 >= v14 )
      v15 = v14;
    v16 = *((_DWORD *)this + 1);
    *((_DWORD *)this + 10) = v15;
    for ( i = (__int64)(v10 + 6); *(_DWORD *)(i + 4) <= v16; i += 16LL )
      ;
  }
  *((_QWORD *)this + 7) = i;
  return 1LL;
}
