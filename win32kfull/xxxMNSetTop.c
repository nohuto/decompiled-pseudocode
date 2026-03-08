/*
 * XREFs of xxxMNSetTop @ 0x1C021CD94
 * Callers:
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0218B30 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C02382C8 (xxxMNInvertItem.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C00A266C (MNGetpItemFromIndex.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4F34 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ThreadLockExchange @ 0x1C010A0D0 (ThreadLockExchange.c)
 *     xxxInvalidateRect @ 0x1C0217D5C (xxxInvalidateRect.c)
 *     xxxScrollWindowEx @ 0x1C0231B34 (xxxScrollWindowEx.c)
 *     MNDrawArrow @ 0x1C02372BC (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1C0237FB4 (xxxMNDrawFullNC.c)
 */

__int64 __fastcall xxxMNSetTop(__int64 **a1, signed int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r9
  int v8; // esi
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rcx
  struct tagWND *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  _QWORD v24[2]; // [rsp+48h] [rbp+7h] BYREF
  __int64 v25; // [rsp+58h] [rbp+17h]
  __int128 v26; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v27; // [rsp+70h] [rbp+2Fh]
  __int128 v28; // [rsp+78h] [rbp+37h] BYREF
  __int64 v29; // [rsp+88h] [rbp+47h]

  SmartObjStackRefBase<tagMENU>::Init(v24, *(_QWORD *)(**a1 + 40));
  v25 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v24) )
    goto LABEL_28;
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
    goto LABEL_28;
  if ( v25 )
    v4 = v25;
  else
    v4 = *(_QWORD *)v24[0];
  MNGetpItemFromIndex(v4, *(_DWORD *)(v4 + 116));
  if ( !v5 )
    v5 = *(_QWORD *)v24[0];
  v6 = MNGetpItemFromIndex(v5, a2);
  if ( !v7 || !v6 )
    goto LABEL_28;
  v8 = *(_DWORD *)(*(_QWORD *)v7 + 68LL) - *(_DWORD *)(*(_QWORD *)v6 + 68LL);
  v9 = *(_DWORD *)(*(_QWORD *)v24[0] + 124LL);
  if ( (v9 & 3) == 2 )
  {
    *(_DWORD *)(*(_QWORD *)v24[0] + 124LL) = v9 & 0xFFFFFFFC | 1;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 24LL) )
      goto LABEL_21;
    v10 = 4294967293LL;
    goto LABEL_20;
  }
  if ( (v9 & 3) == 3 )
  {
    *(_DWORD *)(*(_QWORD *)v24[0] + 124LL) = *(_DWORD *)(*(_QWORD *)v24[0] + 124LL) & 0xFFFFFFFC | 1;
    if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 24LL) )
    {
      v10 = 4294967292LL;
LABEL_20:
      MNDrawArrow(0LL, a1, v10);
    }
  }
LABEL_21:
  ThreadLock(*(_QWORD *)(**a1 + 16), &v26);
  v11 = v25;
  if ( !v25 )
    v11 = *(_QWORD *)v24[0];
  ThreadLock(v11, &v28);
  v12 = *(struct tagWND **)(**a1 + 16);
  if ( (signed int)abs32(v8) <= *(_DWORD *)(*(_QWORD *)v24[0] + 68LL) )
    xxxScrollWindowEx(v12, 0LL, 0LL, 0LL, 6);
  else
    xxxInvalidateRect(v12, 0LL, 1);
  v16 = ThreadUnlock1(v14, v13, v15);
  v25 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v24, v16);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v24) )
  {
    ThreadUnlock1(v18, v17, v19);
LABEL_28:
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v24);
    return 0LL;
  }
  *(_DWORD *)(*(_QWORD *)v24[0] + 116LL) = a2;
  v21 = *(_QWORD *)v24[0];
  if ( a2 )
  {
    if ( a2 != *(_DWORD *)(v21 + 120) )
      goto LABEL_36;
    *(_DWORD *)(*(_QWORD *)v24[0] + 124LL) |= 3u;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 24LL) )
      goto LABEL_36;
    v22 = 4294967292LL;
    goto LABEL_35;
  }
  *(_DWORD *)(v21 + 124) = *(_DWORD *)(v21 + 124) & 0xFFFFFFFC | 2;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 24LL) )
  {
    v22 = 4294967293LL;
LABEL_35:
    MNDrawArrow(0LL, a1, v22);
  }
LABEL_36:
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
  ThreadUnlock1(v23, v17, v19);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v24);
  return 1LL;
}
