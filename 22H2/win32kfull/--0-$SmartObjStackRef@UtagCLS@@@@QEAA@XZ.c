/*
 * XREFs of ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C013A654
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     InternalRegisterClassEx @ 0x1C00CB7A0 (InternalRegisterClassEx.c)
 *     _GetClassInfoEx @ 0x1C00CC438 (_GetClassInfoEx.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00A9354 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(_QWORD *a1)
{
  SmartObjStackRefBase<tagCLS>::Init(a1, 0LL);
  return a1;
}
