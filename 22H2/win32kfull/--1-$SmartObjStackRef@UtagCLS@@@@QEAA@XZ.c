/*
 * XREFs of ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C013A674
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C00ADD68 (xxxSetClassData.c)
 *     InternalRegisterClassEx @ 0x1C00CB7A0 (InternalRegisterClassEx.c)
 *     _GetClassInfoEx @ 0x1C00CC438 (_GetClassInfoEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C00EBBE4 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(__int64 *a1)
{
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(a1);
}
