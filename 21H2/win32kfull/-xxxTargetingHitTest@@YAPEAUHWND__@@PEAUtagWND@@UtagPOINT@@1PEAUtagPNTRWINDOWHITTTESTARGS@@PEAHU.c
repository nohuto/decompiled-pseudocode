/*
 * XREFs of ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0205E2C
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02068EC (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z @ 0x1C0064850 (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C006D640 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006D988 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0101270 (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C016D29E (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C0204664 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C0204A84 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C02052C8 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C02053A4 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C0205BE8 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02068EC (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     SizeBoxHwnd @ 0x1C025A230 (SizeBoxHwnd.c)
 *     TouchTargetingRankForRect @ 0x1C025CA20 (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C025CF50 (TouchTargetingRankForRectDeep.c)
 */

__int64 __fastcall xxxTargetingHitTest(
        const struct tagWND *a1,
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
  int v12; // r8d
  int v14; // edi
  const struct tagWND *v16; // rsi
  __int64 v17; // r12
  __int64 v18; // r9
  bool v19; // cf
  int v20; // eax
  __int64 v21; // rdx
  LONG x; // edi
  struct tagRECT *v23; // rcx
  struct tagPOINT v24; // r8
  __int64 v25; // r8
  HWND v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  struct tagRECT v31; // xmm0
  HWND v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct tagWND *v36; // rax
  unsigned int v37; // r15d
  struct tagRECT *v38; // rdx
  struct tagPOINT v39; // r8
  struct tagRECT v40; // xmm0
  int *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned int v46; // r15d
  __int64 v47; // rdx
  unsigned __int8 *v48; // rdx
  __int64 v49; // rax
  struct tagRECT *v51; // [rsp+50h] [rbp-A1h] BYREF
  unsigned int v52; // [rsp+58h] [rbp-99h] BYREF
  int v53; // [rsp+5Ch] [rbp-95h] BYREF
  struct tagPOINT v54; // [rsp+60h] [rbp-91h] BYREF
  struct tagPOINT v55; // [rsp+68h] [rbp-89h] BYREF
  struct tagRECT *v56; // [rsp+70h] [rbp-81h]
  struct tagPOINT v57[2]; // [rsp+80h] [rbp-71h] BYREF
  struct tagPOINT v58; // [rsp+90h] [rbp-61h] BYREF
  struct tagRECT v59; // [rsp+A0h] [rbp-51h] BYREF
  _DWORD *v60; // [rsp+B0h] [rbp-41h]
  __int128 v61; // [rsp+B8h] [rbp-39h] BYREF
  __int64 v62; // [rsp+C8h] [rbp-29h]
  struct tagRECT v63; // [rsp+D0h] [rbp-21h] BYREF

  v8 = a5;
  v9 = *(_DWORD *)(a4 + 88) == 1;
  v10 = -2;
  v11 = (unsigned __int64)a3;
  v54 = a3;
  v12 = a7;
  v14 = 17;
  v60 = a5;
  v56 = a6;
  v16 = a1;
  HIDWORD(v51) = -2;
  v17 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v53 = 0;
  v55 = 0LL;
  v52 = 0;
  if ( v9
    && !PtInRect((_DWORD *)(*((_QWORD *)a1 + 5) + 88LL), v11)
    && (_WORD)v12 != 3
    && (*(_BYTE *)(v18 + 30) & 4) == 0 )
  {
    return v17;
  }
  v63 = *a6;
  if ( !(unsigned int)BasicTargetingWindowHitTest(v16, v11, a4, v8, &v63, &v53, &v52, (__int64)&v55, a8, v12) )
    return v17;
  if ( (unsigned int)IsCompositionInputWindow(v16) )
  {
    v19 = (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v16) != 0;
    v20 = 1;
    v10 = v19 ? -2 : 1;
    HIDWORD(v51) = v10;
  }
  else
  {
    v20 = v53;
  }
  v53 = v20;
  if ( v20 )
  {
    v46 = v52;
    goto LABEL_59;
  }
  v21 = *((_QWORD *)v16 + 5);
  x = v55.x;
  if ( (*(_BYTE *)(v21 + 31) & 0x20) != 0 )
    goto LABEL_45;
  v58.y = v54.y + v55.y;
  v58.x = v54.x + v55.x;
  if ( !PtInRect((_DWORD *)(v21 + 104), *(_QWORD *)&v58) )
  {
    if ( *(_DWORD *)(a4 + 88) == 1 )
      goto LABEL_45;
    v25 = *(_QWORD *)(a4 + 40);
    v63 = *v23;
    *(struct tagRECT *)&v57[0].x = v63;
    if ( (unsigned __int16)TouchTargetingRankForRect(v57, &v63, v25, 0LL, 0LL, a7) > 0xFFDu )
      goto LABEL_45;
    v24 = v54;
  }
  if ( *(_DWORD *)(a4 + 88) == 1 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)(a4 + 40) + 176LL)
      || (xxxSendNCHitTest((__int64 *)v16, a2, v24, &v55, (int *)&v51 + 1, (struct tagPNTRWINDOWHITTTESTARGS *)a4),
          v10 = HIDWORD(v51),
          ((HIDWORD(v51) + 1) & 0xFFFFFFFD) == 0) )
    {
      v63 = *a6;
      xxxPointerInsideNCTargeting(v16, a2, (struct tagPNTRWINDOWHITTTESTARGS *)a4, &v63, a7);
    }
  }
  if ( v10 != -2 && v10 != 1 )
  {
    ThreadLock(*((_QWORD *)v16 + 14), (__int64 *)&v61);
    if ( *(_DWORD *)(a4 + 84) )
    {
      v57[0] = v54;
      LogicalToPhysicalDPIPoint(v57, &v54, *(unsigned int *)(*((_QWORD *)v16 + 5) + 288LL), 0LL);
      v26 = xxxDCEWindowHitTest(
              *((struct tagWND **)v16 + 14),
              *(_DWORD *)a4,
              *(_QWORD *)(a4 + 8),
              *(_QWORD *)(a4 + 16),
              v57[0],
              (int *)(a4 + 32),
              *(_DWORD *)(a4 + 36));
    }
    else
    {
      v26 = xxxWindowHitTest(*((struct tagWND **)v16 + 14), v54, (int *)(a4 + 32), *(_DWORD *)(a4 + 36));
    }
    v17 = (__int64)v26;
    if ( v26 )
    {
      v30 = ValidateHwnd(v26);
      v57[0] = (struct tagPOINT)v30;
      if ( v30 )
      {
        v31 = *a6;
        *v60 = 1;
        v63 = v31;
        TransformRectBetweenCoordinateSpaces(&v63, a6, v30, v16);
        v59 = v63;
        _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, *(struct tagWND **)v57, 0, 0LL, 0LL, 0, &v59, a7);
      }
    }
    ThreadUnlock1(v28, v27, v29);
    goto LABEL_42;
  }
  if ( a7 != 2 )
  {
    v41 = (int *)(*((_QWORD *)v16 + 5) + 104LL);
    v63 = 0LL;
    if ( (unsigned int)IntersectRect(&v63, v41, &a6->left) )
    {
      ++*(_DWORD *)(a4 + 88);
      ThreadLock(*((_QWORD *)v16 + 14), (__int64 *)&v61);
      v42 = *((_QWORD *)v16 + 14);
      v59 = v63;
      v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxWindowHitTestWithTargeting)(
              v42,
              v54,
              a4,
              &v59,
              (unsigned __int16)a7);
      ThreadUnlock1(v44, v43, v45);
      --*(_DWORD *)(a4 + 88);
LABEL_42:
      v37 = v52;
      goto LABEL_43;
    }
LABEL_45:
    v37 = v52;
LABEL_46:
    if ( v37 == 4093 )
      return 0LL;
    v46 = _TTWindowPenalty(v16, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v37) + v37;
    if ( !(unsigned int)TTBetterTarget(v16, v46, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v56, a7) )
      return *(_QWORD *)v16;
    if ( v10 == -2 || x || v55.y )
    {
      xxxSendNCHitTest((__int64 *)v16, a2, v54, &v55, (int *)&v51 + 1, (struct tagPNTRWINDOWHITTTESTARGS *)a4);
      v10 = HIDWORD(v51);
    }
    if ( v10 == -1 )
    {
      v47 = *(_QWORD *)(a4 + 40);
      v59 = *(struct tagRECT *)(*((_QWORD *)v16 + 5) + 88LL);
      v46 = (unsigned __int16)TouchTargetingRankForRectDeep(&v59, v47, v56, &v55, a8);
      if ( !(unsigned int)TTBetterTarget(v16, v46, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v56, a7)
        || (xxxSendNCHitTest((__int64 *)v16, a2, v54, &v55, (int *)&v51 + 1, (struct tagPNTRWINDOWHITTTESTARGS *)a4),
            v10 = HIDWORD(v51),
            HIDWORD(v51) == -1) )
      {
        *v60 = 0;
        return v17;
      }
    }
    v14 = 17;
LABEL_59:
    *(_DWORD *)(a4 + 32) = v10;
    v48 = (unsigned __int8 *)*((_QWORD *)v16 + 5);
    if ( *(_DWORD *)(a4 + 84) )
    {
      v14 = (((v48[26] & 0x40) == 0) ^ (v48[25] >> 6) & 1) + 16;
    }
    else if ( (v48[26] & 0x40) != 0 )
    {
      v14 = 16;
    }
    if ( v10 == v14 && (v48[30] & 4) == 0 )
    {
      v49 = SizeBoxHwnd(v16);
      if ( v49 )
        v16 = (const struct tagWND *)v49;
    }
    if ( v53 )
      v46 += _TTWindowPenalty(v16, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v46);
    if ( (unsigned int)IsCompositionInputWindow(v16)
      || (unsigned int)TTBetterTarget(v16, v46, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v56, a7) )
    {
      v59 = *v56;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, v16, v46, &v55, 0LL, 0, &v59, a7);
    }
    return *(_QWORD *)v16;
  }
  ThreadLock(*((_QWORD *)v16 + 14), (__int64 *)&v61);
  if ( *(_DWORD *)(a4 + 84) )
  {
    v57[0] = v58;
    LogicalToPhysicalDPIPoint(v57, &v58, *(unsigned int *)(*((_QWORD *)v16 + 5) + 288LL), 0LL);
    v32 = xxxDCEWindowHitTest(
            *((struct tagWND **)v16 + 14),
            *(_DWORD *)a4,
            *(_QWORD *)(a4 + 8),
            *(_QWORD *)(a4 + 16),
            v57[0],
            (int *)(a4 + 32),
            *(_DWORD *)(a4 + 36));
  }
  else
  {
    v32 = xxxWindowHitTest(*((struct tagWND **)v16 + 14), v58, (int *)(a4 + 32), *(_DWORD *)(a4 + 36));
  }
  v17 = (__int64)v32;
  if ( v32 && (v36 = (struct tagWND *)ValidateHwnd(v32), (v57[0] = (struct tagPOINT)v36) != 0LL) )
  {
    v37 = v52;
    if ( v52 )
    {
      v37 += _TTWindowPenalty(v16, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v52);
      v36 = (struct tagWND *)v57[0];
    }
    if ( (unsigned int)TTBetterTarget(v36, v37, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v56, 2) )
    {
      v38 = v56;
      v39 = v57[0];
      v40 = *v56;
      *v60 = 1;
      v63 = v40;
      TransformRectBetweenCoordinateSpaces(&v63, v38, v39, v16);
      v59 = v63;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, *(struct tagWND **)v57, v37, 0LL, 0LL, 0, &v59, 2);
    }
  }
  else
  {
    v37 = v52;
  }
  ThreadUnlock1(v34, v33, v35);
LABEL_43:
  if ( !v17 )
    goto LABEL_46;
  return v17;
}
