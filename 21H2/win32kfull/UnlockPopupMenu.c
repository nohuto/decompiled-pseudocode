/*
 * XREFs of UnlockPopupMenu @ 0x1C0230354
 * Callers:
 *     MNFreePopup @ 0x1C021BD14 (MNFreePopup.c)
 *     xxxMNKeyDown @ 0x1C0231A20 (xxxMNKeyDown.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x1C022F2F0 (-UnlockPopupMenuWindow@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall UnlockPopupMenu(__int64 a1, __int64 *a2)
{
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*a2 )
    return 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v4, *a2);
  v4[2] = 0LL;
  UnlockPopupMenuWindow((__int64)v4);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v4);
  return HMAssignmentUnlock(a2);
}
