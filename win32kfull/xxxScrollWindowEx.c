/*
 * XREFs of xxxScrollWindowEx @ 0x1C0231B34
 * Callers:
 *     NtUserScrollWindowEx @ 0x1C01482B0 (NtUserScrollWindowEx.c)
 *     xxxMNSetTop @ 0x1C021CD94 (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1C02341E4 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     zzzInternalShowCaret @ 0x1C00061E4 (zzzInternalShowCaret.c)
 *     GreTransformPoints @ 0x1C0006C84 (GreTransformPoints.c)
 *     SpbCheckRect @ 0x1C000B2CC (SpbCheckRect.c)
 *     MirrorRegion @ 0x1C002779C (MirrorRegion.c)
 *     _IsDescendant @ 0x1C002C4D0 (_IsDescendant.c)
 *     zzzEndDeferWinEventNotify @ 0x1C002EF28 (zzzEndDeferWinEventNotify.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     OffsetChildren @ 0x1C004CB34 (OffsetChildren.c)
 *     xxxRedrawWindow @ 0x1C0050700 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00519F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxInternalInvalidate @ 0x1C0053270 (xxxInternalInvalidate.c)
 *     GetRect @ 0x1C0067778 (GetRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     IsVisible @ 0x1C00A66A0 (IsVisible.c)
 *     UnionRect @ 0x1C00DD06C (UnionRect.c)
 *     ThreadLockExchangeAlways @ 0x1C00DEE6C (ThreadLockExchangeAlways.c)
 *     zzzInternalHideCaret @ 0x1C00E877C (zzzInternalHideCaret.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     GetDCOrgOnScreen @ 0x1C01BEDC4 (GetDCOrgOnScreen.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0230DA0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxScrollWindowEx(
        struct tagWND *a1,
        int a2,
        int a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        __int64 a6,
        struct tagRECT *a7,
        __int16 a8)
{
  int v8; // r10d
  HRGN v9; // r11
  __int64 v10; // r14
  int v11; // r12d
  struct tagWND *v12; // rbx
  __int64 v14; // rax
  int v15; // edx
  int v16; // edx
  __int64 v17; // r9
  __int16 v18; // si
  int v19; // edi
  int v21; // eax
  unsigned int v22; // edi
  HDC DCEx; // r15
  unsigned int v24; // r15d
  unsigned int v25; // r12d
  int v26; // edi
  HDC v27; // rdi
  __int64 v28; // rax
  HRGN v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // edx
  unsigned int v32; // eax
  struct tagRECT *v33; // r13
  bool v34; // zf
  __int64 v35; // rdx
  int v36; // edx
  LONG v37; // eax
  LONG v38; // edx
  int v39; // eax
  struct tagRECT *v40; // r13
  __int128 v41; // xmm0
  int v42; // r8d
  __int64 v43; // rax
  int v44; // ecx
  int v45; // edx
  int v46; // edi
  int v47; // edx
  int v48; // ecx
  __int64 v49; // rax
  int v50; // edx
  int v51; // r8d
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 DesktopWindow; // rax
  unsigned int v56; // ecx
  __int64 v57; // rcx
  __int64 v58; // rcx
  struct tagWND *i; // rdi
  _QWORD *v60; // rsi
  int v61; // r9d
  int v62; // eax
  __int64 v63; // rdx
  int v64; // [rsp+50h] [rbp-B0h]
  _BYTE v65[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v66; // [rsp+58h] [rbp-A8h]
  int v67; // [rsp+5Ch] [rbp-A4h]
  int v68; // [rsp+60h] [rbp-A0h]
  struct tagRECT *v69; // [rsp+68h] [rbp-98h]
  HRGN v70; // [rsp+70h] [rbp-90h]
  HDC v71[2]; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT *v72[2]; // [rsp+90h] [rbp-70h] BYREF
  int v73; // [rsp+A0h] [rbp-60h]
  unsigned int v74; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v75; // [rsp+ACh] [rbp-54h]
  struct _POINTL v76; // [rsp+B0h] [rbp-50h] BYREF
  int v77; // [rsp+B8h] [rbp-48h]
  unsigned int v78; // [rsp+BCh] [rbp-44h]
  int v79; // [rsp+C0h] [rbp-40h]
  int v80; // [rsp+C4h] [rbp-3Ch]
  struct tagRECT *v81[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v82; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v83; // [rsp+E8h] [rbp-18h]
  __int128 v84; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v85; // [rsp+100h] [rbp+0h]
  __int128 v86; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT *v87[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v88; // [rsp+130h] [rbp+30h] BYREF
  __int128 v89; // [rsp+140h] [rbp+40h] BYREF

  v68 = 0;
  v8 = 0;
  v74 = 0;
  v75 = 0;
  v9 = (HRGN)a6;
  v10 = 0LL;
  v11 = a2;
  v85 = 0LL;
  v12 = a1;
  v83 = 0LL;
  v69 = a4;
  v67 = a3;
  v66 = a2;
  v81[0] = a4;
  v87[0] = a5;
  v70 = (HRGN)a6;
  v72[0] = a7;
  v64 = 0;
  v86 = 0LL;
  v88 = 0LL;
  v84 = 0LL;
  v82 = 0LL;
  if ( !a1 )
  {
    v14 = *(_QWORD *)(gptiCurrent + 456LL);
    v68 = 1;
    v12 = *(struct tagWND **)(*(_QWORD *)(v14 + 8) + 24LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 26LL) & 0x40) != 0 )
  {
    v11 = -a2;
    v66 = -a2;
    MirrorRegion((__int64)v12, a6, 1);
    if ( a4 )
    {
      v15 = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a4->left;
      a4->left = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a4->right;
      a4->right = v15;
    }
    v9 = v70;
    v8 = 0;
    if ( a5 )
    {
      v16 = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a5->left;
      a5->left = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a5->right;
      a5->right = v16;
    }
  }
  if ( !(v11 | v67) )
    goto LABEL_25;
  if ( (unsigned int)IsVisible((__int64)v12) )
  {
    v18 = a8;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 0x20) != 0 )
  {
LABEL_25:
    v18 = a8;
  }
  else
  {
    v18 = a8;
    if ( (a8 & 1) != 0 && !v17 )
    {
      v8 = 1;
      v18 = a8 & 0xFFFD;
      v64 = 1;
    }
  }
  if ( v9 )
  {
    SetEmptyRgn(v9);
    v8 = v64;
  }
  if ( a7 )
    *a7 = 0LL;
  if ( !v8 )
    return 1LL;
LABEL_15:
  ++gdwDeferWinEvent;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v65);
  v73 = 0;
  if ( v68 )
    ThreadLock(v12, &v84);
  if ( !v64 )
  {
    v10 = *(_QWORD *)(gptiCurrent + 432LL) + 304LL;
    if ( *(_QWORD *)v10 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)v10, (__int64)v12) )
      {
        v73 = 1;
        zzzInternalHideCaret();
      }
    }
  }
  v79 = v18 & 1;
  if ( v18 < 0 )
  {
    v19 = (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v12 + 17) + 8LL) + 8LL) & 0x60) != 0 ? 0x10000 : 65538;
    if ( (v18 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 2) != 0 )
      v19 = 589826;
  }
  else
  {
    v21 = 65538;
    if ( (v18 & 1) != 0 )
      v21 = 589826;
    v19 = v21;
  }
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v22 = v19 | 0x40000000;
  DCEx = (HDC)_GetDCEx(v12, 0LL, v22);
  v71[0] = DCEx;
  v80 = v18 & 2;
  if ( (v18 & 2) != 0 )
  {
    GetDCOrgOnScreen((__int64)DCEx, &v74);
    if ( !v70 )
      v70 = (HRGN)ghrgnSW;
  }
  if ( !v69 )
  {
    v81[0] = (struct tagRECT *)&v88;
    GetRect((__int64)v12, (__int64)&v88, 17);
    if ( (v22 & 2) == 0 )
      GreTransformPoints(DCEx, (struct _POINTL *)&v88, (struct _POINTL *)&v88, 2, 0);
  }
  v24 = v11;
  v25 = v67;
  v86 = (__int128)*v81[0];
  v26 = v22 & 2;
  if ( !v26 )
  {
    GreTransformPoints(v71[0], (struct _POINTL *)&v86, (struct _POINTL *)&v86, 2, 1);
    v76.y = 0;
    v76.x = 0;
    v77 = v66;
    v78 = v25;
    GreTransformPoints(v71[0], &v76, &v76, 2, 1);
    v24 = v77 - v76.x;
    v25 = v78 - v76.y;
  }
  if ( v64 )
  {
    v27 = v71[0];
    v66 = 1;
  }
  else
  {
    v28 = *((_QWORD *)v12 + 5);
    v29 = *(HRGN *)(v28 + 136);
    if ( v18 < 0 && (*(_BYTE *)(v28 + 21) & 1) == 0 )
    {
      if ( (unsigned __int64)v29 > 1 )
      {
        v89 = 0LL;
        if ( (unsigned int)GreGetRgnBox(v29, &v89) )
        {
          v30 = *((_QWORD *)v12 + 5);
          v31 = v25 - *(_DWORD *)(v30 + 108);
          v32 = v24 - *(_DWORD *)(v30 + 104);
          HIDWORD(v89) += v31;
          DWORD1(v89) += v31;
          LODWORD(v89) = v32 + v89;
          DWORD2(v89) += v32;
          xxxRedrawWindow(v12, (int *)&v89, 0LL, 133);
        }
      }
      v29 = 0LL;
    }
    v33 = v72[0];
    v34 = v26 == 0;
    v27 = v71[0];
    v66 = InternalScrollDC(v12, v71[0], v66, v67, v81[0], v87[0], v29, v70, v72[0], v34);
    if ( v33 )
    {
      v35 = *((_QWORD *)v12 + 5);
      if ( (*(_BYTE *)(v35 + 26) & 0x40) != 0 )
      {
        v36 = *(_DWORD *)(v35 + 112) - *(_DWORD *)(v35 + 104);
        v37 = v36 - v33->right;
        v38 = v36 - v33->left;
        v33->left = v37;
        v33->right = v38;
      }
    }
  }
  _ReleaseDC(v27);
  v39 = v64;
  v40 = v69;
  if ( !v64 )
  {
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
    {
      if ( v69 )
      {
        if ( v12 == (struct tagWND *)GetDesktopWindow((__int64)v12) )
        {
          v41 = v86;
          v88 = v86;
          v42 = v86;
        }
        else
        {
          v43 = *((_QWORD *)v12 + 5);
          v44 = *(_DWORD *)(v43 + 104);
          v42 = v44 + v86;
          v45 = *(_DWORD *)(v43 + 108);
          DWORD2(v88) = DWORD2(v86) + v44;
          LODWORD(v88) = v44 + v86;
          DWORD1(v88) = v45 + DWORD1(v86);
          HIDWORD(v88) = v45 + HIDWORD(v86);
          v41 = v88;
        }
        LODWORD(v72[1]) = v24 + DWORD2(v41);
        HIDWORD(v72[1]) = v25 + HIDWORD(v41);
        HIDWORD(v72[0]) = v25 + DWORD1(v41);
        LODWORD(v72[0]) = v42 + v24;
        UnionRect(v72, (int *)v72, (int *)&v88);
      }
      else
      {
        *(_OWORD *)v72 = *(_OWORD *)(*((_QWORD *)v12 + 5) + 104LL);
      }
      SpbCheckRect(v12, (struct tagRECT *)v72, 0);
    }
    v39 = 0;
  }
  v46 = v79;
  if ( !v79 )
    goto LABEL_76;
  *(_OWORD *)v87 = 0LL;
  if ( v39 || v12 != *(struct tagWND **)v10 )
  {
LABEL_70:
    if ( !v40 )
      goto LABEL_74;
    goto LABEL_71;
  }
  if ( !v40
    || (v47 = *(_DWORD *)(v10 + 24),
        LODWORD(v87[0]) = *(_DWORD *)(v10 + 20),
        LODWORD(v87[1]) = *(_DWORD *)(v10 + 32) + LODWORD(v87[0]),
        v48 = *(_DWORD *)(v10 + 28),
        HIDWORD(v87[0]) = v47,
        HIDWORD(v87[1]) = v47 + v48,
        (unsigned int)IntersectRect(v87, (int *)v87, (int *)&v86)) )
  {
    *(_DWORD *)(v10 + 20) += v24;
    *(_DWORD *)(v10 + 24) += v25;
    goto LABEL_70;
  }
LABEL_71:
  if ( v12 == (struct tagWND *)GetDesktopWindow((__int64)v12) )
  {
    *(_OWORD *)v87 = v86;
  }
  else
  {
    v49 = *((_QWORD *)v12 + 5);
    v50 = *(_DWORD *)(v49 + 104);
    v51 = *(_DWORD *)(v49 + 108);
    LODWORD(v87[0]) = v50 + v86;
    LODWORD(v87[1]) = v50 + DWORD2(v86);
    HIDWORD(v87[0]) = v51 + DWORD1(v86);
    HIDWORD(v87[1]) = v51 + HIDWORD(v86);
  }
LABEL_74:
  if ( *((_QWORD *)v12 + 14) )
  {
    OffsetChildren(v12, v24, v25, (unsigned __int64)v87 & -(__int64)(v40 != 0LL));
    zzzLockDisplayAreaAndInvalidateDCCache(
      (__int64)v12,
      (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 2) != 0 ? 4 : 2,
      0LL);
  }
LABEL_76:
  if ( v80 )
  {
    if ( v70 != (HRGN)ghrgnSW )
      GreCombineRgn(ghrgnSW, v70, 0LL, 5LL);
    GreOffsetRgn(ghrgnSW, v74, v75);
    xxxInternalInvalidate(v12, ghrgnSW, v18 & 4 | 0x81);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v65);
  zzzEndDeferWinEventNotify();
  if ( v46 )
  {
    *(_OWORD *)v81 = 0LL;
    *(_OWORD *)v71 = 0LL;
    if ( v40 )
    {
      DesktopWindow = GetDesktopWindow((__int64)v12);
      if ( v52 == DesktopWindow )
      {
        LODWORD(v71[0]) = v24 + v86;
        LODWORD(v71[1]) = v24 + DWORD2(v86);
        HIDWORD(v71[0]) = v25 + DWORD1(v86);
        v56 = v25 + HIDWORD(v86);
      }
      else
      {
        v57 = *(_QWORD *)(v52 + 40);
        v52 = v24 + *(_DWORD *)(v57 + 104);
        v54 = v25 + *(_DWORD *)(v57 + 108);
        LODWORD(v71[0]) = v52 + v86;
        LODWORD(v71[1]) = v52 + DWORD2(v86);
        HIDWORD(v71[0]) = v54 + DWORD1(v86);
        v56 = v54 + HIDWORD(v86);
      }
      HIDWORD(v71[1]) = v56;
    }
    v58 = gptiCurrent;
    *(_QWORD *)&v82 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v82;
    *((_QWORD *)&v82 + 1) = 0LL;
    for ( i = (struct tagWND *)*((_QWORD *)v12 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      v60 = (_QWORD *)((char *)i + 40);
      if ( !v40 || (unsigned int)IntersectRect(v81, (int *)v71, (int *)(*v60 + 88LL)) )
      {
        ThreadLockExchangeAlways((__int64)i, (__int64)&v82);
        if ( v12 == (struct tagWND *)GetDesktopWindow((__int64)v12) )
        {
          v61 = *(unsigned __int16 *)(*v60 + 108LL);
          v62 = *(unsigned __int16 *)(*v60 + 104LL);
        }
        else
        {
          v63 = *((_QWORD *)v12 + 5);
          v61 = (unsigned __int16)(*(_WORD *)(*v60 + 108LL) - *(_WORD *)(v63 + 108));
          v62 = (unsigned __int16)(*(_WORD *)(*v60 + 104LL) - *(_WORD *)(v63 + 104));
        }
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(i, 3u, 0LL, (__int128 *)(v62 | (v61 << 16)), 0, 0, 0LL, 1, 0);
      }
    }
    ThreadUnlock1(v58, v52, v54);
  }
  if ( v73 )
    zzzInternalShowCaret();
  if ( v68 )
    ThreadUnlock1(v53, v52, v54);
  return (unsigned int)v66;
}
