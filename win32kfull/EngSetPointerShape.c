/*
 * XREFs of EngSetPointerShape @ 0x1C0127EE0
 * Callers:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C01299C8 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0127FDC (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027D338 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 */

ULONG __stdcall EngSetPointerShape(
        SURFOBJ *pso,
        SURFOBJ *psoMask,
        SURFOBJ *psoColor,
        XLATEOBJ *pxlo,
        LONG xHot,
        LONG yHot,
        LONG x,
        LONG y,
        RECTL *prcl,
        FLONG fl)
{
  Gre::Base *v14; // rcx
  Gre::Base *v15; // rcx
  struct _XLATEOBJ *v16; // r9
  ULONG v17; // ebx
  __int64 v19; // [rsp+50h] [rbp-18h] BYREF
  __int64 v20; // [rsp+58h] [rbp-10h] BYREF

  if ( IsDwmActive((Gre::Base *)pso) )
  {
    v20 = *((_QWORD *)pso->hdev + 7);
    GreAcquireSemaphore(v20);
    v19 = *((_QWORD *)Gre::Base::Globals(v14) + 14);
    GreAcquireSemaphore(v19);
    if ( IsDwmActive(v15) )
    {
      v17 = DwmSetPointerShape(pso, psoMask, psoColor, v16, xHot, yHot, x, y, prcl, fl);
      SEMOBJ::vUnlock((SEMOBJ *)&v19);
      SEMOBJ::vUnlock((SEMOBJ *)&v20);
      return v17;
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v19);
    SEMOBJ::vUnlock((SEMOBJ *)&v20);
  }
  return GdiSetPointerShape(pso, psoMask, psoColor, pxlo, xHot, yHot, x, y, prcl, fl);
}
