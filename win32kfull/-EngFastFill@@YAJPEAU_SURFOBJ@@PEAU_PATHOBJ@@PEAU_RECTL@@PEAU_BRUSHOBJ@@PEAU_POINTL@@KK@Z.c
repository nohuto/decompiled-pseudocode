/*
 * XREFs of ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02F6648
 * Callers:
 *     EngFillPath @ 0x1C028BC20 (EngFillPath.c)
 * Callees:
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C0124ED4 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02F6ADC (-bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02F6C34 (-bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z @ 0x1C02F8210 (-bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z.c)
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
  int v12; // edx
  unsigned int v13; // r9d
  unsigned int v14; // ecx
  _DWORD *pvRbrush; // rax
  ULONG v17; // r9d
  ULONG iSolidColor; // r9d

  v10 = -1;
  v11 = (unsigned int *)((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL));
  if ( a1->iType )
    return v10;
  v12 = gaMix[a6 & 0xF] | (gaMix[(a6 >> 8) & 0xF] << 8);
  switch ( v12 )
  {
    case 0:
      v13 = 0;
      return (unsigned int)bPaintPath((struct SURFACE *)v11, a2, a3, v13, 0, a7);
    case 0xF0F:
      iSolidColor = a4->iSolidColor;
      if ( iSolidColor != -1 )
      {
        v13 = ~iSolidColor;
        return (unsigned int)bPaintPath((struct SURFACE *)v11, a2, a3, v13, 0, a7);
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
      v17 = a4->iSolidColor;
      if ( v17 == -1 )
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
        return (unsigned int)bPaintPath((struct SURFACE *)v11, a2, a3, v17, 1, a7);
      }
    case 0xAAAA:
      return 1;
    case 0xF0F0:
      v13 = a4->iSolidColor;
      if ( v13 != -1 )
        return (unsigned int)bPaintPath((struct SURFACE *)v11, a2, a3, v13, 0, a7);
      v14 = *(_DWORD *)(((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL)) + 0x60);
      if ( v14 - 2 > 1 )
      {
        if ( v14 >= 3 && pvGetEngRbrush(a4) && *((_DWORD *)a4[1].pvRbrush + 5) >= 4u )
          return (unsigned int)bBrushPath((struct SURFACE *)v11, a2, a3, a4, a5, 0, a7);
        return v10;
      }
      if ( !pvGetEngRbrush(a4) )
        return v10;
      pvRbrush = a4[1].pvRbrush;
      if ( pvRbrush[5] != 8 || pvRbrush[6] != 8 )
        return v10;
      return (unsigned int)bBrushPathN_8x8((struct SURFACE *)v11, a2, a3, a4, a5, v11[24], a7);
    case 0xFFFF:
      v13 = -1;
      return (unsigned int)bPaintPath((struct SURFACE *)v11, a2, a3, v13, 0, a7);
  }
  return v10;
}
