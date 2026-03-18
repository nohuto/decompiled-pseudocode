/*
 * XREFs of MNFreeItem @ 0x1C0065704
 * Callers:
 *     _DestroyMenu @ 0x1C0063B20 (_DestroyMenu.c)
 *     xxxInsertMenuItem @ 0x1C0065F38 (xxxInsertMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00C20C0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 * Callees:
 *     _DestroyMenu @ 0x1C0063B20 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0069260 (-UnlockSubMenu@@YAPEAUtagMENU@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?FreeItemString@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00692A0 (-FreeItemString@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall MNFreeItem(__int64 a1, __int64 a2, int a3)
{
  PVOID *v6; // rbx
  __int64 result; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(*(_QWORD *)a2 + 96LL) = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v8, a1);
  v9 = 0LL;
  FreeItemString(v8, a2);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v8);
  SmartObjStackRefBase<tagMENU>::Init(v8, a1);
  v9 = 0LL;
  v6 = (PVOID *)UnlockSubMenu(v8, a2);
  result = SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v8);
  if ( v6 )
  {
    if ( a3 )
      return DestroyMenu(v6);
  }
  return result;
}
