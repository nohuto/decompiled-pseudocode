/*
 * XREFs of ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C0282E14
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00546FC (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0110C1C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C027C2F4 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C027C4BC (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C02857B8 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 */

void __fastcall vSpCheckForWndobjOverlap(struct _SPRITESTATE *a1, struct _RECTL *a2, struct _RECTL *a3)
{
  __int64 v6; // rcx
  __int64 i; // rdi
  struct EWNDOBJ *j; // rbx
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = *((_QWORD *)Gre::Base::Globals(a1) + 7);
  GreAcquireSemaphore(v10);
  for ( i = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v6) + 32) + 23664LL); i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(struct EWNDOBJ **)(i + 24); j; j = (struct EWNDOBJ *)*((_QWORD *)j + 20) )
    {
      UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v9, j, a1);
      if ( (unsigned int)bIntersect((char *)j + 4, a2) || (unsigned int)bIntersect((char *)j + 4, a3) )
        vSpUpdateWndobjOverlap(a1, j);
      UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v9);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
}
