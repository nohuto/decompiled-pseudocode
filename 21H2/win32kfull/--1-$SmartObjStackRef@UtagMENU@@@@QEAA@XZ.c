/*
 * XREFs of ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C008A9C4
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     xxxCreateDefaultImeWindow @ 0x1C0033658 (xxxCreateDefaultImeWindow.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C00431E0 (NtUserThunkedMenuItemInfo.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0048C88 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C008A238 (xxxSetWindowData.c)
 *     NtUserCreateWindowEx @ 0x1C00BF540 (NtUserCreateWindowEx.c)
 *     NtUserThunkedMenuInfo @ 0x1C0120900 (NtUserThunkedMenuInfo.c)
 *     NtUserGetMenuItemRect @ 0x1C01FA920 (NtUserGetMenuItemRect.c)
 *     NtUserTrackPopupMenuEx @ 0x1C0203DD0 (NtUserTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A9DC (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 */

__int64 __fastcall SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(__int64 a1)
{
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(a1);
}
