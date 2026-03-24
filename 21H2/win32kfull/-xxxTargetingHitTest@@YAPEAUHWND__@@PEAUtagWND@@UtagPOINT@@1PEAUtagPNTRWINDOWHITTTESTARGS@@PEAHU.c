/*
 * XREFs of ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C02160E8
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0216C9C (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     PtInRect @ 0x1C004DEBC (PtInRect.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C006B91C (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     IntersectRect @ 0x1C0075160 (IntersectRect.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     xxxDCEWindowHitTest @ 0x1C00C1304 (xxxDCEWindowHitTest.c)
 *     xxxWindowHitTest @ 0x1C00D735C (xxxWindowHitTest.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00D7618 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C0214C94 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C0215140 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C021597C (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C0215A58 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C0215AD0 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C0215EA0 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0216C9C (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     SizeBoxHwnd @ 0x1C025D50C (SizeBoxHwnd.c)
 *     TouchTargetingRankForRect @ 0x1C025FD60 (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C0260240 (TouchTargetingRankForRectDeep.c)
 */

__int64 __fastcall xxxTargetingHitTest(
        __int64 a1,
        struct tagPOINT a2,
        unsigned __int64 a3,
        __int64 a4,
        _DWORD *a5,
        struct tagRECT *a6,
        unsigned int a7,
        int a8)
{
  _DWORD *v8; // r11
  int v10; // r9d
  unsigned int v11; // r15d
  unsigned __int64 v12; // r10
  bool v13; // zf
  __int64 v15; // rdi
  int v16; // r13d
  __int64 v17; // r12
  __int64 v18; // r8
  bool v19; // cf
  int v20; // eax
  __int64 v21; // rdx
  __int128 *v22; // rcx
  struct tagPOINT v23; // r8
  __int64 v24; // r8
  __int64 v25; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  struct tagWND *v30; // r14
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  struct tagWND *v35; // r15
  unsigned int v36; // r14d
  int *v37; // rdx
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned int v42; // r14d
  __int64 v43; // rdx
  unsigned __int8 *v44; // rdx
  __int64 v45; // rax
  unsigned int v47; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v48; // [rsp+54h] [rbp-ACh]
  unsigned int v49; // [rsp+58h] [rbp-A8h] BYREF
  struct tagPOINT v50; // [rsp+60h] [rbp-A0h] BYREF
  int v51; // [rsp+68h] [rbp-98h] BYREF
  struct tagPOINT v52; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v53; // [rsp+78h] [rbp-88h]
  unsigned __int64 v54; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v55; // [rsp+88h] [rbp-78h]
  __int128 v56; // [rsp+90h] [rbp-70h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-60h]
  struct tagPOINT v58; // [rsp+A8h] [rbp-58h] BYREF
  struct tagPOINT v59; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v60; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v61; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v62; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v63; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v64; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v65; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT v66; // [rsp+120h] [rbp+20h] BYREF
  __int128 v67; // [rsp+130h] [rbp+30h] BYREF
  __int128 v68; // [rsp+140h] [rbp+40h] BYREF
  struct tagRECT v69; // [rsp+150h] [rbp+50h] BYREF
  struct tagRECT v70; // [rsp+160h] [rbp+60h] BYREF
  struct tagRECT v71; // [rsp+170h] [rbp+70h] BYREF

  v8 = a5;
  v10 = a7;
  v11 = -2;
  v52 = (struct tagPOINT)a3;
  v12 = a3;
  v55 = a5;
  v13 = *(_DWORD *)(a4 + 88) == 1;
  v15 = a1;
  v53 = a6;
  v48 = a7;
  v16 = 17;
  v49 = -2;
  v17 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v51 = 0;
  v50 = 0LL;
  v47 = 0;
  if ( v13
    && !PtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), a3)
    && (_WORD)v10 != 3
    && (*(_BYTE *)(v18 + 30) & 4) == 0 )
  {
    return v17;
  }
  v61 = *a6;
  if ( !(unsigned int)BasicTargetingWindowHitTest(v15, v12, a4, v8, &v61, &v51, &v47, (__int64)&v50, a8, v10) )
    return v17;
  if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)v15) )
  {
    v19 = (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v15) != 0;
    v20 = 1;
    v51 = 1;
    v11 = v19 ? -2 : 1;
    v49 = v11;
  }
  else
  {
    v20 = v51;
  }
  if ( v20 )
  {
    v42 = v47;
    goto LABEL_64;
  }
  v21 = *(_QWORD *)(v15 + 40);
  if ( (*(_BYTE *)(v21 + 31) & 0x20) != 0 )
    goto LABEL_51;
  LODWORD(v54) = v52.x + v50.x;
  HIDWORD(v54) = v52.y + v50.y;
  if ( !PtInRect((_DWORD *)(v21 + 104), v54) )
  {
    if ( *(_DWORD *)(a4 + 88) == 1 )
      goto LABEL_51;
    v24 = *(_QWORD *)(a4 + 40);
    v62 = *v22;
    v63 = v62;
    if ( (unsigned __int16)TouchTargetingRankForRect(&v63, &v62, v24, 0LL, 0LL, v48) > 0xFFDu )
      goto LABEL_51;
    v23 = v52;
  }
  if ( *(_DWORD *)(a4 + 88) == 1 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)(a4 + 40) + 176LL)
      || (xxxSendNCHitTest((struct tagWND *)v15, a2, v23, &v50, (int *)&v49, (struct tagPNTRWINDOWHITTTESTARGS *)a4),
          v11 = v49,
          ((v49 + 1) & 0xFFFFFFFD) == 0) )
    {
      v64 = *a6;
      xxxPointerInsideNCTargeting((struct tagWND *)v15, a2, (struct tagPNTRWINDOWHITTTESTARGS *)a4, &v64, v48);
    }
  }
  if ( v11 != -2 && v11 != 1 )
  {
    v25 = *(_QWORD *)(v15 + 112);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v56 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v56;
    *((_QWORD *)&v56 + 1) = v25;
    if ( v25 )
      HMLockObject(v25);
    if ( *(_DWORD *)(a4 + 84) )
    {
      v58 = v52;
      LogicalToPhysicalDPIPoint(&v58, &v52, *(unsigned int *)(*(_QWORD *)(v15 + 40) + 288LL), 0LL);
      v27 = (__int64)xxxDCEWindowHitTest(
                       *(struct tagWND **)(v15 + 112),
                       *(_DWORD *)a4,
                       *(_QWORD *)(a4 + 8),
                       *(_QWORD *)(a4 + 16),
                       v58,
                       a4 + 32,
                       *(_DWORD *)(a4 + 36));
    }
    else
    {
      v27 = xxxWindowHitTest(*(_QWORD *)(v15 + 112));
    }
    v17 = v27;
    if ( v27 )
    {
      v29 = ValidateHwnd(v27);
      v30 = (struct tagWND *)v29;
      if ( v29 )
      {
        *v55 = 1;
        v70 = *v53;
        TransformRectBetweenCoordinateSpaces(&v70, v53, v29, v15);
        v65 = v70;
        _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, v30, 0, 0LL, 0LL, 0, &v65, v48);
      }
    }
    ThreadUnlock1(v28);
LABEL_48:
    v36 = v47;
    goto LABEL_49;
  }
  if ( v48 != 2 )
  {
    v37 = (int *)(*(_QWORD *)(v15 + 40) + 104LL);
    v60 = 0LL;
    if ( (unsigned int)IntersectRect(&v60, v37, &a6->left) )
    {
      ++*(_DWORD *)(a4 + 88);
      v38 = *(_QWORD *)(v15 + 112);
      v39 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v56 = *(_QWORD *)(v39 + 416);
      *(_QWORD *)(v39 + 416) = &v56;
      *((_QWORD *)&v56 + 1) = v38;
      if ( v38 )
        HMLockObject(v38);
      v40 = *(_QWORD *)(v15 + 112);
      v67 = v60;
      v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxWindowHitTestWithTargeting)(
              v40,
              v52,
              a4,
              &v67,
              (unsigned __int16)v48);
      ThreadUnlock1(v41);
      --*(_DWORD *)(a4 + 88);
      goto LABEL_48;
    }
LABEL_51:
    v36 = v47;
    goto LABEL_52;
  }
  v31 = *(_QWORD *)(v15 + 112);
  v32 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v56 = *(_QWORD *)(v32 + 416);
  *(_QWORD *)(v32 + 416) = &v56;
  *((_QWORD *)&v56 + 1) = v31;
  if ( v31 )
    HMLockObject(v31);
  if ( *(_DWORD *)(a4 + 84) )
  {
    v59 = (struct tagPOINT)v54;
    LogicalToPhysicalDPIPoint(&v59, &v54, *(unsigned int *)(*(_QWORD *)(v15 + 40) + 288LL), 0LL);
    v33 = (__int64)xxxDCEWindowHitTest(
                     *(struct tagWND **)(v15 + 112),
                     *(_DWORD *)a4,
                     *(_QWORD *)(a4 + 8),
                     *(_QWORD *)(a4 + 16),
                     v59,
                     a4 + 32,
                     *(_DWORD *)(a4 + 36));
  }
  else
  {
    v33 = xxxWindowHitTest(*(_QWORD *)(v15 + 112));
  }
  v17 = v33;
  if ( v33 && (v35 = (struct tagWND *)ValidateHwnd(v33)) != 0LL )
  {
    v36 = v47;
    if ( v47 )
      v36 += _TTWindowPenalty((struct tagWND *)v15, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v47);
    if ( (unsigned int)TTBetterTarget(v35, v36, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v53, 2) )
    {
      *v55 = 1;
      v71 = *v53;
      TransformRectBetweenCoordinateSpaces(&v71, v53, v35, v15);
      v66 = v71;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, v35, v36, 0LL, 0LL, 0, &v66, 2);
    }
  }
  else
  {
    v36 = v47;
  }
  ThreadUnlock1(v34);
LABEL_49:
  if ( !v17 )
  {
    v11 = v49;
LABEL_52:
    if ( v36 == 4093 )
      return 0LL;
    v42 = _TTWindowPenalty((struct tagWND *)v15, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v36) + v36;
    if ( !(unsigned int)TTBetterTarget((struct tagWND *)v15, v42, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v53, v48) )
      return *(_QWORD *)v15;
    if ( v11 == -2 || v50.x || v50.y )
    {
      xxxSendNCHitTest((struct tagWND *)v15, a2, v52, &v50, (int *)&v49, (struct tagPNTRWINDOWHITTTESTARGS *)a4);
      v11 = v49;
    }
    if ( v11 == -1 )
    {
      v43 = *(_QWORD *)(a4 + 40);
      v68 = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 88LL);
      v42 = (unsigned __int16)TouchTargetingRankForRectDeep(&v68, v43, v53, &v50, a8);
      if ( !(unsigned int)TTBetterTarget((struct tagWND *)v15, v42, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v53, v48)
        || (xxxSendNCHitTest((struct tagWND *)v15, a2, v52, &v50, (int *)&v49, (struct tagPNTRWINDOWHITTTESTARGS *)a4),
            v11 = v49,
            v49 == -1) )
      {
        *v55 = 0;
        return v17;
      }
    }
LABEL_64:
    *(_DWORD *)(a4 + 32) = v11;
    v44 = *(unsigned __int8 **)(v15 + 40);
    if ( *(_DWORD *)(a4 + 84) )
    {
      v16 = (((v44[26] & 0x40) == 0) ^ (v44[25] >> 6) & 1) + 16;
    }
    else if ( (v44[26] & 0x40) != 0 )
    {
      v16 = 16;
    }
    if ( v11 == v16 && (v44[30] & 4) == 0 )
    {
      v45 = SizeBoxHwnd(v15);
      if ( v45 )
        v15 = v45;
    }
    if ( v51 )
      v42 += _TTWindowPenalty((struct tagWND *)v15, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v42);
    if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)v15)
      || (unsigned int)TTBetterTarget((struct tagWND *)v15, v42, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v53, v48) )
    {
      v69 = *v53;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, (struct tagWND *)v15, v42, &v50, 0LL, 0, &v69, v48);
    }
    return *(_QWORD *)v15;
  }
  return v17;
}
