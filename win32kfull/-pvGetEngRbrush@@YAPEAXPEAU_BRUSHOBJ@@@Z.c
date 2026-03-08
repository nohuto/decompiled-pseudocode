/*
 * XREFs of ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C0124ED4
 * Callers:
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0087124 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     EngBitBlt @ 0x1C0088BA0 (EngBitBlt.c)
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02F6648 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C012448C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z @ 0x1C0124F50 (-vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z.c)
 */

PVOID __fastcall pvGetEngRbrush(struct _BRUSHOBJ *a1)
{
  PVOID result; // rax
  PVOID pvRbrush; // rcx

  result = a1[1].pvRbrush;
  if ( !result )
  {
    if ( (unsigned int)bGetRealizedBrush(*(struct BRUSH **)&a1[4].flColorType, (struct EBRUSHOBJ *)a1, EngRealizeBrush) )
    {
      vTryToCacheRealization(
        (struct EBRUSHOBJ *)a1,
        (struct RBRUSH *)a1[1].pvRbrush,
        *(struct BRUSH **)&a1[4].flColorType,
        1);
      return a1[1].pvRbrush;
    }
    else
    {
      pvRbrush = a1[1].pvRbrush;
      if ( pvRbrush )
      {
        Win32FreePool(pvRbrush);
        a1[1].pvRbrush = 0LL;
      }
      return 0LL;
    }
  }
  return result;
}
