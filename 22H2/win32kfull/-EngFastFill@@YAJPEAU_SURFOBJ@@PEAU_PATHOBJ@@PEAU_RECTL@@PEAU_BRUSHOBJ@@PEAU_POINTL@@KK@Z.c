/*
 * XREFs of ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C01476A0
 * Callers:
 *     EngFillPath @ 0x1C01472B0 (EngFillPath.c)
 * Callees:
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00CECC8 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z @ 0x1C0147A4C (-bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z.c)
 *     ?bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02CF584 (-bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02CF700 (-bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 */

__int64 __fastcall EngFastFill(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v10; // esi
  unsigned int *v11; // rdi
  int v13; // edx
  unsigned int iSolidColor; // r9d
  unsigned int v16; // ecx
  _DWORD *pvRbrush; // rax
  ULONG v18; // r9d
  ULONG v19; // r9d

  v10 = -1;
  v11 = (unsigned int *)((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL));
  if ( a1->iType )
    return v10;
  v13 = gaMix[a6 & 0xF] | (gaMix[(a6 >> 8) & 0xF] << 8);
  switch ( v13 )
  {
    case 0:
      iSolidColor = 0;
      return (unsigned int)bPaintPath((struct SURFACE *)v11, a2, a3, iSolidColor, 0, a7);
    case 0xF0F0:
      iSolidColor = a4->iSolidColor;
      if ( iSolidColor != -1 )
        return (unsigned int)bPaintPath((struct SURFACE *)v11, a2, a3, iSolidColor, 0, a7);
      v16 = *(_DWORD *)(((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL)) + 0x60);
      if ( v16 - 2 <= 1 )
      {
        if ( !pvGetEngRbrush(a4) )
          return v10;
        pvRbrush = a4[1].pvRbrush;
        if ( pvRbrush[5] != 8 || pvRbrush[6] != 8 )
          return v10;
        return (unsigned int)bBrushPathN_8x8((struct SURFACE *)v11, a2, a3, a4, a5, v11[24], a7);
      }
      else
      {
        if ( v16 < 3 || !pvGetEngRbrush(a4) || *((_DWORD *)a4[1].pvRbrush + 5) < 4u )
          return v10;
        return (unsigned int)bBrushPath((struct SURFACE *)v11, a2, a3, a4, a5, 0, a7);
      }
    case 0xF0F:
      v19 = a4->iSolidColor;
      if ( v19 != -1 )
      {
        iSolidColor = ~v19;
        return (unsigned int)bPaintPath((struct SURFACE *)v11, a2, a3, iSolidColor, 0, a7);
      }
      if ( *(_DWORD *)(((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL)) + 0x60) < 3u
        || !pvGetEngRbrush(a4)
        || *((_DWORD *)a4[1].pvRbrush + 5) < 4u )
      {
        return v10;
      }
      return (unsigned int)bBrushPath((struct SURFACE *)v11, a2, a3, a4, a5, 1u, a7);
    case 0x5555:
      return (unsigned int)bPaintPath((struct SURFACE *)v11, a2, a3, 0xFFFFFFFF, 1, a7);
    case 0x5A5A:
      v18 = a4->iSolidColor;
      if ( v18 == -1 )
      {
        if ( *(_DWORD *)(((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL)) + 0x60) < 3u
          || !pvGetEngRbrush(a4)
          || *((_DWORD *)a4[1].pvRbrush + 5) < 4u )
        {
          return v10;
        }
        return (unsigned int)bBrushPath((struct SURFACE *)v11, a2, a3, a4, a5, 2u, a7);
      }
      else
      {
        return (unsigned int)bPaintPath((struct SURFACE *)v11, a2, a3, v18, 1, a7);
      }
    case 0xAAAA:
      return 1;
    case 0xFFFF:
      iSolidColor = -1;
      return (unsigned int)bPaintPath((struct SURFACE *)v11, a2, a3, iSolidColor, 0, a7);
  }
  return v10;
}
