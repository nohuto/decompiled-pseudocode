/*
 * XREFs of ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C012DC6C
 * Callers:
 *     InternalRegisterClassEx @ 0x1C0030830 (InternalRegisterClassEx.c)
 *     _GetClassInfoEx @ 0x1C00314C8 (_GetClassInfoEx.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00E02D4 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(_QWORD *a1)
{
  SmartObjStackRefBase<tagCLS>::Init(a1, 0LL);
  return a1;
}
