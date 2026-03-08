/*
 * XREFs of MNFreeItem @ 0x1C00A25D0
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00A4FB4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxInsertMenuItem @ 0x1C00A7ADC (xxxInsertMenuItem.c)
 * Callees:
 *     ?FreeItemString@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00A0FC8 (-FreeItemString@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00A1018 (-UnlockSubMenu@@YAPEAUtagMENU@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x1C00A77C0 (_DestroyMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall MNFreeItem(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v6; // rbx
  __int64 result; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(*a2 + 96LL) = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v8, a1);
  v9 = 0LL;
  FreeItemString((__int64)v8, a2);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v8);
  SmartObjStackRefBase<tagMENU>::Init(v8, a1);
  v9 = 0LL;
  v6 = UnlockSubMenu((__int64)v8, a2);
  result = SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v8);
  if ( v6 )
  {
    if ( a3 )
      return DestroyMenu(v6);
  }
  return result;
}
