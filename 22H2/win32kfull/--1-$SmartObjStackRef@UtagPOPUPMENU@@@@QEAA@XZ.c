/*
 * XREFs of ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C013A334
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1C01CD040 (NtUserCalculatePopupWindowPosition.c)
 *     xxxMNStartMenuState @ 0x1C020009C (xxxMNStartMenuState.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0062940 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(_QWORD *a1)
{
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1);
}
