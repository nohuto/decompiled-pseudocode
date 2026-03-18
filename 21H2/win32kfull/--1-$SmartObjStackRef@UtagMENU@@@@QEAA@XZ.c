/*
 * XREFs of ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0159CDC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C0064A70 (NtUserThunkedMenuItemInfo.c)
 *     NtUserCreateWindowEx @ 0x1C00657B0 (NtUserCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0068DF0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C0080464 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 *     NtUserThunkedMenuInfo @ 0x1C010B680 (NtUserThunkedMenuInfo.c)
 *     NtUserGetMenuItemRect @ 0x1C01F5260 (NtUserGetMenuItemRect.c)
 *     NtUserTrackPopupMenuEx @ 0x1C01FFC10 (NtUserTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(_QWORD *a1)
{
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(a1);
}
