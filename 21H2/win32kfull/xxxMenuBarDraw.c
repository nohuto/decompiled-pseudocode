/*
 * XREFs of xxxMenuBarDraw @ 0x1C02488F8
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C00638D4 (xxxDrawWindowFrame.c)
 *     xxxDWP_DoNCActivate @ 0x1C00BABE4 (xxxDWP_DoNCActivate.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     GetCaptionHeight @ 0x1C00BBE0C (GetCaptionHeight.c)
 *     xxxMenuDraw @ 0x1C00BD4E0 (xxxMenuDraw.c)
 *     GrePolyPatBlt @ 0x1C00C1D4C (GrePolyPatBlt.c)
 *     xxxMenuBarCompute @ 0x1C00C2488 (xxxMenuBarCompute.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C02473A4 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall xxxMenuBarDraw(_QWORD *a1, HDC a2, int a3, int a4)
{
  __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  unsigned int v12; // r15d
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 *v27[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v28; // [rsp+48h] [rbp-19h]
  __int128 v29; // [rsp+50h] [rbp-11h] BYREF
  __int64 v30; // [rsp+60h] [rbp-1h]
  _DWORD v31[4]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v32; // [rsp+78h] [rbp+17h]
  int v33; // [rsp+80h] [rbp+1Fh]
  unsigned int v34; // [rsp+84h] [rbp+23h]
  int v35; // [rsp+88h] [rbp+27h]
  int v36; // [rsp+8Ch] [rbp+2Bh]
  __int64 v37; // [rsp+90h] [rbp+2Fh]
  int v38; // [rsp+C8h] [rbp+67h]

  SmartObjStackRefBase<tagMENU>::Init(v27, 0LL);
  v8 = a1[21];
  v30 = 0LL;
  v29 = 0LL;
  v38 = 0;
  v28 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v27, v8);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v27) )
  {
    v9 = 1;
  }
  else
  {
    if ( (*(_BYTE *)(a1[5] + 16LL) & 0x40) != 0 && *(_QWORD *)(a1[2] + 432LL) == gpqForeground
      || (ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()),
          *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u)
      && (*(_DWORD *)(ThreadWin32Thread + 648) & 0x80u) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(*v27[0] + 40) + 40LL) &= ~0x10u;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(*v27[0] + 40) + 40LL) |= 0x10u;
    }
    v11 = v28;
    if ( !v28 )
      v11 = *v27[0];
    *(_DWORD *)(*(_QWORD *)(v11 + 40) + 40LL) |= 0x200u;
    ThreadLock(v11, (__int64 *)&v29);
    v12 = GetCaptionHeight((__int64)a1) + a4;
    v13 = *(_DWORD *)(a1[5] + 96LL) + -2 * a3 - *(_DWORD *)(a1[5] + 88LL);
    if ( a1 != *(_QWORD **)(*v27[0] + 80) || !*(_DWORD *)(*v27[0] + 64) || !*(_DWORD *)(*v27[0] + 68) )
      xxxMenuBarCompute(v27, (__int64)a1, v12, a3, *(_DWORD *)(a1[5] + 96LL) + -2 * a3 - *(_DWORD *)(a1[5] + 88LL));
    if ( *(_DWORD *)(*v27[0] + 64) > v13
      || (int)(v12 + *(_DWORD *)(*v27[0] + 68)) > *(_DWORD *)(a1[5] + 100LL) - *(_DWORD *)(a1[5] + 92LL) - a4 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v38 = 1;
      GreIntersectVisRect(
        a2,
        (unsigned int)(*(_DWORD *)(a1[5] + 88LL) + a3),
        *(unsigned int *)(a1[5] + 92LL),
        a3 + *(_DWORD *)(a1[5] + 88LL) + v13,
        *(_DWORD *)(a1[5] + 100LL) - a4);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
    v31[0] = a3;
    v31[1] = v12;
    v31[2] = *(_DWORD *)(*v27[0] + 64);
    v31[3] = *(_DWORD *)(*v27[0] + 68);
    if ( *(_QWORD *)(*(_QWORD *)(*v27[0] + 40) + 24LL) )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(*v27[0] + 40) + 24LL);
    }
    else if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
    {
      v14 = *(_QWORD *)(gpsi + 4936LL);
    }
    else
    {
      v14 = *(_QWORD *)(gpsi + 4728LL);
    }
    v32 = v14;
    v33 = a3;
    v15 = *v27[0];
    v36 = 1;
    v34 = v12 + *(_DWORD *)(v15 + 68);
    v16 = a1[5];
    v35 = *(_DWORD *)(*v27[0] + 64);
    if ( (*(_BYTE *)(v16 + 25) & 3) == 0 || (*(_BYTE *)(v16 + 20) & 8) != 0 )
      v17 = *(_QWORD *)(gpsi + 4744LL);
    else
      v17 = *(_QWORD *)(gpsi + 4816LL);
    v37 = v17;
    GrePolyPatBlt(a2, 15728673, (struct _POLYPATBLT *)v31, 2);
    v18 = a1[5];
    if ( (*(_BYTE *)(v18 + 25) & 3) == 0 || (*(_BYTE *)(v18 + 20) & 8) != 0 )
      v19 = *(_QWORD *)(gpsi + 4744LL);
    else
      v19 = *(_QWORD *)(gpsi + 4816LL);
    v20 = GreSelectBrush(a2, v19);
    v21 = v28;
    v22 = v20;
    if ( !v28 )
      v21 = *v27[0];
    xxxMenuDraw(a2, v21, 0LL);
    GreSelectBrush(a2, v22);
    if ( v38 )
      RecalcDCVisRgn(a2);
    v9 = *(_DWORD *)(*v27[0] + 68) + 1;
    v24 = *((_QWORD *)&v29 + 1);
    v25 = *(_QWORD *)(*((_QWORD *)&v29 + 1) + 40LL);
    *(_DWORD *)(v25 + 40) &= ~0x200u;
    ThreadUnlock1(v24, v25, v23);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v27);
  return v9;
}
