/*
 * XREFs of InternalInvalidate3 @ 0x1C00746C4
 * Callers:
 *     xxxEndPaint @ 0x1C00461A0 (xxxEndPaint.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00729C0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     CalcWindowRgn @ 0x1C004DE98 (CalcWindowRgn.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C004E050 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C004E4D0 (DirtyVisRgnTrackers.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     ClearHungFlag @ 0x1C007BE28 (ClearHungFlag.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     DecPaintCount @ 0x1C00F5634 (DecPaintCount.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C01101CC (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     IncPaintCount @ 0x1C023DEB0 (IncPaintCount.c)
 *     IncPaintCountInterMoveSize @ 0x1C023DF00 (IncPaintCountInterMoveSize.c)
 */

void __fastcall InternalInvalidate3(struct tagWND *a1, __int64 a2, int a3)
{
  int v6; // edi
  __int64 v7; // rcx
  struct tagWND *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  BOOL v11; // ebp
  __int64 v12; // rax
  int v13; // ebp
  int v14; // r14d
  int v15; // r15d
  unsigned int v16; // r13d
  _DWORD *v17; // rax
  int v18; // r9d
  int v19; // r8d
  int v20; // edi
  __int64 v21; // rax
  int v22; // ebp
  int v23; // r14d
  int v24; // r15d
  _DWORD *v25; // rax
  int v26; // r9d
  int v27; // r8d
  int v28; // edi
  __int64 v29; // rdx
  int v30; // r14d
  int v31; // ebp
  int v32; // r15d
  _DWORD *v33; // rax
  int v34; // r9d
  int v35; // r8d
  int v36; // edi
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdi
  int v42; // ecx
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // r8d
  __int64 v46; // rax
  __int64 v47; // rdx
  int v48; // eax
  int v49; // edx
  unsigned int v50; // ebp
  unsigned int v51; // ecx
  __int64 v52; // rdx
  __int64 v53; // rcx
  void *v54; // rax
  int v55; // edx
  unsigned int v56; // ebp
  unsigned int v57; // ecx
  __int64 v58; // rdx
  __int64 v59; // rcx
  void *v60; // rax
  int v61; // edx
  __int64 v62; // rdx
  __int64 v63; // rcx
  void *v64; // rax
  int v65; // [rsp+20h] [rbp-38h]
  BOOL v66; // [rsp+70h] [rbp+18h]

  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
    goto LABEL_6;
  v7 = *((_QWORD *)a1 + 3);
  v8 = 0LL;
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 8);
    if ( v9 )
      v8 = *(struct tagWND **)(v9 + 24);
  }
  if ( a1 != v8 || !(unsigned int)IsWindowDesktopComposed(a1) )
  {
LABEL_6:
    v10 = *((_QWORD *)a1 + 5);
    v11 = *(_QWORD *)(v10 + 136) || (*(_BYTE *)(v10 + 17) & 0x10) != 0;
    v66 = v11;
    if ( (a3 & 0x407) != 0 )
    {
      if ( (a3 & 2) != 0 )
        SetOrClrWF(1, (__int64)a1, 0x110u, 1);
      if ( !v6 )
        goto LABEL_40;
      v12 = *((_QWORD *)a1 + 5);
      v13 = *(_DWORD *)(v12 + 28);
      v14 = *(_DWORD *)(v12 + 24);
      v15 = *(_DWORD *)(v12 + 232);
      *(_BYTE *)(v12 + 17) &= ~1u;
      v16 = -268435456;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v17 = (_DWORD *)*((_QWORD *)a1 + 5);
        v18 = v17[7];
        v19 = v17[6];
        v20 = v17[58];
        if ( v13 != v18 )
          goto LABEL_87;
        if ( v14 == v19 && v15 == v20 )
          goto LABEL_17;
        if ( v13 == v18 )
        {
          if ( v14 == v19 )
          {
            if ( ((v15 ^ v20) & 0x2E00300) == 0 )
              goto LABEL_17;
            v49 = 1;
            v50 = -268435456;
          }
          else
          {
            v49 = ((v14 ^ v19) & 0x4E27A9) != 0;
            v50 = -v49 & 0xFFFFFFEC;
            v20 = v19 & -v49;
          }
        }
        else
        {
LABEL_87:
          v51 = (v13 ^ v18) & 0xB1CF0000;
          v49 = v51 != 0;
          v50 = -v49 & 0xFFFFFFF0;
          v20 = v18 & -v49;
        }
        if ( v49 )
        {
          DirtyVisRgnTrackers(a1);
          v54 = (void *)ReferenceDwmApiPort(v53, v52);
          DwmAsyncChildStyleChange(v54, *(_QWORD *)a1, v50, v20);
        }
      }
LABEL_17:
      if ( *((_QWORD *)a1 + 2) != gptiCurrent )
      {
        SetOrClrWF(1, (__int64)a1, 0x120u, 1);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 1) != 0 )
        {
          SetOrClrWF(1, (__int64)a1, 0x402u, 1);
          gRdwFlags |= a3;
        }
      }
      if ( a2 == 1 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) == 0 )
        SetOrClrWF(0, (__int64)a1, 0x102u, 1);
      if ( (a3 & 4) != 0 )
      {
        v21 = *((_QWORD *)a1 + 5);
        v22 = *(_DWORD *)(v21 + 28);
        v23 = *(_DWORD *)(v21 + 24);
        v24 = *(_DWORD *)(v21 + 232);
        *(_BYTE *)(v21 + 17) |= 2u;
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v25 = (_DWORD *)*((_QWORD *)a1 + 5);
          v26 = v25[7];
          v27 = v25[6];
          v28 = v25[58];
          if ( v22 != v26 )
            goto LABEL_95;
          if ( v23 == v27 && v24 == v28 )
            goto LABEL_24;
          if ( v22 == v26 )
          {
            if ( v23 == v27 )
            {
              if ( ((v24 ^ v28) & 0x2E00300) == 0 )
                goto LABEL_24;
              v55 = 1;
              v56 = -268435456;
            }
            else
            {
              v55 = ((v23 ^ v27) & 0x4E27A9) != 0;
              v56 = -v55 & 0xFFFFFFEC;
              v28 = v27 & -v55;
            }
          }
          else
          {
LABEL_95:
            v57 = (v22 ^ v26) & 0xB1CF0000;
            v55 = v57 != 0;
            v56 = -v55 & 0xFFFFFFF0;
            v28 = v26 & -v55;
          }
          if ( v55 )
          {
            DirtyVisRgnTrackers(a1);
            v60 = (void *)ReferenceDwmApiPort(v59, v58);
            DwmAsyncChildStyleChange(v60, *(_QWORD *)a1, v56, v28);
          }
        }
      }
LABEL_24:
      if ( (a3 & 0x404) != 0 )
      {
        v29 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v29 + 24) & 0x20) == 0 )
        {
          if ( (*(_BYTE *)(v29 + 19) & 0x18) == 0 && *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
          {
            VWPLAddBase(gpvwplHungRedraw, 0LL, a1, 0xAu, v65);
            v29 = *((_QWORD *)a1 + 5);
          }
          v30 = *(_DWORD *)(v29 + 28);
          v31 = *(_DWORD *)(v29 + 24);
          v32 = *(_DWORD *)(v29 + 232);
          *(_BYTE *)(v29 + 19) |= 8u;
          if ( (unsigned int)IsWindowDesktopComposed(a1) )
          {
            v33 = (_DWORD *)*((_QWORD *)a1 + 5);
            v34 = v33[7];
            v35 = v33[6];
            v36 = v33[58];
            if ( v30 != v34 )
              goto LABEL_103;
            if ( v31 == v35 && v32 == v36 )
              goto LABEL_33;
            if ( v30 == v34 )
            {
              if ( v31 == v35 )
              {
                if ( ((v32 ^ v36) & 0x2E00300) == 0 )
                  goto LABEL_33;
                v61 = 1;
              }
              else
              {
                v61 = ((v31 ^ v35) & 0x4E27A9) != 0;
                v16 = -v61 & 0xFFFFFFEC;
                v36 = v35 & -v61;
              }
            }
            else
            {
LABEL_103:
              v61 = ((v30 ^ v34) & 0xB1CF0000) != 0;
              v16 = -v61 & 0xFFFFFFF0;
              v36 = v34 & -v61;
            }
            if ( v61 )
            {
              DirtyVisRgnTrackers(a1);
              v64 = (void *)ReferenceDwmApiPort(v63, v62);
              DwmAsyncChildStyleChange(v64, *(_QWORD *)a1, v16, v36);
            }
          }
        }
      }
LABEL_33:
      if ( (a3 & 0x400) != 0 )
        SetOrClrWF(1, (__int64)a1, 0x108u, 1);
      v37 = *((_QWORD *)a1 + 5);
      v38 = *(_QWORD *)(v37 + 136);
      if ( v38 == 1 )
        goto LABEL_40;
      if ( a2 != 1 )
      {
        if ( v38 )
        {
          if ( (unsigned int)GreCombineRgn(v38, *(_QWORD *)(v37 + 136), a2, 2LL) )
            goto LABEL_40;
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic();
          v39 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL);
          if ( v39 && (unsigned int)GreCombineRgn(v39, a2, 0LL, 5LL) )
          {
LABEL_40:
            if ( !v66 )
            {
              v40 = *((_QWORD *)a1 + 5);
              if ( *(_QWORD *)(v40 + 136) || (*(_BYTE *)(v40 + 17) & 0x10) != 0 )
              {
                v41 = *((_QWORD *)a1 + 2);
                if ( (a3 & 0x20000) != 0 )
                {
                  if ( v41 == W32GetThreadWin32Thread(KeGetCurrentThread()) )
                    IncPaintCount(a1);
                  else
                    IncPaintCountInterMoveSize(a1);
                }
                else
                {
                  v42 = *(_DWORD *)(v41 + 600);
                  *(_DWORD *)(v41 + 600) = v42 + 1;
                  if ( !v42 )
                  {
                    EtwTraceWakePump(v41, a1, 15LL);
                    if ( (*(_DWORD *)(v41 + 488) & 1) == 0 )
                    {
                      *(_WORD *)(*(_QWORD *)(v41 + 448) + 6LL) |= 0x20u;
                      *(_WORD *)(*(_QWORD *)(v41 + 448) + 4LL) |= 0x20u;
                      if ( (*(_BYTE *)(*(_QWORD *)(v41 + 448) + 10LL) & 0x20) != 0 )
                        KeSetEvent(*(PRKEVENT *)(v41 + 736), 2, 0);
                    }
                  }
                }
              }
            }
            return;
          }
        }
      }
LABEL_52:
      DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 1LL;
      goto LABEL_40;
    }
    if ( (a3 & 0x838) == 0 || (((a3 & 0x8000) == 0) & (*(_BYTE *)(v10 + 17) >> 5)) != 0 )
      return;
    if ( (a3 & 0x10) != 0 )
      SetOrClrWF(0, (__int64)a1, 0x110u, 1);
    if ( (a3 & 8) == 0 )
      goto LABEL_65;
    if ( (a3 & 0x20) != 0 )
      SetOrClrWF(0, (__int64)a1, 0x102u, 1);
    if ( (a3 & 0x800) != 0 )
    {
      SetOrClrWF(0, (__int64)a1, 0x108u, 1);
      SetOrClrWF(0, (__int64)a1, 0x680u, 1);
    }
    if ( (a3 & 0x820) != 0 )
      ClearHungFlag(a1);
    v43 = *((_QWORD *)a1 + 5);
    if ( !*(_QWORD *)(v43 + 136) )
      goto LABEL_65;
    if ( (*(_BYTE *)(v43 + 17) & 8) != 0 )
    {
      if ( a2 != 1 )
        goto LABEL_76;
      a2 = ghrgnInv2;
      CalcWindowRgn((__int64)a1, ghrgnInv2, 1);
    }
    if ( a2 == 1 )
    {
LABEL_81:
      DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
      SetOrClrWF(0, (__int64)a1, 0x102u, 1);
      ClearHungFlag(a1);
LABEL_65:
      if ( v11 )
      {
        v44 = *((_QWORD *)a1 + 5);
        if ( !*(_QWORD *)(v44 + 136) && (*(_BYTE *)(v44 + 17) & 0x10) == 0 )
          DecPaintCount(a1);
      }
      return;
    }
LABEL_76:
    if ( *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) == 1LL )
    {
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic();
      v46 = *((_QWORD *)a1 + 5);
      v47 = *(_QWORD *)(v46 + 136);
      if ( !v47 )
        goto LABEL_52;
      LOBYTE(v45) = ~*(_BYTE *)(v46 + 17);
      if ( !(unsigned int)CalcWindowRgn((__int64)a1, v47, (v45 >> 3) & 1) )
        goto LABEL_52;
    }
    v48 = GreCombineRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), a2, 4LL);
    if ( !v48 )
      goto LABEL_52;
    if ( v48 != 1 )
      goto LABEL_65;
    goto LABEL_81;
  }
}
