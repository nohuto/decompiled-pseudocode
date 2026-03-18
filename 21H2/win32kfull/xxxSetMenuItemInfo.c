/*
 * XREFs of xxxSetMenuItemInfo @ 0x1C00BCB7C
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C0064A70 (NtUserThunkedMenuItemInfo.c)
 *     xxxLoadSysMenu @ 0x1C00BC940 (xxxLoadSysMenu.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     MNLookUpItem @ 0x1C0067EE0 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0068C00 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0068DF0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     MakeMenuRtoL @ 0x1C0249E28 (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxSetMenuItemInfo(__int64 **a1, unsigned int a2, int a3, __int64 a4, unsigned __int16 *a5)
{
  __int64 v9; // rcx
  PVOID **v10; // rax
  PVOID **v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // r8
  unsigned int v19; // ebx
  __int64 *v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v22[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h]
  __int128 v24; // [rsp+50h] [rbp-20h] BYREF
  __int64 v25; // [rsp+60h] [rbp-10h]
  int v26; // [rsp+90h] [rbp+20h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v22, 0LL);
  v23 = 0LL;
  v9 = (__int64)a1[2];
  v21 = *v22[0];
  if ( !v9 )
    v9 = **a1;
  v10 = (PVOID **)MNLookUpItem(v9, a2, a3, &v21);
  v23 = 0LL;
  v11 = v10;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v22, v21);
  if ( !v11 )
  {
    if ( !a3 && a2 == 61744 )
    {
      v16 = 1;
    }
    else
    {
      UserSetLastError(1456LL, v12);
      v16 = 0;
    }
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(a4 + 4) & 0x10) != 0 )
  {
    if ( (*(_DWORD *)(a4 + 8) & 0x2000) != 0 )
    {
      v19 = 1;
    }
    else
    {
      v19 = 0;
      if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x20) == 0 )
        goto LABEL_5;
    }
    v20 = a1[2];
    if ( !v20 )
      v20 = (__int64 *)**a1;
    MakeMenuRtoL(v20, v19);
  }
LABEL_5:
  v13 = v23;
  if ( !v23 )
    v13 = *v22[0];
  ThreadLock(v13, (__int64 *)&v24);
  v26 = 0;
  v16 = SetLPITEMInfoNoRedraw(v22, v11, a4, a5, &v26);
  if ( v26 )
    xxxRedrawForSetLPITEMInfo(v22, (__int64)v11);
  ThreadUnlock1(v15, v14, v17);
LABEL_10:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v22);
  return v16;
}
