/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C012D890
 * Callers:
 *     NtUserThunkedMenuInfo @ 0x1C0011940 (NtUserThunkedMenuInfo.c)
 *     NtUserCreateWindowEx @ 0x1C0042320 (NtUserCreateWindowEx.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00A6ADC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C00A7020 (NtUserThunkedMenuItemInfo.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     NtUserGetMenuItemRect @ 0x1C01D36F0 (NtUserGetMenuItemRect.c)
 *     NtUserTrackPopupMenuEx @ 0x1C01DFF40 (NtUserTrackPopupMenuEx.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_QWORD *a1)
{
  SmartObjStackRefBase<tagMENU>::Init(a1, 0LL);
  a1[2] = 0LL;
  return a1;
}
