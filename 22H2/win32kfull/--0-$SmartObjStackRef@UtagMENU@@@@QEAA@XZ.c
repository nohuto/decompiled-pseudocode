/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C013A34C
 * Callers:
 *     NtUserThunkedMenuInfo @ 0x1C0012560 (NtUserThunkedMenuInfo.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C00635E0 (NtUserThunkedMenuItemInfo.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00640AC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     NtUserCreateWindowEx @ 0x1C0091DF0 (NtUserCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     NtUserGetMenuItemRect @ 0x1C01D26A0 (NtUserGetMenuItemRect.c)
 *     NtUserTrackPopupMenuEx @ 0x1C01DEE90 (NtUserTrackPopupMenuEx.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C009E5C0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_QWORD *a1)
{
  SmartObjStackRefBase<tagMENU>::Init(a1, 0LL);
  a1[2] = 0LL;
  return a1;
}
