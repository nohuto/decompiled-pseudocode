/*
 * XREFs of ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E6544
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01E7030 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00468F4 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0049E70 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z @ 0x1C00D6C0C (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C00DEDBC (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C0148932 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C01E4EE0 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C01E52C4 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01E5A00 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01E5B20 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01E6300 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01E7030 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     SizeBoxHwnd @ 0x1C024E490 (SizeBoxHwnd.c)
 *     TouchTargetingRankForRect @ 0x1C0251150 (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C025169C (TouchTargetingRankForRectDeep.c)
 */

__int64 __fastcall xxxTargetingHitTest(
        __int64 a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        __int64 a4,
        _DWORD *a5,
        struct tagRECT *a6,
        unsigned int a7,
        int a8)
{
  _DWORD *v8; // r11
  bool v9; // zf
  unsigned int v10; // r13d
  unsigned __int64 v11; // r10
  struct tagRECT *v12; // r8
  int v14; // edi
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // r9
  __int64 v19; // r8
  bool v20; // cf
  int v21; // eax
  __int64 v22; // rdx
  LONG x; // edi
  struct tagRECT *v24; // rcx
  struct tagPOINT v25; // r8
  __int64 v26; // r8
  HWND v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  HWND v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned int v36; // r15d
  struct tagPOINT v37; // r8
  int *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // r15d
  __int64 v44; // rdx
  unsigned __int8 *v45; // rdx
  __int64 v46; // rax
  int v48; // [rsp+50h] [rbp-A1h] BYREF
  unsigned int v49; // [rsp+54h] [rbp-9Dh] BYREF
  struct tagRECT *v50; // [rsp+58h] [rbp-99h] BYREF
  struct tagPOINT v51; // [rsp+60h] [rbp-91h] BYREF
  struct tagRECT *v52; // [rsp+68h] [rbp-89h]
  struct tagPOINT v53; // [rsp+70h] [rbp-81h] BYREF
  struct tagPOINT v54[2]; // [rsp+80h] [rbp-71h] BYREF
  struct tagPOINT v55; // [rsp+90h] [rbp-61h] BYREF
  struct tagRECT v56; // [rsp+A0h] [rbp-51h] BYREF
  _DWORD *v57; // [rsp+B0h] [rbp-41h]
  __int128 v58; // [rsp+B8h] [rbp-39h] BYREF
  __int64 v59; // [rsp+C8h] [rbp-29h]
  struct tagRECT v60; // [rsp+D0h] [rbp-21h] BYREF

  v8 = a5;
  v9 = *(_DWORD *)(a4 + 88) == 1;
  v10 = -2;
  v11 = (unsigned __int64)a3;
  v51 = a3;
  v12 = a6;
  v14 = 17;
  v57 = a5;
  v52 = a6;
  v16 = a1;
  v50 = (struct tagRECT *)a7;
  v48 = -2;
  v17 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v53 = 0LL;
  v49 = 0;
  if ( v9
    && !PtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), v11)
    && (_WORD)a7 != 3
    && (*(_BYTE *)(v18 + 30) & 4) == 0 )
  {
    return v17;
  }
  v60 = *v12;
  if ( !(unsigned int)BasicTargetingWindowHitTest(
                        (const struct tagWND *)v16,
                        v11,
                        a4,
                        v8,
                        &v60,
                        (_DWORD *)&v50 + 1,
                        &v49,
                        (__int64)&v53,
                        a8,
                        a7) )
    return v17;
  if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)v16) )
  {
    v20 = (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v16) != 0;
    v21 = 1;
    v10 = v20 ? -2 : 1;
    v48 = v10;
  }
  else
  {
    v21 = HIDWORD(v50);
  }
  HIDWORD(v50) = v21;
  if ( v21 )
  {
    v43 = v49;
    goto LABEL_59;
  }
  v22 = *(_QWORD *)(v16 + 40);
  x = v53.x;
  if ( (*(_BYTE *)(v22 + 31) & 0x20) != 0 )
    goto LABEL_45;
  v55.y = v51.y + v53.y;
  v55.x = v51.x + v53.x;
  if ( !PtInRect((_DWORD *)(v22 + 104), *(_QWORD *)&v55) )
  {
    if ( *(_DWORD *)(a4 + 88) == 1 )
      goto LABEL_45;
    v26 = *(_QWORD *)(a4 + 40);
    v60 = *v24;
    *(struct tagRECT *)&v54[0].x = v60;
    if ( (unsigned __int16)TouchTargetingRankForRect(v54, &v60, v26, 0LL, 0LL, a7) > 0xFFDu )
      goto LABEL_45;
    v25 = v51;
  }
  if ( *(_DWORD *)(a4 + 88) == 1 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)(a4 + 40) + 176LL)
      || (xxxSendNCHitTest((float **)v16, a2, v25, &v53, &v48, (struct tagPNTRWINDOWHITTTESTARGS *)a4),
          v10 = v48,
          ((v48 + 1) & 0xFFFFFFFD) == 0) )
    {
      v60 = *v52;
      xxxPointerInsideNCTargeting((struct tagWND *)v16, a2, (struct tagPNTRWINDOWHITTTESTARGS *)a4, &v60, a7);
    }
  }
  if ( v10 != -2 && v10 != 1 )
  {
    ThreadLock(*(_QWORD *)(v16 + 112), &v58);
    if ( *(_DWORD *)(a4 + 84) )
    {
      v54[0] = v51;
      LogicalToPhysicalDPIPoint(v54, &v51, *(unsigned int *)(*(_QWORD *)(v16 + 40) + 288LL), 0LL);
      v27 = xxxDCEWindowHitTest(
              *(struct tagWND **)(v16 + 112),
              *(_DWORD *)a4,
              *(_QWORD *)(a4 + 8),
              *(_QWORD *)(a4 + 16),
              v54[0],
              (int *)(a4 + 32),
              *(_DWORD *)(a4 + 36));
    }
    else
    {
      v27 = xxxWindowHitTest(*(struct tagWND **)(v16 + 112), v51, (int *)(a4 + 32), *(_DWORD *)(a4 + 36));
    }
    v17 = (__int64)v27;
    if ( v27 )
    {
      v31 = ValidateHwnd(v27);
      v54[0] = (struct tagPOINT)v31;
      v29 = v31;
      if ( v31 )
      {
        *v57 = 1;
        v60 = *v52;
        TransformRectBetweenCoordinateSpaces(&v60, v52, v31, v16);
        v56 = v60;
        _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, *(struct tagWND **)v54, 0, 0LL, 0LL, 0, &v56, a7);
      }
    }
    ThreadUnlock1(v29, v28, v30);
    goto LABEL_42;
  }
  if ( a7 != 2 )
  {
    v38 = (int *)(*(_QWORD *)(v16 + 40) + 104LL);
    v60 = 0LL;
    if ( (unsigned int)IntersectRect(&v60, v38, &v52->left) )
    {
      ++*(_DWORD *)(a4 + 88);
      ThreadLock(*(_QWORD *)(v16 + 112), &v58);
      v39 = *(_QWORD *)(v16 + 112);
      v56 = v60;
      v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxWindowHitTestWithTargeting)(
              v39,
              v51,
              a4,
              &v56,
              (unsigned __int16)a7);
      ThreadUnlock1(v41, v40, v42);
      --*(_DWORD *)(a4 + 88);
LABEL_42:
      v36 = v49;
      goto LABEL_43;
    }
LABEL_45:
    v36 = v49;
LABEL_46:
    if ( v36 == 4093 )
      return 0LL;
    v43 = _TTWindowPenalty((struct tagWND *)v16, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v36) + v36;
    if ( !(unsigned int)TTBetterTarget(
                          (struct tagWND *)v16,
                          v43,
                          (struct tagPNTRWINDOWHITTTESTARGS *)a4,
                          v52,
                          (__int16)v50) )
      return *(_QWORD *)v16;
    if ( v10 == -2 || x || v53.y )
    {
      xxxSendNCHitTest((float **)v16, a2, v51, &v53, &v48, (struct tagPNTRWINDOWHITTTESTARGS *)a4);
      v10 = v48;
    }
    if ( v10 == -1 )
    {
      v44 = *(_QWORD *)(a4 + 40);
      v56 = *(struct tagRECT *)(*(_QWORD *)(v16 + 40) + 88LL);
      v43 = (unsigned __int16)TouchTargetingRankForRectDeep(&v56, v44, v52, &v53, a8);
      if ( !(unsigned int)TTBetterTarget(
                            (struct tagWND *)v16,
                            v43,
                            (struct tagPNTRWINDOWHITTTESTARGS *)a4,
                            v52,
                            (__int16)v50)
        || (xxxSendNCHitTest((float **)v16, a2, v51, &v53, &v48, (struct tagPNTRWINDOWHITTTESTARGS *)a4),
            v10 = v48,
            v48 == -1) )
      {
        *v57 = 0;
        return v17;
      }
    }
    v14 = 17;
LABEL_59:
    *(_DWORD *)(a4 + 32) = v10;
    v45 = *(unsigned __int8 **)(v16 + 40);
    if ( *(_DWORD *)(a4 + 84) )
    {
      v14 = (((v45[26] & 0x40) == 0) ^ (v45[25] >> 6) & 1) + 16;
    }
    else if ( (v45[26] & 0x40) != 0 )
    {
      v14 = 16;
    }
    if ( v10 == v14 && (v45[30] & 4) == 0 )
    {
      v46 = SizeBoxHwnd(v16, v45, v19);
      if ( v46 )
        v16 = v46;
    }
    if ( HIDWORD(v50) )
      v43 += _TTWindowPenalty((struct tagWND *)v16, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v43);
    if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)v16)
      || (unsigned int)TTBetterTarget(
                         (struct tagWND *)v16,
                         v43,
                         (struct tagPNTRWINDOWHITTTESTARGS *)a4,
                         v52,
                         (__int16)v50) )
    {
      v56 = *v52;
      _TTUpdateBestTarget(
        (struct tagPNTRWINDOWHITTTESTARGS *)a4,
        (struct tagWND *)v16,
        v43,
        &v53,
        0LL,
        0,
        &v56,
        (__int16)v50);
    }
    return *(_QWORD *)v16;
  }
  ThreadLock(*(_QWORD *)(v16 + 112), &v58);
  if ( *(_DWORD *)(a4 + 84) )
  {
    v54[0] = v55;
    LogicalToPhysicalDPIPoint(v54, &v55, *(unsigned int *)(*(_QWORD *)(v16 + 40) + 288LL), 0LL);
    v32 = xxxDCEWindowHitTest(
            *(struct tagWND **)(v16 + 112),
            *(_DWORD *)a4,
            *(_QWORD *)(a4 + 8),
            *(_QWORD *)(a4 + 16),
            v54[0],
            (int *)(a4 + 32),
            *(_DWORD *)(a4 + 36));
  }
  else
  {
    v32 = xxxWindowHitTest(*(struct tagWND **)(v16 + 112), v55, (int *)(a4 + 32), *(_DWORD *)(a4 + 36));
  }
  v17 = (__int64)v32;
  if ( v32 && (v54[0] = (struct tagPOINT)ValidateHwnd(v32)) != 0LL )
  {
    v36 = v49;
    if ( v49 )
      v36 += _TTWindowPenalty((struct tagWND *)v16, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v49);
    if ( (unsigned int)TTBetterTarget(
                         *(struct tagWND **)v54,
                         v36,
                         (struct tagPNTRWINDOWHITTTESTARGS *)a4,
                         v52,
                         (__int16)v50) )
    {
      v37 = v54[0];
      *v57 = 1;
      v60 = *v52;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))TransformRectBetweenCoordinateSpaces)(&v60, v52, v37, v16);
      v56 = v60;
      _TTUpdateBestTarget(
        (struct tagPNTRWINDOWHITTTESTARGS *)a4,
        *(struct tagWND **)v54,
        v36,
        0LL,
        0LL,
        0,
        &v56,
        (__int16)v50);
    }
  }
  else
  {
    v36 = v49;
  }
  ThreadUnlock1(v34, v33, v35);
LABEL_43:
  if ( !v17 )
    goto LABEL_46;
  return v17;
}
