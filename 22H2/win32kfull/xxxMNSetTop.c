/*
 * XREFs of xxxMNSetTop @ 0x1C023AFB8
 * Callers:
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0235BEC (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C024C7C0 (xxxMNInvertItem.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C00480C4 (MNGetpItemFromIndex.c)
 *     xxxScrollWindowEx @ 0x1C00677EC (xxxScrollWindowEx.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078AA0 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ThreadLockExchange @ 0x1C00C1250 (ThreadLockExchange.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxInvalidateRect @ 0x1C0234D7C (xxxInvalidateRect.c)
 *     MNDrawArrow @ 0x1C024C08C (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1C024C484 (xxxMNDrawFullNC.c)
 */

__int64 __fastcall xxxMNSetTop(__int64 **a1, signed int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned int v8; // r14d
  int v9; // r15d
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  struct tagWND *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  _QWORD v24[2]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v25; // [rsp+58h] [rbp+7h]
  __int128 v26; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v27; // [rsp+70h] [rbp+1Fh]
  __int128 v28; // [rsp+78h] [rbp+27h] BYREF
  __int64 v29; // [rsp+88h] [rbp+37h]

  SmartObjStackRefBase<tagMENU>::Init(v24, *(_QWORD *)(**a1 + 40));
  v25 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v24) )
    goto LABEL_32;
  if ( a2 >= 0 )
  {
    if ( a2 > *(_DWORD *)(*(_QWORD *)v24[0] + 120LL) )
      a2 = *(_DWORD *)(*(_QWORD *)v24[0] + 120LL);
  }
  else
  {
    a2 = 0;
  }
  if ( a2 == *(_DWORD *)(*(_QWORD *)v24[0] + 116LL) )
    goto LABEL_32;
  if ( v25 )
    v4 = v25;
  else
    v4 = *(_QWORD *)v24[0];
  MNGetpItemFromIndex(v4, *(_DWORD *)(v4 + 116));
  if ( !v5 )
    v5 = *(_QWORD *)v24[0];
  v6 = MNGetpItemFromIndex(v5, a2);
  if ( !v7 || !v6 )
    goto LABEL_32;
  v8 = 1;
  v9 = *(_DWORD *)(*(_QWORD *)v7 + 68LL) - *(_DWORD *)(*(_QWORD *)v6 + 68LL);
  v10 = *(_DWORD *)(*(_QWORD *)v24[0] + 124LL);
  if ( (v10 & 3) == 2 )
  {
    *(_DWORD *)(*(_QWORD *)v24[0] + 124LL) = v10 & 0xFFFFFFFC | 1;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 24LL) )
      goto LABEL_21;
    v11 = 4294967293LL;
    goto LABEL_20;
  }
  if ( (v10 & 3) == 3 )
  {
    *(_DWORD *)(*(_QWORD *)v24[0] + 124LL) = *(_DWORD *)(*(_QWORD *)v24[0] + 124LL) & 0xFFFFFFFC | 1;
    if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 24LL) )
    {
      v11 = 4294967292LL;
LABEL_20:
      MNDrawArrow(0LL, a1, v11);
    }
  }
LABEL_21:
  v12 = *(_QWORD *)(**a1 + 16);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v26 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v26;
  *((_QWORD *)&v26 + 1) = v12;
  if ( v12 )
    HMLockObject(v12);
  v14 = v25;
  if ( !v25 )
    v14 = *(_QWORD *)v24[0];
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v28 = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = &v28;
  *((_QWORD *)&v28 + 1) = v14;
  if ( v14 )
    HMLockObject(v14);
  v16 = *(struct tagWND **)(**a1 + 16);
  if ( (signed int)abs32(v9) <= *(_DWORD *)(*(_QWORD *)v24[0] + 68LL) )
    xxxScrollWindowEx(v16, 0, v9, 0LL, 0LL, 0LL, 0LL, 6);
  else
    xxxInvalidateRect(v16, 0LL, 1);
  v18 = ThreadUnlock1(v17);
  v25 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v24, v18);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v24) )
  {
    ThreadUnlock1(v19);
LABEL_32:
    v8 = 0;
    goto LABEL_33;
  }
  *(_DWORD *)(*(_QWORD *)v24[0] + 116LL) = a2;
  v21 = *(_QWORD *)v24[0];
  if ( a2 )
  {
    if ( a2 != *(_DWORD *)(v21 + 120) )
      goto LABEL_41;
    *(_DWORD *)(*(_QWORD *)v24[0] + 124LL) |= 3u;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 24LL) )
      goto LABEL_41;
    v22 = 4294967292LL;
  }
  else
  {
    *(_DWORD *)(v21 + 124) = *(_DWORD *)(v21 + 124) & 0xFFFFFFFC | 2;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 24LL) )
      goto LABEL_41;
    v22 = 4294967293LL;
  }
  MNDrawArrow(0LL, a1, v22);
LABEL_41:
  v23 = *(_QWORD *)v24[0];
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 24LL) )
  {
    v23 = **a1;
    if ( *(_QWORD *)(v23 + 16) )
    {
      ThreadLockExchange(*(_QWORD *)(**a1 + 16), (__int64)&v26);
      xxxMNDrawFullNC(*(struct tagWND **)(**a1 + 16));
    }
  }
  ThreadUnlock1(v23);
LABEL_33:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v24);
  return v8;
}
