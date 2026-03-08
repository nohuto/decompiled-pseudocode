/*
 * XREFs of ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C012D81C
 * Callers:
 *     NtUserThunkedMenuInfo @ 0x1C0011940 (NtUserThunkedMenuInfo.c)
 *     NtUserCreateWindowEx @ 0x1C0042320 (NtUserCreateWindowEx.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C00A0450 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00A6ADC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C00A7020 (NtUserThunkedMenuItemInfo.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x1C00C03D4 (xxxCreateDesktopEx.c)
 *     NtUserGetMenuItemRect @ 0x1C01D36F0 (NtUserGetMenuItemRect.c)
 *     NtUserTrackPopupMenuEx @ 0x1C01DFF40 (NtUserTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(_QWORD *a1)
{
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(a1);
}
