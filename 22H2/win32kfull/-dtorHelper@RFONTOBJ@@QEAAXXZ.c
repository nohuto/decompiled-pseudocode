/*
 * XREFs of ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C02B4BE0
 * Callers:
 *     ?GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1C00745D4 (-GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RF.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C010BA70 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 *     RFONTOBJ_dtorHelperWrap @ 0x1C0140070 (RFONTOBJ_dtorHelperWrap.c)
 * Callees:
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1C015CBF4 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::dtorHelper(RFONTOBJ *this)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rbx

  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 848LL));
  v2 = *(_DWORD *)(*(_QWORD *)this + 712LL);
  RFONTOBJ::vUnlockEUDCFontsGlyphCache(this);
  if ( (v2 & 1) != 0 )
  {
    v4 = *(_QWORD *)(SGDGetSessionState(v3) + 32);
    GreAcquireSemaphore(*(_QWORD *)(v4 + 13272));
    --*(_DWORD *)(v4 + 13300);
    EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
    GreReleaseSemaphoreInternal(*(_QWORD *)(v4 + 13272));
  }
  *(_DWORD *)(*(_QWORD *)this + 712LL) &= 0xFFFFFEFE;
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC");
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
}
