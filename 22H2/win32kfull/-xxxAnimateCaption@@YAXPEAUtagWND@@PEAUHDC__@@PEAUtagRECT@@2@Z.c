/*
 * XREFs of ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023E3AC
 * Callers:
 *     xxxDrawAnimatedRects @ 0x1C023EA44 (xxxDrawAnimatedRects.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C0061430 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0063C1C (GetDpiForSystem.c)
 *     NtGdiBitBltInternal @ 0x1C0088600 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00AADE8 (GreCreateCompatibleBitmapInternal.c)
 *     GetWindowBorders @ 0x1C00DCF9C (GetWindowBorders.c)
 *     _WindowFromDC @ 0x1C010059C (_WindowFromDC.c)
 *     xxxDrawCaptionTemp @ 0x1C0158B14 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C023E2CC (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 */

void __fastcall xxxAnimateCaption(struct tagWND *a1, HDC a2, struct tagRECT *a3, struct tagRECT *a4)
{
  __int64 v7; // rcx
  unsigned int DpiForSystem; // eax
  LONG v9; // ebx
  HDC CompatibleDC; // rdi
  LONG top; // ebp
  LONG left; // r15d
  int v13; // r13d
  int v14; // esi
  int WindowBorders; // r14d
  __int64 v16; // rcx
  unsigned int v17; // eax
  int DpiDependentMetric; // eax
  int v19; // edx
  unsigned int v20; // edx
  __int64 ThreadWin32Thread; // rax
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r14
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // r13d
  __int64 i; // rax
  int v30; // r8d
  unsigned int v31; // ecx
  unsigned __int16 v32; // cx
  __int64 v33; // rcx
  __int64 v34; // rcx
  LONG v35; // [rsp+60h] [rbp-C8h]
  int v36; // [rsp+60h] [rbp-C8h]
  LONG v37; // [rsp+64h] [rbp-C4h]
  int v38; // [rsp+64h] [rbp-C4h]
  int v39; // [rsp+68h] [rbp-C0h]
  int v40; // [rsp+6Ch] [rbp-BCh]
  int v41; // [rsp+70h] [rbp-B8h]
  int v42; // [rsp+74h] [rbp-B4h]
  int v44; // [rsp+78h] [rbp-B0h]
  int v46; // [rsp+80h] [rbp-A8h]
  struct tagWND *v47; // [rsp+88h] [rbp-A0h]
  unsigned __int64 v49; // [rsp+90h] [rbp-98h]
  __int64 v50; // [rsp+98h] [rbp-90h]
  __int64 CompatibleBitmapInternal; // [rsp+A0h] [rbp-88h]
  _QWORD v52[3]; // [rsp+A8h] [rbp-80h] BYREF
  struct tagRECT v53; // [rsp+C0h] [rbp-68h] BYREF

  v53.right = 0;
  v52[2] = 0LL;
  v47 = WindowFromDC(a2);
  if ( v47 )
  {
    DpiForSystem = GetDpiForSystem(v7);
    v9 = GetDpiDependentMetric(2LL, DpiForSystem) - 1;
    if ( !gProtocolType && (*(_DWORD *)(gpsi + 2236LL) & 2) == 0 )
    {
      CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)ghdcMem);
      if ( CompatibleDC )
      {
        top = a3->top;
        left = a3->left;
        v13 = a4->right - a4->left;
        v14 = a3->right - a3->left;
        v35 = a4->left;
        v37 = a4->top;
        WindowBorders = GetWindowBorders(
                          *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL),
                          *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL));
        v17 = GetDpiForSystem(v16);
        DpiDependentMetric = GetDpiDependentMetric(2LL, v17);
        v19 = 2 * WindowBorders;
        if ( a3->bottom - top > DpiDependentMetric )
        {
          left += WindowBorders;
          top += WindowBorders;
          v14 -= v19;
        }
        if ( a4->bottom - v37 > DpiDependentMetric )
        {
          v35 += WindowBorders;
          v37 += WindowBorders;
          v13 -= v19;
        }
        v53.left = 0;
        v20 = v13;
        v53.top = v9;
        v53.bottom = 2 * v9;
        if ( v14 > v13 )
          v20 = v14;
        v41 = left;
        v53.right = v20;
        v40 = top;
        v39 = v14;
        CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(
                                     *(HDC *)(gpDispInfo + 56LL),
                                     v20,
                                     2 * v9,
                                     0,
                                     0LL,
                                     0LL);
        v50 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v52[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v52;
        v52[1] = v47;
        HMLockObject(v47);
        if ( gbDisableAlpha || (v22 = 45, ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010) )
          v22 = 13;
        xxxDrawCaptionTemp((__int64)a1, CompatibleDC, &v53, 0LL, 0LL, 0LL, v22);
        if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        EnterRenderBlock();
        UserSessionSwitchLeaveCrit(v23);
        EnterSharedCrit(0LL, 1LL);
        EnterSharedRenderCrit();
        v24 = SaveScreen(v47, 0, 0LL, left, top, v14, v9);
        if ( v24
          || (v25 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v14, v9, a2, left, top, 13369376, 0, 0), v27 = 0LL, v25) )
        {
          v36 = v35 - left;
          v38 = v37 - top;
          v28 = v13 - v14;
          v49 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          NtGdiBitBltInternal(a2, left, top, v14, v9, CompatibleDC, 0, v9, 13369376, 0, 0);
          for ( i = MEMORY[0xFFFFF78000000320]; ; i = MEMORY[0xFFFFF78000000320] )
          {
            v32 = ((i * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v49;
            if ( v32 > 0xFAu )
              break;
            v30 = v32;
            v31 = (int)((unsigned __int64)(274877907LL * (v36 * v32 + 125)) >> 32) >> 4;
            v44 = left + (v31 >> 31) + v31;
            v46 = top + (v38 * v30 + 125) / 250;
            v42 = v14 + (v28 * v30 + 125) / 250;
            UserSleep(1LL);
            if ( v24 )
              SaveScreen(v47, 1u, v24, v41, v40, v39, v9);
            else
              NtGdiBitBltInternal(a2, v41, v40, v39, v9, CompatibleDC, 0, 0, 13369376, 0, 0);
            v41 = v44;
            v40 = v46;
            v39 = v42;
            if ( v24 )
              v24 = SaveScreen(v47, 0, 0LL, v44, v46, v42, v9);
            else
              NtGdiBitBltInternal(CompatibleDC, 0, 0, v42, v9, a2, v44, v46, 13369376, 0, 0);
            NtGdiBitBltInternal(a2, v44, v46, v42, v9, CompatibleDC, 0, v9, 13369376, 0, 0);
          }
          if ( v24 )
            SaveScreen(v47, 1u, v24, v41, v40, v39, v9);
          else
            NtGdiBitBltInternal(a2, v41, v40, v39, v9, CompatibleDC, 0, 0, 13369376, 0, 0);
        }
        LeaveRenderBlock(v26, v27);
        LeaveRenderCrit();
        UserSessionSwitchLeaveCrit(v33);
        EnterCrit(0LL, 1LL);
        ThreadUnlock1(v34);
        GreSelectBitmap(CompatibleDC, v50);
        GreDeleteObject(CompatibleBitmapInternal);
        GreDeleteDC(CompatibleDC);
      }
    }
  }
}
