/*
 * XREFs of ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C006345C
 * Callers:
 *     xxxMNCanClose @ 0x1C00632C4 (xxxMNCanClose.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00640AC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     xxxGetSystemMenu @ 0x1C0067088 (xxxGetSystemMenu.c)
 *     xxxEnableMenuItem @ 0x1C0221F90 (xxxEnableMenuItem.c)
 *     xxxGetMenuBarInfo @ 0x1C0230D6C (xxxGetMenuBarInfo.c)
 *     _ServerFixupMenuDC @ 0x1C0234AFC (_ServerFixupMenuDC.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmartObjStackRef<tagMENU>::operator bool(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) || **(_QWORD **)a1 != 0LL;
}
