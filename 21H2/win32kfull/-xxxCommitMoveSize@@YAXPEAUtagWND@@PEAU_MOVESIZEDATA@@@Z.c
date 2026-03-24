/*
 * XREFs of ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020D830
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020CEC0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EF28 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020F97C (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C002B73C (xxxMinMaximizeEx.c)
 *     CkptRestore @ 0x1C0041290 (CkptRestore.c)
 *     _MonitorFromRect @ 0x1C0042310 (_MonitorFromRect.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     xxxSetWindowPos @ 0x1C006BC54 (xxxSetWindowPos.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C020B854 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z @ 0x1C020B8CC (-MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z.c)
 *     ?ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAU_MOVESIZEDATA@@@Z @ 0x1C020C1F8 (-ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C020C4F0 (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C020EAAC (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     WPP_RECORDER_SF_qdddd @ 0x1C02112B0 (WPP_RECORDER_SF_qdddd.c)
 */

void __fastcall xxxCommitMoveSize(struct tagWND *a1, struct _MOVESIZEDATA *a2)
{
  int v4; // r15d
  int v5; // r14d
  struct _MOVESIZEDATA *v6; // rdx
  int v7; // r8d
  unsigned __int8 v8; // al
  int v9; // r12d
  struct tagRECT *v10; // rdi
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r15
  int v15; // r8d
  LONG v16; // ecx
  __int64 v17; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  _DWORD *v21; // r8
  char v22; // r9
  __int64 v23; // rcx
  unsigned int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // edx
  __int64 v28; // rcx
  struct tagRECT *Prop; // rax
  struct tagRECT *v30; // rdi
  int v31; // eax
  int v32; // edi
  int v33; // ecx
  int v34; // r10d
  int v35; // eax
  int v36; // ecx
  int v37; // edx
  int v38; // ecx
  __int64 v39; // rdx
  char v40; // al
  __int64 v41; // rdx
  int v42; // [rsp+20h] [rbp-49h]
  __int128 v43; // [rsp+50h] [rbp-19h] BYREF
  __int64 v44; // [rsp+60h] [rbp-9h]
  __int128 v45; // [rsp+68h] [rbp-1h] BYREF
  __int64 v46; // [rsp+78h] [rbp+Fh]
  struct tagRECT v47; // [rsp+80h] [rbp+17h] BYREF

  v44 = 0LL;
  v47 = 0LL;
  v46 = 0LL;
  v43 = 0LL;
  v4 = 0;
  v45 = 0LL;
  v5 = 0;
  if ( *((_QWORD *)a1 + 13) != GetDesktopWindow((__int64)a1) )
  {
LABEL_63:
    v27 = *((_DWORD *)a2 + 49);
    if ( (v27 & 0x7000) == 0x1000 && (v27 & 0x20) == 0
      || (v28 = *((_QWORD *)a1 + 5), LOBYTE(v28) = ((v27 & 0x100000) == 0) & *(_BYTE *)(v28 + 31), (v28 & 1) != 0) )
    {
      Prop = (struct tagRECT *)GetProp((__int64)a1, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, 1LL);
      v30 = Prop;
      if ( Prop )
      {
        v47 = *(struct tagRECT *)((char *)a2 + 24);
        SwapRect(Prop, &v47);
        xxxMinMaximizeEx(*((struct tagWND **)a2 + 2), 9u, 4, 0LL, 0LL, 0LL);
        SwapRect(&v47, v30);
        MakeArrangedStateObservable(a2);
      }
    }
    v31 = *((_DWORD *)a2 + 44);
    v32 = 516;
    if ( (v31 == 9 && !v5 || v31 == 10) && !v4 )
      v32 = 517;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdddd(
        v28,
        v27,
        v7,
        14,
        v42,
        (char)a1,
        *((_DWORD *)a2 + 6),
        *((_DWORD *)a2 + 7),
        *((_DWORD *)a2 + 8),
        *((_DWORD *)a2 + 9));
    v33 = v32 | 0x10;
    if ( (*((_DWORD *)a2 + 85) & 0x20) == 0 )
      v33 = v32;
    v34 = v33;
    if ( (v33 & 1) == 0 && (*((_DWORD *)a2 + 49) & 0x300) != 0 )
      v34 = v33 | 0x100000;
    v35 = *((_DWORD *)a2 + 70);
    v36 = *((_DWORD *)a2 + 9);
    v37 = v34 | 0x200000;
    *((_DWORD *)a2 + 49) |= 0x80000000;
    if ( (v35 & 8) == 0 )
      v37 = v34;
    xxxSetWindowPos(
      a1,
      0LL,
      *((unsigned int *)a2 + 6),
      *((unsigned int *)a2 + 7),
      *((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6),
      v36 - *((_DWORD *)a2 + 7),
      v37);
    v38 = *((_DWORD *)a2 + 49);
    if ( (v38 & 0x100000) == 0 || !gSqmIsOptedIn )
      goto LABEL_96;
    v39 = *((_QWORD *)a1 + 5);
    v40 = *(_BYTE *)(v39 + 233) & 3;
    if ( v40 == 3 )
    {
      v41 = 3537LL;
    }
    else if ( v40 )
    {
      v41 = 3529LL;
    }
    else
    {
      if ( (*(_BYTE *)(v39 + 31) & 0x20) != 0 )
        goto LABEL_96;
      if ( (*((_DWORD *)a2 + 49) & 0x6000) == 0x6000 )
      {
        v41 = 3535LL;
      }
      else if ( (*((_DWORD *)a2 + 49) & 0x7000) == 0x1000 )
      {
        v41 = 3530LL;
      }
      else
      {
        if ( (v38 & 0x6000) == 0 )
          goto LABEL_96;
        v41 = 5882LL;
      }
    }
    WinSqmIncrementDWORD(&SqmGlobalSessionGuid, v41, 1LL);
LABEL_96:
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      CkptRestore((__int64)a1, (struct _MOVESIZEDATA *)((char *)a2 + 24));
    goto LABEL_98;
  }
  v8 = ShouldGoMonitorMaximizedMoveSizeData(v6);
  v9 = v8;
  if ( (*((_DWORD *)a2 + 49) & 0x300) != 0 || v8 )
    v4 = 1;
  v10 = (struct tagRECT *)GetProp((__int64)a1, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, 1LL);
  if ( v10 )
  {
    if ( (unsigned int)(*((_DWORD *)a2 + 44) - 1) <= 1
      && (v11 = *((_DWORD *)a2 + 49), (v11 & 0x6000) == 0x6000)
      && (v11 & 0x300) == 0x300 )
    {
      v10->left = *((_DWORD *)a2 + 6);
      v10->right = *((_DWORD *)a2 + 8);
    }
    else
    {
      v12 = *((_QWORD *)a2 + 27);
      if ( v12 == *((_QWORD *)a2 + 29) )
      {
        if ( (*((_DWORD *)a2 + 49) & 0x1000) == 0
          && v4
          && ((*((_DWORD *)a2 + 70) & 8) == 0 || *((_DWORD *)a2 + 30) != -32000 || *((_DWORD *)a2 + 31) != -32000) )
        {
          *v10 = *(struct tagRECT *)((char *)a2 + 120);
        }
      }
      else if ( v9 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) != 0 )
      {
        if ( (*((_DWORD *)a2 + 49) & 0x1000000) != 0 )
        {
          v13 = *(_QWORD *)&v10->left - *((_QWORD *)a2 + 19);
          if ( *(_QWORD *)&v10->left == *((_QWORD *)a2 + 19) )
            v13 = *(_QWORD *)&v10->right - *((_QWORD *)a2 + 20);
          if ( v13 )
          {
            *v10 = *(struct tagRECT *)((char *)a2 + 152);
            v12 = *((_QWORD *)a2 + 27);
          }
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) == 3 )
          v12 = MonitorFromRect(v10, 2u, 0);
        v14 = *((_QWORD *)a2 + 29);
        v15 = *((_DWORD *)a2 + 49);
        if ( (v15 & 0x300) == 0x300 )
        {
          v16 = *((_DWORD *)a2 + 75);
          if ( v10->left <= v16 && v16 < v10->right )
          {
            v17 = MonitorFromRect(v10, 2u, 0);
            v15 = *((_DWORD *)a2 + 49);
            v14 = v17;
          }
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) == 3 && (v15 & 0x300) == 0x300 )
          *((_DWORD *)a2 + 49) = v15 | 0x80000;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v43 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v43;
        *((_QWORD *)&v43 + 1) = v12;
        if ( v12 )
          HMLockObject(v12);
        v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v45 = *(_QWORD *)(v19 + 416);
        *(_QWORD *)(v19 + 416) = &v45;
        *((_QWORD *)&v45 + 1) = v14;
        if ( v14 )
          HMLockObject(v14);
        if ( *(_WORD *)(*(_QWORD *)(v12 + 40) + 64LL) != *(_WORD *)(*(_QWORD *)(v14 + 40) + 64LL)
          && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
        {
          xxxGetMinMaxTrackInfo(a2, 0);
        }
        if ( MonitorFromRect(v10, 2u, 0) != v14 )
        {
          v21 = (_DWORD *)*((_QWORD *)a1 + 5);
          v22 = 32;
          if ( (v21[72] & 0xF) == 2
            && (v10->right - v10->left != v21[24] - v21[22] || v10->bottom - v10->top != v21[25] - v21[23]) )
          {
            v22 = 48;
          }
          if ( MigrateRectMonitors(
                 a1,
                 (__m128i *)v10,
                 (struct tagMONITOR *)v12,
                 &v47,
                 (struct tagMONITOR *)v14,
                 0LL,
                 a2,
                 v22) )
          {
            *v10 = v47;
          }
        }
        ThreadUnlock1(v20);
        ThreadUnlock1(v23);
      }
    }
  }
  v24 = *((_DWORD *)a2 + 49);
  if ( ((v24 ^ (v24 >> 5)) & 0x300) != 0 || (v24 & 0x80000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v25 = *((_QWORD *)a1 + 5);
    v4 = 0;
    v26 = *((_QWORD *)a2 + 3) - *(_QWORD *)(v25 + 88);
    if ( !v26 )
      v26 = *((_QWORD *)a2 + 4) - *(_QWORD *)(v25 + 96);
    if ( v26 )
    {
      v5 = 1;
      goto LABEL_56;
    }
  }
  v5 = 0;
LABEL_56:
  MakeArrangedStateObservable(a2);
  if ( !v9 )
    goto LABEL_63;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) == 0 || *((_QWORD *)a2 + 27) != *((_QWORD *)a2 + 29) )
    xxxMinMaximizeEx(a1, 3u, *((_WORD *)a2 + 99) & 0x10 | gdwPUDFlags & 0x10000 | 6, *((_QWORD *)a2 + 29), 0LL, 0LL);
  if ( (*((_DWORD *)a2 + 49) & 0x100000) != 0 )
  {
    if ( gSqmIsOptedIn )
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3532LL, 1LL);
LABEL_98:
    if ( (*((_DWORD *)a2 + 49) & 0x100000) != 0 )
    {
      if ( gSqmIsOptedIn )
      {
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3531LL, *((unsigned int *)a2 + 79));
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3528LL, *((unsigned int *)a2 + 80));
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3536LL, *((unsigned int *)a2 + 81));
      }
    }
  }
}
