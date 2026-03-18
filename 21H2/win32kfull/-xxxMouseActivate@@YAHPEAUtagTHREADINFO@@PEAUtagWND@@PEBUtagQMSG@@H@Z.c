/*
 * XREFs of ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00F1A94
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C007CC00 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00F1E88 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01DBB94 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxActiveWindowTracking @ 0x1C01DD47C (xxxActiveWindowTracking.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C023A8B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall xxxMouseActivate(struct tagTHREADINFO *a1, struct tagWND *a2, const struct tagQMSG *a3, int a4)
{
  __int64 v5; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  int v9; // r12d
  int v10; // r15d
  int active; // edi
  unsigned __int64 *v12; // rsi
  _BYTE *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  bool v17; // zf
  __int64 v18; // rcx
  int v20; // ebx
  unsigned __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 TopLevelWindow; // rax
  __int64 v29; // [rsp+60h] [rbp-58h] BYREF
  struct tagWND *v30; // [rsp+68h] [rbp-50h]
  __int64 v31; // [rsp+70h] [rbp-48h]
  unsigned int v32; // [rsp+C0h] [rbp+8h]
  __int64 v33; // [rsp+D0h] [rbp+18h]

  v5 = *(_QWORD *)((char *)a3 + 52);
  v7 = *((unsigned int *)a3 + 6);
  v33 = *((_QWORD *)a3 + 4);
  v8 = *((_QWORD *)a1 + 54);
  v9 = -__CFSHR__(*((_DWORD *)a3 + 25), 20);
  v10 = -__CFSHR__(*((_DWORD *)a3 + 25), 23);
  v31 = 0LL;
  if ( *(_QWORD *)(v8 + 104) )
    return 0LL;
  active = 0;
  if ( !v9 && (unsigned int)IsIndependentInputWindow(a2) )
  {
    if ( (unsigned int)(v7 - 513) <= 0xA )
    {
      v25 = 1097;
      if ( _bittest(&v25, v7 - 513) )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a2);
        if ( CompositionInputWindowUIOwner )
        {
          TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
          PostEventMessageEx(
            *(struct tagTHREADINFO **)(TopLevelWindow + 16),
            *(struct tagQ **)(*(_QWORD *)(TopLevelWindow + 16) + 432LL),
            6u,
            0LL,
            0,
            0LL,
            *(_QWORD *)TopLevelWindow,
            0LL);
        }
      }
    }
    return 0LL;
  }
  v12 = (unsigned __int64 *)a2;
  v29 = *((_QWORD *)a1 + 52);
  *((_QWORD *)a1 + 52) = &v29;
  v30 = a2;
  if ( a2 )
    HMLockObject(a2);
  v13 = (_BYTE *)*((_QWORD *)a2 + 5);
  v14 = 1LL;
  if ( (v13[21] & 2) != 0 )
    v14 = (v13[24] & 4) == 0;
  v32 = v14;
  if ( (_DWORD)v7 == 513 || (_DWORD)v7 == 516 || (_DWORD)v7 == 519 || (_DWORD)v7 == 523 )
  {
    if ( (v13[31] & 0xC0) == 0x40 )
    {
      do
      {
        v12 = (unsigned __int64 *)v12[13];
        if ( (_DWORD)v14 )
        {
          ThreadUnlock1(v13, v14, a3);
          v29 = *((_QWORD *)a1 + 52);
          *((_QWORD *)a1 + 52) = &v29;
          v30 = (struct tagWND *)v12;
          if ( v12 )
            HMLockObject(v12);
          v21 = v12[5];
          v22 = *(_DWORD *)(v21 + 104);
          v23 = *(_DWORD *)(v21 + 108);
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(
            v12,
            0x210u,
            v33 | v7,
            (unsigned __int16)(v5 - v22) | ((unsigned __int64)(unsigned __int16)(WORD2(v5) - v23) << 16),
            0,
            0,
            0LL,
            1,
            0);
          v14 = v32;
        }
        LOBYTE(v13) = *(_BYTE *)(v12[5] + 31) & 0xC0;
      }
      while ( (_BYTE)v13 == 64 );
      active = 0;
    }
    if ( !(_DWORD)v14 )
    {
      ThreadUnlock1(v13, v14, a3);
      v29 = *((_QWORD *)a1 + 52);
      *((_QWORD *)a1 + 52) = &v29;
      v30 = (struct tagWND *)v12;
      HMLockObject(v12);
    }
  }
  v15 = *((_QWORD *)a1 + 54);
  v16 = 0LL;
  if ( v10 )
    v17 = *(_QWORD *)(v15 + 120) == (_QWORD)v12;
  else
    v17 = *(_QWORD *)(v15 + 120) == (_QWORD)a2;
  LOBYTE(v16) = !v17;
  if ( !v9 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 && (_DWORD)v7 == 512 )
  {
    active = xxxActiveWindowTracking(a2, 512LL);
    goto LABEL_22;
  }
  if ( !(_DWORD)v16 && (*(_DWORD *)(v15 + 388) & 0x8000) == 0
    || v12 == (unsigned __int64 *)GetDesktopWindow((__int64)v12) )
  {
    v20 = a4;
    goto LABEL_27;
  }
  if ( (_DWORD)v7 == 513 || (_DWORD)v7 == 516 || (_DWORD)v7 == 519 || (_DWORD)v7 == 523 )
  {
    v20 = a4;
    if ( v9 )
    {
      active = (v10 != 0) + 3;
    }
    else
    {
      if ( v10 )
      {
        active = 2;
LABEL_44:
        if ( (v12 != *(unsigned __int64 **)(v15 + 120) || (*(_DWORD *)(v15 + 388) & 0x8000) != 0)
          && !xxxActivateWindowWithOptions((const struct tagWND *)v12, 3LL, 49LL, *(_DWORD *)(v15 + 148) != 0)
          || (*(_BYTE *)(v12[5] + 31) & 8) != 0
          || active == 2 )
        {
          goto LABEL_63;
        }
LABEL_27:
        active = 0;
        v18 = (unsigned int)gpdwCPUserPreferencesMask;
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
        {
          if ( CheckOnTop(a1, (struct tagWND *)v12, v7) )
          {
            if ( v20 == 1 )
            {
              v18 = *(unsigned int *)(v12[2] + 488);
              if ( (v18 & 8) != 0 )
                active = (*(_BYTE *)(v12[5] + 24) & 8) == 0;
            }
          }
        }
        goto LABEL_22;
      }
      v24 = xxxSendMessage((ULONG_PTR)a2);
      v15 = *((_QWORD *)a1 + 54);
      active = v24;
    }
    if ( active < 0 )
      goto LABEL_22;
    if ( active > 2 )
    {
      if ( active == 3 )
      {
        active = 0;
        goto LABEL_22;
      }
      if ( active != 4 )
        goto LABEL_22;
LABEL_63:
      active = 1;
      goto LABEL_22;
    }
    goto LABEL_44;
  }
LABEL_22:
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 54) + 104LL) )
    xxxSendMessage((ULONG_PTR)a2);
  ThreadUnlock1(v18, v15, v16);
  return (unsigned int)active;
}
