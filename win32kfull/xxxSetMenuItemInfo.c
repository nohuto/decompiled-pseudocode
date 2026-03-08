/*
 * XREFs of xxxSetMenuItemInfo @ 0x1C00A2218
 * Callers:
 *     xxxLoadSysMenu @ 0x1C00A0224 (xxxLoadSysMenu.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C00A7020 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00A6850 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00A6ADC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     MNLookUpItem @ 0x1C00A75F0 (MNLookUpItem.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     MakeMenuRtoL @ 0x1C023B2B8 (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxSetMenuItemInfo(_QWORD **a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 ThreadWin32Thread; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // r8
  unsigned int v19; // ebx
  _QWORD *v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h]
  __int128 v25; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]
  int v27; // [rsp+90h] [rbp+20h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v22 = (__int64 *)gSmartObjNullRef;
  v23 = *(_QWORD *)(ThreadWin32Thread + 1512);
  *(_QWORD *)(ThreadWin32Thread + 1512) = &v23;
  v24 = 0LL;
  v21 = *v22;
  v10 = a1[2];
  if ( !v10 )
    v10 = (_QWORD *)**a1;
  v11 = MNLookUpItem(v10, a2, a3, &v21);
  v24 = 0LL;
  v12 = v11;
  SmartObjStackRefBase<tagMENU>::operator=(&v22, v21);
  if ( !v12 )
  {
    if ( a3 || a2 != 61744 )
    {
      UserSetLastError(1456);
      v16 = 0;
    }
    else
    {
      v16 = 1;
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
      if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) & 0x20) == 0 )
        goto LABEL_5;
    }
    v20 = a1[2];
    if ( !v20 )
      v20 = (_QWORD *)**a1;
    MakeMenuRtoL(v20, v19);
  }
LABEL_5:
  v13 = v24;
  if ( !v24 )
    v13 = *v22;
  ThreadLock(v13, &v25);
  v27 = 0;
  v16 = SetLPITEMInfoNoRedraw((unsigned int)&v22, v12, a4, a5, (__int64)&v27);
  if ( v27 )
    xxxRedrawForSetLPITEMInfo(&v22, v12);
  ThreadUnlock1(v15, v14, v17);
LABEL_10:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v22);
  return v16;
}
