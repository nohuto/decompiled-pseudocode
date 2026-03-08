/*
 * XREFs of xxxSBWndProc @ 0x1C022D770
 * Callers:
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01B9B00 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     zzzDestroyCaret @ 0x1C0005EAC (zzzDestroyCaret.c)
 *     zzzHideCaret @ 0x1C0006078 (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C0006108 (zzzShowCaret.c)
 *     xxxCreateCaret @ 0x1C000F3B4 (xxxCreateCaret.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0013CD4 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0013EE8 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     DrawThumb2 @ 0x1C0013FB8 (DrawThumb2.c)
 *     xxxMoveWindow @ 0x1C0025A90 (xxxMoveWindow.c)
 *     _FChildVisible @ 0x1C002B72C (_FChildVisible.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C009A3E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00A62D8 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     xxxDefWindowProc @ 0x1C00A66F0 (xxxDefWindowProc.c)
 *     xxxEnableScrollBar @ 0x1C00D4CD0 (xxxEnableScrollBar.c)
 *     xxxGetScrollBarInfo @ 0x1C00D9CEC (xxxGetScrollBarInfo.c)
 *     _SBGetParms @ 0x1C00DB920 (_SBGetParms.c)
 *     xxxValidateClassAndSize @ 0x1C00FA3E4 (xxxValidateClassAndSize.c)
 *     xxxBeginPaint @ 0x1C00FD4C0 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x1C00FE504 (xxxEndPaint.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ConstrainWindowSIZERECT @ 0x1C01A7538 (ConstrainWindowSIZERECT.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C022C0E0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C022C2A0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C022CA90 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 *     DrawSize @ 0x1C022CAE8 (DrawSize.c)
 *     SBCtlSetup @ 0x1C022CC24 (SBCtlSetup.c)
 *     xxxDoScrollMenu @ 0x1C022CC6C (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C022D18C (xxxSBTrackInit.c)
 *     _ClientToScreen @ 0x1C024E7D0 (_ClientToScreen.c)
 */

__int64 __fastcall xxxSBWndProc(struct tagWND *a1, unsigned int a2, HWND a3, struct tagSCROLLINFO *a4)
{
  int v4; // esi
  unsigned int v9; // r15d
  __int64 v10; // r8
  __int64 result; // rax
  _QWORD *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int8 v15; // r11
  __int64 v16; // r9
  bool v17; // zf
  int v18; // r9d
  __int64 v19; // r10
  int v20; // r8d
  int v21; // r8d
  int v22; // r9d
  unsigned int v23; // r13d
  int v24; // ebx
  int v25; // r10d
  int v26; // r8d
  int v27; // ecx
  int v28; // eax
  int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // edi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  struct tagWND *v48; // r9
  unsigned int v49; // eax
  HDC DCEx; // rsi
  HBRUSH ColorObjects; // rbx
  __int64 v52; // rdi
  HDC v53; // r12
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // edi
  __int64 v57; // r13
  __int64 v58; // rcx
  __int64 v59; // rax
  char v60; // di
  char v61; // bl
  struct tagWND *v62; // r10
  int v63; // ebx
  int v64; // ebx
  int v65; // ebx
  int v66; // ebx
  int v67; // ebx
  int v68; // ebx
  __int64 v69; // r8
  int v70; // ebx
  int v71; // ebx
  int v72; // ebx
  int v73; // ebx
  int v74; // ebx
  int v75; // ebx
  int v76; // [rsp+50h] [rbp-B0h] BYREF
  int v77; // [rsp+54h] [rbp-ACh] BYREF
  int v78; // [rsp+58h] [rbp-A8h]
  unsigned int v79; // [rsp+5Ch] [rbp-A4h]
  __int64 v80; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v81; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v82; // [rsp+70h] [rbp-90h]
  int v83; // [rsp+74h] [rbp-8Ch]
  int v84; // [rsp+78h] [rbp-88h]
  __int128 v85; // [rsp+80h] [rbp-80h] BYREF
  __int64 v86; // [rsp+90h] [rbp-70h]
  __int128 v87; // [rsp+98h] [rbp-68h] BYREF
  __int64 v88; // [rsp+A8h] [rbp-58h]
  int v89; // [rsp+B0h] [rbp-50h]
  __int64 v90[10]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0;
  v77 = 0;
  v80 = 0LL;
  memset_0(v90, 0, 0x48uLL);
  v81 = 0LL;
  v86 = 0LL;
  v88 = 0LL;
  v89 = 0;
  v85 = 0LL;
  v87 = 0LL;
  if ( *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    v76 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 2781);
  }
  v9 = 1;
  if ( !(unsigned int)xxxValidateClassAndSize((__int64)a1, a2, a3, (__int64)a4, 666, 1, &v81) )
    return v81;
  v12 = (_QWORD *)*((_QWORD *)a1 + 35);
  v13 = 3LL;
  *v12 = a1;
  v14 = *((_QWORD *)a1 + 5);
  v15 = *(_BYTE *)(v14 + 28);
  v84 = v15;
  v16 = v15 & 0x18;
  v78 = v15 & 0x18;
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
                if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) != a1 )
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
                return xxxSendTransformableMessageTimeout(a1, 0xE4u, -(__int64)(a3 == 0LL) & 3, 0LL, 0, 0, 0LL, 1, 1);
              default:
                v17 = a2 == 15;
                goto LABEL_111;
            }
            SBCtlSetup((__int64)v12);
            v18 = *((_DWORD *)v12 + 2);
            v19 = *v12;
            if ( v18 )
              v20 = *(_DWORD *)(*(_QWORD *)(v19 + 40) + 96LL) - *(_DWORD *)(*(_QWORD *)(v19 + 40) + 88LL);
            else
              v20 = *((_DWORD *)v12 + 12);
            v21 = v20 - 4;
            if ( v18 )
              v22 = *((_DWORD *)v12 + 12);
            else
              v22 = *(_DWORD *)(*(_QWORD *)(v19 + 40) + 100LL) - *(_DWORD *)(*(_QWORD *)(v19 + 40) + 92LL);
            xxxCreateCaret(*v12, 1uLL, v21, v22 - 4);
            zzzSetSBCaretPos((struct tagSBWND *)v12);
            zzzShowCaret((struct tagWND *)*v12);
            return 0LL;
          }
          if ( !a4 )
          {
            UserSetLastError(87);
            return 0LL;
          }
          v23 = *((_DWORD *)a4 + 11);
          LOBYTE(v13) = *(_BYTE *)(v14 + 31) & 0xC0;
          v24 = *((_DWORD *)a4 + 10);
          v25 = *((_DWORD *)a4 + 9);
          v26 = *((_DWORD *)a4 + 8);
          if ( v23 == 0x80000000 )
          {
            if ( (_BYTE)v13 )
              v23 = 0;
            else
              v23 = *(_DWORD *)(v14 + 88);
          }
          v79 = v23;
          if ( v24 == 0x80000000 )
          {
            if ( (_BYTE)v13 )
              v24 = 0;
            else
              v24 = *(_DWORD *)(v14 + 92);
          }
          v78 = v24;
          if ( v25 == 0x80000000 )
          {
            if ( (_BYTE)v13 )
              v25 = 0;
            else
              v25 = *(_DWORD *)(v14 + 96) - *(_DWORD *)(v14 + 88);
          }
          if ( v26 == 0x80000000 )
          {
            if ( (_BYTE)v13 )
              v26 = 0;
            else
              v26 = *(_DWORD *)(v14 + 100) - *(_DWORD *)(v14 + 92);
          }
          v17 = (*(_BYTE *)(v14 + 21) & 2) == 0;
          v77 = v25 + v23;
          v76 = v24 + v26;
          if ( v17 )
          {
            *(_DWORD *)(v14 + 28) &= 0xFFCFFFFF;
            a1 = (struct tagWND *)*v12;
          }
          if ( (v15 & 0x18) == 0 )
          {
            v27 = *(_DWORD *)a4;
            a1 = (struct tagWND *)*v12;
            v28 = (unsigned __int16)*(_DWORD *)a4;
            *((_DWORD *)v12 + 4) = v28;
            *((_DWORD *)v12 + 7) = v28;
            *((_DWORD *)v12 + 5) = HIWORD(v27);
            v13 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 28LL) & 1;
            *((_DWORD *)v12 + 6) = 0;
            *((_DWORD *)v12 + 2) = v13;
          }
          if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL) & 0x8000000) != 0 )
            *((_DWORD *)v12 + 3) = 3;
          if ( (v15 & 6) == 0 )
            return 0LL;
          if ( (v15 & 0x18) != 0 )
          {
            DpiForSystem = GetDpiForSystem(v13);
            DpiDependentMetric = GetDpiDependentMetric(0, DpiForSystem);
            v32 = GetDpiForSystem(v31);
            v33 = GetDpiDependentMetric(1, v32);
            v34 = v76 - v33;
            if ( (v84 & 4) == 0 )
              v34 = v78;
            v23 = v77 - DpiDependentMetric;
            v78 = v34;
            if ( (v84 & 4) == 0 )
              v23 = v79;
            v35 = DpiDependentMetric + v23;
            v24 = v78;
            v36 = v78 + v33;
            goto LABEL_64;
          }
          if ( (v15 & 1) != 0 )
          {
            if ( (v15 & 2) != 0 )
            {
              v37 = GetDpiForSystem(v13);
              v35 = GetDpiDependentMetric(0, v37) + v23;
            }
            else
            {
              v38 = GetDpiForSystem(v13);
              v39 = GetDpiDependentMetric(0, v38);
              v35 = v77;
              v23 = v77 - v39;
            }
          }
          else
          {
            if ( (v15 & 2) != 0 )
            {
              v40 = GetDpiForSystem(v13);
              v41 = GetDpiDependentMetric(1, v40);
              v35 = v77;
              v36 = v24 + v41;
LABEL_64:
              v81 = __PAIR64__(v24, v23);
              v82 = v35 - v23;
              v83 = v36 - v24;
              ConstrainWindowSIZERECT((int *)&v81);
              xxxMoveWindow((struct tagWND *)*v12, (unsigned int)v81, HIDWORD(v81), v82, v83, 0);
              return 0LL;
            }
            v42 = GetDpiForSystem(v13);
            v43 = GetDpiDependentMetric(1, v42);
            v35 = v77;
            v24 = v76 - v43;
          }
          v36 = v76;
          goto LABEL_64;
        }
        return 1LL;
      }
      if ( a2 != 123 )
      {
        if ( a2 == 132 )
        {
          if ( (v15 & 0x10) != 0 )
            return (((*(_BYTE *)(v14 + 26) ^ *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 25LL)) & 0x40 ^ 0x40uLL) >> 6) | 0x10;
          return xxxDefWindowProc(a1, a2, a3, (__int64)a4);
        }
        if ( a2 == 135 )
          return 1LL;
        if ( a2 != 224 )
        {
          if ( a2 == 225 )
            return *((int *)v12 + 7);
          return xxxDefWindowProc(a1, a2, a3, (__int64)a4);
        }
        v44 = (int)a4;
        DWORD1(v87) = 4100;
        HIDWORD(v88) = (_DWORD)a3;
        goto LABEL_90;
      }
      ThreadLock(*((_QWORD *)a1 + 13), &v85);
      xxxDoScrollMenu(*(struct tagWND **)(*v12 + 104LL), (struct tagWND *)*v12, *((_DWORD *)v12 + 2), (int)a4);
LABEL_77:
      ThreadUnlock1(v46, v45, v47);
      return 0LL;
    }
    v44 = 0;
LABEL_89:
    *((_QWORD *)&v87 + 1) = __PAIR64__((unsigned int)a4, (unsigned int)a3);
    DWORD1(v87) = 4097;
LABEL_90:
    a4 = (struct tagSCROLLINFO *)&v87;
    LODWORD(v87) = 28;
    goto LABEL_91;
  }
  if ( a2 > 0xEB )
  {
    switch ( a2 )
    {
      case 0x100u:
        if ( (unsigned __int64)a3 > 0x28 )
          return 0LL;
        v70 = (_DWORD)a3 - 33;
        if ( v70 )
        {
          v71 = v70 - 1;
          if ( v71 )
          {
            v72 = v71 - 1;
            if ( v72 )
            {
              v73 = v72 - 1;
              if ( v73 )
              {
                v74 = v73 - 1;
                if ( v74 && (v75 = v74 - 1) != 0 )
                {
                  if ( (unsigned int)(v75 - 1) > 1 )
                    return 0LL;
                }
                else
                {
                  v9 = 0;
                }
              }
              else
              {
                v9 = 6;
              }
            }
            else
            {
              v9 = 7;
            }
          }
          else
          {
            v9 = 3;
          }
        }
        else
        {
          v9 = 2;
        }
        v69 = v9;
        break;
      case 0x101u:
        if ( (unsigned __int64)a3 > 0x28 )
          return 0LL;
        v63 = (_DWORD)a3 - 33;
        if ( v63 )
        {
          v64 = v63 - 1;
          if ( v64 )
          {
            v65 = v64 - 1;
            if ( v65 )
            {
              v66 = v65 - 1;
              if ( v66 )
              {
                v67 = v66 - 1;
                if ( v67 )
                {
                  v68 = v67 - 1;
                  if ( v68 )
                  {
                    if ( (unsigned int)(v68 - 1) > 1 )
                      return 0LL;
                  }
                }
              }
            }
          }
        }
        v69 = 8LL;
        break;
      case 0x201u:
        goto LABEL_124;
      case 0x203u:
        v57 = 61488LL;
        if ( (v15 & 0x18) == 0 )
        {
LABEL_124:
          if ( (v15 & 0x18) == 0 )
          {
            if ( (*(_BYTE *)(v14 + 30) & 1) != 0 )
              xxxSetFocus(a1, (PDEVICE_OBJECT)v14, v10);
            zzzHideCaret((struct tagWND *)*v12);
            SBCtlSetup((__int64)v12);
            LOBYTE(v4) = (_GetKeyState(16LL) & 0x8000u) != 0LL;
            xxxSBTrackInit((struct tagWND *)*v12, (__int64)a4, 0, v4);
            return 0LL;
          }
          v57 = 61440LL;
        }
        LODWORD(v80) = (__int16)a4;
        HIDWORD(v80) = SWORD1(a4);
        ClientToScreen(a1, &v80, v10, v16);
        v58 = *((_QWORD *)a1 + 13);
        v59 = *(_QWORD *)(v58 + 40);
        v60 = *(_BYTE *)(v59 + 26);
        v61 = *(_BYTE *)(v59 + 25);
        ThreadLock(v58, &v85);
        v62 = *(struct tagWND **)(*v12 + 104LL);
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(
          v62,
          0x112u,
          v57 | ((((v60 & 0x40) == 0) ^ (unsigned __int64)((v61 & 0x40) != 0)) + 7),
          (__int128 *)((unsigned __int16)v80 | (WORD2(v80) << 16)),
          0,
          0,
          0LL,
          1,
          1);
        goto LABEL_77;
      default:
        v17 = a2 == 792;
LABEL_111:
        if ( !v17 )
          return xxxDefWindowProc(a1, a2, a3, (__int64)a4);
        v53 = (HDC)a3;
        if ( !a3 )
        {
          v54 = xxxBeginPaint(a1, v90);
          LODWORD(v16) = v78;
          v53 = (HDC)v54;
        }
        if ( (_DWORD)v16 )
        {
          v55 = *(_QWORD *)(*v12 + 40LL);
          v56 = *(_BYTE *)(v55 + 30) & 4;
          if ( (*(_BYTE *)(v55 + 30) & 4) == 0 )
            SetOrClrWF(1, (__int64 *)*v12, 0xE04u, 1);
          DrawSize(*v12, v53, 0, 0);
          if ( !v56 )
            SetOrClrWF(0, (__int64 *)*v12, 0xE04u, 1);
        }
        else
        {
          SBCtlSetup((__int64)v12);
          xxxDrawSB2(
            (struct tagWND *)*v12,
            (struct tagSBCALC *)(v12 + 2),
            v53,
            *((_DWORD *)v12 + 2),
            *((_DWORD *)v12 + 3));
        }
        if ( !a3 )
          xxxEndPaint((__int64 *)*v12, v90);
        return 0LL;
    }
    xxxDoScroll(a1, *((struct tagWND **)a1 + 13), v69, 0LL, *((_DWORD *)v12 + 2));
    return 0LL;
  }
  switch ( a2 )
  {
    case 0xEBu:
      LODWORD(result) = xxxGetScrollBarInfo(a1, -4, (__int64)a4);
      return (int)result;
    case 0xE3u:
      *(_DWORD *)a3 = (struct HWND__)v12[2];
      *(_DWORD *)a4 = *((_DWORD *)v12 + 5);
      return *((unsigned __int16 *)v12 + 8) | ((unsigned __int64)*((unsigned __int16 *)v12 + 10) << 16);
    case 0xE4u:
      LODWORD(result) = xxxEnableSBCtlArrows(a1, (int)a3);
      return (int)result;
    case 0xE6u:
      v44 = 1;
      goto LABEL_89;
  }
  if ( a2 != 233 )
  {
    if ( a2 != 234 )
      return xxxDefWindowProc(a1, a2, a3, (__int64)a4);
    LODWORD(result) = SBGetParms((__int64)a1, 2, (_DWORD *)v12 + 4, a4);
    return (int)result;
  }
  v44 = (int)a3;
LABEL_91:
  v76 = 1;
  if ( (unsigned int)SBSetParms((struct tagSBDATA *)(v12 + 2), a4, &v76, &v77) )
    xxxWindowEvent(0x800Eu, (struct tagWND *)*v12, -4, 0, 1);
  if ( v44 )
  {
    zzzHideCaret((struct tagWND *)*v12);
    SBCtlSetup((__int64)v12);
    zzzSetSBCaretPos((struct tagSBWND *)v12);
    if ( (unsigned int)FChildVisible(*v12) )
    {
      if ( v76 || (*((_DWORD *)a4 + 1) & 8) == 0 )
        v49 = 0;
      else
        v49 = 3;
      xxxEnableScrollBar(v48, 2u, v49);
      DCEx = (HDC)_GetDCEx(*v12, 0LL, 65537LL);
      ColorObjects = (HBRUSH)xxxGetColorObjects((struct tagWND *)*v12, (HWND)DCEx);
      v52 = GreSelectBrush(DCEx, ColorObjects);
      DrawThumb2(*v12, (_DWORD *)v12 + 4, DCEx, ColorObjects, *((_DWORD *)v12 + 2), *((_DWORD *)v12 + 3));
      GreSelectBrush(DCEx, v52);
      _ReleaseDC(DCEx);
    }
    zzzShowCaret((struct tagWND *)*v12);
  }
  return v77;
}
