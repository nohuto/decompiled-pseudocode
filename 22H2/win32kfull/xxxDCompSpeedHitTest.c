/*
 * XREFs of xxxDCompSpeedHitTest @ 0x1C004CE8C
 * Callers:
 *     xxxSpeedHitTest @ 0x1C004CCF4 (xxxSpeedHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C021741C (xxxPointerSpeedHitTest.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C004DA7C (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C004DD04 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006FC20 (_GetTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00C0778 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C01263E0 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0132244 (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D1F08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C021481C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     TouchTargetChildTree @ 0x1C0216D6C (TouchTargetChildTree.c)
 *     xxxTouchTargetWindow @ 0x1C0217BA8 (xxxTouchTargetWindow.c)
 */

char __fastcall xxxDCompSpeedHitTest(
        __int64 a1,
        unsigned int a2,
        const struct _SUBPIXELS *a3,
        __int64 a4,
        struct tagTOUCHTARGETINGCONTACT *a5,
        __int64 a6,
        _OWORD *a7)
{
  _OWORD *v8; // rax
  int v9; // edx
  _OWORD *v10; // rsi
  char v11; // di
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int128 v15; // xmm4
  __int128 v16; // xmm5
  __int128 v17; // xmm6
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  struct tagPOINT *v21; // r13
  struct tagPOINT v22; // rbx
  struct tagWND *v23; // rax
  struct tagWND *v24; // r12
  struct tagWND *v25; // rax
  struct tagWND *v26; // rbx
  __int64 v27; // rax
  __int128 v28; // xmm1
  __int64 v29; // rcx
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int64 v36; // rax
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  int v38; // r9d
  _OWORD *v39; // rax
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  __int128 v42; // xmm3
  __int128 v43; // xmm4
  __int128 v44; // xmm5
  __int128 v45; // xmm6
  __int64 v47; // rcx
  struct tagWND *TopLevelWindow; // r12
  __int64 ThreadWin32Thread; // rax
  int v50; // eax
  bool v51; // bl
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // [rsp+28h] [rbp-E0h]
  int v55; // [rsp+4Ch] [rbp-BCh]
  __int64 v56; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v58[17]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v59[112]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v60[112]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v61[128]; // [rsp+1C8h] [rbp+C0h] BYREF

  v8 = (_OWORD *)DCompHitTest(v59, a1, a2, a4, a6);
  v10 = a7;
  v11 = 0;
  v12 = v8[1];
  v13 = v8[2];
  v14 = v8[3];
  v15 = v8[4];
  v16 = v8[5];
  v17 = v8[6];
  *a7 = *v8;
  v10[1] = v12;
  v10[2] = v13;
  v10[3] = v14;
  v10[4] = v15;
  v10[5] = v16;
  v10[6] = v17;
  v18 = *((_DWORD *)v10 + 23);
  v55 = *((_DWORD *)v10 + 1);
  if ( v18 == 2 )
    v19 = -(*((_DWORD *)v10 + 22) & 1);
  else
    v19 = 0;
  if ( v19 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_(v18, v9, 16, 34, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    }
    v20 = 2;
  }
  else
  {
    if ( v18 == 2 )
      v36 = *((_QWORD *)v10 + 10);
    else
      v36 = 0LL;
    if ( v36 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_(v18, v9, 16, 35, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      }
      CompositionInputWindowUIOwner = (struct tagWND *)*((_QWORD *)v10 + 10);
      if ( (*(_DWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 288LL) & 0xF) != 2 )
      {
        if ( (unsigned int)IsIndependentInputWindow(*((const struct tagWND **)v10 + 10)) )
          CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
        v56 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 256LL));
        PhysicalToLogicalDPIPoint(
          a1 + 20,
          a1 + 20,
          *(unsigned int *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 288LL),
          &v56);
      }
      goto LABEL_16;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_(v18, v9, 16, 36, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    }
    v20 = 1;
  }
  if ( a5 )
  {
    if ( v20 == 2 )
    {
      v47 = *((_QWORD *)v10 + 10);
      v57 = 0LL;
      LOWORD(a7) = 0;
      TopLevelWindow = (struct tagWND *)GetTopLevelWindow(v47);
      if ( TopLevelWindow )
      {
        v58[2] = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v58[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v58;
        v58[1] = TopLevelWindow;
        HMLockObject(TopLevelWindow);
        v50 = *(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1;
        v56 = a1 + 20;
        v51 = (unsigned int)xxxTouchTargetWindow(
                              TopLevelWindow,
                              a5,
                              (struct tagPOINT *)(a1 + 20),
                              (__int64)&a7,
                              (__int64)&v57,
                              v50) != 0;
        ThreadUnlock1(v52);
        if ( v51 )
        {
          v53 = TouchTargetChildTree(TopLevelWindow, a5, v54);
          v39 = (_OWORD *)INPUTDEST_FROM_PWND(v60, v53);
          v11 = 1;
          goto LABEL_35;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v38 = 37;
      goto LABEL_33;
    }
LABEL_34:
    v39 = (_OWORD *)INPUTDEST_FROM_PWND(v61, *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL));
LABEL_35:
    v40 = v39[1];
    v41 = v39[2];
    v42 = v39[3];
    v43 = v39[4];
    v44 = v39[5];
    v45 = v39[6];
    *v10 = *v39;
    v10[1] = v40;
    v10[2] = v41;
    v10[3] = v42;
    v10[4] = v43;
    v10[5] = v44;
    v10[6] = v45;
    goto LABEL_17;
  }
  v21 = (struct tagPOINT *)(a1 + 20);
  v22 = *(struct tagPOINT *)(a1 + 20);
  if ( v20 != 2
    || (v23 = (struct tagWND *)GetTopLevelWindow(*((_QWORD *)v10 + 10)), (v24 = v23) == 0LL)
    || !(unsigned int)DCEIsWindowHit(v23, v21, a3) )
  {
    v24 = TopLevelSpeedHitTest(grpdeskRitInput, v21, a3);
  }
  if ( !v24
    || (!gfDwmChildWindowDpiIsolationEnabled
      ? (v25 = ClassicChildTreeSpeedHitTest(v24, *v21))
      : (v25 = DCEChildTreeSpeedHitTest(v24, v22, v21, a3)),
        (v26 = v25) == 0LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v38 = 38;
LABEL_33:
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_(v18, v9, 16, v38, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      goto LABEL_34;
    }
    goto LABEL_34;
  }
  memset(&v58[3], 0, 0x70uLL);
  v27 = *((_QWORD *)v26 + 2);
  v28 = *(_OWORD *)&v58[5];
  LODWORD(v58[3]) = 4;
  v29 = *(_QWORD *)(v27 + 424);
  v58[13] = v26;
  HIDWORD(v58[14]) = 2;
  LODWORD(v27) = *(_DWORD *)(v29 + 1088);
  *v10 = *(_OWORD *)&v58[3];
  HIDWORD(v58[16]) = v27;
  v30 = *(_OWORD *)&v58[7];
  v10[1] = v28;
  v31 = *(_OWORD *)&v58[9];
  v10[2] = v30;
  v32 = *(_OWORD *)&v58[11];
  v10[3] = v31;
  v33 = *(_OWORD *)&v58[13];
  v10[4] = v32;
  v34 = *(_OWORD *)&v58[15];
  v10[5] = v33;
  v10[6] = v34;
LABEL_16:
  v11 = 1;
LABEL_17:
  *((_DWORD *)v10 + 1) = v55;
  return v11;
}
