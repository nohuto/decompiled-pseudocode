void __fastcall xxxAnimateCaption(struct tagWND *a1, __int64 *a2, struct tagRECT *a3, struct tagRECT *a4)
{
  __int64 v8; // rcx
  int DpiForSystem; // eax
  LONG v10; // ebx
  HDC CompatibleDC; // rdi
  LONG left; // ecx
  LONG top; // eax
  LONG v14; // ebp
  LONG v15; // r14d
  int v16; // r15d
  int v17; // esi
  int WindowBorders; // r12d
  __int64 v19; // rcx
  int v20; // eax
  int DpiDependentMetric; // eax
  int v22; // edx
  LONG v23; // edx
  struct tagWND *v24; // r12
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // r15d
  __int64 i; // rax
  int v35; // r8d
  unsigned int v36; // ecx
  unsigned __int16 v37; // cx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned __int64 v42; // [rsp+60h] [rbp-C8h]
  int v43; // [rsp+68h] [rbp-C0h]
  LONG v44; // [rsp+6Ch] [rbp-BCh]
  int v45; // [rsp+6Ch] [rbp-BCh]
  LONG v46; // [rsp+70h] [rbp-B8h]
  int v47; // [rsp+70h] [rbp-B8h]
  unsigned __int64 v48; // [rsp+74h] [rbp-B4h]
  const struct tagWND *v50; // [rsp+80h] [rbp-A8h]
  int v51; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v53; // [rsp+88h] [rbp-A0h]
  unsigned __int64 v55; // [rsp+90h] [rbp-98h]
  __int64 v56; // [rsp+98h] [rbp-90h]
  __int64 CompatibleBitmapInternal; // [rsp+A0h] [rbp-88h]
  __int128 v58; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-70h]
  struct tagRECT v60; // [rsp+C0h] [rbp-68h] BYREF

  v59 = 0LL;
  v60.right = 0;
  v58 = 0LL;
  v50 = WindowFromDC(a2);
  if ( v50 )
  {
    DpiForSystem = GetDpiForSystem(v8);
    v10 = GetDpiDependentMetric(2, DpiForSystem) - 1;
    if ( !gProtocolType && (*(_DWORD *)(gpsi + 2236LL) & 2) == 0 )
    {
      CompatibleDC = (HDC)GreCreateCompatibleDC(ghdcMem);
      if ( CompatibleDC )
      {
        left = a4->left;
        top = a4->top;
        v14 = a3->top;
        v15 = a3->left;
        v16 = a4->right - a4->left;
        v44 = left;
        v17 = a3->right - a3->left;
        v46 = top;
        WindowBorders = GetWindowBorders(
                          *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL),
                          *(unsigned int *)(*((_QWORD *)a1 + 5) + 24LL));
        v20 = GetDpiForSystem(v19);
        DpiDependentMetric = GetDpiDependentMetric(2, v20);
        v22 = 2 * WindowBorders;
        if ( a3->bottom - v14 > DpiDependentMetric )
        {
          v15 += WindowBorders;
          v14 += WindowBorders;
          v17 -= v22;
        }
        if ( a4->bottom - v46 > DpiDependentMetric )
        {
          v44 += WindowBorders;
          v46 += WindowBorders;
          v16 -= v22;
        }
        v60.top = v10;
        v60.left = 0;
        v23 = v16;
        v60.bottom = 2 * v10;
        if ( v17 > v16 )
          v23 = v17;
        v43 = v15;
        v60.right = v23;
        v42 = __PAIR64__(v14, v17);
        CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(
                                     *(_QWORD *)(gpDispInfo + 56LL),
                                     v23,
                                     2 * v10,
                                     0,
                                     0LL,
                                     0LL);
        v24 = v50;
        v56 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
        ThreadLock(v50, &v58);
        if ( gbDisableAlpha || (v25 = 45, ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010) )
          v25 = 13;
        xxxDrawCaptionTemp(a1, CompatibleDC, &v60, 0LL, 0LL, v25);
        EnterRenderBlock();
        UserSessionSwitchLeaveCrit(v26);
        EnterSharedCrit(v28, v27, v29);
        EnterSharedRenderCrit();
        v53 = SaveScreen(v50, 0, 0LL, v15, v14, v17, v10);
        if ( v53
          || (v30 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v17, v10, (__int64)a2, v15, v14, 13369376, 0, 0),
              v32 = 0LL,
              v30) )
        {
          v45 = v44 - v15;
          v47 = v46 - v14;
          v33 = v16 - v17;
          v55 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          NtGdiBitBltInternal((HDC)a2, v15, v14, v17, v10, (__int64)CompatibleDC, 0, v10, 13369376, 0, 0);
          for ( i = MEMORY[0xFFFFF78000000320]; ; i = MEMORY[0xFFFFF78000000320] )
          {
            v37 = ((i * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v55;
            if ( v37 > 0xFAu )
              break;
            v35 = v37;
            v36 = (int)((unsigned __int64)(274877907LL * (v45 * v37 + 125)) >> 32) >> 4;
            v51 = v15 + (v36 >> 31) + v36;
            HIDWORD(v48) = v14 + (v47 * v35 + 125) / 250;
            LODWORD(v48) = v17 + (v33 * v35 + 125) / 250;
            UserSleep(1LL);
            if ( v53 )
            {
              SaveScreen(v24, 1u, v53, v43, SHIDWORD(v42), v42, v10);
              v42 = v48;
              v43 = v51;
              v53 = SaveScreen(v24, 0, 0LL, v51, SHIDWORD(v48), v48, v10);
            }
            else
            {
              NtGdiBitBltInternal((HDC)a2, v43, SHIDWORD(v42), v42, v10, (__int64)CompatibleDC, 0, 0, 13369376, 0, 0);
              v42 = v48;
              v43 = v51;
              NtGdiBitBltInternal(CompatibleDC, 0, 0, v48, v10, (__int64)a2, v51, SHIDWORD(v48), 13369376, 0, 0);
            }
            NtGdiBitBltInternal((HDC)a2, v51, SHIDWORD(v48), v48, v10, (__int64)CompatibleDC, 0, v10, 13369376, 0, 0);
          }
          if ( v53 )
            SaveScreen(v24, 1u, v53, v43, SHIDWORD(v42), v42, v10);
          else
            NtGdiBitBltInternal((HDC)a2, v43, SHIDWORD(v42), v42, v10, (__int64)CompatibleDC, 0, 0, 13369376, 0, 0);
        }
        LeaveRenderBlock(v31, v32);
        LeaveRenderCrit();
        UserSessionSwitchLeaveCrit(v38);
        EnterCrit(1LL, 0LL);
        ThreadUnlock1(v40, v39, v41);
        GreSelectBitmap(CompatibleDC, v56);
        GreDeleteObject(CompatibleBitmapInternal);
        GreDeleteDC(CompatibleDC);
      }
    }
  }
}
