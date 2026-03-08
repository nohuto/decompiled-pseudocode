/*
 * XREFs of ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C011DDEC
 * Callers:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0123E18 (-GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RF.c)
 *     ??1RESETFCOBJ@@QEAA@XZ @ 0x1C0124464 (--1RESETFCOBJ@@QEAA@XZ.c)
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1C014FD94 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C02B9210 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vReleaseCache(RFONTOBJ *this)
{
  void *v2; // rcx

  v2 = *(void **)(*(_QWORD *)this + 616LL);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 616LL) = 0LL;
  }
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache");
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 504LL));
}
