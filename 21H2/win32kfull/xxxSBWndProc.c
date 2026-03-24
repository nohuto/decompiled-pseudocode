/*
 * XREFs of xxxSBWndProc @ 0x1C0246160
 * Callers:
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E3D30 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0034410 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxEndPaint @ 0x1C0046240 (xxxEndPaint.c)
 *     xxxDefWindowProc @ 0x1C0048580 (xxxDefWindowProc.c)
 *     _FChildVisible @ 0x1C004BAE4 (_FChildVisible.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     GetDpiDependentMetric @ 0x1C00614D0 (GetDpiDependentMetric.c)
 *     xxxGetScrollBarInfo @ 0x1C0062A90 (xxxGetScrollBarInfo.c)
 *     GetDpiForSystem @ 0x1C0063CBC (GetDpiForSystem.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     xxxBeginPaint @ 0x1C007D8F4 (xxxBeginPaint.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00F6430 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     xxxEnableScrollBar @ 0x1C00F6700 (xxxEnableScrollBar.c)
 *     xxxMoveWindow @ 0x1C010D7AC (xxxMoveWindow.c)
 *     zzzDestroyCaret @ 0x1C0113CB0 (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C0113DC4 (xxxCreateCaret.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0157FC4 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     DrawThumb2 @ 0x1C0158244 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C01583CC (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     xxxValidateClassAndSize @ 0x1C016824C (xxxValidateClassAndSize.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ConstrainWindowSIZERECT @ 0x1C01D0AB0 (ConstrainWindowSIZERECT.c)
 *     zzzHideCaret @ 0x1C02418BC (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C02418E4 (zzzShowCaret.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0244A80 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0244C5C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C0245470 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 *     DrawSize @ 0x1C02454C0 (DrawSize.c)
 *     SBCtlSetup @ 0x1C02455FC (SBCtlSetup.c)
 *     _SBGetParms @ 0x1C0245644 (_SBGetParms.c)
 *     xxxDoScrollMenu @ 0x1C02456CC (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0245C00 (xxxSBTrackInit.c)
 *     _ClientToScreen @ 0x1C025D754 (_ClientToScreen.c)
 */

__int64 __fastcall xxxSBWndProc(struct tagWND *a1, unsigned int a2, __int64 a3, struct tagSCROLLINFO *a4)
{
  int v4; // edi
  unsigned __int64 v9; // r15
  __int16 v10; // si
  __int64 v11; // r8
  __int64 result; // rax
  _QWORD *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int8 v16; // r11
  int v17; // r9d
  bool v18; // zf
  int v19; // r8d
  __int64 v20; // r10
  int v21; // edx
  int v22; // r9d
  unsigned int v23; // r15d
  int v24; // r13d
  int v25; // r10d
  int v26; // r8d
  int v27; // ecx
  int v28; // eax
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  __int64 v31; // rcx
  unsigned int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // eax
  int v38; // eax
  unsigned int v39; // eax
  int v40; // eax
  unsigned int v41; // eax
  int v42; // eax
  unsigned int v43; // ebx
  __int64 v44; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v46; // rcx
  struct tagWND *v47; // r9
  unsigned int v48; // eax
  HDC DCEx; // rsi
  HBRUSH ColorObjects; // rbx
  __int64 v51; // rdi
  HDC v52; // r12
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // ebx
  __int64 v57; // r15
  __int64 v58; // rbx
  __int64 v59; // rax
  char v60; // r12
  char v61; // r13
  __int64 v62; // rax
  unsigned __int64 v63; // rcx
  unsigned __int16 v64; // r8
  int v65; // [rsp+50h] [rbp-B0h] BYREF
  int v66; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v67[2]; // [rsp+58h] [rbp-A8h]
  int v68; // [rsp+60h] [rbp-A0h]
  unsigned int v69; // [rsp+64h] [rbp-9Ch]
  __int64 v70; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v71; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v72; // [rsp+74h] [rbp-8Ch]
  unsigned int v73; // [rsp+78h] [rbp-88h]
  int v74; // [rsp+7Ch] [rbp-84h]
  int v75; // [rsp+80h] [rbp-80h]
  __int64 v76; // [rsp+88h] [rbp-78h] BYREF
  __int128 v77; // [rsp+90h] [rbp-70h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-60h]
  __int128 v79; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-48h]
  int v81; // [rsp+C0h] [rbp-40h]
  _QWORD v82[10]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = 0;
  *(_QWORD *)v67 = a3;
  v66 = 0;
  v70 = 0LL;
  memset(v82, 0, 0x48uLL);
  v76 = 0LL;
  v78 = 0LL;
  v80 = 0LL;
  v81 = 0;
  v9 = a3;
  v77 = 0LL;
  v79 = 0LL;
  if ( *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    v65 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 2806);
  }
  v10 = 1;
  if ( !(unsigned int)xxxValidateClassAndSize((__int64)a1, a2, a3, (__int64)a4, 666, 1, &v76) )
    return v76;
  v13 = (_QWORD *)*((_QWORD *)a1 + 35);
  v14 = 3LL;
  *v13 = a1;
  v15 = *((_QWORD *)a1 + 5);
  v16 = *(_BYTE *)(v15 + 28);
  v75 = v16;
  v17 = v16 & 0x18;
  v68 = v17;
  if ( a2 <= 0xE2 )
  {
    if ( a2 != 226 )
    {
      if ( a2 <= 0x14 )
      {
        if ( a2 != 20 )
        {
          if ( a2 != 1 )
          {
            switch ( a2 )
            {
              case 5u:
                if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) != a1 )
                  return 0LL;
                zzzDestroyCaret();
                break;
              case 7u:
                break;
              case 8u:
                zzzDestroyCaret();
                return 0LL;
              case 0xAu:
                _InterlockedAdd(&glSendMessage, 1u);
                return xxxSendTransformableMessageTimeout(
                         (unsigned __int64)a1,
                         0xE4u,
                         -(__int64)(*(_QWORD *)v67 == 0LL) & 3,
                         0LL,
                         0,
                         0,
                         0LL,
                         1,
                         1);
              default:
                v18 = a2 == 15;
                goto LABEL_113;
            }
            SBCtlSetup((__int64)v13);
            v19 = *((_DWORD *)v13 + 2);
            v20 = *v13;
            if ( v19 )
              v21 = *(_DWORD *)(*(_QWORD *)(v20 + 40) + 96LL) - *(_DWORD *)(*(_QWORD *)(v20 + 40) + 88LL);
            else
              v21 = *((_DWORD *)v13 + 12);
            if ( v19 )
              v22 = *((_DWORD *)v13 + 12);
            else
              v22 = *(_DWORD *)(*(_QWORD *)(v20 + 40) + 100LL) - *(_DWORD *)(*(_QWORD *)(v20 + 40) + 92LL);
            xxxCreateCaret(*v13, (HSURF)1, v21 - 4, v22 - 4);
            zzzSetSBCaretPos((struct tagSBWND *)v13);
            zzzShowCaret((struct tagWND *)*v13);
            return 0LL;
          }
          if ( !a4 )
          {
            UserSetLastError(87LL, v15, v11);
            return 0LL;
          }
          v23 = *((_DWORD *)a4 + 11);
          LOBYTE(v14) = *(_BYTE *)(v15 + 31) & 0xC0;
          v24 = *((_DWORD *)a4 + 10);
          v25 = *((_DWORD *)a4 + 9);
          v26 = *((_DWORD *)a4 + 8);
          if ( v23 == 0x80000000 )
          {
            if ( (_BYTE)v14 )
              v23 = 0;
            else
              v23 = *(_DWORD *)(v15 + 88);
          }
          v69 = v23;
          if ( v24 == 0x80000000 )
          {
            if ( (_BYTE)v14 )
              v24 = 0;
            else
              v24 = *(_DWORD *)(v15 + 92);
          }
          v68 = v24;
          if ( v25 == 0x80000000 )
          {
            if ( (_BYTE)v14 )
              v25 = 0;
            else
              v25 = *(_DWORD *)(v15 + 96) - *(_DWORD *)(v15 + 88);
          }
          if ( v26 == 0x80000000 )
          {
            if ( (_BYTE)v14 )
              v26 = 0;
            else
              v26 = *(_DWORD *)(v15 + 100) - *(_DWORD *)(v15 + 92);
          }
          v18 = (*(_BYTE *)(v15 + 21) & 2) == 0;
          v66 = v23 + v25;
          v65 = v26 + v24;
          if ( v18 )
          {
            *(_DWORD *)(v15 + 28) &= 0xFFCFFFFF;
            a1 = (struct tagWND *)*v13;
          }
          if ( (v16 & 0x18) == 0 )
          {
            v27 = *(_DWORD *)a4;
            a1 = (struct tagWND *)*v13;
            v28 = (unsigned __int16)*(_DWORD *)a4;
            *((_DWORD *)v13 + 4) = v28;
            *((_DWORD *)v13 + 7) = v28;
            *((_DWORD *)v13 + 5) = HIWORD(v27);
            v14 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 28LL) & 1;
            *((_DWORD *)v13 + 6) = 0;
            *((_DWORD *)v13 + 2) = v14;
          }
          if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL) & 0x8000000) != 0 )
            *((_DWORD *)v13 + 3) = 3;
          if ( (v16 & 6) == 0 )
            return 0LL;
          if ( (v16 & 0x18) != 0 )
          {
            DpiForSystem = GetDpiForSystem(v14);
            DpiDependentMetric = GetDpiDependentMetric(0LL, DpiForSystem);
            v32 = GetDpiForSystem(v31);
            v33 = GetDpiDependentMetric(1LL, v32);
            v24 = v65 - v33;
            if ( (v75 & 4) == 0 )
              v24 = v68;
            v23 = v66 - DpiDependentMetric;
            if ( (v75 & 4) == 0 )
              v23 = v69;
            v34 = v24 + v33;
            v35 = v23 + DpiDependentMetric;
            goto LABEL_64;
          }
          if ( (v16 & 1) != 0 )
          {
            if ( (v16 & 2) != 0 )
            {
              v36 = GetDpiForSystem(v14);
              v35 = v23 + GetDpiDependentMetric(0LL, v36);
            }
            else
            {
              v37 = GetDpiForSystem(v14);
              v38 = GetDpiDependentMetric(0LL, v37);
              v35 = v66;
              v23 = v66 - v38;
            }
          }
          else
          {
            if ( (v16 & 2) != 0 )
            {
              v39 = GetDpiForSystem(v14);
              v40 = GetDpiDependentMetric(1LL, v39);
              v35 = v66;
              v34 = v24 + v40;
LABEL_64:
              v71 = v23;
              v73 = v35 - v23;
              v72 = v24;
              v74 = v34 - v24;
              ConstrainWindowSIZERECT((int *)&v71);
              xxxMoveWindow((struct tagWND *)*v13, v71, v72, v73, v74, 0);
              return 0LL;
            }
            v41 = GetDpiForSystem(v14);
            v42 = GetDpiDependentMetric(1LL, v41);
            v35 = v66;
            v24 = v65 - v42;
          }
          v34 = v65;
          goto LABEL_64;
        }
        return 1LL;
      }
      if ( a2 != 123 )
      {
        if ( a2 == 132 )
        {
          if ( (v16 & 0x10) != 0 )
            return (((unsigned __int8)~*(_BYTE *)(v15 + 26) ^ (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 25LL)) >> 6) & 1 | 0x10;
          return xxxDefWindowProc(a1, a2, *(__int64 *)v67, (__int64)a4);
        }
        if ( a2 == 135 )
          return 1LL;
        if ( a2 != 224 )
        {
          if ( a2 == 225 )
            return *((int *)v13 + 7);
          return xxxDefWindowProc(a1, a2, *(__int64 *)v67, (__int64)a4);
        }
        v43 = (unsigned int)a4;
        HIDWORD(v80) = v67[0];
        DWORD1(v79) = 4100;
        goto LABEL_92;
      }
      v44 = *((_QWORD *)a1 + 13);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v77 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v77;
      *((_QWORD *)&v77 + 1) = v44;
      if ( v44 )
        HMLockObject(v44);
      xxxDoScrollMenu(
        *(struct tagWND **)(*v13 + 104LL),
        (struct tagWND *)*v13,
        *((_DWORD *)v13 + 2),
        (unsigned __int64)a4);
LABEL_79:
      ThreadUnlock1(v46);
      return 0LL;
    }
    v43 = 0;
LABEL_91:
    *((_QWORD *)&v79 + 1) = __PAIR64__((unsigned int)a4, v67[0]);
    DWORD1(v79) = 4097;
LABEL_92:
    a4 = (struct tagSCROLLINFO *)&v79;
    LODWORD(v79) = 28;
    goto LABEL_93;
  }
  if ( a2 > 0xEB )
  {
    switch ( a2 )
    {
      case 0x100u:
        switch ( v9 )
        {
          case '!':
            v10 = 2;
            break;
          case '"':
            v10 = 3;
            break;
          case '#':
            v10 = 7;
            break;
          case '$':
            v10 = 6;
            break;
          default:
            if ( v9 <= 0x24 )
              return 0LL;
            if ( v9 <= 0x26 )
            {
              v10 = 0;
            }
            else if ( v9 > 0x28 )
            {
              return 0LL;
            }
            break;
        }
        v64 = v10;
        break;
      case 0x101u:
        if ( v9 - 33 > 7 )
          return 0LL;
        v64 = 8;
        break;
      case 0x201u:
        goto LABEL_126;
      case 0x203u:
        v57 = 61488LL;
        if ( (v16 & 0x18) == 0 )
        {
LABEL_126:
          if ( (v16 & 0x18) == 0 )
          {
            if ( (*(_BYTE *)(v15 + 30) & 1) != 0 )
            {
              xxxSetFocus(a1);
              a1 = (struct tagWND *)*v13;
            }
            zzzHideCaret(a1);
            SBCtlSetup((__int64)v13);
            LOBYTE(v4) = (_GetKeyState(16LL) & 0x8000u) != 0LL;
            xxxSBTrackInit((struct tagWND *)*v13, (unsigned __int64)a4, 0, v4);
            return 0LL;
          }
          v57 = 61440LL;
        }
        LODWORD(v70) = (__int16)a4;
        HIDWORD(v70) = SWORD1(a4);
        ClientToScreen(a1, &v70);
        v58 = *((_QWORD *)a1 + 13);
        *(_QWORD *)v67 = (WORD2(v70) << 16) | (unsigned __int16)v70;
        v59 = *(_QWORD *)(v58 + 40);
        v60 = *(_BYTE *)(v59 + 26) & 0x40;
        v61 = *(_BYTE *)(v59 + 25) & 0x40;
        v62 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v77 = *(_QWORD *)(v62 + 416);
        *(_QWORD *)(v62 + 416) = &v77;
        *((_QWORD *)&v77 + 1) = v58;
        if ( v58 )
          HMLockObject(v58);
        v63 = *(_QWORD *)(*v13 + 104LL);
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(
          v63,
          0x112u,
          v57 | (((v60 == 0) ^ (unsigned __int64)(v61 != 0)) + 7),
          *(struct _LARGE_STRING **)v67,
          0,
          0,
          0LL,
          1,
          1);
        goto LABEL_79;
      default:
        v18 = a2 == 792;
LABEL_113:
        if ( !v18 )
          return xxxDefWindowProc(a1, a2, *(__int64 *)v67, (__int64)a4);
        v52 = (HDC)v9;
        if ( !v9 )
        {
          v53 = xxxBeginPaint(a1, (__int64)v82);
          v17 = v68;
          v52 = (HDC)v53;
        }
        if ( v17 )
        {
          v54 = *v13;
          v55 = *(_QWORD *)(*v13 + 40LL);
          v56 = *(_BYTE *)(v55 + 30) & 4;
          if ( (*(_BYTE *)(v55 + 30) & 4) == 0 )
          {
            SetOrClrWF(1, v54, 0xE04u, 1);
            v54 = *v13;
          }
          DrawSize(v54, v52, 0, 0);
          if ( !v56 )
            SetOrClrWF(0, *v13, 0xE04u, 1);
        }
        else
        {
          SBCtlSetup((__int64)v13);
          xxxDrawSB2(
            (struct tagWND *)*v13,
            (struct tagSBCALC *)(v13 + 2),
            v52,
            *((_DWORD *)v13 + 2),
            *((_DWORD *)v13 + 3));
        }
        if ( !v9 )
          xxxEndPaint((struct tagWND *)*v13, v82);
        return 0LL;
    }
    xxxDoScroll((struct _LARGE_STRING **)a1, *((struct tagWND **)a1 + 13), v64, 0, *((_DWORD *)v13 + 2));
    return 0LL;
  }
  switch ( a2 )
  {
    case 0xEBu:
      LODWORD(result) = xxxGetScrollBarInfo((unsigned __int64)a1, -4, (__int64)a4);
      return (int)result;
    case 0xE3u:
      **(_DWORD **)v67 = *((_DWORD *)v13 + 4);
      *(_DWORD *)a4 = *((_DWORD *)v13 + 5);
      return *((unsigned __int16 *)v13 + 8) | ((unsigned __int64)*((unsigned __int16 *)v13 + 10) << 16);
    case 0xE4u:
      LODWORD(result) = xxxEnableSBCtlArrows(a1, v67[0]);
      return (int)result;
    case 0xE6u:
      v43 = 1;
      goto LABEL_91;
  }
  if ( a2 != 233 )
  {
    if ( a2 != 234 )
      return xxxDefWindowProc(a1, a2, *(__int64 *)v67, (__int64)a4);
    LODWORD(result) = SBGetParms((__int64)a1, 2, (_DWORD *)v13 + 4, a4);
    return (int)result;
  }
  v43 = v67[0];
LABEL_93:
  v65 = 1;
  if ( (unsigned int)SBSetParms((struct tagSBDATA *)(v13 + 2), a4, &v65, &v66) )
    xxxWindowEvent(0x800Eu, (struct tagWND *)*v13, -4, 0, 1u);
  if ( v43 )
  {
    zzzHideCaret((struct tagWND *)*v13);
    SBCtlSetup((__int64)v13);
    zzzSetSBCaretPos((struct tagSBWND *)v13);
    if ( (unsigned int)FChildVisible(*v13) )
    {
      if ( v65 || (*((_DWORD *)a4 + 1) & 8) == 0 )
        v48 = 0;
      else
        v48 = 3;
      xxxEnableScrollBar((unsigned __int64)v47, 2u, v48);
      DCEx = (HDC)_GetDCEx(*v13, 0LL, 65537LL);
      ColorObjects = (HBRUSH)xxxGetColorObjects((struct tagWND *)*v13, (__int64)DCEx);
      v51 = GreSelectBrush(DCEx, ColorObjects);
      DrawThumb2(*v13, (_DWORD *)v13 + 4, DCEx, ColorObjects, *((_DWORD *)v13 + 2), *((_DWORD *)v13 + 3));
      GreSelectBrush(DCEx, v51);
      _ReleaseDC(DCEx);
      v47 = (struct tagWND *)*v13;
    }
    zzzShowCaret(v47);
  }
  return v66;
}
