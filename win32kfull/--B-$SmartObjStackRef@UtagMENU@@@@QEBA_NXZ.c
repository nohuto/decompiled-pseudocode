/*
 * XREFs of ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00A4DDC
 * Callers:
 *     xxxGetSystemMenu @ 0x1C0021498 (xxxGetSystemMenu.c)
 *     xxxMNCanClose @ 0x1C00A4C44 (xxxMNCanClose.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00A6ADC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     xxxEnableMenuItem @ 0x1C0224CA0 (xxxEnableMenuItem.c)
 *     xxxGetMenuBarInfo @ 0x1C0233A80 (xxxGetMenuBarInfo.c)
 *     _ServerFixupMenuDC @ 0x1C0237764 (_ServerFixupMenuDC.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmartObjStackRef<tagMENU>::operator bool(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) || **(_QWORD **)a1 != 0LL;
}
