/*
 * XREFs of ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C015A278
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     InternalRegisterClassEx @ 0x1C005FF10 (InternalRegisterClassEx.c)
 *     _GetClassInfoEx @ 0x1C007F338 (_GetClassInfoEx.c)
 *     xxxSetClassData @ 0x1C0115230 (xxxSetClassData.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0060A44 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(_QWORD *a1)
{
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(a1);
}
