/*
 * XREFs of xxxMNUpdateShownMenu @ 0x1C02451B0
 * Callers:
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0068C00 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxEnableMenuItem @ 0x1C00BC4A0 (xxxEnableMenuItem.c)
 *     xxxSetMenuInfo @ 0x1C00BE9B8 (xxxSetMenuInfo.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00C20C0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     MNGetpItemIndex @ 0x1C0068DA4 (MNGetpItemIndex.c)
 *     MNGetpItemFromIndex @ 0x1C00BF0D8 (MNGetpItemFromIndex.c)
 *     xxxScrollWindowEx @ 0x1C00BFE8C (xxxScrollWindowEx.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _GetClientRect @ 0x1C00F2600 (_GetClientRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C022EAE0 (xxxInvalidateRect.c)
 */

_QWORD *__fastcall xxxMNUpdateShownMenu(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  struct tagWND *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // r14d
  int v12; // r15d
  int v13; // r12d
  __int64 v14; // rcx
  unsigned __int16 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r9
  int v22; // r8d
  __int64 v23; // rcx
  __int64 *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rax
  int v30; // r8d
  __int64 v31; // r10
  _QWORD v32[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v33; // [rsp+50h] [rbp-49h]
  __int128 v34; // [rsp+58h] [rbp-41h] BYREF
  __int64 v35; // [rsp+68h] [rbp-31h]
  __int128 v36; // [rsp+70h] [rbp-29h] BYREF
  __int64 v37; // [rsp+80h] [rbp-19h]
  __int64 v38[2]; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v39; // [rsp+A0h] [rbp+7h] BYREF

  v3 = *a1;
  *(_OWORD *)v38 = 0LL;
  v6 = *(struct tagWND **)(*(_QWORD *)v3 + 16LL);
  SmartObjStackRefBase<tagMENU>::Init(v32, *(_QWORD *)(*(_QWORD *)*a1 + 40LL));
  v33 = 0LL;
  v35 = 0LL;
  v37 = 0LL;
  v34 = 0LL;
  v36 = 0LL;
  ThreadLock((__int64)v6, (__int64 *)&v34);
  v7 = v33;
  if ( !v33 )
    v7 = *(_QWORD *)v32[0];
  ThreadLock(v7, (__int64 *)&v36);
  GetClientRect((__int64)v6, (__int64)v38);
  v10 = *(_QWORD *)v32[0];
  if ( *(_DWORD *)(*(_QWORD *)v32[0] + 64LL) )
    goto LABEL_30;
  v39 = *(struct tagRECT *)v38;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v38, 12));
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v38, 8));
  v13 = *(_DWORD *)(*(_QWORD *)v32[0] + 124LL);
  xxxSendMessage((ULONG_PTR)v6);
  v14 = v33;
  if ( !v33 )
    v14 = *(_QWORD *)v32[0];
  if ( (unsigned int)MNGetpItemIndex(v14, a2) == -1 )
    goto LABEL_25;
  a3 &= ~4u;
  v10 = *(_QWORD *)v32[0];
  if ( (((unsigned __int8)v13 ^ *(_BYTE *)(*(_QWORD *)v32[0] + 124LL)) & 3) != 0 )
    goto LABEL_25;
  LODWORD(v38[1]) = v15;
  if ( !a2 )
    goto LABEL_30;
  if ( v15 != v12 )
  {
LABEL_25:
    v24 = 0LL;
LABEL_26:
    xxxInvalidateRect(v6, (int *)v24, 1);
    goto LABEL_27;
  }
  HIDWORD(v38[1]) = *(_DWORD *)(*(_QWORD *)v32[0] + 68LL);
  if ( (*(_DWORD *)(*(_QWORD *)v32[0] + 124LL) & 3) != 0 )
  {
    if ( SHIDWORD(v38[1]) <= v11 )
    {
      v16 = v33;
      if ( !v33 )
        v16 = *(_QWORD *)v32[0];
      v17 = MNGetpItemFromIndex(v16, *(_DWORD *)(v16 + 116));
      v10 = *(_QWORD *)v17;
      v9 = (unsigned int)(v18 - *(_DWORD *)(*(_QWORD *)v17 + 68LL));
      HIDWORD(v38[0]) = v9;
      goto LABEL_36;
    }
    GetClientRect((__int64)v6, (__int64)&v39);
  }
  if ( v33 )
    v19 = v33;
  else
    v19 = *(_QWORD *)v32[0];
  v20 = MNGetpItemFromIndex(v19, *(_DWORD *)(v19 + 116));
  v10 = *(_QWORD *)v20;
  v9 = (unsigned int)(v22 - *(_DWORD *)(*(_QWORD *)v20 + 68LL));
  v39.top = v9;
  HIDWORD(v38[0]) = v9;
  if ( (int)v9 >= 0 )
  {
    v10 = *(_QWORD *)v32[0];
    if ( v39.top < *(_DWORD *)(*(_QWORD *)v32[0] + 68LL) )
    {
      xxxScrollWindowEx(v6, 0, HIDWORD(v38[1]) - v11, &v39, (struct tagRECT *)v38, 0LL, 0LL, 6);
      if ( v33 )
        v23 = v33;
      else
        v23 = *(_QWORD *)v32[0];
      if ( (unsigned int)MNGetpItemIndex(v23, a2) == -1 )
        goto LABEL_25;
      goto LABEL_31;
    }
LABEL_30:
    v21 = v33;
  }
LABEL_31:
  if ( (a3 & 2) != 0 )
    goto LABEL_29;
  if ( !a2 )
    goto LABEL_25;
  if ( !v21 )
    v21 = *(_QWORD *)v32[0];
  v29 = MNGetpItemFromIndex(v21, *(_DWORD *)(v21 + 116));
  v9 = (unsigned int)(v30 - *(_DWORD *)(*(_QWORD *)v29 + 68LL));
  HIDWORD(v38[0]) = v9;
  v10 = (unsigned int)(v9 + *(_DWORD *)(v31 + 76));
  HIDWORD(v38[1]) = v9 + *(_DWORD *)(v31 + 76);
LABEL_36:
  if ( (int)v9 >= 0 )
  {
    v10 = *(_QWORD *)v32[0];
    if ( SHIDWORD(v38[0]) < *(_DWORD *)(*(_QWORD *)v32[0] + 68LL) )
    {
      v24 = v38;
      goto LABEL_26;
    }
  }
LABEL_27:
  if ( (a3 & 4) != 0 )
    xxxSetWindowPos(v6, 0LL, 0LL, 0LL, 0, 0, 567);
LABEL_29:
  ThreadUnlock1(v10, v8, v9);
  ThreadUnlock1(v26, v25, v27);
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v32);
}
