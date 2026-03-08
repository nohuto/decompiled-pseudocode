/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z @ 0x1C012E8CC
 * Callers:
 *     NtUserCreateWindowEx @ 0x1C0042320 (NtUserCreateWindowEx.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_QWORD *a1, __int64 a2)
{
  SmartObjStackRefBase<tagMENU>::Init(a1, 0LL);
  a1[2] = a2;
  return a1;
}
