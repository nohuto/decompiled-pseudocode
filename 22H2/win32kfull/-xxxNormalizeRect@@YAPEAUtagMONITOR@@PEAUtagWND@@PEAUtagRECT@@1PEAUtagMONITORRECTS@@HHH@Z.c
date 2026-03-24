/*
 * XREFs of ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C003E464
 * Callers:
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C003E3E0 (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z.c)
 *     xxxComputeProposedPerMonRect @ 0x1C0040CD4 (xxxComputeProposedPerMonRect.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C002C4C0 (GetMonitorWorkRectForWindow.c)
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C003E2DC (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 *     IsValidMonitor @ 0x1C003E8AC (IsValidMonitor.c)
 *     GetMonitorRectForDpi @ 0x1C0041F48 (GetMonitorRectForDpi.c)
 *     ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C0041FC8 (-Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z.c)
 *     GetMonitorRectForWindow @ 0x1C00427D4 (GetMonitorRectForWindow.c)
 *     ScaleDPIRect @ 0x1C00428C0 (ScaleDPIRect.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C004AE0C (GetWindowBordersWithDpiAwareness.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01D5EF8 (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E5D58 (xxxAppAdjustDpiCandidateRect.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023ED18 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 */

struct tagMONITOR *__fastcall xxxNormalizeRect(
        struct tagWND *a1,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagMONITORRECTS *a4,
        int a5,
        int a6,
        int a7)
{
  struct tagRECT v8; // xmm0
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int16 v16; // bx
  __int64 v17; // r9
  unsigned __int16 v18; // r8
  unsigned __int16 v19; // dx
  char v20; // cl
  LONG right; // r12d
  int bottom; // edi
  LONG top; // r8d
  _DWORD *v24; // rdx
  int v25; // ecx
  int v26; // r10d
  int v27; // eax
  int v28; // r11d
  int v29; // ebx
  int v30; // r15d
  _DWORD *v31; // rbx
  LONG v32; // edx
  LONG v33; // r8d
  LONG left; // ecx
  LONG v35; // r9d
  LONG v36; // r9d
  LONG v37; // r8d
  LONG v38; // ecx
  LONG v39; // r10d
  LONG v40; // ecx
  INT v42; // eax
  INT v43; // eax
  int v44; // r11d
  int v45; // ecx
  int v46; // ebx
  __int128 v47; // xmm0
  struct tagRECT *v48; // rax
  bool v49; // zf
  int WindowBordersWithDpiAwareness; // eax
  int v51; // edx
  LONG v52; // r8d
  __int128 v53; // xmm0
  int v54; // eax
  int v55; // eax
  __int64 ThreadWin32Thread; // rax
  struct tagMONITOR *v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rcx
  INT v60; // eax
  INT v61; // eax
  BOOL v62; // ebx
  __int64 v63; // rcx
  int v64; // eax
  int v65; // ecx
  unsigned __int16 v66; // [rsp+30h] [rbp-D0h]
  int v67; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v68; // [rsp+34h] [rbp-CCh]
  int v69; // [rsp+34h] [rbp-CCh]
  __int64 v70; // [rsp+38h] [rbp-C8h] BYREF
  struct tagRECT v71; // [rsp+40h] [rbp-C0h] BYREF
  struct tagMONITOR *NewMonitor; // [rsp+50h] [rbp-B0h] BYREF
  int v73; // [rsp+58h] [rbp-A8h]
  struct tagRECT v74; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT *v75; // [rsp+70h] [rbp-90h]
  int v76; // [rsp+78h] [rbp-88h]
  _QWORD v77[3]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v78[3]; // [rsp+98h] [rbp-68h] BYREF
  char v79[16]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v80; // [rsp+C0h] [rbp-40h] BYREF
  char v81[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v82; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v83; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v84[88]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v85[43]; // [rsp+158h] [rbp+58h] BYREF

  v8 = *a3;
  v73 = 0;
  v75 = a3;
  v12 = 48LL * a5;
  v71 = v8;
  v13 = ValidateHmonitor(*(_QWORD *)((char *)a4 + v12 + 48));
  NewMonitor = (struct tagMONITOR *)v13;
  v16 = 96;
  if ( !v13 || !(unsigned int)IsValidMonitor(v13, v14, v15, v13) )
  {
    NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a4 + v12 + 8));
    v17 = (__int64)NewMonitor;
    if ( !NewMonitor )
    {
      v17 = *(_QWORD *)(GetDispInfo() + 96);
      NewMonitor = (struct tagMONITOR *)v17;
    }
  }
  v18 = *(_WORD *)((char *)a4 + v12 + 40);
  v68 = v18;
  v19 = *(_WORD *)(*(_QWORD *)(v17 + 40) + 64LL);
  v66 = v19;
  v20 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF;
  v76 = 2;
  if ( v20 == 2 )
  {
    if ( a7 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 648LL) & 0x2000000) == 0 && !a6 && v19 != v18 )
    {
      v77[2] = 0LL;
      v78[2] = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v77[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v77;
      v77[1] = a1;
      HMLockObject(a1);
      v57 = NewMonitor;
      v58 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v78[0] = *(_QWORD *)(v58 + 416);
      *(_QWORD *)(v58 + 416) = v78;
      v78[1] = v57;
      HMLockObject(v57);
      if ( (unsigned int)xxxAppAdjustDpiCandidateRect(a1, v66, &v71, &v71) )
      {
        bottom = v71.bottom;
        right = v71.right;
      }
      else
      {
        v60 = EngMulDiv(a3->right - a3->left, v66, v68);
        right = v71.left + v60;
        v61 = EngMulDiv(v75->bottom - v75->top, v66, v68);
        bottom = v71.top + v61;
      }
      v62 = ThreadUnlock1(v59) == 0;
      if ( v62 | (ThreadUnlock1(v63) == 0) )
        return 0LL;
      v17 = (__int64)NewMonitor;
      goto LABEL_6;
    }
  }
  else
  {
    memset(v84, 0, sizeof(v84));
    memset(v85, 0, 0x150uLL);
    v85[5] = v84;
    PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v84, (struct tagMONITORRECTS *)((char *)a4 + v12 + 8));
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 0 )
      v16 = *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    v74 = *(struct tagRECT *)GetMonitorRectForDpi(v79, v85, v16);
    ScaleDPIRect(
      (unsigned int)&v71,
      (unsigned int)&v71,
      v68,
      v16,
      *(_QWORD *)((char *)a4 + v12 + 8),
      *(__int64 *)&v74.left);
    v73 = 1;
    if ( !a6 )
    {
      v42 = EngMulDiv(a3->right - a3->left, v66, v16);
      right = v71.left + v42;
      v43 = EngMulDiv(v75->bottom - v75->top, v66, v16);
      top = v71.top;
      v17 = (__int64)NewMonitor;
      bottom = v71.top + v43;
      goto LABEL_7;
    }
    v17 = (__int64)NewMonitor;
  }
  right = v71.right;
  bottom = v71.bottom;
LABEL_6:
  top = v71.top;
LABEL_7:
  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v53 = *GetMonitorWorkRectForWindow(&v80, v17, a1);
      v48 = (struct tagRECT *)&v82;
      v82 = v53;
    }
    else
    {
      v47 = *(_OWORD *)GetMonitorRectForWindow(v81, v17, a1);
      v48 = (struct tagRECT *)&v83;
      v83 = v47;
    }
    v49 = *((_DWORD *)a1 + 77) == 0;
    v74 = *v48;
    if ( v49 )
    {
      WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
      v51 = v74.left - WindowBordersWithDpiAwareness;
      v52 = v74.top - WindowBordersWithDpiAwareness;
      a2->left = v74.left - WindowBordersWithDpiAwareness;
      a2->top = v52;
      a2->right = v74.right + v51 + 2 * WindowBordersWithDpiAwareness - v74.left;
      a2->bottom = v52 + 2 * WindowBordersWithDpiAwareness + v74.bottom - v74.top;
    }
    else
    {
      ExtendRectByWindowMargin(a1, &v74, &v74);
      *a2 = v74;
    }
  }
  else
  {
    v24 = *(_DWORD **)(v17 + 40);
    v67 = *(_DWORD *)((char *)a4 + v12 + 12);
    v69 = *(_DWORD *)((char *)a4 + v12 + 8);
    v25 = v24[7];
    v26 = v25 - v69;
    v27 = v24[8];
    v28 = v27 - v67;
    LODWORD(v75) = *(_DWORD *)((char *)a4 + v12 + 16) - v69;
    v29 = *(_DWORD *)((char *)a4 + v12 + 20) - v67;
    LODWORD(v70) = v24[9] - v25;
    v30 = v24[10] - v27;
    if ( (_DWORD)v70 != (_DWORD)v75 || v30 != v29 )
    {
      v26 += (((int)v70 - (int)v75) * (v71.left - v69) + (int)v75 / v76) / (int)v75;
      v28 += ((v30 - v29) * (top - v67) + v29 / 2) / v29;
    }
    v70 = 0LL;
    a2->left = v26 + v71.left;
    a2->right = right + v26;
    a2->top = top + v28;
    a2->bottom = bottom + v28;
    v31 = *(_DWORD **)(v17 + 40);
    GetWindowExtendedMargin(a1, (struct FRAME_MARGIN *)&v70);
    v32 = a2->right;
    v33 = v31[13];
    left = a2->left;
    if ( v32 > v33 )
    {
      left += v33 + SWORD1(v70) - v32;
      v32 = v33 + SWORD1(v70);
      a2->left = left;
      a2->right = v32;
    }
    v35 = v31[11];
    if ( left < v35 )
    {
      v36 = v35 - (__int16)v70;
      v32 = v36 + v32 - left;
      a2->left = v36;
      a2->right = v32;
    }
    else
    {
      v36 = left;
    }
    v37 = a2->bottom;
    v38 = v31[14];
    if ( v37 > v38 )
    {
      v54 = SHIWORD(v70) - v37;
      a2->right = v32;
      v55 = v38 + v54;
      v37 += v55;
      a2->top += v55;
      a2->bottom = v37;
    }
    v39 = a2->top;
    v40 = v31[12];
    if ( v39 < v40 )
    {
      v64 = SWORD2(v70);
      a2->right = v32;
      v65 = v40 - v64 - v39;
      v37 += v65;
      v39 += v65;
      a2->bottom = v37;
      a2->top = v39;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
    {
      v44 = v31[13];
      v45 = 0;
      if ( v32 - SWORD1(v70) > v44 )
      {
        v32 = SWORD1(v70) + v44;
        v45 = 1;
        a2->right = v32;
      }
      v46 = v31[14];
      if ( v37 - SHIWORD(v70) > v46 )
      {
        v37 = SHIWORD(v70) + v46;
        ++v45;
        a2->bottom = v37;
      }
      if ( v45 == 2 )
      {
        a2->left = v36 + 1;
        a2->right = v32 - 1;
        a2->top = v39 + 1;
        a2->bottom = v37 - 1;
      }
    }
    if ( v73 )
      PhysicalToLogicalDPIRect(a2, a2, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), &NewMonitor);
  }
  return NewMonitor;
}
