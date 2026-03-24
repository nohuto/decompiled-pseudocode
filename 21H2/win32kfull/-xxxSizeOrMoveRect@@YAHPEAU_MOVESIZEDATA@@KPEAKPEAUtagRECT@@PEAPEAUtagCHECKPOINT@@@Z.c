/*
 * XREFs of ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020FCC4
 * Callers:
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020E930 (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C021082C (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C002C560 (GetMonitorWorkRectForWindow.c)
 *     CkptRestore @ 0x1C0041290 (CkptRestore.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020A970 (-ComputeMoveOutcome@@YA-AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@.c)
 *     ?DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020AD04 (-DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020AE98 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020B66C (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C020B854 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C020BD9C (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C020C0C4 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020C0FC (-SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020C148 (-SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020C174 (-SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020C1BC (-SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C020C8A0 (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C02106AC (-xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@.c)
 */

__int64 __fastcall xxxSizeOrMoveRect(
        struct _MOVESIZEDATA *a1,
        int a2,
        unsigned int *a3,
        struct tagRECT *a4,
        struct tagCHECKPOINT **a5)
{
  int v5; // r15d
  unsigned int *v6; // rsi
  int v7; // r14d
  int v9; // r13d
  int v10; // eax
  int v11; // r8d
  int v12; // r12d
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  int v15; // r9d
  int v16; // ecx
  int v17; // r8d
  __int64 result; // rax
  int v19; // eax
  bool v20; // zf
  struct tagMONITOR *v21; // rsi
  struct tagMONITOR *v22; // rbx
  struct tagMONITOR *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // r8d
  __int64 v27; // rbx
  struct tagMONITOR *v28; // rbx
  __int128 v29; // xmm6
  unsigned int v30; // r8d
  __int64 v31; // rax
  struct tagMONITOR *v32; // r12
  unsigned int v33; // r14d
  unsigned int v34; // eax
  struct tagRECT *v35; // rax
  struct tagRECT v36; // xmm0
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  int v40; // r10d
  int v41; // ecx
  __m128i v42; // xmm1
  int v43; // r14d
  int v44; // r12d
  int v45; // eax
  int v46; // r9d
  int v47; // edx
  int v48; // ecx
  int v49; // r10d
  int v50; // r11d
  int v51; // ecx
  int v52; // r10d
  int v53; // r10d
  int v54; // r15d
  int v55; // r13d
  int v56; // eax
  int v57; // r15d
  int v58; // r13d
  LONG v59; // r9d
  LONG v60; // r10d
  unsigned int v61; // eax
  struct tagRECT *v62; // rax
  struct tagCHECKPOINT **v63; // rax
  int v64; // r15d
  int v65; // r13d
  LONG v66; // r10d
  LONG v67; // r11d
  unsigned int v68; // r8d
  struct tagRECT *v69; // rax
  int v70; // r15d
  int v71; // r13d
  LONG v72; // ebx
  LONG v73; // ecx
  unsigned int v74; // r8d
  struct tagRECT *v75; // rax
  struct tagCHECKPOINT **v76; // rax
  const struct _MOVESIZEDATA *v77; // rcx
  int v78; // ecx
  __int64 ThreadWin32Thread; // rax
  struct tagMONITOR *v80; // r14
  unsigned int v81; // r12d
  unsigned int v82; // eax
  int v83; // eax
  __int128 v84; // [rsp+38h] [rbp-61h]
  __m128i v85; // [rsp+38h] [rbp-61h]
  __m128i *v87; // [rsp+48h] [rbp-51h]
  struct tagMONITOR *v88; // [rsp+50h] [rbp-49h] BYREF
  int v89; // [rsp+58h] [rbp-41h]
  struct tagMONITOR *v90; // [rsp+60h] [rbp-39h]
  __int128 v91; // [rsp+68h] [rbp-31h] BYREF
  __int64 v92; // [rsp+78h] [rbp-21h] BYREF
  struct tagMONITOR *v93; // [rsp+80h] [rbp-19h]
  __int64 v94; // [rsp+88h] [rbp-11h]
  unsigned int v95; // [rsp+F8h] [rbp+5Fh] BYREF
  int v96; // [rsp+100h] [rbp+67h]
  unsigned int *v97; // [rsp+108h] [rbp+6Fh]
  struct tagRECT *v98; // [rsp+110h] [rbp+77h]

  v98 = a4;
  v97 = a3;
  v96 = a2;
  v5 = (__int16)a2 - *((_DWORD *)a1 + 42);
  v6 = a3;
  v7 = a2;
  v9 = SHIWORD(a2) - *((_DWORD *)a1 + 43);
  v88 = 0LL;
  v95 = 0;
  v90 = 0LL;
  v94 = 0LL;
  v89 = 1;
  v87 = (__m128i *)GetOrUpdateCheckPointIfNotPresent(a1);
  if ( !v87 || v5 == *((_DWORD *)a1 + 75) && v9 == *((_DWORD *)a1 + 76) )
    return 0LL;
  v10 = ComputeMoveOutcome(__PAIR64__(v9, v5), (__int64)a1, &v88, &v95);
  v11 = *((_DWORD *)a1 + 49);
  v12 = v10;
  *(_QWORD *)((char *)a1 + 300) = __PAIR64__(v9, v5);
  if ( (v11 & 0x6000000) == 0x6000000 )
  {
    *((_DWORD *)a1 + 49) = v11 & 0xFDFFFFFF;
    v13 = MoveRect((__int64)a1, v7, 0);
    *((_DWORD *)a1 + 49) |= 0x2000000u;
    v11 = *((_DWORD *)a1 + 49);
  }
  else
  {
    v13 = v89;
  }
  v14 = v95;
  if ( v12 == 1 && v95 - 1 <= 1 || (*((_DWORD *)a1 + 70) &= ~2u, v12 == 1) )
  {
    v15 = *((_DWORD *)a1 + 60);
    if ( (unsigned int)(v15 - 1) > 1 )
    {
      v16 = v11 & 0x300;
    }
    else
    {
      v16 = v11 & 0x300;
      if ( (v11 & 0x300) == 0 )
      {
        if ( (v11 & 0x2000000) == 0 )
        {
LABEL_13:
          v17 = *((_DWORD *)a1 + 61);
          return MoveRect((__int64)a1, v7, v17);
        }
        return v13;
      }
    }
    if ( !v15 )
    {
      v19 = v11 & 0x38000;
      if ( v16 == 768 && (v19 == 0x20000 || v19 == 163840) )
      {
        v20 = (v11 & 0x2000000) == 0;
        goto LABEL_21;
      }
      if ( v16 && ((v19 - 0x20000) & 0xFFFF7FFF) == 0 )
      {
        *((_DWORD *)a1 + 49) = v11 | 0x300;
        MakeArrangedStateObservable(a1);
        v20 = (*((_DWORD *)a1 + 49) & 0x2000000) == 0;
LABEL_21:
        if ( v20 )
        {
          v17 = 3;
          return MoveRect((__int64)a1, v7, v17);
        }
        return v13;
      }
    }
    if ( (v11 & 0x2000000) != 0 )
      return v13;
    return 0LL;
  }
  if ( v12 != 3 )
  {
    if ( v12 == 4 )
    {
      if ( (v11 & 0x80u) == 0 )
      {
        MoveRect((__int64)a1, v7, 0);
        v39 = *((_DWORD *)a1 + 60);
        if ( v39 )
        {
          if ( (unsigned int)(v39 - 1) <= 1 )
          {
            ++*((_DWORD *)a1 + 80);
            SetDragOutToDragInThreshold(a1);
          }
        }
        else
        {
          ++*((_DWORD *)a1 + 79);
          SetDragInThresholdAlways(a1);
        }
        goto LABEL_126;
      }
      v40 = *((_DWORD *)a1 + 60);
      v41 = v11 & 0x7000;
      v42 = *v87;
      v43 = _mm_cvtsi128_si32(*v87);
      v44 = _mm_cvtsi128_si32(_mm_srli_si128(*v87, 8));
      v85 = *v87;
      if ( !v40 )
      {
        if ( v41 == 4096 )
        {
          v45 = *((_DWORD *)a1 + 6);
          v46 = v5 - v45;
          if ( v5 - v45 >= (v44 - v43) / 2 )
          {
            if ( v46 <= *((_DWORD *)a1 + 8) - v45 - (v44 - v43) / 2 )
              v46 = (v44 - v43) / 2;
            else
              v46 = v44 - v43 - *((_DWORD *)a1 + 8) + v5;
          }
          v47 = *((_DWORD *)a1 + 72);
          v11 = *((_DWORD *)a1 + 49);
          goto LABEL_95;
        }
        v48 = v44 - v43;
        v49 = *((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 30);
        v46 = *((_DWORD *)a1 + 73);
        if ( v49 <= v44 - v43 )
        {
          if ( v46 < v49 / 2 )
            goto LABEL_94;
          if ( v46 <= v49 / 2 )
          {
            v46 = v49 / 2;
            goto LABEL_94;
          }
        }
        else
        {
          if ( v46 < v48 / 2 )
          {
LABEL_94:
            v47 = *((_DWORD *)a1 + 74);
LABEL_95:
            v40 = 0;
            goto LABEL_107;
          }
          if ( v46 <= v49 - v48 / 2 )
          {
            v46 = v48 / 2;
            goto LABEL_94;
          }
        }
        v46 += v48 - v49;
        goto LABEL_94;
      }
      v50 = *((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 30);
      v46 = *((_DWORD *)a1 + 73);
      if ( v41 == 4096 )
      {
        v51 = v44 - v43;
      }
      else
      {
        v51 = v44 - v43;
        if ( v50 <= v44 - v43 )
        {
          if ( v46 < v50 / 2 )
            goto LABEL_106;
          if ( v46 <= v50 / 2 )
          {
            v46 = v50 / 2;
            goto LABEL_106;
          }
          goto LABEL_104;
        }
      }
      if ( v46 < v51 / 2 )
      {
LABEL_106:
        v47 = *((_DWORD *)a1 + 74);
LABEL_107:
        if ( !v40 )
        {
          v70 = v5 - v43 - v46;
          v71 = v9 - v85.m128i_i32[1] - v47;
          v72 = v71 + v85.m128i_i32[3];
          v73 = v71 + v85.m128i_i32[1];
          v85.m128i_i32[3] += v71;
          v85.m128i_i32[0] = v70 + v43;
          v85.m128i_i32[2] = v70 + v44;
          v85.m128i_i32[1] += v71;
          if ( (v11 & 0x80u) != 0 )
          {
            v74 = v11 & 0xFFFFFF7F;
            *((_DWORD *)a1 + 71) = v46;
            *((_DWORD *)a1 + 49) = v74;
            *((_DWORD *)a1 + 72) = v47;
            if ( (v74 & 0x20) != 0 )
            {
              v75 = v98;
              v98->left = v70 + v43;
              v75->top = v73;
              v75->right = v70 + v44;
              v75->bottom = v72;
              v76 = a5;
              *v6 |= 1u;
              *v76 = (struct tagCHECKPOINT *)v87;
            }
          }
          ++*((_DWORD *)a1 + 79);
          SetDragInThresholdAlways(a1);
          goto LABEL_124;
        }
        v52 = v40 - 1;
        if ( v52 )
        {
          v53 = v52 - 1;
          if ( v53 )
          {
            if ( v53 != 1 )
            {
LABEL_125:
              *(__m128i *)((char *)a1 + 40) = v42;
LABEL_126:
              *((_DWORD *)a1 + 49) &= 0xFFFFFCFF;
              *((_DWORD *)a1 + 70) &= ~2u;
              *((_DWORD *)a1 + 60) = 4;
              DisableTemporayMetricsOverrides(a1);
              MakeArrangedStateObservable(v77);
              v78 = *((_DWORD *)a1 + 49);
              *((_DWORD *)a1 + 61) = 0;
              if ( (v78 & 0x6000000) == 0x6000000 )
              {
                *v6 |= 4u;
                *((_DWORD *)a1 + 49) = v78 & 0xFDFFFFFF;
              }
              return 1LL;
            }
            v54 = v5 - v43 - v46;
            v55 = v9 - v85.m128i_i32[1] - v47;
            v85.m128i_i32[0] = v54 + v43;
            v85.m128i_i32[3] += v55;
            v85.m128i_i32[1] += v55;
            v85.m128i_i32[2] = v54 + v44;
LABEL_124:
            v42 = v85;
            goto LABEL_125;
          }
          v56 = *((_DWORD *)a1 + 49);
          v57 = v5 - v43 - v46;
          v58 = v9 - v85.m128i_i32[1] - v47;
          v59 = v58 + v85.m128i_i32[3];
          v85.m128i_i32[3] += v58;
          v85.m128i_i32[0] = v57 + v43;
          v85.m128i_i32[2] = v57 + v44;
          v60 = v85.m128i_i32[1] + v58;
          v85.m128i_i32[1] += v58;
          if ( (v56 & 0x80u) == 0 || (v61 = v56 & 0xFFFFFF7F, *((_DWORD *)a1 + 49) = v61, (v61 & 0x20) == 0) )
          {
LABEL_116:
            ++*((_DWORD *)a1 + 80);
            SetDragOutToDragInThreshold(a1);
            goto LABEL_124;
          }
          v62 = v98;
          v98->left = v57 + v43;
          v62->top = v60;
          v62->right = v57 + v44;
          v62->bottom = v59;
        }
        else
        {
          v64 = v5 - v43 - v46;
          v65 = v9 - v85.m128i_i32[1] - v47;
          v66 = v65 + v85.m128i_i32[3];
          v85.m128i_i32[3] += v65;
          v85.m128i_i32[0] = v64 + v43;
          v85.m128i_i32[2] = v64 + v44;
          v67 = v85.m128i_i32[1] + v65;
          v85.m128i_i32[1] += v65;
          if ( (v11 & 0x80u) == 0 )
            goto LABEL_116;
          v68 = v11 & 0xFFFFFF7F;
          *((_DWORD *)a1 + 49) = v68;
          if ( (v68 & 0x20) == 0 )
            goto LABEL_116;
          v69 = v98;
          v98->left = v64 + v43;
          v69->top = v67;
          v69->right = v64 + v44;
          v69->bottom = v66;
        }
        v63 = a5;
        *v6 |= 1u;
        *v63 = (struct tagCHECKPOINT *)v87;
        goto LABEL_116;
      }
      if ( v46 <= v50 - v51 / 2 )
      {
        v46 = v51 / 2;
        goto LABEL_106;
      }
LABEL_104:
      v46 += v51 - v50;
      goto LABEL_106;
    }
    if ( v12 == 5 )
      goto LABEL_13;
    if ( v12 != 6 )
      return 0LL;
    if ( (v11 & 0x40000) == 0 )
    {
      CkptRestore(*((_QWORD *)a1 + 2), (struct _MOVESIZEDATA *)((char *)a1 + 120));
      v11 = *((_DWORD *)a1 + 49) | 0x40000;
      *((_DWORD *)a1 + 49) = v11;
      if ( (v11 & 0x1000000) != 0 )
        *(__m128i *)((char *)a1 + 152) = *v87;
    }
    if ( (v11 & 0x6000000) == 0x4000000 )
    {
      if ( !(unsigned int)MoveRect((__int64)a1, v7, 0) )
        return 0LL;
      *v6 |= 8u;
      *((_DWORD *)a1 + 49) |= 0x2000000u;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v80 = v88;
    v92 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v92;
    v93 = v80;
    if ( v80 )
      HMLockObject(v80);
    v81 = v95;
    xxxSizeRectFromHitTarget(a1, v80, v95);
    if ( v81 )
    {
      if ( v81 == 1 )
      {
        v82 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x100;
      }
      else
      {
        if ( v81 != 2 )
        {
          if ( v81 == 3 )
          {
            *((_DWORD *)a1 + 49) &= 0xFFFFFCFF;
            *((_DWORD *)a1 + 70) &= ~2u;
          }
          goto LABEL_149;
        }
        v82 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x200;
      }
      *((_DWORD *)a1 + 49) = v82;
    }
    else
    {
      v83 = *((_DWORD *)a1 + 49);
      *((_DWORD *)a1 + 70) &= ~2u;
      v83 &= 0xFFFFFCFF;
      *((_DWORD *)a1 + 49) = v83;
      if ( (v83 & 0x4000000) == 0 )
        *v6 |= 2u;
    }
    SetDragInToDragOutThreshold(a1);
LABEL_149:
    MakeArrangedStateObservable(a1);
    *((_DWORD *)a1 + 60) = v81;
    SetCurrentHitTargetMonitor(a1, v80, 1);
    goto LABEL_71;
  }
  if ( !*((_DWORD *)a1 + 60) && !v14 && (v11 & 0x300) == 0x300 && (((v11 & 0x38000) - 0x20000) & 0xFFFF7FFF) == 0 )
  {
    v21 = v90;
    v22 = v88;
    v23 = v90;
    do
    {
      v84 = *GetMonitorWorkRectForWindow(&v91, (__int64)v22, *((const struct tagWND **)a1 + 2));
      if ( IsDockTargetActive((__int64)a1, (__int64)v22, 0) && (int)v84 <= v5 && v5 < SDWORD2(v84) )
        v21 = v22;
      if ( IsDockTargetActive(v25, v24, 3) && (int)v84 <= v5 && v5 < SDWORD2(v84) )
        v23 = v22;
      v27 = *((_QWORD *)v22 + 35);
      if ( v27 == gpDispInfo + 144LL )
        v27 = *(_QWORD *)(gpDispInfo + 144LL);
      v22 = (struct tagMONITOR *)(v27 - 280);
    }
    while ( v22 != *((struct tagMONITOR **)a1 + 29) );
    *(_QWORD *)&v91 = v23;
    v20 = v23 == 0LL;
    v7 = v96;
    v90 = v21;
    v6 = v97;
    if ( !v20 )
    {
      v28 = v90;
      if ( v90 )
      {
        v29 = *(_OWORD *)((char *)a1 + 40);
        MoveRect((__int64)a1, v96, v26);
        if ( (unsigned int)VerticalSizeRectFromHitTarget((__int64)a1, (__int64)v28, 0, v91, v5) )
        {
          *((_DWORD *)a1 + 60) = 0;
          SetCurrentHitTargetMonitor(a1, v28, 1);
          result = v30;
          *((_DWORD *)a1 + 61) = v30 + 1;
          return result;
        }
        if ( (*((_DWORD *)a1 + 49) & 0x2000000) != 0 )
          *(_OWORD *)((char *)a1 + 72) = v29;
        else
          *(_OWORD *)((char *)a1 + 40) = v29;
      }
    }
  }
  if ( (*((_DWORD *)a1 + 49) & 0x6000000) != 0x4000000 )
  {
LABEL_55:
    v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v32 = v88;
    v92 = *(_QWORD *)(v31 + 416);
    *(_QWORD *)(v31 + 416) = &v92;
    v93 = v32;
    if ( v32 )
      HMLockObject(v32);
    v33 = v95;
    xxxSizeRectFromHitTarget(a1, v32, v95);
    if ( v33 )
    {
      if ( v33 == 1 )
      {
        v34 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x100;
        goto LABEL_62;
      }
      if ( v33 == 2 )
      {
        v34 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x200;
LABEL_62:
        *((_DWORD *)a1 + 49) = v34;
        if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 1) != 0 )
        {
          v35 = v98;
          v36 = *(struct tagRECT *)((char *)a1 + 40);
          *v6 |= 1u;
          *v35 = v36;
          *a5 = (struct tagCHECKPOINT *)v87;
        }
        SetDragOutThresholdAlways(a1);
        goto LABEL_69;
      }
    }
    else
    {
      v37 = *((_DWORD *)a1 + 49);
      *((_DWORD *)a1 + 70) &= ~2u;
      v37 &= 0xFFFFFCFF;
      *((_DWORD *)a1 + 49) = v37;
      if ( (v37 & 0x4000000) == 0 )
        *v6 |= 2u;
      SetDragInToDragOutThreshold(a1);
    }
    if ( v33 == 3 )
    {
LABEL_70:
      *((_DWORD *)a1 + 60) = v33;
      SetCurrentHitTargetMonitor(a1, v32, 1);
      *((_DWORD *)a1 + 61) = 2;
LABEL_71:
      ThreadUnlock1(v38);
      return 1LL;
    }
LABEL_69:
    MakeArrangedStateObservable(a1);
    goto LABEL_70;
  }
  if ( (unsigned int)MoveRect((__int64)a1, v7, 0) )
  {
    *v6 |= 8u;
    *((_DWORD *)a1 + 49) |= 0x2000000u;
    goto LABEL_55;
  }
  return 0LL;
}
