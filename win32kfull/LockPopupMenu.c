/*
 * XREFs of LockPopupMenu @ 0x1C0219378
 * Callers:
 *     xxxMNStartMenu @ 0x1C0202834 (xxxMNStartMenu.c)
 *     xxxMNKeyDown @ 0x1C021ABF8 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4F34 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x1C02185DC (-UnlockPopupMenuWindow@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall LockPopupMenu(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v11[4]; // [rsp+40h] [rbp-28h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v11, *a2);
  v11[2] = 0LL;
  UnlockPopupMenuWindow((__int64)v11);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v11);
  if ( !SmartObjStackRef<tagMENU>::operator==(a3) )
  {
    v6 = **(_QWORD **)a3 + 80LL;
    v9[1] = *(_QWORD *)(**(_QWORD **)a1 + 8LL);
    v9[0] = v6;
    HMAssignmentLock(v9, 0LL);
  }
  v7 = *(_QWORD *)(a3 + 16);
  if ( !v7 )
    v7 = **(_QWORD **)a3;
  v10[0] = a2;
  v10[1] = v7;
  return HMAssignmentLock(v10, 1LL);
}
