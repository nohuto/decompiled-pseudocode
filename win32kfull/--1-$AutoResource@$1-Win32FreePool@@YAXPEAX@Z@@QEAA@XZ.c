/*
 * XREFs of ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C00B90C0
 * Callers:
 *     bReadUserSystemEUDCRegistry @ 0x1C00B8E10 (bReadUserSystemEUDCRegistry.c)
 *     bAddAllFlEntry @ 0x1C00B8F0C (bAddAllFlEntry.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00B9FA4 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     bUnloadEudcFont @ 0x1C01162DC (bUnloadEudcFont.c)
 *     bAddFlEntry @ 0x1C0119070 (bAddFlEntry.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0119A20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C028D380 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 *     GreEudcLoadLinkW @ 0x1C02A10C8 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C02A1F2C (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C02A2A34 (bWriteUserSystemEUDCRegistry.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02D7F24 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02E2AF8 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    Win32FreePool(v2);
    *a1 = 0LL;
  }
}
