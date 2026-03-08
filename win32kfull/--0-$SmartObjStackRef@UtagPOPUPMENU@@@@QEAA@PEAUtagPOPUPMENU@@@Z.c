/*
 * XREFs of ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1C012D858
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1C01CE090 (NtUserCalculatePopupWindowPosition.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00E67A8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(_QWORD *a1, __int64 a2)
{
  SmartObjStackRefBase<tagPOPUPMENU>::Init(a1, a2);
  return a1;
}
