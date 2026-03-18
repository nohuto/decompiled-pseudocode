/*
 * XREFs of ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00D60B4
 * Callers:
 *     ?vSrcTranCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C00D5BC0 (-vSrcTranCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C00D5F80 (-vSrcOpaqCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS8D16Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0276BFC (-vSrcOpaqCopyS8D16Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0276D34 (-vSrcOpaqCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcTranCopyS8D16NewUnsafe@@YAXPEAEJJ0JJJJKKPEAVSURFACE@@P6AXPEBE00JPEAPEAG@Z0@Z @ 0x1C0276F60 (-vSrcTranCopyS8D16NewUnsafe@@YAXPEAEJJ0JJJJKKPEAVSURFACE@@P6AXPEBE00JPEAPEAG@Z0@Z.c)
 *     ?vSrcTranCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0277158 (-vSrcTranCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAU_BLENDINFO@@@Z @ 0x1C00D6168 (-vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAU_BLENDINFO@@@Z.c)
 *     ?vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAU_BLENDINFO@@KK@Z @ 0x1C00D6390 (-vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAU_BLENDINFO@@KK@Z.c)
 */

unsigned int near **__fastcall pvFillOpaqTableCT(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        struct SURFACE *a4,
        struct _BLENDINFO *a5,
        int a6)
{
  char v10; // di

  if ( *(void **)a4 == hCacheCT && a3 == uBCacheCT && a2 == uFCacheCT && gulGamma == uGammaCacheCT )
  {
    v10 = 1;
    if ( !a6 )
      return &aulCacheCT;
  }
  else
  {
    v10 = 0;
  }
  vGetBlendInfo(a1, a4, a2, a5);
  if ( !v10 )
    vClearTypeLookupTableLoop(a1, a4, a5, a2, a3);
  return &aulCacheCT;
}
