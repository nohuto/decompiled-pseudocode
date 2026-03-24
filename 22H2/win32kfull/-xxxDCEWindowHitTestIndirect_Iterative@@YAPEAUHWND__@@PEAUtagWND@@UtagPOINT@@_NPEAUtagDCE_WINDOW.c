/*
 * XREFs of ?xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0167424
 * Callers:
 *     xxxDCEWindowHitTest @ 0x1C00C0FA4 (xxxDCEWindowHitTest.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C1DC0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0216334 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     DCELayerHitTest @ 0x1C0016E7C (DCELayerHitTest.c)
 *     DwmSyncHitTestQuery @ 0x1C002AC54 (DwmSyncHitTestQuery.c)
 *     GetWindowCloakState @ 0x1C004DB6C (GetWindowCloakState.c)
 *     PtInRect @ 0x1C004DE1C (PtInRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006B6A0 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C006B720 (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     IsWindowHolographicForHitTest @ 0x1C006B7B0 (IsWindowHolographicForHitTest.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006BE7C (IsToplevelWindowDesktopComposed.c)
 *     _IsTopLevelWindow @ 0x1C006FBE8 (_IsTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00D72C8 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsMessageOnlyWindow @ 0x1C00D73E0 (IsMessageOnlyWindow.c)
 *     xxxSendTransformableMessage @ 0x1C010F8F4 (xxxSendTransformableMessage.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C01673A4 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     DCEHitTestWindow @ 0x1C01E4674 (DCEHitTestWindow.c)
 *     SizeBoxHwnd @ 0x1C025CF4C (SizeBoxHwnd.c)
 */

HWND __fastcall xxxDCEWindowHitTestIndirect_Iterative(
        struct tagWND *a1,
        struct tagPOINT a2,
        char a3,
        struct tagDCE_WINDOW_HIT_TEST_ARGS *a4)
{
  struct tagWND *v6; // r14
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v8; // edx
  unsigned int v9; // r13d
  struct tagWND *v10; // rcx
  int v11; // esi
  struct tagPOINT v12; // rbx
  struct tagWND *v13; // r8
  int v14; // r12d
  int *v15; // rax
  unsigned __int8 *v16; // rdx
  __int64 v17; // rax
  struct tagWND **v19; // rcx
  __int64 v20; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  void *v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  char v29; // si
  int v30; // eax
  unsigned int v31; // edx
  int v32; // ecx
  int v33; // eax
  struct tagWND *v34; // r8
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  struct tagWND *v40; // [rsp+50h] [rbp-39h]
  struct tagWND *v41; // [rsp+58h] [rbp-31h]
  struct tagPOINT v42; // [rsp+60h] [rbp-29h] BYREF
  struct tagPOINT v43; // [rsp+68h] [rbp-21h] BYREF
  __int64 v44; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v45[3]; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v46[10]; // [rsp+90h] [rbp+7h] BYREF
  __int64 v47; // [rsp+F0h] [rbp+67h] BYREF
  char v48; // [rsp+100h] [rbp+77h]

  v48 = a3;
  v6 = a1;
  if ( !a1 )
    return 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((__int64)a1);
  v8 = *((_DWORD *)a4 + 8);
  v9 = CurrentThreadDpiAwarenessContext;
  v43 = a2;
  if ( (v8 & 4) != 0 )
    LogicalToPhysicalDPIPoint(&v43, &v43, CurrentThreadDpiAwarenessContext, 0LL);
  v10 = (struct tagWND *)*((_QWORD *)v6 + 13);
  v11 = 0;
  v12 = v43;
  v13 = 0LL;
  v40 = 0LL;
  v14 = -2;
  v41 = v10;
  v42 = v43;
  while ( 1 )
  {
    if ( !v11 )
    {
      if ( (unsigned int)IsCompositionInputWindowForHitTest(v6) )
      {
        v29 = 1;
        if ( (*((_DWORD *)a4 + 8) & 8) == 0 )
          goto LABEL_44;
        LOBYTE(v30) = IsMessageOnlyWindow((__int64)v6);
        if ( v30 )
        {
LABEL_46:
          if ( (unsigned int)GetWindowCloakState(v6)
            && !(unsigned int)CoreWindowProp::IsComponent(v6)
            && !(unsigned int)IsWindowHolographicForHitTest(v6) )
          {
            goto LABEL_44;
          }
          if ( (*((_DWORD *)a4 + 8) & 4) != 0
            && (unsigned int)IsTopLevelWindow((__int64)v6)
            && (v31 = *(_DWORD *)(*((_QWORD *)v6 + 5) + 288LL),
                (((unsigned __int16)(v9 >> 8) ^ (unsigned __int16)(v31 >> 8)) & 0x1FF) == 0)
            && ((v31 & 0xF) != 2 || (v31 & 0x20000000) == 0 ? (v32 = 0) : (v32 = 1),
                (v9 & 0xF) != 2 || (v9 & 0x20000000) == 0 ? (v33 = 0) : (v33 = 1),
                v32 == v33) )
          {
            v12 = a2;
            v40 = v6;
            v42 = a2;
            v34 = v6;
          }
          else
          {
            v34 = v40;
          }
          if ( !v29 )
          {
            v35 = *((_QWORD *)v6 + 27);
            if ( !v35 || v6 == v34 )
            {
              if ( !PtInRect((_DWORD *)(*((_QWORD *)v6 + 5) + 88LL), *(_QWORD *)&v12) )
              {
                v11 = 3;
                goto LABEL_87;
              }
            }
            else
            {
              v36 = DCEHitTestWindow(*((_QWORD *)v6 + 5) + 88LL, v35, &v42, *((_QWORD *)a4 + 5));
              v12 = v42;
              if ( !v36 )
                goto LABEL_44;
            }
          }
          v37 = *(_QWORD *)(*((_QWORD *)v6 + 5) + 168LL);
          if ( v37 && !(unsigned int)GrePtInRegion(v37, (unsigned int)v12.x, (unsigned int)v42.y) )
            goto LABEL_44;
          v38 = *((_QWORD *)v6 + 5);
          if ( (*(_BYTE *)(v38 + 26) & 8) != 0
            && (*(_DWORD *)(v38 + 232) & 0x20) == 0
            && !DCELayerHitTest((__int64)v6, *(_QWORD *)&v12) )
          {
            goto LABEL_44;
          }
          if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v6) && (*((_DWORD *)a4 + 8) & 1) != 0 )
          {
            if ( v29 || (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0xC0) != 0x40 )
            {
              v11 = 4;
              goto LABEL_86;
            }
LABEL_44:
            v11 = 3;
            goto LABEL_86;
          }
          if ( !v29 )
          {
            v39 = *((_QWORD *)v6 + 5);
            if ( (*(_BYTE *)(v39 + 31) & 0x20) == 0 && PtInRect((_DWORD *)(v39 + 104), *(_QWORD *)&v12) )
            {
              v13 = v40;
              v10 = v41;
              if ( *((_QWORD *)v6 + 14) )
              {
                v6 = (struct tagWND *)*((_QWORD *)v6 + 14);
                v11 = 0;
              }
              else
              {
                v11 = 2;
              }
              goto LABEL_88;
            }
          }
          v11 = 1;
LABEL_86:
          v13 = v40;
LABEL_87:
          v10 = v41;
          goto LABEL_88;
        }
      }
      else
      {
        v29 = 0;
      }
      if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0x10) == 0 )
        goto LABEL_44;
      goto LABEL_46;
    }
    if ( v11 <= 0 )
      goto LABEL_88;
    if ( v11 <= 2 )
    {
      if ( (unsigned int)IsCompositionInputWindowForHitTest(v6)
        || (LODWORD(v44) = -2, *((_QWORD *)v6 + 2) != gptiCurrent) )
      {
        v11 = 4;
        v14 = 1;
      }
      else
      {
        if ( !(unsigned int)IsToplevelWindowDesktopComposed((__int64)v6)
          || (*(_BYTE *)(*((_QWORD *)v6 + 5) + 26LL) & 8) == 0
          || v11 == 2 )
        {
          goto LABEL_36;
        }
        v45[2] = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v45[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v45;
        v45[1] = v6;
        HMLockObject(v6);
        v24 = (void *)ReferenceDwmApiPort(v23, v22);
        LODWORD(v47) = 1;
        UserSessionSwitchLeaveCrit(v25);
        v12 = v42;
        DwmSyncHitTestQuery(
          v24,
          *(_QWORD *)v6,
          *(_DWORD *)a4,
          *(_QWORD *)&v43,
          *((_QWORD *)a4 + 1),
          LOWORD(v42.x) | (LOWORD(v42.y) << 16),
          -2,
          &v44,
          &v47);
        EnterCrit(0LL, 1LL);
        if ( !ThreadUnlock1(v26) || (*(_BYTE *)(_HMPheFromObject(v6) + 25) & 1) != 0 )
          return 0LL;
        if ( (_DWORD)v47 )
        {
          v14 = v44;
        }
        else
        {
LABEL_36:
          v46[2] = 0LL;
          v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v46[0] = *(_QWORD *)(v27 + 416);
          *(_QWORD *)(v27 + 416) = v46;
          v46[1] = v6;
          HMLockObject(v6);
          v12 = v42;
          v14 = xxxSendTransformableMessage(
                  (unsigned __int64)v6,
                  0x84u,
                  0LL,
                  (struct _LARGE_STRING *)(LOWORD(v42.x) | (LOWORD(v42.y) << 16)),
                  0);
          if ( !ThreadUnlock1(v28) || (*(_BYTE *)(_HMPheFromObject(v6) + 25) & 1) != 0 )
            return 0LL;
        }
        v11 = (v14 != -1) + 3;
      }
      goto LABEL_86;
    }
    if ( v11 != 3 )
      break;
    if ( *((_QWORD *)v6 + 27) || v6 == v13 )
    {
      v19 = (struct tagWND **)*((_QWORD *)v6 + 13);
      v42 = v43;
      RestoreLogicalPoint(v19, &v42, a4);
      v10 = v41;
      v12 = v42;
    }
    v20 = *((_QWORD *)v6 + 11);
    v13 = 0LL;
    v40 = 0LL;
    if ( v20 )
    {
      v11 = 0;
      v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
      if ( *(struct tagWND **)(v20 + 104) == v10 && v48 )
        return 0LL;
    }
    else
    {
      v6 = (struct tagWND *)*((_QWORD *)v6 + 13);
      v11 = 2;
    }
LABEL_88:
    if ( v6 == v10 )
      return 0LL;
  }
  if ( v11 != 4 )
    goto LABEL_88;
  v15 = (int *)*((_QWORD *)a4 + 3);
  if ( v15 )
  {
    *v15 = v14;
    *((_DWORD *)a4 + 9) = 1;
  }
  if ( __PAIR64__(v42.y, v12.x) != v43 )
  {
    LODWORD(v10) = LOWORD(v12.x) | (LOWORD(v42.y) << 16);
    *((_DWORD *)a4 + 12) = 1;
    *((_QWORD *)a4 + 2) = (int)v10;
  }
  v16 = (unsigned __int8 *)*((_QWORD *)v6 + 5);
  LOBYTE(v10) = ~v16[26];
  if ( v14 == (((v16[25] ^ (unsigned int)v10) >> 6) & 1) + 16 && (v16[30] & 4) == 0 )
  {
    v17 = SizeBoxHwnd(v6);
    if ( v17 )
      v6 = (struct tagWND *)v17;
  }
  return *(HWND *)v6;
}
