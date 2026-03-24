/*
 * XREFs of ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C01681B0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     InternalRegisterClassEx @ 0x1C0079DD0 (InternalRegisterClassEx.c)
 *     _GetClassInfoEx @ 0x1C00BC568 (_GetClassInfoEx.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00FF7D0 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(_QWORD *a1)
{
  SmartObjStackRefBase<tagCLS>::Init(a1, 0LL);
  return a1;
}
