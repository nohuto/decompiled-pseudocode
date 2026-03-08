/*
 * XREFs of xxxProcessKeyEvent @ 0x1C007EE00
 * Callers:
 *     ProcessKeyboardInjectedInput @ 0x1C000E730 (ProcessKeyboardInjectedInput.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E49D0 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4A90 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01E5C10 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E6040 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01E62D0 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C020FB30 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C021A3F8 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C021A6EC (-SendKeyUpDown@@YAXEE@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C021A7E0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0016B10 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     UpdateRawKeyState @ 0x1C007F0C8 (UpdateRawKeyState.c)
 *     xxxKeyEventEx @ 0x1C007F2E0 (xxxKeyEventEx.c)
 *     GetActiveHKL @ 0x1C007F950 (GetActiveHKL.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C007FDD0 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     KEOEMProcs @ 0x1C00803C4 (KEOEMProcs.c)
 *     xxxKELocaleProcs @ 0x1C0080414 (xxxKELocaleProcs.c)
 *     ApiSetEditionHandleSonarKeyEvent @ 0x1C008055C (ApiSetEditionHandleSonarKeyEvent.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0080790 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01E3DAC (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C020E594 (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 */

__int64 __fastcall xxxProcessKeyEvent(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned __int8 a3,
        char a4,
        __int64 a5,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a6)
{
  unsigned __int64 v6; // rsi
  unsigned int v8; // r12d
  __int16 ActiveHKL; // ax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // r15d
  void *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r9d
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r14
  __int64 result; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rbp
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // edx
  _BYTE *v49; // rcx
  __int64 v50; // rax
  int v51; // ebp

  v6 = a1[2];
  v8 = a3;
  ActiveHKL = GetActiveHKL();
  v14 = *((unsigned __int16 *)a1 + 1);
  if ( (ActiveHKL & 0x3FF) != 0x12 )
  {
    LOWORD(v14) = (unsigned __int16)v14 >> 15;
    LOBYTE(v11) = v14;
LABEL_3:
    LOBYTE(v14) = v6;
    UpdateRawKeyState(v14, v11);
    goto LABEL_4;
  }
  LOWORD(v14) = v14 & 0x9000;
  if ( (_WORD)v14 != 0x8000
    || *a1 != 0xF1 && *a1 != 0xF2
    || (v38 = SGDGetUserSessionState(v14, v11, v12, v13),
        v14 = v6 >> 2,
        ((unsigned __int8)(1 << (2 * (v6 & 3))) & *(_BYTE *)((v6 >> 2) + v38 + 14056)) != 0) )
  {
    v11 = *((_WORD *)a1 + 1) >> 15;
    goto LABEL_3;
  }
  *((_WORD *)a1 + 1) &= ~0x8000u;
LABEL_4:
  if ( (unsigned __int8)(v6 + 96) <= 5u )
  {
    LOBYTE(v6) = ((int)v6 - 160) / 2 + 16;
    UpdateRawKeyState((unsigned __int8)v6, *((_WORD *)a1 + 1) >> 15);
  }
  v16 = 8 * v8;
  v17 = 0LL;
  if ( a5 )
    v18 = -(*(_DWORD *)(a5 + 492) & 1);
  else
    v18 = 0LL;
  if ( (unsigned __int8)v6 == 173
    || (unsigned __int8)v6 == 174
    || (unsigned __int8)v6 == 175
    || (unsigned __int8)v6 == 176
    || (unsigned __int8)v6 == 177
    || (v19 = (unsigned int)(unsigned __int8)v6 - 178, (unsigned int)v19 < 2) )
  {
    v20 = 8 * v8;
  }
  else
  {
    v20 = 8 * v8;
    if ( !(_DWORD)v18 )
    {
      v21 = SGDGetUserSessionState(v19, v18, v15, v16);
      v20 = 8 * v8;
      if ( ((unsigned __int8)(1 << (2 * (v6 & 3))) & *(_BYTE *)(((unsigned __int64)(unsigned __int8)v6 >> 2)
                                                              + v21
                                                              + 14056)) != 0 )
        v20 = v16 | 0x20;
    }
  }
  v22 = v20 | 0x40;
  if ( *((_WORD *)a1 + 8) != 0xFFFD )
    v22 = v20;
  CInputGlobals::UpdateInputGlobals(
    gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    1LL,
    0LL,
    0,
    v22);
  if ( !(_BYTE)v8 || !*((_DWORD *)a1 + 1) )
    *((_DWORD *)a1 + 1) = CInputGlobals::GetLastInputTime(gpInputGlobals);
  LOBYTE(v23) = v6;
  ApiSetEditionHandleSonarKeyEvent(a1, v23);
  if ( a5 && (*(_DWORD *)(a5 + 184) & 0x2000) != 0 )
    v28 = a5 + 392;
  else
    v28 = 0LL;
  if ( !_bittest16((const signed __int16 *)a1 + 1, 0xCu) )
  {
    result = KEOEMProcs(a1);
    if ( !(_BYTE)result )
      return result;
    result = xxxKELocaleProcs((struct tagKE *)a1);
    if ( !(_BYTE)result )
      return result;
    if ( !*(_QWORD *)(SGDGetUserSessionState(v31, v30, v32, v33) + 13848) )
      goto LABEL_28;
    v40 = *(_QWORD *)(SGDGetUserSessionState(v35, v34, v36, v37) + 13848);
    if ( !*(_QWORD *)(v40 + 8) )
      goto LABEL_28;
    v43 = *(_QWORD *)(SGDGetUserSessionState(v40, v39, v41, v42) + 13848);
    v44 = *(_QWORD *)(v43 + 8);
    v48 = *(_DWORD *)(*(_QWORD *)(SGDGetUserSessionState(v43, v45, v46, v47) + 13848) + 4LL);
    if ( !v48 )
      goto LABEL_28;
    while ( 1 )
    {
      v49 = (_BYTE *)(v44 + 132LL * (unsigned int)--v48);
      if ( *v49 == a1[2] )
        break;
      if ( !v48 )
        goto LABEL_28;
    }
    v50 = (unsigned __int8)v49[1];
    if ( (unsigned __int8)v50 < 3u )
    {
      result = ((__int64 (__fastcall *)(_BYTE *, unsigned __int8 *, __int64))*(&off_1C0281D48 + v50))(v49, a1, a2);
      v51 = result;
      if ( (_DWORD)result )
        goto LABEL_37;
    }
    else
    {
      v51 = 0;
    }
    result = InputTraceLogging::Keyboard::DropInput(13LL);
LABEL_37:
    if ( !v51 )
      return result;
LABEL_28:
    if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(v8) )
      return InputTraceLogging::Keyboard::DropInput(0LL);
    if ( !a4 && !(_BYTE)v8 )
      CPTPProcessor::OnKeyEvent(v6, *((_WORD *)a1 + 1) >= 0);
    return xxxKeyEventEx(
             *((unsigned __int16 *)a1 + 1),
             *a1,
             *((_DWORD *)a1 + 1),
             a2,
             *((void **)a1 + 1),
             (__int64)(a1 + 16),
             v8,
             a4,
             v28,
             a6);
  }
  if ( *(_BYTE *)(SGDGetUserSessionState(v25, v24, v26, v27) + 14160) )
    v17 = (void *)*((_QWORD *)a1 + 1);
  return xxxKeyEventEx(
           *((unsigned __int16 *)a1 + 1),
           *(unsigned __int16 *)a1,
           *((_DWORD *)a1 + 1),
           a2,
           v17,
           (unsigned __int64)(a1 + 16) & -(__int64)((_BYTE)v8 != 0),
           v8,
           a4,
           v28,
           a6);
}
