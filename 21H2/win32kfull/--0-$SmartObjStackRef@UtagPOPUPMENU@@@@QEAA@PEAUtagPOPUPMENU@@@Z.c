/*
 * XREFs of ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1C015A024
 * Callers:
 *     NtUserCalculatePopupWindowPosition @ 0x1C01F17C0 (NtUserCalculatePopupWindowPosition.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(_QWORD *a1, __int64 a2)
{
  SmartObjStackRefBase<tagPOPUPMENU>::Init(a1, a2);
  return a1;
}
