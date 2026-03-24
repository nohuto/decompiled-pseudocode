/*
 * XREFs of xxxScrollWindowEx @ 0x1C00677EC
 * Callers:
 *     NtUserScrollWindowEx @ 0x1C0067600 (NtUserScrollWindowEx.c)
 *     xxxMNSetTop @ 0x1C023AFB8 (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1C0249294 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     GetDCOrgOnScreen @ 0x1C0042AB0 (GetDCOrgOnScreen.c)
 *     _IsDescendant @ 0x1C004C578 (_IsDescendant.c)
 *     OffsetChildren @ 0x1C004C97C (OffsetChildren.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     GetRect @ 0x1C0063E88 (GetRect.c)
 *     zzzInternalHideCaret @ 0x1C00674A0 (zzzInternalHideCaret.c)
 *     IsVisible @ 0x1C00680C4 (IsVisible.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzInternalShowCaret @ 0x1C006A08C (zzzInternalShowCaret.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006DEA4 (zzzEndDeferWinEventNotify.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C00715B4 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     xxxRedrawWindow @ 0x1C00722B4 (xxxRedrawWindow.c)
 *     xxxInternalInvalidate @ 0x1C00724E0 (xxxInternalInvalidate.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00726C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     IntersectRect @ 0x1C00750C0 (IntersectRect.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ThreadLockExchangeAlways @ 0x1C00C0FFC (ThreadLockExchangeAlways.c)
 *     GreTransformPoints @ 0x1C00FA30C (GreTransformPoints.c)
 *     UnionRect @ 0x1C0104BAC (UnionRect.c)
 *     MirrorRegion @ 0x1C010DF9C (MirrorRegion.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     SpbCheckRect @ 0x1C021A284 (SpbCheckRect.c)
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
  __int64 v9; // r14
  __int64 v10; // r11
  int v11; // r12d
  struct tagWND *v12; // rbx
  int v14; // edx
  int v15; // edx
  __int64 v16; // r9
  __int16 v17; // si
  __int64 ThreadWin32Thread; // rax
  int v19; // edi
  unsigned int v21; // edi
  HDC DCEx; // r15
  unsigned int v23; // r15d
  int v24; // r12d
  int v25; // edi
  HDC v26; // rdi
  __int64 v27; // rax
  HRGN v28; // rcx
  __int64 v29; // rcx
  int v30; // edx
  unsigned int v31; // eax
  struct tagRECT *v32; // r13
  bool v33; // zf
  __int64 v34; // rdx
  int v35; // edx
  LONG v36; // eax
  LONG v37; // edx
  int v38; // eax
  struct tagRECT v39; // xmm0
  LONG left; // r8d
  __int64 v41; // rax
  int v42; // ecx
  int v43; // edx
  int v44; // edi
  LONG v45; // edx
  int v46; // ecx
  __int64 v47; // rax
  int v48; // edx
  int v49; // r8d
  __int64 v50; // rcx
  __int64 DesktopWindow; // rax
  __int64 v52; // rdx
  int v53; // ecx
  __int64 v54; // rcx
  unsigned int v55; // edx
  int v56; // r8d
  __int64 v57; // rcx
  unsigned __int64 i; // rdi
  __int64 v59; // rax
  int v60; // r9d
  int v61; // eax
  __int64 v62; // r8
  __int64 v63; // rdx
  int v64; // [rsp+20h] [rbp-E0h]
  int v65; // [rsp+50h] [rbp-B0h]
  int v66; // [rsp+54h] [rbp-ACh]
  unsigned int v67; // [rsp+54h] [rbp-ACh]
  int v69; // [rsp+5Ch] [rbp-A4h]
  HRGN v71; // [rsp+68h] [rbp-98h]
  HDC v72[2]; // [rsp+70h] [rbp-90h] BYREF
  int v73; // [rsp+80h] [rbp-80h]
  struct tagRECT v74; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v75; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v76; // [rsp+A4h] [rbp-5Ch]
  int v77; // [rsp+A8h] [rbp-58h]
  int v78; // [rsp+ACh] [rbp-54h]
  int v79; // [rsp+B0h] [rbp-50h]
  int v80; // [rsp+B4h] [rbp-4Ch]
  int v81; // [rsp+B8h] [rbp-48h]
  int v82; // [rsp+BCh] [rbp-44h]
  struct tagRECT *v83; // [rsp+C0h] [rbp-40h]
  struct tagRECT *v84; // [rsp+C8h] [rbp-38h]
  struct tagRECT *v85; // [rsp+D0h] [rbp-30h]
  char v86[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v87; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v88; // [rsp+F0h] [rbp-10h]
  __int128 v89; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v90; // [rsp+108h] [rbp+8h]
  __int128 v91; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT v92; // [rsp+120h] [rbp+20h] BYREF
  struct tagRECT v93; // [rsp+130h] [rbp+30h] BYREF
  struct tagRECT v94; // [rsp+140h] [rbp+40h] BYREF
  __int128 v95; // [rsp+150h] [rbp+50h] BYREF

  v69 = 0;
  v8 = 0;
  v75 = 0;
  v76 = 0;
  v9 = 0LL;
  v10 = a6;
  v11 = a2;
  v90 = 0LL;
  v12 = a1;
  v88 = 0LL;
  v66 = a2;
  v83 = a4;
  v85 = a5;
  v71 = (HRGN)a6;
  v84 = a7;
  v65 = 0;
  v93 = 0LL;
  v89 = 0LL;
  v87 = 0LL;
  if ( !a1 )
  {
    v69 = 1;
    v12 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 26LL) & 0x40) != 0 )
  {
    v11 = -a2;
    v66 = -a2;
    MirrorRegion(v12, a6, 1LL);
    if ( a4 )
    {
      v14 = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a4->left;
      a4->left = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a4->right;
      a4->right = v14;
    }
    v10 = a6;
    v8 = 0;
    if ( a5 )
    {
      v15 = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a5->left;
      a5->left = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a5->right;
      a5->right = v15;
    }
  }
  if ( !(v11 | a3) )
    goto LABEL_25;
  if ( (unsigned int)IsVisible(v12) )
  {
    v17 = a8;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 0x20) != 0 )
  {
LABEL_25:
    v17 = a8;
  }
  else
  {
    v17 = a8;
    if ( (a8 & 1) != 0 && !v16 )
    {
      v8 = 1;
      v17 = a8 & 0xFFFD;
      v65 = 1;
    }
  }
  if ( v10 )
  {
    SetEmptyRgn(v10);
    v8 = v65;
  }
  if ( a7 )
    *a7 = 0LL;
  if ( !v8 )
    return 1LL;
LABEL_15:
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v86);
  v73 = 0;
  if ( v69 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v89 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v89;
    *((_QWORD *)&v89 + 1) = v12;
    HMLockObject(v12);
  }
  if ( !v65 )
  {
    v9 = *(_QWORD *)(gptiCurrent + 432LL) + 296LL;
    if ( *(_QWORD *)v9 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)v9, (__int64)v12) )
      {
        v73 = 1;
        zzzInternalHideCaret();
      }
    }
  }
  v19 = 65538;
  v81 = v17 & 1;
  if ( v17 < 0 )
  {
    v19 = (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v12 + 17) + 8LL) + 8LL) & 0x60) != 0 ? 0x10000 : 65538;
    if ( (v17 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 2) != 0 )
      v19 |= 0x80002u;
  }
  else if ( (v17 & 1) != 0 )
  {
    v19 = 589826;
  }
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v21 = v19 | 0x40000000;
  DCEx = (HDC)_GetDCEx(v12, 0LL, v21);
  v72[0] = DCEx;
  v82 = v17 & 2;
  if ( (v17 & 2) != 0 )
  {
    GetDCOrgOnScreen((__int64)DCEx, &v75);
    if ( !a6 )
      v71 = (HRGN)ghrgnSW;
  }
  if ( !a4 )
  {
    v83 = &v93;
    GetRect((__int64)v12, (__int64)&v93, 17);
    if ( (v21 & 2) == 0 )
      GreTransformPoints(DCEx, 0);
  }
  v23 = v11;
  v24 = a3;
  v92 = *v83;
  v25 = v21 & 2;
  if ( !v25 )
  {
    GreTransformPoints(v72[0], 1);
    v78 = 0;
    v77 = 0;
    v79 = v66;
    v80 = a3;
    GreTransformPoints(v72[0], 1);
    v23 = v79 - v77;
    v24 = v80 - v78;
  }
  if ( v65 )
  {
    v26 = v72[0];
    v67 = 1;
  }
  else
  {
    v27 = *((_QWORD *)v12 + 5);
    v28 = *(HRGN *)(v27 + 136);
    if ( v17 < 0 && (*(_BYTE *)(v27 + 21) & 1) == 0 )
    {
      if ( (unsigned __int64)v28 > 1 )
      {
        v95 = 0LL;
        if ( (unsigned int)GreGetRgnBox(v28, &v95) )
        {
          v29 = *((_QWORD *)v12 + 5);
          v30 = v24 - *(_DWORD *)(v29 + 108);
          v31 = v23 - *(_DWORD *)(v29 + 104);
          HIDWORD(v95) += v30;
          DWORD1(v95) += v30;
          LODWORD(v95) = v31 + v95;
          DWORD2(v95) += v31;
          xxxRedrawWindow(v12);
        }
      }
      v28 = 0LL;
    }
    v32 = v84;
    v33 = v25 == 0;
    v26 = v72[0];
    v67 = InternalScrollDC(v12, v72[0], v66, a3, v83, v85, v28, v71, v84, v33);
    if ( v32 )
    {
      v34 = *((_QWORD *)v12 + 5);
      if ( (*(_BYTE *)(v34 + 26) & 0x40) != 0 )
      {
        v35 = *(_DWORD *)(v34 + 112) - *(_DWORD *)(v34 + 104);
        v36 = v35 - v32->right;
        v37 = v35 - v32->left;
        v32->left = v36;
        v32->right = v37;
      }
    }
  }
  _ReleaseDC(v26);
  v38 = v65;
  if ( !v65 )
  {
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
    {
      if ( a4 )
      {
        if ( v12 == (struct tagWND *)GetDesktopWindow(v12) )
        {
          v39 = v92;
          v93 = v92;
          left = v92.left;
        }
        else
        {
          v41 = *((_QWORD *)v12 + 5);
          v42 = *(_DWORD *)(v41 + 104);
          left = v42 + v92.left;
          v43 = *(_DWORD *)(v41 + 108);
          v93.right = v92.right + v42;
          v93.left = v42 + v92.left;
          v93.top = v43 + v92.top;
          v93.bottom = v43 + v92.bottom;
          v39 = v93;
        }
        v74.right = v23 + v39.right;
        v74.bottom = v24 + v39.bottom;
        v74.top = v24 + v39.top;
        v74.left = left + v23;
        UnionRect(&v74, &v74, &v93);
      }
      else
      {
        v74 = *(struct tagRECT *)(*((_QWORD *)v12 + 5) + 104LL);
      }
      SpbCheckRect(v12, &v74, 0);
    }
    v38 = 0;
  }
  v44 = v81;
  if ( v81 )
  {
    v94 = 0LL;
    if ( !v38 && v12 == *(struct tagWND **)v9 )
    {
      if ( !a4
        || (v45 = *(_DWORD *)(v9 + 24),
            v94.left = *(_DWORD *)(v9 + 20),
            v94.right = *(_DWORD *)(v9 + 32) + v94.left,
            v46 = *(_DWORD *)(v9 + 28),
            v94.top = v45,
            v94.bottom = v45 + v46,
            (unsigned int)IntersectRect(&v94, &v94, &v92)) )
      {
        *(_DWORD *)(v9 + 20) += v23;
        *(_DWORD *)(v9 + 24) += v24;
      }
    }
    if ( a4 )
    {
      if ( v12 == (struct tagWND *)GetDesktopWindow(v12) )
      {
        v94 = v92;
      }
      else
      {
        v47 = *((_QWORD *)v12 + 5);
        v48 = *(_DWORD *)(v47 + 104);
        v49 = *(_DWORD *)(v47 + 108);
        v94.left = v48 + v92.left;
        v94.right = v48 + v92.right;
        v94.top = v49 + v92.top;
        v94.bottom = v49 + v92.bottom;
      }
    }
    if ( *((_QWORD *)v12 + 14) )
    {
      OffsetChildren(v12, v23, v24, (unsigned __int64)&v94 & -(__int64)(a4 != 0LL), v64);
      zzzLockDisplayAreaAndInvalidateDCCache(v12, (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 2) != 0 ? 4 : 2, 0LL);
    }
  }
  if ( v82 )
  {
    if ( v71 != (HRGN)ghrgnSW )
      GreCombineRgn(ghrgnSW, v71, 0LL, 5LL);
    GreOffsetRgn(ghrgnSW, v75, v76);
    xxxInternalInvalidate(v12, ghrgnSW, v17 & 4 | 0x81);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v86);
  zzzEndDeferWinEventNotify();
  if ( v44 )
  {
    v91 = 0LL;
    *(_OWORD *)v72 = 0LL;
    if ( a4 )
    {
      DesktopWindow = GetDesktopWindow(v12);
      if ( v52 == DesktopWindow )
      {
        LODWORD(v72[0]) = v23 + v92.left;
        LODWORD(v72[1]) = v23 + v92.right;
        HIDWORD(v72[0]) = v24 + v92.top;
        v53 = v24 + v92.bottom;
      }
      else
      {
        v54 = *(_QWORD *)(v52 + 40);
        v55 = v23 + *(_DWORD *)(v54 + 104);
        v56 = v24 + *(_DWORD *)(v54 + 108);
        LODWORD(v72[0]) = v55 + v92.left;
        LODWORD(v72[1]) = v55 + v92.right;
        HIDWORD(v72[0]) = v56 + v92.top;
        v53 = v56 + v92.bottom;
      }
      HIDWORD(v72[1]) = v53;
    }
    v57 = gptiCurrent;
    *(_QWORD *)&v87 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v87;
    *((_QWORD *)&v87 + 1) = 0LL;
    for ( i = *((_QWORD *)v12 + 14); i; i = *(_QWORD *)(i + 88) )
    {
      if ( !a4 || (unsigned int)IntersectRect(&v91, v72, *(_QWORD *)(i + 40) + 88LL) )
      {
        ThreadLockExchangeAlways(i, &v87);
        if ( v12 == (struct tagWND *)GetDesktopWindow(v12) )
        {
          v59 = *(_QWORD *)(i + 40);
          v60 = *(unsigned __int16 *)(v59 + 108);
          v61 = *(unsigned __int16 *)(v59 + 104);
        }
        else
        {
          v62 = *(_QWORD *)(i + 40);
          v63 = *((_QWORD *)v12 + 5);
          v60 = (unsigned __int16)(*(_WORD *)(v62 + 108) - *(_WORD *)(v63 + 108));
          v61 = (unsigned __int16)(*(_WORD *)(v62 + 104) - *(_WORD *)(v63 + 104));
        }
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(i, 3u, 0LL, (struct _LARGE_STRING *)(v61 | (v60 << 16)), 0, 0, 0LL, 1, 0);
      }
    }
    ThreadUnlock1(v57);
  }
  if ( v73 )
    zzzInternalShowCaret();
  if ( v69 )
    ThreadUnlock1(v50);
  return v67;
}
