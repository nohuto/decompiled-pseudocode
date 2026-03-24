/*
 * XREFs of xxxMNUpdateShownMenu @ 0x1C0249294
 * Callers:
 *     xxxSetMenuInfo @ 0x1C0046A14 (xxxSetMenuInfo.c)
 *     xxxEnableMenuItem @ 0x1C0046F10 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C0047358 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0047758 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C00480C4 (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C00482D0 (MNGetpItemIndex.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     xxxScrollWindowEx @ 0x1C00677EC (xxxScrollWindowEx.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _GetClientRect @ 0x1C00FF8F8 (_GetClientRect.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C0234D7C (xxxInvalidateRect.c)
 */

_QWORD *__fastcall xxxMNUpdateShownMenu(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // r14
  struct tagWND *v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // esi
  int v12; // r15d
  int v13; // r12d
  __int64 v14; // rcx
  unsigned __int16 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r8d
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r9
  int v23; // r8d
  __int64 v24; // rcx
  __int64 *v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // rax
  int v29; // r8d
  __int64 v30; // r10
  _QWORD v31[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v32; // [rsp+50h] [rbp-49h]
  _QWORD v33[3]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v34[4]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v35[2]; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v36; // [rsp+A0h] [rbp+7h] BYREF

  v3 = *a1;
  v5 = a3;
  *(_OWORD *)v35 = 0LL;
  v6 = *(struct tagWND **)(*(_QWORD *)v3 + 16LL);
  SmartObjStackRefBase<tagMENU>::Init(v31, *(_QWORD *)(*(_QWORD *)*a1 + 40LL));
  v32 = 0LL;
  v33[2] = 0LL;
  v34[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v33[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v33;
  v33[1] = v6;
  if ( v6 )
    HMLockObject(v6);
  v8 = v32;
  if ( !v32 )
    v8 = *(_QWORD *)v31[0];
  v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v34[0] = *(_QWORD *)(v9 + 416);
  *(_QWORD *)(v9 + 416) = v34;
  v34[1] = v8;
  if ( v8 )
    HMLockObject(v8);
  GetClientRect((__int64)v6, (__int64)v35);
  v10 = *(_QWORD *)v31[0];
  if ( *(_DWORD *)(*(_QWORD *)v31[0] + 64LL) )
    goto LABEL_34;
  v36 = *(struct tagRECT *)v35;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v35, 12));
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v35, 8));
  v13 = *(_DWORD *)(*(_QWORD *)v31[0] + 124LL);
  xxxSendMessage((unsigned __int64)v6, 0x1E2u, v5, 0LL);
  v14 = v32;
  if ( !v32 )
    v14 = *(_QWORD *)v31[0];
  if ( (unsigned int)MNGetpItemIndex(v14, a2) == -1 )
    goto LABEL_29;
  LOBYTE(v5) = v5 & 0xFB;
  v10 = *(_QWORD *)v31[0];
  if ( (((unsigned __int8)v13 ^ *(_BYTE *)(*(_QWORD *)v31[0] + 124LL)) & 3) != 0 )
    goto LABEL_29;
  LODWORD(v35[1]) = v15;
  if ( !a2 )
    goto LABEL_34;
  if ( v15 != v12 )
  {
LABEL_29:
    v25 = 0LL;
LABEL_30:
    xxxInvalidateRect(v6, (int *)v25, 1);
    goto LABEL_31;
  }
  HIDWORD(v35[1]) = *(_DWORD *)(*(_QWORD *)v31[0] + 68LL);
  if ( (*(_DWORD *)(*(_QWORD *)v31[0] + 124LL) & 3) != 0 )
  {
    if ( SHIDWORD(v35[1]) <= v11 )
    {
      v16 = v32;
      if ( !v32 )
        v16 = *(_QWORD *)v31[0];
      v17 = MNGetpItemFromIndex(v16, *(_DWORD *)(v16 + 116));
      v10 = *(_QWORD *)v17;
      v19 = v18 - *(_DWORD *)(*(_QWORD *)v17 + 68LL);
      HIDWORD(v35[0]) = v19;
      goto LABEL_40;
    }
    GetClientRect((__int64)v6, (__int64)&v36);
  }
  if ( v32 )
    v20 = v32;
  else
    v20 = *(_QWORD *)v31[0];
  v21 = MNGetpItemFromIndex(v20, *(_DWORD *)(v20 + 116));
  v10 = *(_QWORD *)v21;
  v36.top = v23 - *(_DWORD *)(*(_QWORD *)v21 + 68LL);
  HIDWORD(v35[0]) = v36.top;
  if ( v36.top >= 0 )
  {
    v10 = *(_QWORD *)v31[0];
    if ( v36.top < *(_DWORD *)(*(_QWORD *)v31[0] + 68LL) )
    {
      xxxScrollWindowEx(v6, 0, HIDWORD(v35[1]) - v11, &v36, (struct tagRECT *)v35, 0LL, 0LL, 6);
      if ( v32 )
        v24 = v32;
      else
        v24 = *(_QWORD *)v31[0];
      if ( (unsigned int)MNGetpItemIndex(v24, a2) == -1 )
        goto LABEL_29;
      goto LABEL_35;
    }
LABEL_34:
    v22 = v32;
  }
LABEL_35:
  if ( (v5 & 2) != 0 )
    goto LABEL_33;
  if ( !a2 )
    goto LABEL_29;
  if ( !v22 )
    v22 = *(_QWORD *)v31[0];
  v28 = MNGetpItemFromIndex(v22, *(_DWORD *)(v22 + 116));
  v19 = v29 - *(_DWORD *)(*(_QWORD *)v28 + 68LL);
  HIDWORD(v35[0]) = v19;
  v10 = (unsigned int)(v19 + *(_DWORD *)(v30 + 76));
  HIDWORD(v35[1]) = v19 + *(_DWORD *)(v30 + 76);
LABEL_40:
  if ( v19 >= 0 )
  {
    v10 = *(_QWORD *)v31[0];
    if ( SHIDWORD(v35[0]) < *(_DWORD *)(*(_QWORD *)v31[0] + 68LL) )
    {
      v25 = v35;
      goto LABEL_30;
    }
  }
LABEL_31:
  if ( (v5 & 4) != 0 )
    xxxSetWindowPos(v6, 0LL, 0LL, 0LL, 0, 0, 567);
LABEL_33:
  ThreadUnlock1(v10);
  ThreadUnlock1(v26);
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v31);
}
