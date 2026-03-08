/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0116400
 * Callers:
 *     bReadUserSystemEUDCRegistry @ 0x1C00B8E10 (bReadUserSystemEUDCRegistry.c)
 *     bAddAllFlEntry @ 0x1C00B8F0C (bAddAllFlEntry.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00B9FA4 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     bUnloadEudcFont @ 0x1C01162DC (bUnloadEudcFont.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C028D380 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 *     GreEudcLoadLinkW @ 0x1C02A10C8 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C02A1F2C (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C02A2A34 (bWriteUserSystemEUDCRegistry.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02D7F24 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02E2AF8 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     <none>
 */

MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this, unsigned int a2)
{
  __int64 v3; // rax

  *(_QWORD *)this = 0LL;
  if ( !a2 || (v3 = Win32AllocPoolZInit(a2, 1886221383LL), (*(_QWORD *)this = v3) == 0LL) )
    EngSetLastError(8u);
  return this;
}
