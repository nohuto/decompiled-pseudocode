/*
 * XREFs of MNLookUpItem @ 0x1C006482C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     DwmGetClassStyle @ 0x1C005A604 (DwmGetClassStyle.c)
 *     xxxSetMenuItemInfo @ 0x1C0062998 (xxxSetMenuItemInfo.c)
 *     xxxMNCanClose @ 0x1C00632C4 (xxxMNCanClose.c)
 *     xxxInsertMenuItem @ 0x1C00638F0 (xxxInsertMenuItem.c)
 *     MNLookUpItem @ 0x1C006482C (MNLookUpItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00649F8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     _SetMenuDefaultItem @ 0x1C00A8D1C (_SetMenuDefaultItem.c)
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C0221D0C (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C0230280 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C023035C (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     _GetMenuState @ 0x1C024BB54 (_GetMenuState.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00635B4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNLookUpItem @ 0x1C006482C (MNLookUpItem.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C0108994 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 */

__int64 __fastcall MNLookUpItem(__int64 a1, unsigned int a2, int a3, _QWORD *a4)
{
  __int64 v5; // r15
  _QWORD *v8; // r13
  __int64 v9; // rsi
  __int64 *ThreadWin32Thread; // rax
  int v11; // ecx
  _QWORD *v12; // rsi
  int v13; // r12d
  int v14; // ecx
  __int64 v15; // rbx
  __int64 *v16; // rax
  _QWORD *v17; // rax
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 *v22; // [rsp+20h] [rbp-20h] BYREF
  __int64 v23; // [rsp+28h] [rbp-18h] BYREF
  __int64 v24; // [rsp+30h] [rbp-10h]

  v5 = a2;
  v8 = 0LL;
  v9 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v9 = *ThreadWin32Thread;
  v22 = (__int64 *)gSmartObjNullRef;
  v23 = *(_QWORD *)(v9 + 1512);
  *(_QWORD *)(v9 + 1512) = &v23;
  v24 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( !a1 || (v11 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL)) == 0 || (_DWORD)v5 == -1 )
  {
LABEL_31:
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v22);
    return 0LL;
  }
  if ( a3 )
  {
    if ( (unsigned int)v5 < v11 )
    {
      v19 = *(_QWORD *)(a1 + 88) + 96 * v5;
      if ( a4 )
        *a4 = a1;
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v22);
      return v19;
    }
    goto LABEL_31;
  }
  v12 = *(_QWORD **)(a1 + 88);
  v13 = 0;
  if ( v11 <= 0 )
  {
LABEL_13:
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)&v22) )
    {
      if ( a4 )
      {
        v21 = v24;
        if ( !v24 )
          v21 = *v22;
        *a4 = v21;
      }
      v20 = (__int64)v8;
      goto LABEL_26;
    }
    v15 = 0LL;
    v16 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v16 )
      v15 = *v16;
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v22);
    v17 = *(_QWORD **)(v15 + 1512);
    if ( v17 )
      *(_QWORD *)(v15 + 1512) = *v17;
    return 0LL;
  }
  while ( 1 )
  {
    v14 = *(_DWORD *)(*v12 + 8LL);
    if ( !v12[2] )
      break;
    if ( v14 == (_DWORD)v5 )
    {
      v24 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v22, a1);
      v8 = v12;
    }
    v20 = MNLookUpItem(v12[2], (unsigned int)v5, 0LL, a4);
    if ( v20 )
      goto LABEL_26;
LABEL_12:
    ++v13;
    v12 += 12;
    if ( v13 >= *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL) )
      goto LABEL_13;
  }
  if ( v14 != (_DWORD)v5 )
    goto LABEL_12;
  if ( a4 )
    *a4 = a1;
  v20 = (__int64)v12;
LABEL_26:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v22);
  return v20;
}
