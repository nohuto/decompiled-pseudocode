/*
 * XREFs of InternalInvalidate3 @ 0x1C0054B50
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0052B80 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     NtUserEndPaint @ 0x1C00CC490 (NtUserEndPaint.c)
 *     xxxEndPaint @ 0x1C00FE504 (xxxEndPaint.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C002E648 (DwmAsyncChildStyleChange.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00AD734 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1C00AEA8C (DirtyVisRgnTrackers.c)
 *     CalcWindowRgn @ 0x1C00FE594 (CalcWindowRgn.c)
 *     DecPaintCount @ 0x1C00FE604 (DecPaintCount.c)
 *     IncPaintCount @ 0x1C0225AE0 (IncPaintCount.c)
 *     IncPaintCountInterMoveSize @ 0x1C0225B30 (IncPaintCountInterMoveSize.c)
 */

void __fastcall InternalInvalidate3(__int64 *a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v4; // r13
  int v6; // ebp
  __int64 v7; // rcx
  __int64 *v8; // rax
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
  int v19; // ecx
  int v20; // ebp
  int v21; // r14d
  int v22; // eax
  int v23; // r12d
  __int64 v24; // rax
  int v25; // edi
  int v26; // r14d
  int v27; // r15d
  unsigned int *v28; // rax
  int v29; // ebp
  int v30; // r14d
  int v31; // ecx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdi
  int v37; // ecx
  __int64 v38; // rax
  int v39; // r14d
  int v40; // ebp
  int v41; // edi
  _DWORD *v42; // rax
  int v43; // ebp
  int v44; // edi
  int v45; // r15d
  int v46; // r14d
  int v47; // eax
  int v48; // edi
  int v49; // r15d
  _DWORD *v50; // rax
  int v51; // edx
  int v52; // r14d
  int v53; // r15d
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  int v59; // eax
  __int64 v60; // rdi
  __int64 v61; // rcx
  void *v62; // rax
  int v63; // r15d
  __int64 v64; // rdi
  __int64 v65; // rcx
  void *v66; // rax
  int v67; // r15d
  __int64 v68; // rdi
  __int64 v69; // rcx
  void *v70; // rax
  __int64 v71; // rdi
  __int64 v72; // rcx
  void *v73; // rax
  int v74; // [rsp+20h] [rbp-48h]
  int v75; // [rsp+24h] [rbp-44h]
  int v76; // [rsp+28h] [rbp-40h]
  BOOL v77; // [rsp+80h] [rbp+18h]
  int v78; // [rsp+80h] [rbp+18h]
  int v79; // [rsp+88h] [rbp+20h]
  int v80; // [rsp+88h] [rbp+20h]
  int v81; // [rsp+88h] [rbp+20h]
  int v82; // [rsp+88h] [rbp+20h]

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
      v8 = *(__int64 **)(a3 + 24);
  }
  if ( a1 != v8 || !(unsigned int)IsWindowDesktopComposed(a1) )
  {
LABEL_6:
    v9 = a1[5];
    v10 = 1LL;
    v11 = *(_QWORD *)(v9 + 136) || (*(_BYTE *)(v9 + 17) & 0x10) != 0;
    v77 = v11;
    if ( (v3 & 0x407) != 0 )
    {
      v74 = -16;
      if ( (v3 & 2) == 0 )
        goto LABEL_11;
      v47 = *(_DWORD *)(v9 + 232);
      v48 = *(_DWORD *)(v9 + 28);
      v49 = *(_DWORD *)(v9 + 24);
      *(_BYTE *)(v9 + 17) |= 0x10u;
      v81 = v47;
      if ( !(unsigned int)IsWindowDesktopComposed(a1) )
        goto LABEL_11;
      v50 = (_DWORD *)a1[5];
      v51 = v50[6];
      v52 = v49 ^ v51;
      v75 = v50[7];
      v53 = v50[58];
      v9 = v48 ^ (unsigned int)v75;
      v76 = v9;
      v54 = v81 ^ v53;
      if ( !(_DWORD)v9 )
      {
        if ( v52 )
          goto LABEL_84;
        if ( !v54 )
          goto LABEL_11;
      }
      if ( (v9 & 0xB1CF0000) != 0 )
      {
        v53 = v75;
        v82 = -16;
        goto LABEL_88;
      }
LABEL_84:
      if ( (v52 & 0x4E27A9) != 0 )
      {
        v82 = -20;
        v53 = v51;
      }
      else
      {
        if ( (v54 & 0x12C0) == 0 )
          goto LABEL_89;
        v82 = -268435456;
      }
LABEL_88:
      DirtyVisRgnTrackers(a1);
      v60 = *a1;
      v62 = (void *)ReferenceDwmApiPort(v61);
      DwmAsyncChildStyleChange(v62, v60, v82, v53);
LABEL_89:
      LOBYTE(v9) = (v52 & 0x200A0381) == 0;
      if ( ((unsigned __int8)v9 & ((v76 & 0xC40000) == 0)) == 0 )
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
          if ( (*(_BYTE *)(a1[5] + 20) & 1) != 0 )
          {
            SetOrClrWF(1LL, a1, 1026LL, 1LL);
            gRdwFlags |= v3;
          }
        }
        if ( v4 == 1 && (*(_BYTE *)(a1[5] + 21) & 1) == 0 )
          SetOrClrWF(0LL, a1, 258LL, 1LL);
        if ( (v3 & 4) == 0 )
          goto LABEL_26;
        v24 = a1[5];
        v25 = *(_DWORD *)(v24 + 28);
        v26 = *(_DWORD *)(v24 + 24);
        v27 = *(_DWORD *)(v24 + 232);
        *(_BYTE *)(v24 + 17) |= 2u;
        if ( !(unsigned int)IsWindowDesktopComposed(a1) )
          goto LABEL_26;
        v28 = (unsigned int *)a1[5];
        v16 = v28[6];
        v29 = v26 ^ v28[6];
        v78 = v28[7];
        v30 = v28[58];
        v31 = v25 ^ v78;
        v80 = v25 ^ v78;
        v32 = v27 ^ v30;
        if ( v25 == v78 )
        {
          if ( v29 )
            goto LABEL_103;
          if ( !v32 )
          {
LABEL_26:
            if ( (v3 & 0x400) != 0 )
            {
              v38 = a1[5];
              v39 = *(_DWORD *)(v38 + 28);
              v40 = *(_DWORD *)(v38 + 24);
              v41 = *(_DWORD *)(v38 + 232);
              *(_BYTE *)(v38 + 17) |= 8u;
              if ( (unsigned int)IsWindowDesktopComposed(a1) )
              {
                v42 = (_DWORD *)a1[5];
                v43 = v42[6] ^ v40;
                v16 = (unsigned int)v42[58];
                v44 = v16 ^ v41;
                v45 = v42[7];
                v46 = v45 ^ v39;
                if ( v46 )
                  goto LABEL_111;
                if ( v43 )
                {
LABEL_112:
                  if ( (v43 & 0x4E27A9) != 0 )
                  {
                    v74 = -20;
                    v45 = v42[6];
                  }
                  else
                  {
                    if ( (v44 & 0x12C0) == 0 )
                    {
LABEL_117:
                      if ( (v46 & 0xC40000) != 0 || (v43 & 0x200A0381) != 0 )
                        WindowMargins::CheckForChanges(a1, 1LL);
                      goto LABEL_27;
                    }
                    v74 = -268435456;
                    v45 = v42[58];
                  }
LABEL_116:
                  DirtyVisRgnTrackers(a1);
                  v71 = *a1;
                  v73 = (void *)ReferenceDwmApiPort(v72);
                  DwmAsyncChildStyleChange(v73, v71, v74, v45);
                  goto LABEL_117;
                }
                if ( v44 )
                {
LABEL_111:
                  if ( (v46 & 0xB1CF0000) != 0 )
                    goto LABEL_116;
                  goto LABEL_112;
                }
              }
            }
LABEL_27:
            v33 = a1[5];
            v9 = *(_QWORD *)(v33 + 136);
            if ( v9 != 1 )
            {
              if ( v4 == 1 )
                goto LABEL_32;
              if ( v9 )
              {
                if ( (unsigned int)GreCombineRgn(v9, *(_QWORD *)(v33 + 136), v4, 2LL) )
                  goto LABEL_33;
                goto LABEL_32;
              }
              *(_QWORD *)(a1[5] + 136) = CreateEmptyRgnPublic(0LL, v16, v17, v10);
              v34 = *(_QWORD *)(a1[5] + 136);
              if ( !v34 || !(unsigned int)GreCombineRgn(v34, v4, 0LL, 5LL) )
              {
LABEL_32:
                DeleteMaybeSpecialRgn(*(_QWORD *)(a1[5] + 136));
                v9 = 1LL;
                *(_QWORD *)(a1[5] + 136) = 1LL;
              }
            }
LABEL_33:
            if ( !v11 )
            {
              v35 = a1[5];
              if ( *(_QWORD *)(v35 + 136) || (*(_BYTE *)(v35 + 17) & 0x10) != 0 )
              {
                v36 = a1[2];
                if ( (v3 & 0x20000) != 0 )
                {
                  if ( (struct tagTHREADINFO *)v36 == PtiCurrentShared(v9) )
                    IncPaintCount(a1);
                  else
                    IncPaintCountInterMoveSize(a1);
                }
                else
                {
                  v37 = *(_DWORD *)(v36 + 600);
                  *(_DWORD *)(v36 + 600) = v37 + 1;
                  if ( !v37 )
                  {
                    EtwTraceWakePump(v36, a1, 15LL, v10);
                    if ( (*(_DWORD *)(v36 + 488) & 1) == 0 )
                    {
                      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v36 + 448) + 8LL), 0x20u);
                      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v36 + 448) + 4LL), 0x20u);
                      if ( (*(_DWORD *)(*(_QWORD *)(v36 + 448) + 16LL) & 0x20) != 0 )
                        KeSetEvent(*(PRKEVENT *)(v36 + 736), 2, 0);
                    }
                  }
                }
              }
            }
            return;
          }
        }
        if ( (v31 & 0xB1CF0000) != 0 )
        {
          v30 = v78;
          v67 = -16;
          goto LABEL_107;
        }
LABEL_103:
        if ( (v29 & 0x4E27A9) != 0 )
        {
          v67 = -20;
          v30 = v16;
        }
        else
        {
          if ( (v32 & 0x12C0) == 0 )
          {
LABEL_108:
            if ( (v31 & 0xC40000) != 0 || (v29 & 0x200A0381) != 0 )
              WindowMargins::CheckForChanges(a1, 1LL);
            goto LABEL_26;
          }
          v67 = -268435456;
        }
LABEL_107:
        DirtyVisRgnTrackers(a1);
        v68 = *a1;
        v70 = (void *)ReferenceDwmApiPort(v69);
        DwmAsyncChildStyleChange(v70, v68, v67, v30);
        v31 = v80;
        goto LABEL_108;
      }
      v18 = (_DWORD *)a1[5];
      v79 = v18[7];
      v19 = v18[6];
      v20 = v14 ^ v19;
      v21 = v18[58];
      v22 = v15 ^ v21;
      v23 = v13 ^ v79;
      if ( v13 == v79 )
      {
        if ( v20 )
          goto LABEL_93;
        if ( !v22 )
        {
LABEL_16:
          v11 = v77;
          goto LABEL_17;
        }
      }
      if ( (v23 & 0xB1CF0000) != 0 )
      {
        v21 = v79;
        v63 = -16;
        goto LABEL_97;
      }
LABEL_93:
      if ( (v20 & 0x4E27A9) != 0 )
      {
        v63 = -20;
        v21 = v19;
      }
      else
      {
        if ( (v22 & 0x12C0) == 0 )
        {
LABEL_98:
          if ( (v23 & 0xC40000) != 0 || (v20 & 0x200A0381) != 0 )
          {
            WindowMargins::CheckForChanges(a1, 1LL);
            v11 = v77;
            goto LABEL_17;
          }
          goto LABEL_16;
        }
        v63 = -268435456;
      }
LABEL_97:
      DirtyVisRgnTrackers(a1);
      v64 = *a1;
      v66 = (void *)ReferenceDwmApiPort(v65);
      DwmAsyncChildStyleChange(v66, v64, v63, v21);
      goto LABEL_98;
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
    v55 = a1[5];
    if ( !*(_QWORD *)(v55 + 136) )
      goto LABEL_70;
    if ( (*(_BYTE *)(v55 + 17) & 8) != 0 )
    {
      if ( v4 != 1 )
        goto LABEL_76;
      v4 = ghrgnInv2;
      CalcWindowRgn(a1, ghrgnInv2, 1LL);
    }
    if ( v4 == 1 )
    {
LABEL_81:
      DeleteMaybeSpecialRgn(*(_QWORD *)(a1[5] + 136));
      *(_QWORD *)(a1[5] + 136) = 0LL;
      SetOrClrWF(0LL, a1, 258LL, 1LL);
LABEL_70:
      if ( v11 )
      {
        v56 = a1[5];
        if ( !*(_QWORD *)(v56 + 136) && (*(_BYTE *)(v56 + 17) & 0x10) == 0 )
          DecPaintCount(a1);
      }
      return;
    }
LABEL_76:
    if ( *(_QWORD *)(a1[5] + 136) == 1LL )
    {
      *(_QWORD *)(a1[5] + 136) = CreateEmptyRgnPublic(v9, a2, a3, v10);
      v57 = a1[5];
      v58 = *(_QWORD *)(v57 + 136);
      if ( !v58 || !(unsigned int)CalcWindowRgn(a1, v58, (*(_BYTE *)(v57 + 17) & 8) == 0) )
        goto LABEL_32;
    }
    v59 = GreCombineRgn(*(_QWORD *)(a1[5] + 136), *(_QWORD *)(a1[5] + 136), v4, 4LL);
    if ( !v59 )
      goto LABEL_32;
    if ( v59 != 1 )
      goto LABEL_70;
    goto LABEL_81;
  }
}
