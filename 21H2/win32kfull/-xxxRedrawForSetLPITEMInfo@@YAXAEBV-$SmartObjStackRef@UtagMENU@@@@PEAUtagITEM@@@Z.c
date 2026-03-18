/*
 * XREFs of ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0068C00
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0065F38 (xxxInsertMenuItem.c)
 *     xxxSetMenuItemInfo @ 0x1C00BCB7C (xxxSetMenuItemInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     MNGetPopupFromMenu @ 0x1C0043DBC (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C0068DA4 (MNGetpItemIndex.c)
 *     DwmAsyncChildStyleChange @ 0x1C006986C (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     DwmGetClassStyle @ 0x1C0098E00 (DwmGetClassStyle.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C02451B0 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxRedrawForSetLPITEMInfo(__int64 **a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rcx
  _DWORD *v6; // rax
  void *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rcx
  _QWORD *v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = (_QWORD *)gSmartObjNullRef;
  v13 = *(_QWORD *)(ThreadWin32Thread + 1472);
  *(_QWORD *)(ThreadWin32Thread + 1472) = &v13;
  v5 = (__int64)a1[2];
  if ( !v5 )
    v5 = **a1;
  v6 = MNGetPopupFromMenu(v5, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v12, v6);
  if ( !*v12 )
    goto LABEL_16;
  xxxMNUpdateShownMenu(&v12, a2, 1LL);
  v11 = a1[2];
  if ( !v11 )
    v11 = (__int64 *)**a1;
  if ( (unsigned int)MNGetpItemIndex(v11, a2, v9, v10) != -1 )
  {
LABEL_16:
    if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x100) != 0
      && *(_DWORD *)(*(_QWORD *)a2 + 8LL) == 61536
      && *(_QWORD *)(**a1 + 80)
      && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(**a1 + 80)) )
    {
      DirtyVisRgnTrackers(*(struct tagWND **)(**a1 + 80));
      DwmGetClassStyle(*(_QWORD *)(**a1 + 80));
      v8 = (void *)ReferenceDwmApiPort();
      DwmAsyncChildStyleChange(v8);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v12);
}
