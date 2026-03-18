/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0114FA8
 * Callers:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00860F8 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C0089700 (bReadUserSystemEUDCRegistry.c)
 *     bAddAllFlEntry @ 0x1C00897FC (bAddAllFlEntry.c)
 *     bUnloadEudcFont @ 0x1C0114E84 (bUnloadEudcFont.c)
 *     ?BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x1C0140128 (-BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C028AB00 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 *     GreEudcLoadLinkW @ 0x1C029E958 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C029F7D0 (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C02A02D8 (bWriteUserSystemEUDCRegistry.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02D6348 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02E0D70 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
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
