/*
 * XREFs of ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C012DC8C
 * Callers:
 *     InternalRegisterClassEx @ 0x1C0030830 (InternalRegisterClassEx.c)
 *     _GetClassInfoEx @ 0x1C00314C8 (_GetClassInfoEx.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C00ED168 (xxxSetClassData.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0031BF4 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(__int64 a1)
{
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(a1);
}
