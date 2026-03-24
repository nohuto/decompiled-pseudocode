/*
 * XREFs of ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00EFF30
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00EE7A0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0163C34 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027FF70 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C0280C00 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0282240 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0282B70 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0283848 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02842B0 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0285DA0 (vSpUnTearDownSprites.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ENUMAREAS::bEnum(ENUMAREAS *this, struct SPRITE **a2, struct _RECTL *a3)
{
  __int64 i; // r9
  LONG v5; // edx
  LONG v6; // eax
  LONG v7; // ecx
  int v8; // edx
  __int64 v9; // r9
  int v10; // edx
  int *v12; // r9
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // r8d
  int *v18; // rcx
  int v19; // edx
  _DWORD *v20; // rcx
  int v21; // eax
  int v22; // eax

  i = *((_QWORD *)this + 7);
  *((_QWORD *)this + 8) = *((_QWORD *)this + 6);
  *((_QWORD *)this + 9) = i;
  *a2 = *(struct SPRITE **)(i + 8);
  v5 = *(_DWORD *)i;
  if ( *(_DWORD *)i <= *((_DWORD *)this + 1) )
    v5 = *((_DWORD *)this + 1);
  a3->left = v5;
  v6 = *((_DWORD *)this + 3);
  v7 = *(_DWORD *)(i + 4);
  if ( v7 >= v6 )
    v7 = v6;
  a3->right = v7;
  a3->top = *((_DWORD *)this + 9);
  a3->bottom = *((_DWORD *)this + 10);
  v8 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 1) != 0 )
  {
    if ( *(_DWORD *)i > *((_DWORD *)this + 1) )
    {
      do
      {
        v20 = (_DWORD *)i;
        i -= 16LL;
      }
      while ( *v20 == *(_DWORD *)i );
    }
    else
    {
      v16 = *((_QWORD *)this + 6);
      if ( v8 == 1 )
      {
        v17 = *((_DWORD *)this + 4);
        if ( *(_DWORD *)(v16 + 4) >= v17 )
          return 0LL;
        v18 = (int *)(*(_QWORD *)(v16 + 8) + v16);
        v19 = *((_DWORD *)this + 2);
      }
      else
      {
        v19 = *((_DWORD *)this + 2);
        if ( *(_DWORD *)v16 <= v19 )
          return 0LL;
        v18 = (int *)(v16 - *(_QWORD *)(v16 + 16));
        v17 = *((_DWORD *)this + 4);
      }
      *((_QWORD *)this + 6) = v18;
      v21 = *v18;
      if ( *v18 <= v19 )
        v21 = v19;
      *((_DWORD *)this + 9) = v21;
      v22 = v18[1];
      if ( v22 >= v17 )
        v22 = v17;
      *((_DWORD *)this + 10) = v22;
      for ( i = (__int64)v18 + *((_QWORD *)v18 + 1) - 16; *(_DWORD *)i >= *((_DWORD *)this + 3); i -= 16LL )
        ;
    }
  }
  else if ( *(_DWORD *)(i + 4) < *((_DWORD *)this + 3) )
  {
    do
      i += 16LL;
    while ( *(_DWORD *)(i - 16) == *(_DWORD *)i );
  }
  else
  {
    v9 = *((_QWORD *)this + 6);
    if ( v8 )
    {
      v13 = *((_DWORD *)this + 2);
      if ( *(_DWORD *)v9 <= v13 )
        return 0LL;
      v12 = (int *)(v9 - *(_QWORD *)(v9 + 16));
      v10 = *((_DWORD *)this + 4);
    }
    else
    {
      v10 = *((_DWORD *)this + 4);
      if ( *(_DWORD *)(v9 + 4) >= v10 )
        return 0LL;
      v12 = (int *)(*(_QWORD *)(v9 + 8) + v9);
      v13 = *((_DWORD *)this + 2);
    }
    *((_QWORD *)this + 6) = v12;
    v14 = *v12;
    if ( *v12 <= v13 )
      v14 = v13;
    *((_DWORD *)this + 9) = v14;
    v15 = v12[1];
    if ( v15 >= v10 )
      v15 = v10;
    i = (__int64)(v12 + 6);
    *((_DWORD *)this + 10) = v15;
    while ( *(_DWORD *)(i + 4) <= *((_DWORD *)this + 1) )
      i += 16LL;
  }
  *((_QWORD *)this + 7) = i;
  return 1LL;
}
