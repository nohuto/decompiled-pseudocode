/*
 * XREFs of ??C?$SmartObjStackRefBase@UtagPOPUPMENU@@@@QEBAPEAUtagPOPUPMENU@@XZ @ 0x1C01B9BB8
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRefBase<tagPOPUPMENU>::operator->(__int64 a1)
{
  return **(_QWORD **)a1;
}
