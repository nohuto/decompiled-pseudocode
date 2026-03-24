/*
 * XREFs of ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020CEC0
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020D62C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DF30 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C002B73C (xxxMinMaximizeEx.c)
 *     GetMonitorWorkRectForWindow @ 0x1C002C560 (GetMonitorWorkRectForWindow.c)
 *     UpdateCheckpoint @ 0x1C0041238 (UpdateCheckpoint.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     xxxSysCommand @ 0x1C0130714 (xxxSysCommand.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020B66C (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C020C0C4 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C020C24C (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020D830 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAUtagMONITOR@@H@Z @ 0x1C020E5CC (-xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAU.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020F97C (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 */

__int64 __fastcall xxxApplyArrangeAction(struct tagWND *a1, unsigned int a2, int a3, int a4, struct _MOVESIZEDATA *a5)
{
  unsigned int v7; // esi
  BOOL v8; // ecx
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int8 v19; // al
  __int64 v20; // rcx
  int v21; // r12d
  __int64 v22; // rbx
  __int64 v23; // rdx
  char *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rax
  unsigned __int8 v28; // al
  __int64 v29; // rbx
  __int64 v30; // rbx
  unsigned int v31; // r12d
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rbx
  struct tagMONITOR *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int16 v45; // r14
  __int64 v46; // r10
  __int64 v47; // r10
  __int64 v48; // rbx
  bool v49; // zf
  struct tagMONITOR *v50; // r15
  __int64 v51; // rcx
  unsigned int v52; // ebx
  int v53; // ecx
  int v54; // r12d
  __int64 ThreadWin32Thread; // rax
  struct tagMONITOR *v57; // [rsp+30h] [rbp-81h] BYREF
  int v58; // [rsp+38h] [rbp-79h]
  __int64 v59; // [rsp+40h] [rbp-71h] BYREF
  __int128 v60; // [rsp+48h] [rbp-69h] BYREF
  __int64 v61; // [rsp+58h] [rbp-59h]
  char v62; // [rsp+60h] [rbp-51h] BYREF
  char v63; // [rsp+70h] [rbp-41h] BYREF
  __int128 v64; // [rsp+80h] [rbp-31h] BYREF
  __int128 v65; // [rsp+90h] [rbp-21h] BYREF
  __int128 v66; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v67[2]; // [rsp+B0h] [rbp-1h] BYREF

  v58 = a4;
  v61 = 0LL;
  v7 = 1;
  v60 = 0LL;
  *(_OWORD *)v67 = 0LL;
  v8 = a5 && (*((_DWORD *)a5 + 70) & 8) != 0;
  if ( !a3 )
  {
    v54 = 2;
    if ( a2 - 1 <= 2 )
      v54 = 6;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v60 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v60;
    *((_QWORD *)&v60 + 1) = 0LL;
    v7 = xxxMinMaximizeEx(a1, 3u, v54 | 0x10u, 0LL, v67, 0LL) != 0;
    goto LABEL_96;
  }
  v9 = a3 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
      xxxSysCommand(a1, 61730, 0LL);
      return v7;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v59 = 0LL;
      v57 = 0LL;
      if ( a2 == 4 )
      {
        *((_DWORD *)a5 + 60) = 4;
        UpdateCheckpoint((__int64)a1);
      }
      v38 = *((_QWORD *)a5 + 29);
      v39 = v57;
      do
      {
        v40 = *((_QWORD *)a5 + 2);
        v66 = 0LL;
        v41 = *(_QWORD *)(v40 + 40);
        if ( (*(_DWORD *)(v41 + 288) & 0xF) == 2 || v38 == *((_QWORD *)a5 + 26) )
        {
          v66 = *GetMonitorWorkRectForWindow(&v64, v38, a1);
        }
        else
        {
          v66 = *(_OWORD *)(*(_QWORD *)(v38 + 40) + 44LL);
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v41);
          PhysicalToLogicalDPIRect(&v66, &v66, CurrentThreadDpiAwarenessContext, (char *)a5 + 208);
        }
        v45 = v58;
        if ( IsDockTargetActive((__int64)a5, v38, 0) && (int)v66 <= (__int16)v58 )
        {
          v46 = v59;
          if ( (__int16)v58 <= SDWORD2(v66) )
            v46 = v38;
          v59 = v46;
        }
        if ( IsDockTargetActive(v44, v43, 3) && (int)v66 <= (__int16)v58 && (__int16)v58 <= SDWORD2(v66) )
          v39 = (struct tagMONITOR *)v38;
        v48 = *(_QWORD *)(v38 + 280);
        if ( v48 == gpDispInfo + 144LL )
          v48 = *(_QWORD *)(gpDispInfo + 144LL);
        v38 = v48 - 280;
      }
      while ( v38 != *((_QWORD *)a5 + 29) );
      v57 = v39;
      v49 = v39 == 0LL;
      v7 = 1;
      if ( !v49 && v47 )
      {
        v50 = v57;
        LOWORD(v58) = *((_WORD *)GetMonitorWorkRectForWindow(&v65, v38, a1) + 2);
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 40LL) + 288LL) & 0xF) != 2 )
        {
          v51 = *(unsigned __int16 *)(*(_QWORD *)(v59 + 40) + 64LL);
          if ( *(_WORD *)(*((_QWORD *)v57 + 5) + 64LL) != (_WORD)v51 )
          {
            v50 = (struct tagMONITOR *)v59;
            v57 = (struct tagMONITOR *)(unsigned int)v45;
            v52 = W32GetCurrentThreadDpiAwarenessContext(v51);
            LogicalToPhysicalDPIPoint(&v57, &v57, v52, (char *)a5 + 208);
            PhysicalToLogicalDPIPoint(&v57, &v57, v52, &v59);
            v45 = (__int16)v57;
          }
        }
        SizeRect(
          a5,
          (unsigned __int16)(v45 + *((_WORD *)a5 + 84)) | ((unsigned __int16)(v58 + *((_WORD *)a5 + 86)) << 16),
          v50,
          0LL);
        goto LABEL_88;
      }
      return 0;
    }
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
          {
            v15 = *((_QWORD *)a5 + 29);
            v16 = *(_QWORD *)(v15 + 288);
            if ( v16 == gpDispInfo + 144LL )
              v16 = *(_QWORD *)(gpDispInfo + 152LL);
            v17 = v16 - 280;
            if ( v17 != v15 )
            {
              while ( a2 )
              {
                v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                *(_QWORD *)&v60 = *(_QWORD *)(v18 + 416);
                *(_QWORD *)(v18 + 416) = &v60;
                *((_QWORD *)&v60 + 1) = v17;
                if ( v17 )
                  HMLockObject(v17);
                v19 = xxxEvaluateDestRectForMonitorMigration(a2, a5, a1, v17, 0);
                v21 = v19;
                if ( v19 )
                {
                  if ( a2 != 1 )
                    goto LABEL_40;
                  *((_DWORD *)a5 + 44) = 3;
                  SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
                  v24 = &v62;
                  goto LABEL_39;
                }
                v22 = *(_QWORD *)(v17 + 288);
                ThreadUnlock1(v20);
                if ( v22 == gpDispInfo + 144LL )
                  v22 = *(_QWORD *)(gpDispInfo + 152LL);
                v17 = v22 - 280;
                if ( v17 == *((_QWORD *)a5 + 29) )
                  goto LABEL_43;
              }
LABEL_45:
              SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
LABEL_88:
              *(_OWORD *)((char *)a5 + 24) = *(_OWORD *)((char *)a5 + 40);
              xxxCommitMoveSize(a1, a5);
              return v7;
            }
          }
        }
        else
        {
          v25 = *((_QWORD *)a5 + 29);
          v26 = *(_QWORD *)(v25 + 280);
          if ( v26 == gpDispInfo + 144LL )
            v26 = *(_QWORD *)(gpDispInfo + 144LL);
          v17 = v26 - 280;
          if ( v17 != v25 )
          {
            while ( a2 )
            {
              v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)&v60 = *(_QWORD *)(v27 + 416);
              *(_QWORD *)(v27 + 416) = &v60;
              *((_QWORD *)&v60 + 1) = v17;
              if ( v17 )
                HMLockObject(v17);
              v28 = xxxEvaluateDestRectForMonitorMigration(a2, a5, a1, v17, 0);
              v21 = v28;
              if ( v28 )
              {
                if ( a2 == 1 )
                {
                  *((_DWORD *)a5 + 44) = 3;
                  SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
                  v24 = &v63;
LABEL_39:
                  *((_DWORD *)a5 + 75) = HIDWORD(*(_QWORD *)GetMonitorWorkRectForWindow(v24, v23, a1));
                }
                else
                {
LABEL_40:
                  if ( a2 - 2 <= 1 )
                    SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
                }
                ThreadUnlock1(v20);
LABEL_43:
                if ( v21 )
                  goto LABEL_88;
                return 0;
              }
              v29 = *(_QWORD *)(v17 + 280);
              ThreadUnlock1(v20);
              if ( v29 == gpDispInfo + 144LL )
                v29 = *(_QWORD *)(gpDispInfo + 144LL);
              v17 = v29 - 280;
              if ( v17 == *((_QWORD *)a5 + 29) )
                goto LABEL_43;
            }
            goto LABEL_45;
          }
        }
        return 0;
      }
      v30 = *((_QWORD *)a5 + 29);
      v31 = 2;
      if ( a2 == 3 && !v8 )
      {
        v32 = *(_QWORD *)(v30 + 280);
        if ( v32 == gpDispInfo + 144LL )
          v32 = *(_QWORD *)(gpDispInfo + 144LL);
        v31 = 1;
        v30 = v32 - 280;
      }
      v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v60 = *(_QWORD *)(v33 + 416);
      *(_QWORD *)(v33 + 416) = &v60;
      *((_QWORD *)&v60 + 1) = v30;
      if ( v30 )
        HMLockObject(v30);
      v34 = v31;
    }
    else
    {
      v30 = *((_QWORD *)a5 + 29);
      if ( a2 == 2 && !v8 )
      {
        v36 = *(_QWORD *)(v30 + 288);
        if ( v36 == gpDispInfo + 144LL )
          v36 = *(_QWORD *)(gpDispInfo + 152LL);
        v7 = 2;
        v30 = v36 - 280;
      }
      v37 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v60 = *(_QWORD *)(v37 + 416);
      *(_QWORD *)(v37 + 416) = &v60;
      *((_QWORD *)&v60 + 1) = v30;
      if ( v30 )
        HMLockObject(v30);
      v34 = v7;
    }
    v7 = xxxProgrammaticSemiMaximize(a5, v30, v34);
LABEL_96:
    ThreadUnlock1(v35);
    return v7;
  }
  v53 = 0;
  if ( a2 - 1 <= 2 )
    v53 = 4;
  return xxxMinMaximizeEx(a1, 6u, v53 | gdwPUDFlags & 0x10000u, 0LL, 0LL, 0LL) != 0;
}
