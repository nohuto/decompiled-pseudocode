/*
 * XREFs of xxxMenuBarDraw @ 0x1C024D514
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C004BB1C (xxxDrawWindowFrame.c)
 *     xxxDWP_DoNCActivate @ 0x1C00DCB94 (xxxDWP_DoNCActivate.c)
 * Callees:
 *     xxxMenuDraw @ 0x1C0043708 (xxxMenuDraw.c)
 *     GrePolyPatBlt @ 0x1C0045794 (GrePolyPatBlt.c)
 *     GetCaptionHeight @ 0x1C00472F4 (GetCaptionHeight.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078B40 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A9DC (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     GetAppCompatFlags2 @ 0x1C00E1310 (GetAppCompatFlags2.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE4E0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxMenuBarCompute @ 0x1C01025D4 (xxxMenuBarCompute.c)
 *     ThreadLockMenuNoModify @ 0x1C010280C (ThreadLockMenuNoModify.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C024BF78 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall xxxMenuBarDraw(_QWORD *a1, HDC a2, int a3, int a4)
{
  __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v10; // rcx
  unsigned int v11; // r15d
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 **v24[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v25; // [rsp+48h] [rbp-19h]
  __int128 v26; // [rsp+50h] [rbp-11h] BYREF
  __int64 v27; // [rsp+60h] [rbp-1h]
  _DWORD v28[4]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v29; // [rsp+78h] [rbp+17h]
  int v30; // [rsp+80h] [rbp+1Fh]
  unsigned int v31; // [rsp+84h] [rbp+23h]
  int v32; // [rsp+88h] [rbp+27h]
  int v33; // [rsp+8Ch] [rbp+2Bh]
  __int64 v34; // [rsp+90h] [rbp+2Fh]
  int v35; // [rsp+C8h] [rbp+67h]

  SmartObjStackRefBase<tagMENU>::Init(v24, 0LL);
  v8 = a1[21];
  v27 = 0LL;
  v26 = 0LL;
  v35 = 0;
  v25 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v24, v8);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v24) )
  {
    v9 = 1;
  }
  else
  {
    if ( (*(_BYTE *)(a1[5] + 16LL) & 0x40) != 0 && *(_QWORD *)(a1[2] + 432LL) == gpqForeground
      || (GetAppCompatFlags2(0x400u) & 0x80u) != 0LL )
    {
      *(_DWORD *)((*v24[0])[5] + 40) &= ~0x10u;
    }
    else
    {
      *(_DWORD *)((*v24[0])[5] + 40) |= 0x10u;
    }
    v10 = v25;
    if ( !v25 )
      v10 = (__int64)*v24[0];
    ThreadLockMenuNoModify(v10, &v26);
    v11 = GetCaptionHeight((__int64)a1) + a4;
    v12 = *(_DWORD *)(a1[5] + 96LL) + -2 * a3 - *(_DWORD *)(a1[5] + 88LL);
    if ( a1 != *((_QWORD **)*v24[0] + 10) || !*((_DWORD *)*v24[0] + 16) || !*((_DWORD *)*v24[0] + 17) )
      xxxMenuBarCompute(v24, (__int64)a1, v11, a3, *(_DWORD *)(a1[5] + 96LL) + -2 * a3 - *(_DWORD *)(a1[5] + 88LL));
    if ( *((_DWORD *)*v24[0] + 16) > v12
      || (int)(v11 + *((_DWORD *)*v24[0] + 17)) > *(_DWORD *)(a1[5] + 100LL) - *(_DWORD *)(a1[5] + 92LL) - a4 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v35 = 1;
      GreIntersectVisRect(
        a2,
        (unsigned int)(*(_DWORD *)(a1[5] + 88LL) + a3),
        *(unsigned int *)(a1[5] + 92LL),
        a3 + *(_DWORD *)(a1[5] + 88LL) + v12,
        *(_DWORD *)(a1[5] + 100LL) - a4);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
    v28[0] = a3;
    v28[1] = v11;
    v28[2] = *((_DWORD *)*v24[0] + 16);
    v28[3] = *((_DWORD *)*v24[0] + 17);
    if ( *(_QWORD *)((*v24[0])[5] + 24) )
    {
      v13 = *(_QWORD *)((*v24[0])[5] + 24);
    }
    else if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
    {
      v13 = *(_QWORD *)(gpsi + 4936LL);
    }
    else
    {
      v13 = *(_QWORD *)(gpsi + 4728LL);
    }
    v29 = v13;
    v30 = a3;
    v14 = (__int64)*v24[0];
    v33 = 1;
    v31 = v11 + *(_DWORD *)(v14 + 68);
    v15 = a1[5];
    v32 = *((_DWORD *)*v24[0] + 16);
    if ( (*(_BYTE *)(v15 + 25) & 3) == 0 || (*(_BYTE *)(v15 + 20) & 8) != 0 )
      v16 = *(_QWORD *)(gpsi + 4744LL);
    else
      v16 = *(_QWORD *)(gpsi + 4816LL);
    v34 = v16;
    GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v28, 2u);
    v17 = a1[5];
    if ( (*(_BYTE *)(v17 + 25) & 3) == 0 || (*(_BYTE *)(v17 + 20) & 8) != 0 )
      v18 = *(_QWORD *)(gpsi + 4744LL);
    else
      v18 = *(_QWORD *)(gpsi + 4816LL);
    v19 = GreSelectBrush(a2, v18);
    v20 = v25;
    v21 = v19;
    if ( !v25 )
      v20 = (__int64)*v24[0];
    xxxMenuDraw(a2, v20, 0LL);
    GreSelectBrush(a2, v21);
    if ( v35 )
      RecalcDCVisRgn(a2);
    v9 = *((_DWORD *)*v24[0] + 17) + 1;
    v22 = *((_QWORD *)&v26 + 1);
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)&v26 + 1) + 40LL) + 40LL) &= ~0x200u;
    ThreadUnlock1(v22);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v24);
  return v9;
}
