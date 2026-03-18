/*
 * XREFs of ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C013A2D8
 * Callers:
 *     NtUserThunkedMenuInfo @ 0x1C0012560 (NtUserThunkedMenuInfo.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C006224C (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C00635E0 (NtUserThunkedMenuItemInfo.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00640AC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     xxxCreateDesktopEx @ 0x1C00683E4 (xxxCreateDesktopEx.c)
 *     NtUserCreateWindowEx @ 0x1C0091DF0 (NtUserCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     NtUserGetMenuItemRect @ 0x1C01D26A0 (NtUserGetMenuItemRect.c)
 *     NtUserTrackPopupMenuEx @ 0x1C01DEE90 (NtUserTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(_QWORD *a1)
{
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(a1);
}
