/*
 * XREFs of xxxProcessKeyEvent @ 0x1C01B1150
 * Callers:
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0183BF0 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0183CB0 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01850C0 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0185460 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01856D0 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01A7C5C (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01B02C4 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C01B0504 (-SendKeyUpDown@@YAXEE@Z.c)
 *     ProcessKeyboardInjectedInput @ 0x1C01B05E4 (ProcessKeyboardInjectedInput.c)
 *     ProcessKeyboardInputWorker @ 0x1C01B0810 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C0007504 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00496F0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     xxxKeyEventEx @ 0x1C004CFD0 (xxxKeyEventEx.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0078BA0 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     UpdateRawKeyState @ 0x1C0095DC8 (UpdateRawKeyState.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C009906C (ApiSetEditionGetActiveHKL.c)
 *     ApiSetEditionHandleSonarKeyEvent @ 0x1C0099D34 (ApiSetEditionHandleSonarKeyEvent.c)
 *     KEOEMProcs @ 0x1C009A40C (KEOEMProcs.c)
 *     xxxKELocaleProcs @ 0x1C009DDC8 (xxxKELocaleProcs.c)
 *     xxxKENLSProcs @ 0x1C00A2130 (xxxKENLSProcs.c)
 *     ApiSetEditionGetExecutionEvironment @ 0x1C00B3BDC (ApiSetEditionGetExecutionEvironment.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01A1E64 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C01A658C (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 */

void __fastcall xxxProcessKeyEvent(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a6)
{
  unsigned __int64 v6; // rsi
  __int16 v10; // dx
  __int16 v11; // r8
  void *v12; // rdi
  int v13; // r9d
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int *v17; // r14
  __int64 v18; // rbp
  char v19; // cl

  v6 = a1[2];
  if ( (unsigned __int16)((ApiSetEditionGetActiveHKL() & 0x3FF) - 17) <= 1u )
  {
    v11 = *((_WORD *)a1 + 1);
    if ( (v11 & 0x9000) == 0x8000
      && (unsigned __int8)(*a1 + 15) <= 1u
      && ((unsigned __int8)(1 << (2 * (v6 & 3))) & gafRawKeyState[v6 >> 2]) == 0 )
    {
      *((_WORD *)a1 + 1) = v11 & 0x7FFF;
      goto LABEL_9;
    }
    LOBYTE(v10) = v11 < 0;
  }
  else
  {
    v10 = *((_WORD *)a1 + 1) >> 15;
  }
  UpdateRawKeyState(v6, v10);
LABEL_9:
  if ( (unsigned __int8)(v6 + 96) <= 5u )
  {
    LOBYTE(v6) = ((int)v6 - 160) / 2 + 16;
    UpdateRawKeyState(v6, *((__int16 *)a1 + 1) < 0);
  }
  v12 = 0LL;
  v13 = a3 != 0 ? 8 : 0;
  if ( a5 )
    v14 = -(*(_DWORD *)(a5 + 500) & 1);
  else
    v14 = 0;
  if ( ((unsigned __int8)v6 < 0xADu || (unsigned __int8)v6 > 0xB3u) && !v14 )
    v13 |= 0x20u;
  v15 = v13 | 0x40;
  if ( *((_WORD *)a1 + 8) != 0xFFFD )
    v15 = v13;
  CInputGlobals::UpdateInputGlobals(
    (__int64)gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    1u,
    0LL,
    0,
    v15);
  v17 = (unsigned int *)(a1 + 4);
  if ( !a3 || !*v17 )
    *v17 = CInputGlobals::GetLastInputTime(gpInputGlobals);
  LOBYTE(v16) = v6;
  ApiSetEditionHandleSonarKeyEvent((__int64)a1, v16);
  if ( a5 && (*(_DWORD *)(a5 + 184) & 0x2000) != 0 )
    v18 = a5 + 392;
  else
    v18 = 0LL;
  if ( (*((_WORD *)a1 + 1) & 0x1000) != 0 )
  {
    if ( (dword_1C02510D0 & 1) != 0 )
    {
      v19 = byte_1C02510D4;
    }
    else
    {
      dword_1C02510D0 |= 1u;
      v19 = (unsigned int)ApiSetEditionGetExecutionEvironment() == 2;
      byte_1C02510D4 = v19;
    }
    if ( v19 )
      v12 = (void *)*((_QWORD *)a1 + 1);
    xxxKeyEventEx(
      *((_WORD *)a1 + 1),
      *(_WORD *)a1,
      *v17,
      a2,
      v12,
      (unsigned __int16 *)((unsigned __int64)(a1 + 16) & -(__int64)(a3 != 0)),
      a3,
      a4,
      v18,
      a6);
  }
  else if ( (unsigned int)KEOEMProcs((struct tagKE *)a1)
         && (unsigned int)xxxKELocaleProcs((struct tagKE *)a1)
         && (unsigned int)xxxKENLSProcs((__int64)a1, a2) )
  {
    if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(a3) )
    {
      if ( !a4 && !a3 )
        CPTPProcessor::OnKeyEvent(v6, *((_WORD *)a1 + 1) >= 0);
      xxxKeyEventEx(*((_WORD *)a1 + 1), *a1, *v17, a2, *((void **)a1 + 1), (unsigned __int16 *)a1 + 8, a3, a4, v18, a6);
    }
    else
    {
      InputTraceLogging::Keyboard::DropInput();
    }
  }
}
