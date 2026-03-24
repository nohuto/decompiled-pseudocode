/*
 * XREFs of xxxSetMenuItemInfo @ 0x1C00457B8
 * Callers:
 *     xxxLoadSysMenu @ 0x1C0042D94 (xxxLoadSysMenu.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C0043140 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0047758 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0048BE8 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     MNLookUpItem @ 0x1C0061B00 (MNLookUpItem.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     MakeMenuRtoL @ 0x1C024E57C (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxSetMenuItemInfo(_QWORD **a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  unsigned int v17; // ebx
  _QWORD *v18; // rcx
  __int64 v19; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v20[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h]
  __int128 v22; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h]
  int v24; // [rsp+90h] [rbp+20h] BYREF

  v22 = 0LL;
  v23 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v20, 0LL);
  v9 = a1[2];
  v19 = *(_QWORD *)v20[0];
  if ( !v9 )
    v9 = (_QWORD *)**a1;
  v10 = MNLookUpItem(v9, a2, a3, &v19);
  v21 = 0LL;
  v11 = v10;
  SmartObjStackRefBase<tagMENU>::operator=(v20);
  if ( !v11 )
  {
    if ( !a3 && a2 == 61744 )
    {
      v15 = 1;
    }
    else
    {
      UserSetLastError(1456LL);
      v15 = 0;
    }
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(a4 + 4) & 0x10) != 0 )
  {
    if ( (*(_DWORD *)(a4 + 8) & 0x2000) != 0 )
    {
      v17 = 1;
    }
    else
    {
      v17 = 0;
      if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) & 0x20) == 0 )
        goto LABEL_5;
    }
    v18 = a1[2];
    if ( !v18 )
      v18 = (_QWORD *)**a1;
    MakeMenuRtoL(v18, v17);
  }
LABEL_5:
  v12 = v21;
  if ( !v21 )
    v12 = *(_QWORD *)v20[0];
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v22 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v22;
  *((_QWORD *)&v22 + 1) = v12;
  if ( v12 )
    HMLockObject(v12);
  v24 = 0;
  v15 = SetLPITEMInfoNoRedraw((unsigned int)v20, v11, a4, a5, (__int64)&v24);
  if ( v24 )
    xxxRedrawForSetLPITEMInfo(v20, v11);
  ThreadUnlock1(v14);
LABEL_12:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v20);
  return v15;
}
