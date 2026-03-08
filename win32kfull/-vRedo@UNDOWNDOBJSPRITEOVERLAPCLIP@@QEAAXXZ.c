/*
 * XREFs of ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C028283C
 * Callers:
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0284A48 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C027C2F4 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C027C4BC (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C02857B8 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 */

void __fastcall UNDOWNDOBJSPRITEOVERLAPCLIP::vRedo(UNDOWNDOBJSPRITEOVERLAPCLIP *this)
{
  struct _SPRITESTATE *v1; // rsi
  __int64 v2; // rcx
  __int64 i; // rdi
  __int64 j; // rbx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(struct _SPRITESTATE **)(*(_QWORD *)this + 16LL);
  v6 = *((_QWORD *)Gre::Base::Globals(this) + 7);
  GreAcquireSemaphore(v6);
  for ( i = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v2) + 32) + 23664LL); i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
    {
      UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v5, (struct EWNDOBJ *)j, v1);
      if ( (*(_DWORD *)(j + 184) & 0x800200) == 0x800200 )
      {
        *(_DWORD *)(j + 184) &= ~0x800000u;
        vSpUpdateWndobjOverlap(v1, (struct EWNDOBJ *)j);
      }
      UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v5);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
}
