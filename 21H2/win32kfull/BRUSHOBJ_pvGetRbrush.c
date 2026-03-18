/*
 * XREFs of BRUSHOBJ_pvGetRbrush @ 0x1C026B0E0
 * Callers:
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C029FBD8 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 * Callees:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C0009E08 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z @ 0x1C000B8AC (-vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z.c)
 */

PVOID __stdcall BRUSHOBJ_pvGetRbrush(BRUSHOBJ *pbo)
{
  PVOID result; // rax
  void *v2; // rbx
  int RealizedBrush; // eax
  char *pvRbrush; // rdx

  result = pbo->pvRbrush;
  v2 = 0LL;
  if ( !result )
  {
    RealizedBrush = bGetRealizedBrush(
                      *(struct BRUSH **)&pbo[4].flColorType,
                      (struct EBRUSHOBJ *)pbo,
                      *(int (**)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))(*((_QWORD *)pbo[3].pvRbrush + 6) + 2760LL));
    pvRbrush = (char *)pbo->pvRbrush;
    if ( RealizedBrush )
    {
      if ( pvRbrush )
      {
        vTryToCacheRealization(
          (struct EBRUSHOBJ *)pbo,
          (struct RBRUSH *)(pvRbrush - 16),
          *(struct BRUSH **)&pbo[4].flColorType,
          0);
        return pbo->pvRbrush;
      }
    }
    else if ( pvRbrush )
    {
      Win32FreePool(pvRbrush - 16);
      pbo->pvRbrush = 0LL;
    }
    return v2;
  }
  return result;
}
