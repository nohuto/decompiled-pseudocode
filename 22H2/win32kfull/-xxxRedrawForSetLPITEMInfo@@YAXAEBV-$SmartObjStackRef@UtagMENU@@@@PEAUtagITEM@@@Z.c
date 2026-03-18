/*
 * XREFs of ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00645A0
 * Callers:
 *     xxxSetMenuItemInfo @ 0x1C0062998 (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x1C00638F0 (xxxInsertMenuItem.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C005A604 (DwmGetClassStyle.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0062940 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C0064060 (MNGetpItemIndex.c)
 *     MNGetPopupFromMenu @ 0x1C0064740 (MNGetPopupFromMenu.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     xxxMNUpdateShownMenu @ 0x1C02314D0 (xxxMNUpdateShownMenu.c)
 */

_QWORD *__fastcall xxxRedrawForSetLPITEMInfo(__int64 **a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 *v9; // rax
  _QWORD *result; // rax
  __int64 v11; // rcx
  void *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF

  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  v14 = gSmartObjNullRef;
  v15 = *(_QWORD *)(v4 + 1512);
  *(_QWORD *)(v4 + 1512) = &v15;
  v6 = a1[2];
  if ( !v6 )
    v6 = (__int64 *)**a1;
  v7 = MNGetPopupFromMenu(v6, 0LL);
  if ( v7 != *(_QWORD *)v14 )
  {
    if ( v14 != gSmartObjNullRef && !--*(_DWORD *)(v14 + 8) )
    {
      if ( *(_BYTE *)(v14 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v14);
    }
    if ( v7 )
    {
      v14 = *(_QWORD *)(v7 + 88);
      ++*(_DWORD *)(v14 + 8);
    }
    else
    {
      v14 = gSmartObjNullRef;
    }
  }
  if ( *(_QWORD *)v14 )
  {
    xxxMNUpdateShownMenu(&v14, a2, 1LL);
    v13 = (__int64)a1[2];
    if ( !v13 )
      v13 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v13, a2) == -1 )
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v14);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x100) != 0
    && *(_DWORD *)(*(_QWORD *)a2 + 8LL) == 61536
    && *(_QWORD *)(**a1 + 80)
    && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(**a1 + 80)) )
  {
    DirtyVisRgnTrackers(*(_QWORD *)(**a1 + 80));
    DwmGetClassStyle(*(_QWORD *)(**a1 + 80));
    v11 = (__int64)*a1;
    if ( *(_QWORD *)(**a1 + 80) )
      v11 = **a1;
    v12 = (void *)ReferenceDwmApiPort(v11);
    DwmAsyncChildStyleChange(v12);
  }
  v8 = 0LL;
  v9 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v9 )
    v8 = *v9;
  if ( v14 != gSmartObjNullRef && !--*(_DWORD *)(v14 + 8) )
  {
    if ( *(_BYTE *)(v14 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v14);
  }
  result = *(_QWORD **)(v8 + 1512);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v8 + 1512) = result;
  }
  return result;
}
