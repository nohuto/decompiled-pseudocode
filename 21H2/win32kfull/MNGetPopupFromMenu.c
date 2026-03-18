/*
 * XREFs of MNGetPopupFromMenu @ 0x1C0043DBC
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0065F38 (xxxInsertMenuItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0068C00 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxEnableMenuItem @ 0x1C00BC4A0 (xxxEnableMenuItem.c)
 *     xxxSetMenuInfo @ 0x1C00BE9B8 (xxxSetMenuInfo.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00C20C0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C022FE00 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0249B08 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNAnimate @ 0x1C0247828 (MNAnimate.c)
 */

_DWORD *__fastcall MNGetPopupFromMenu(__int64 a1, __int64 **a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rax
  _DWORD *v6; // rbx
  __int64 v7; // rdi
  _QWORD *v8; // rcx
  __int64 *v10; // rbx
  __int64 i; // rdx
  __int64 v12; // rax
  __int64 *v13; // [rsp+20h] [rbp-10h] BYREF
  __int64 v14; // [rsp+28h] [rbp-8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = (__int64 *)gSmartObjNullRef;
  v14 = *(_QWORD *)(ThreadWin32Thread + 1472);
  *(_QWORD *)(ThreadWin32Thread + 1472) = &v14;
  v5 = *(_QWORD *)(a1 + 80);
  if ( v5 )
  {
    v10 = *(__int64 **)(*(_QWORD *)(v5 + 16) + 608LL);
    if ( v10 )
    {
      if ( (v10[1] & 4) != 0 )
      {
        if ( a2 )
          *a2 = v10;
        for ( i = *v10; ; i = *(_QWORD *)(v12 + 8) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v13, i);
          if ( !*v13 )
            break;
          if ( *(_QWORD *)(*v13 + 40) == a1 )
          {
            if ( (*(_DWORD *)*v13 & 1) != 0 )
              break;
            MNAnimate(v10, 0LL);
            v6 = (_DWORD *)*v13;
            goto LABEL_3;
          }
          if ( !*(_QWORD *)(*v13 + 24) )
            break;
          v12 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*v13 + 24));
          if ( !v12 )
            break;
        }
      }
    }
  }
  v6 = 0LL;
LABEL_3:
  v7 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( v13 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v13 + 2) )
  {
    if ( *((_BYTE *)v13 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v13);
  }
  v8 = *(_QWORD **)(v7 + 1472);
  if ( v8 )
    *(_QWORD *)(v7 + 1472) = *v8;
  return v6;
}
