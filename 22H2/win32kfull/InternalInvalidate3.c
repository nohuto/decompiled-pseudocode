/*
 * XREFs of InternalInvalidate3 @ 0x1C0034D50
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00328E0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     NtUserEndPaint @ 0x1C00964C0 (NtUserEndPaint.c)
 *     xxxEndPaint @ 0x1C00CEAA0 (xxxEndPaint.c)
 * Callees:
 *     DecPaintCount @ 0x1C008C320 (DecPaintCount.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     CalcWindowRgn @ 0x1C00CCAA4 (CalcWindowRgn.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EE714 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     IncPaintCount @ 0x1C0222DD0 (IncPaintCount.c)
 *     IncPaintCountInterMoveSize @ 0x1C0222E20 (IncPaintCountInterMoveSize.c)
 */

void __fastcall InternalInvalidate3(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v4; // r13
  int v6; // ebp
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r9
  BOOL v11; // r12d
  __int64 v12; // rax
  int v13; // edi
  int v14; // r14d
  int v15; // r15d
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // rax
  int v19; // ebp
  int v20; // eax
  int v21; // r12d
  __int64 v22; // rax
  int v23; // edi
  int v24; // r14d
  int v25; // r15d
  unsigned int *v26; // rax
  int v27; // ebp
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdi
  int v35; // ecx
  __int64 v36; // rax
  int v37; // r14d
  int v38; // ebp
  int v39; // edi
  _DWORD *v40; // rax
  int v41; // ebp
  int v42; // edi
  int v43; // r14d
  int v44; // eax
  int v45; // edi
  int v46; // r15d
  _DWORD *v47; // rax
  int v48; // r14d
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rcx
  void *v56; // rax
  __int64 v57; // rcx
  void *v58; // rax
  __int64 v59; // rcx
  void *v60; // rax
  __int64 v61; // rcx
  void *v62; // rax
  __int64 v63; // [rsp+20h] [rbp-48h]
  BOOL v64; // [rsp+80h] [rbp+18h]
  int v65; // [rsp+88h] [rbp+20h]
  int v66; // [rsp+88h] [rbp+20h]
  int v67; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
    goto LABEL_6;
  v7 = a1[3];
  v8 = 0LL;
  if ( v7 )
  {
    a3 = *(_QWORD *)(v7 + 8);
    if ( a3 )
      v8 = *(_QWORD **)(a3 + 24);
  }
  if ( a1 != v8 || !(unsigned int)IsWindowDesktopComposed(a1) )
  {
LABEL_6:
    v9 = a1[5];
    v10 = 1LL;
    v11 = *(_QWORD *)(v9 + 136) || (*(_BYTE *)(v9 + 17) & 0x10) != 0;
    v64 = v11;
    if ( (v3 & 0x407) != 0 )
    {
      LODWORD(v63) = -16;
      if ( (v3 & 2) == 0 )
        goto LABEL_11;
      v44 = *(_DWORD *)(v9 + 232);
      v45 = *(_DWORD *)(v9 + 28);
      v46 = *(_DWORD *)(v9 + 24);
      *(_BYTE *)(v9 + 17) |= 0x10u;
      v67 = v44;
      if ( !(unsigned int)IsWindowDesktopComposed(a1) )
        goto LABEL_11;
      v47 = (_DWORD *)a1[5];
      v48 = v46 ^ v47[6];
      HIDWORD(v63) = v47[7];
      v49 = v67 ^ v47[58];
      if ( v45 == HIDWORD(v63) )
      {
        if ( v48 )
        {
LABEL_83:
          if ( (v48 & 0x4E27A9) == 0 && (v49 & 0x12C0) == 0 )
          {
LABEL_86:
            if ( (v48 & 0x200A0381) != 0 || ((v45 ^ HIDWORD(v63)) & 0xC40000) != 0 )
              WindowMargins::CheckForChanges(a1, 1LL);
LABEL_11:
            if ( !v6 )
              goto LABEL_33;
            v12 = a1[5];
            v13 = *(_DWORD *)(v12 + 28);
            v14 = *(_DWORD *)(v12 + 24);
            v15 = *(_DWORD *)(v12 + 232);
            *(_BYTE *)(v12 + 17) &= ~1u;
            if ( !(unsigned int)IsWindowDesktopComposed(a1) )
            {
LABEL_17:
              if ( a1[2] != gptiCurrent )
              {
                SetOrClrWF(1LL, a1, 288LL, 1LL);
                if ( (*(_BYTE *)(a1[5] + 20LL) & 1) != 0 )
                {
                  SetOrClrWF(1LL, a1, 1026LL, 1LL);
                  gRdwFlags |= v3;
                }
              }
              if ( v4 == 1 && (*(_BYTE *)(a1[5] + 21LL) & 1) == 0 )
                SetOrClrWF(0LL, a1, 258LL, 1LL);
              if ( (v3 & 4) == 0 )
                goto LABEL_26;
              v22 = a1[5];
              v23 = *(_DWORD *)(v22 + 28);
              v24 = *(_DWORD *)(v22 + 24);
              v25 = *(_DWORD *)(v22 + 232);
              *(_BYTE *)(v22 + 17) |= 2u;
              if ( !(unsigned int)IsWindowDesktopComposed(a1) )
                goto LABEL_26;
              v26 = (unsigned int *)a1[5];
              v16 = v26[6];
              v27 = v24 ^ v26[6];
              v28 = v23 ^ v26[7];
              v66 = v28;
              v29 = v25 ^ v26[58];
              if ( !v28 )
              {
                if ( v27 )
                {
LABEL_96:
                  if ( (v27 & 0x4E27A9) == 0 && (v29 & 0x12C0) == 0 )
                  {
LABEL_99:
                    if ( (v28 & 0xC40000) != 0 || (v27 & 0x200A0381) != 0 )
                      WindowMargins::CheckForChanges(a1, 1LL);
                    goto LABEL_26;
                  }
LABEL_98:
                  DirtyVisRgnTrackers(a1);
                  v60 = (void *)ReferenceDwmApiPort(v59);
                  DwmAsyncChildStyleChange(v60);
                  v28 = v66;
                  goto LABEL_99;
                }
                if ( !v29 )
                {
LABEL_26:
                  if ( (v3 & 0x400) != 0 )
                  {
                    v36 = a1[5];
                    v37 = *(_DWORD *)(v36 + 28);
                    v38 = *(_DWORD *)(v36 + 24);
                    v39 = *(_DWORD *)(v36 + 232);
                    *(_BYTE *)(v36 + 17) |= 8u;
                    if ( (unsigned int)IsWindowDesktopComposed(a1) )
                    {
                      v40 = (_DWORD *)a1[5];
                      v41 = v40[6] ^ v38;
                      v16 = (unsigned int)v40[58];
                      v42 = v16 ^ v39;
                      v43 = v40[7] ^ v37;
                      if ( v43 )
                        goto LABEL_102;
                      if ( v41 )
                      {
LABEL_103:
                        if ( (v41 & 0x4E27A9) != 0 )
                        {
                          LODWORD(v63) = -20;
                        }
                        else
                        {
                          if ( (v42 & 0x12C0) == 0 )
                          {
LABEL_108:
                            if ( (v43 & 0xC40000) != 0 || (v41 & 0x200A0381) != 0 )
                              WindowMargins::CheckForChanges(a1, 1LL);
                            goto LABEL_27;
                          }
                          LODWORD(v63) = -268435456;
                        }
LABEL_107:
                        DirtyVisRgnTrackers(a1);
                        v62 = (void *)ReferenceDwmApiPort(v61);
                        DwmAsyncChildStyleChange(v62);
                        goto LABEL_108;
                      }
                      if ( v42 )
                      {
LABEL_102:
                        if ( (v43 & 0xB1CF0000) != 0 )
                          goto LABEL_107;
                        goto LABEL_103;
                      }
                    }
                  }
LABEL_27:
                  v30 = a1[5];
                  v31 = *(_QWORD *)(v30 + 136);
                  if ( v31 != 1 )
                  {
                    if ( v4 == 1 )
                      goto LABEL_32;
                    if ( v31 )
                    {
                      if ( (unsigned int)GreCombineRgn(v31, *(_QWORD *)(v30 + 136), v4, 2LL) )
                        goto LABEL_33;
                      goto LABEL_32;
                    }
                    *(_QWORD *)(a1[5] + 136LL) = CreateEmptyRgnPublic(0LL, v16, v17, v10);
                    v32 = *(_QWORD *)(a1[5] + 136LL);
                    if ( !v32 || !(unsigned int)GreCombineRgn(v32, v4, 0LL, 5LL) )
                    {
LABEL_32:
                      DeleteMaybeSpecialRgn(*(_QWORD *)(a1[5] + 136LL));
                      *(_QWORD *)(a1[5] + 136LL) = 1LL;
                    }
                  }
LABEL_33:
                  if ( !v11 )
                  {
                    v33 = a1[5];
                    if ( *(_QWORD *)(v33 + 136) || (*(_BYTE *)(v33 + 17) & 0x10) != 0 )
                    {
                      v34 = a1[2];
                      if ( (v3 & 0x20000) != 0 )
                      {
                        if ( (struct tagTHREADINFO *)v34 == PtiCurrentShared() )
                          IncPaintCount(a1);
                        else
                          IncPaintCountInterMoveSize(a1);
                      }
                      else
                      {
                        v35 = *(_DWORD *)(v34 + 600);
                        *(_DWORD *)(v34 + 600) = v35 + 1;
                        if ( !v35 )
                        {
                          EtwTraceWakePump(v34, a1, 15LL, v10, v63);
                          if ( (*(_DWORD *)(v34 + 488) & 1) == 0 )
                          {
                            _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v34 + 448) + 8LL), 0x20u);
                            _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v34 + 448) + 4LL), 0x20u);
                            if ( (*(_DWORD *)(*(_QWORD *)(v34 + 448) + 16LL) & 0x20) != 0 )
                              KeSetEvent(*(PRKEVENT *)(v34 + 736), 2, 0);
                          }
                        }
                      }
                    }
                  }
                  return;
                }
              }
              if ( (v28 & 0xB1CF0000) != 0 )
                goto LABEL_98;
              goto LABEL_96;
            }
            v18 = (_DWORD *)a1[5];
            v65 = v18[7];
            v19 = v14 ^ v18[6];
            v20 = v15 ^ v18[58];
            v21 = v13 ^ v65;
            if ( v13 == v65 )
            {
              if ( v19 )
              {
LABEL_89:
                if ( (v19 & 0x4E27A9) == 0 && (v20 & 0x12C0) == 0 )
                {
LABEL_92:
                  if ( (v21 & 0xC40000) != 0 || (v19 & 0x200A0381) != 0 )
                  {
                    WindowMargins::CheckForChanges(a1, 1LL);
                    v11 = v64;
                    goto LABEL_17;
                  }
                  goto LABEL_16;
                }
LABEL_91:
                DirtyVisRgnTrackers(a1);
                v58 = (void *)ReferenceDwmApiPort(v57);
                DwmAsyncChildStyleChange(v58);
                goto LABEL_92;
              }
              if ( !v20 )
              {
LABEL_16:
                v11 = v64;
                goto LABEL_17;
              }
            }
            if ( (v21 & 0xB1CF0000) != 0 )
              goto LABEL_91;
            goto LABEL_89;
          }
LABEL_85:
          DirtyVisRgnTrackers(a1);
          v56 = (void *)ReferenceDwmApiPort(v55);
          DwmAsyncChildStyleChange(v56);
          goto LABEL_86;
        }
        if ( !v49 )
          goto LABEL_11;
      }
      if ( ((v45 ^ HIDWORD(v63)) & 0xB1CF0000) != 0 )
        goto LABEL_85;
      goto LABEL_83;
    }
    if ( (v3 & 0x838) == 0 || (*(_BYTE *)(v9 + 17) & 0x20) != 0 && (v3 & 0x8000) == 0 )
      return;
    if ( (v3 & 0x10) != 0 )
    {
      SetOrClrWF(0LL, a1, 272LL, 1LL);
      v10 = 1LL;
    }
    if ( (v3 & 8) == 0 )
      goto LABEL_70;
    if ( (v3 & 0x20) != 0 )
    {
      SetOrClrWF(0LL, a1, 258LL, 1LL);
      v10 = 1LL;
    }
    if ( (v3 & 0x800) != 0 )
    {
      SetOrClrWF(0LL, a1, 264LL, 1LL);
      SetOrClrWF(0LL, a1, 1664LL, 1LL);
      v10 = 1LL;
    }
    v50 = a1[5];
    if ( !*(_QWORD *)(v50 + 136) )
      goto LABEL_70;
    if ( (*(_BYTE *)(v50 + 17) & 8) != 0 )
    {
      if ( v4 != 1 )
        goto LABEL_76;
      v4 = ghrgnInv2;
      CalcWindowRgn(a1, ghrgnInv2, 1LL);
    }
    if ( v4 == 1 )
    {
LABEL_81:
      DeleteMaybeSpecialRgn(*(_QWORD *)(a1[5] + 136LL));
      *(_QWORD *)(a1[5] + 136LL) = 0LL;
      SetOrClrWF(0LL, a1, 258LL, 1LL);
LABEL_70:
      if ( v11 )
      {
        v51 = a1[5];
        if ( !*(_QWORD *)(v51 + 136) && (*(_BYTE *)(v51 + 17) & 0x10) == 0 )
          DecPaintCount(a1, a2, a3, v10);
      }
      return;
    }
LABEL_76:
    if ( *(_QWORD *)(a1[5] + 136LL) == 1LL )
    {
      *(_QWORD *)(a1[5] + 136LL) = CreateEmptyRgnPublic(v9, a2, a3, v10);
      v52 = a1[5];
      v53 = *(_QWORD *)(v52 + 136);
      if ( !v53 || !(unsigned int)CalcWindowRgn(a1, v53, (*(_BYTE *)(v52 + 17) & 8) == 0) )
        goto LABEL_32;
    }
    v54 = GreCombineRgn(*(_QWORD *)(a1[5] + 136LL), *(_QWORD *)(a1[5] + 136LL), v4, 4LL);
    if ( !v54 )
      goto LABEL_32;
    if ( v54 != 1 )
      goto LABEL_70;
    goto LABEL_81;
  }
}
