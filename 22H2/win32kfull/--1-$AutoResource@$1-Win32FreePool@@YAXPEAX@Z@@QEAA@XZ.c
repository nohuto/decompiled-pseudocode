/*
 * XREFs of ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C0089BF0
 * Callers:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00860F8 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C0089700 (bReadUserSystemEUDCRegistry.c)
 *     ??1MALLOCOBJ@@QEAA@XZ @ 0x1C0089BD8 (--1MALLOCOBJ@@QEAA@XZ.c)
 *     bAddFlEntry @ 0x1C0111EC0 (bAddFlEntry.c)
 *     bUnloadEudcFont @ 0x1C0114E84 (bUnloadEudcFont.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C028AB00 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 *     GreEudcLoadLinkW @ 0x1C029E958 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C029F7D0 (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C02A02D8 (bWriteUserSystemEUDCRegistry.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02D6348 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02E0D70 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
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
