/*
 * XREFs of ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0097FCC
 * Callers:
 *     EditionDoHotKeys @ 0x1C0097F80 (EditionDoHotKeys.c)
 * Callees:
 *     ?xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C000E95C (-xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?HotkeyInvoked@Keyboard@InputTraceLogging@@SAXIE_N@Z @ 0x1C000ECE4 (-HotkeyInvoked@Keyboard@InputTraceLogging@@SAXIE_N@Z.c)
 *     ?Execute@ShellHangDetection@@YAXXZ @ 0x1C000EDD4 (-Execute@ShellHangDetection@@YAXXZ.c)
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z @ 0x1C00141E8 (-IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z.c)
 *     ?IsPenQuickLaunchHotKey@@YA_NIE@Z @ 0x1C001425C (-IsPenQuickLaunchHotKey@@YA_NIE@Z.c)
 *     zzzCancelJournalling @ 0x1C001D3F4 (zzzCancelJournalling.c)
 *     _PostThreadMessageEx @ 0x1C0037298 (_PostThreadMessageEx.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0048220 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     _SetMagnificationInputTransform @ 0x1C007F160 (_SetMagnificationInputTransform.c)
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1C00989D0 (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 *     ?IsSAS@@YA_NEPEAI@Z @ 0x1C0098AB0 (-IsSAS@@YA_NEPEAI@Z.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C0098B5C (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     ?IsUninterceptable@@YAPEAUtagHOTKEY@@PEAIE@Z @ 0x1C0098C20 (-IsUninterceptable@@YAPEAUtagHOTKEY@@PEAIE@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     HasRawInputForegroundTarget @ 0x1C009EFE4 (HasRawInputForegroundTarget.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 *     Feature_ReportShellHotKey__private_IsEnabledDeviceUsage @ 0x1C012C740 (Feature_ReportShellHotKey__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?HKFindChildHotkeyForQueue@@YA_NPEAUtagQ@@PEBUtagHOTKEY@@PEAPEAUtagCHILDHOTKEY@@@Z @ 0x1C01C1254 (-HKFindChildHotkeyForQueue@@YA_NPEAUtagQ@@PEBUtagHOTKEY@@PEAPEAUtagCHILDHOTKEY@@@Z.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01C1290 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01C1438 (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 *     ?TraceLoggingPenHotkey@@YAXII@Z @ 0x1C0204CE0 (-TraceLoggingPenHotkey@@YAXII@Z.c)
 *     ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1C0205448 (-TraceLoggingYieldedHotkey@@YAXII@Z.c)
 *     ?DismissTooltips@TooltipDismiss@@YAXXZ @ 0x1C0230240 (-DismissTooltips@TooltipDismiss@@YAXXZ.c)
 *     xxxActivateDebugger @ 0x1C0230364 (xxxActivateDebugger.c)
 */

bool __fastcall xxxDoHotKeyStuff(unsigned __int8 a1, bool a2, int a3, struct tagINPUT_MESSAGE_SOURCE *a4)
{
  unsigned int v4; // r13d
  BOOL v6; // r12d
  __int64 v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rax
  bool v18; // si
  __int64 v19; // rcx
  struct tagHOTKEY *v20; // rbx
  __int64 v21; // rax
  unsigned int *v22; // rcx
  struct tagHOTKEY *v23; // rax
  __int64 v24; // rax
  TooltipDismiss *v25; // rcx
  struct tagCHILDHOTKEY *v26; // rdi
  __int16 v27; // ax
  __int64 v28; // rcx
  int *v29; // r14
  __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  ShellHangDetection *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  bool v37; // zf
  bool v38; // zf
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  int v47; // eax
  struct tagCHILDHOTKEY *v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rcx
  __int16 v52; // si
  int v53; // r12d
  void (__fastcall *v54)(_QWORD, unsigned __int64); // r15
  __int16 *v55; // r14
  __int64 v56; // rax
  void (__fastcall *v57)(_QWORD, unsigned __int64); // r11
  unsigned int v58; // edi
  unsigned __int64 v59; // rbx
  __int16 v60; // si
  __int64 v61; // rcx
  __int64 v62; // rcx
  struct tagINPUT_MESSAGE_SOURCE *v63; // rsi
  __int64 v64; // rcx
  __int64 v65; // rcx
  struct tagINPUT_MESSAGE_SOURCE *v66; // rsi
  __int64 v67; // rcx
  unsigned int v68; // ebx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int128 *v71; // rbx
  __int64 v72; // rcx
  int v73; // [rsp+28h] [rbp-58h]
  unsigned int v74; // [rsp+44h] [rbp-3Ch]
  struct tagCHILDHOTKEY *v75; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v76[24]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v77; // [rsp+68h] [rbp-18h]
  int v78; // [rsp+70h] [rbp-10h]
  char v79; // [rsp+C0h] [rbp+40h] BYREF
  bool v80; // [rsp+C8h] [rbp+48h]
  struct tagINPUT_MESSAGE_SOURCE *v81; // [rsp+D8h] [rbp+58h]

  v81 = a4;
  v80 = a2;
  v4 = a1;
  v6 = a2;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v79);
  v74 = 0;
  v9 = 0;
  v10 = v4;
  switch ( v4 )
  {
    case 0x10u:
      v9 = 4;
      break;
    case 0x11u:
      v9 = 2;
      break;
    case 0x12u:
      v9 = 1;
      break;
    default:
      if ( v4 - 91 < 2 )
        v9 = 8;
      else
        *(_DWORD *)(SGDGetUserSessionState(v8) + 13828) = 0;
      break;
  }
  v11 = SGDGetUserSessionState(v8);
  if ( v6 )
  {
    v13 = ~v9;
    *(_DWORD *)(v11 + 13824) &= v13;
    if ( v9 )
    {
      v74 = *(_DWORD *)(SGDGetUserSessionState(v13) + 13828);
      *(_DWORD *)(SGDGetUserSessionState(v14) + 13828) = 0;
    }
    if ( *(_QWORD *)(SGDGetUserSessionState(v13) + 13784) )
      *(_QWORD *)(SGDGetUserSessionState(v12) + 13784) = 0LL;
  }
  else
  {
    *(_DWORD *)(v11 + 13824) |= v9;
    if ( v9 )
    {
      v15 = *(_DWORD *)(SGDGetUserSessionState(v12) + 13824);
      *(_DWORD *)(SGDGetUserSessionState(v16) + 13828) = v15;
      v10 = v4;
    }
  }
  v17 = SGDGetUserSessionState(v12);
  v18 = IsSAS(v4, (unsigned int *)(v17 + 13824));
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v79);
  if ( (_BYTE)v4 != 0xAE )
  {
    if ( (_BYTE)v4 != 0xAF )
      goto LABEL_22;
    if ( v6 )
      goto LABEL_21;
    if ( !gbVolumeDownPressed )
    {
      gbVolumeUpPressed = 1;
      goto LABEL_22;
    }
    xxxHandleVolumeUpDownCombo();
LABEL_34:
    gbVolumeDownPressed = 0;
    goto LABEL_22;
  }
  if ( v6 )
    goto LABEL_34;
  if ( !gbVolumeUpPressed )
  {
    gbVolumeDownPressed = 1;
    goto LABEL_22;
  }
  xxxHandleVolumeUpDownCombo();
LABEL_21:
  gbVolumeUpPressed = 0;
LABEL_22:
  if ( !v18 && (gfInNumpadHexInput & 1) != 0 )
    return 0;
  if ( v74 && v6 )
  {
    v20 = IsHotKey(v74, 0);
    goto LABEL_27;
  }
  v21 = SGDGetUserSessionState(v19);
  v20 = IsHotKey(*(_DWORD *)(v21 + 13824), v10);
  if ( !v20 || !v18 )
  {
    v23 = IsUninterceptable(v22, v4);
    if ( !v23 )
    {
LABEL_27:
      if ( !v20 )
        goto LABEL_43;
      goto LABEL_40;
    }
    v20 = v23;
  }
LABEL_40:
  if ( gbLockScreenActive && !v18 && !_bittest16((const signed __int16 *)v20 + 17, 0xDu) )
    return 0;
LABEL_43:
  v24 = SGDGetUserSessionState(0LL);
  WindowArrangementSequence::TestSequence(
    v20,
    (const struct tagHOTKEY *const)v4,
    v9,
    *(_DWORD *)(v24 + 13824),
    !v6,
    v73);
  if ( v74 == 2 && v6 || *(_DWORD *)(SGDGetUserSessionState(v25) + 13824) == 6 && (_BYTE)v4 == 121 && !v6 )
    TooltipDismiss::DismissTooltips(v25);
  if ( !v20 )
    return 0;
  v26 = (struct tagHOTKEY *)((char *)v20 + 34);
  v27 = *((_WORD *)v20 + 17);
  v75 = (struct tagHOTKEY *)((char *)v20 + 34);
  if ( v27 < 0 && !v18 && a4 && *((_DWORD *)a4 + 1) != 4 )
    return 0;
  v28 = 34816LL;
  memset(v76, 0, sizeof(v76));
  if ( (v27 & 0x8800) == 0 )
  {
    if ( (unsigned int)HasRawInputForegroundTarget(v76, 0LL) )
    {
      v28 = *(_QWORD *)(*(_QWORD *)&v76[8] + 424LL);
      if ( _bittest((const signed __int32 *)(*(_QWORD *)(v28 + 824) + 100LL), 9u) )
        return 0;
    }
  }
  v29 = (int *)((char *)v20 + 40);
  if ( *((_DWORD *)v20 + 10) == -7 )
  {
    if ( (unsigned int)Feature_ReportShellHotKey__private_IsEnabledDeviceUsage(v28) )
    {
      v49 = v75;
      goto LABEL_110;
    }
    v31 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 168LL);
    if ( v31 )
    {
      *(_DWORD *)(SGDGetUserSessionState(gptiCurrent) + 13828) = 0;
      goto LABEL_139;
    }
    v26 = v75;
  }
  if ( (unsigned int)(*v29 + 6) <= 1 )
  {
    if ( v6 )
      v47 = 0;
    else
      v47 = xxxActivateDebugger(*((unsigned __int16 *)v20 + 16), 0LL);
    return v47 != 0;
  }
  v33 = *(unsigned int *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 64LL);
  if ( (v33 & 1) != 0 )
  {
    v33 = *(_QWORD *)v20;
    if ( *(PVOID *)(*(_QWORD *)v20 + 456LL) != grpdeskLogon
      && !*((_QWORD *)v20 + 1)
      && gbLockScreenActive
      && !_bittest16((const signed __int16 *)v26, 0xDu) )
    {
      return 0;
    }
  }
  if ( !v74 && v6 )
    return 0;
  if ( v18 || (_BYTE)v4 == 27 && *(_DWORD *)(SGDGetUserSessionState(v33) + 13824) == 2 )
  {
    zzzCancelJournalling();
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 216LL) )
    {
      memset(v76, 0, sizeof(v76));
      v77 = 0LL;
      v78 = 3;
      SetMagnificationInputTransform((__int128 *)v76, v34, v35, v36);
    }
    CancelCapturedMipOverride();
  }
  if ( a3 )
  {
    switch ( (_BYTE)v4 )
    {
      case 9:
        v37 = (a3 & 1) == 0;
        break;
      case 0xD:
        v37 = (a3 & 8) == 0;
        break;
      case 0x1B:
        if ( (a3 & 2) != 0 )
        {
          v33 = *(unsigned int *)(SGDGetUserSessionState(v33) + 13824);
          LOBYTE(v33) = v33 & 3;
          if ( (_BYTE)v33 == 1 )
            return 0;
        }
        if ( (a3 & 0x40) == 0 )
          goto LABEL_95;
        v33 = *(unsigned int *)(SGDGetUserSessionState(v33) + 13824);
        LOBYTE(v33) = v33 & 3;
        v38 = (_BYTE)v33 == 2;
        goto LABEL_94;
      case 0x20:
        v37 = (a3 & 4) == 0;
        break;
      case 0x2C:
        if ( (a3 & 0x20) != 0 )
        {
          v33 = *(unsigned int *)(SGDGetUserSessionState(v33) + 13824);
          if ( (v33 & 3) == 0 )
            return 0;
        }
        v37 = (a3 & 0x10) == 0;
        break;
      default:
        goto LABEL_95;
    }
    if ( v37 )
      goto LABEL_95;
    v33 = *(unsigned int *)(SGDGetUserSessionState(v33) + 13824);
    LOBYTE(v33) = v33 & 3;
    v38 = (_BYTE)v33 == 1;
LABEL_94:
    if ( v38 )
      return 0;
  }
LABEL_95:
  if ( *(_DWORD *)(SGDGetUserSessionState(v33) + 13824) == 2 && (_BYTE)v4 == 27 && !v6 )
  {
    v40 = ghwndSwitch;
    memset(v76, 0, sizeof(v76));
    if ( ghwndSwitch )
    {
      LOBYTE(v39) = 1;
      v41 = HMValidateHandleNoSecure(ghwndSwitch, v39);
      v42 = v41;
      if ( v41 )
      {
        ThreadLock(v41, v76);
        xxxSetForegroundWindow2(v42, 0LL, 0LL);
        ThreadUnlock1(v44, v43, v45);
      }
    }
  }
  if ( (unsigned int)Feature_ReportShellHotKey__private_IsEnabledDeviceUsage(v40) )
  {
    if ( *v29 == -17 )
    {
LABEL_103:
      v47 = HandleIAMHotKey(v20);
      return v47 != 0;
    }
    v49 = v75;
  }
  else
  {
    v49 = v75;
    if ( _bittest16((const signed __int16 *)v75, 0xCu) )
      goto LABEL_103;
  }
  v50 = SGDGetUserSessionState(v46);
  if ( IsPenQuickLaunchAndShouldBeDisabled(*(_DWORD *)(v50 + 13824), v4) )
    return 0;
LABEL_110:
  if ( (unsigned int)Feature_ReportShellHotKey__private_IsEnabledDeviceUsage(v30) )
  {
    xxxReportHotKey(v20, v6, v81);
  }
  else
  {
    v52 = *(_WORD *)v49;
    v53 = *v29;
    v31 = *((_QWORD *)v20 + 2);
    v54 = (void (__fastcall *)(_QWORD, unsigned __int64))*((_QWORD *)v20 + 1);
    v55 = *(__int16 **)v20;
    if ( (v52 & 0x200) != 0 )
    {
      v51 = gpqForeground;
      if ( gpqForeground )
      {
        if ( *(_QWORD *)(gpqForeground + 128LL) )
        {
          v56 = SGDGetUserSessionState(gpqForeground);
          if ( !IsPenQuickLaunchHotKey(*(_DWORD *)(v56 + 13824), v4)
            || !_bittest((const signed __int32 *)&gpdwCPUserPreferencesMask + 1, 9u) )
          {
            v75 = 0LL;
            if ( HKFindChildHotkeyForQueue(gpqForeground, v20, &v75) )
            {
              v54 = v57;
              v31 = *((_QWORD *)v75 + 1);
              v53 = *((_DWORD *)v75 + 5);
              v55 = *(__int16 **)v75;
              v52 = *((_WORD *)v75 + 8);
              TraceLoggingYieldedHotkey(*((unsigned __int16 *)v20 + 16), *((_DWORD *)v20 + 9));
            }
          }
        }
      }
    }
    if ( (v52 & 0x100) != 0 )
      goto LABEL_143;
    if ( !v31 )
    {
      v58 = v4;
      v59 = (v4 << 16) | (unsigned __int64)*(unsigned __int16 *)(SGDGetUserSessionState(v51) + 13824);
      v60 = v52 & 0x4000;
      if ( v54 )
      {
        if ( !v60 || v59 != *(_QWORD *)(SGDGetUserSessionState(v51) + 13784) )
        {
          if ( *(_QWORD *)(SGDGetUserSessionState(v51) + 13784) != v59 )
            *(_QWORD *)(SGDGetUserSessionState(v61) + 13784) = v59;
          SGDGetUserSessionState(v61);
          InputTraceLogging::Keyboard::HotkeyInvoked();
          v54(v53, v59);
        }
      }
      else
      {
        if ( v60 && v59 == *(_QWORD *)(SGDGetUserSessionState(v51) + 13784) )
        {
          v63 = v81;
        }
        else
        {
          if ( *(_QWORD *)(SGDGetUserSessionState(v51) + 13784) != v59 )
            *(_QWORD *)(SGDGetUserSessionState(v62) + 13784) = v59;
          SGDGetUserSessionState(v62);
          InputTraceLogging::Keyboard::HotkeyInvoked();
          v63 = v81;
          PostThreadMessageEx(v55, 0x312u, v53, v59, v81);
        }
        CInputGlobals::SetPtiLastWoken(gpInputGlobals, (struct tagTHREADINFO *)v55, *((_DWORD *)v63 + 1) == 1);
      }
      goto LABEL_144;
    }
    if ( v31 != 1 )
      goto LABEL_137;
    if ( !gpqForeground )
      return 0;
    v31 = *(_QWORD *)(gpqForeground + 120LL);
    if ( v31 )
    {
LABEL_137:
      v32 = *(ShellHangDetection **)(*(_QWORD *)(v31 + 24) + 8LL);
      if ( v31 != *((_QWORD *)v32 + 21) || v53 != 61744 )
      {
        v71 = (__int128 *)((v4 << 16) | (unsigned __int64)*(unsigned __int16 *)(SGDGetUserSessionState(v32) + 13824));
        if ( (v52 & 0x4000) == 0 || v71 != *(__int128 **)(SGDGetUserSessionState(v70) + 13784) )
        {
          if ( *(__int128 **)(SGDGetUserSessionState(v70) + 13784) != v71 )
            *(_QWORD *)(SGDGetUserSessionState(v72) + 13784) = v71;
          SGDGetUserSessionState(v72);
          InputTraceLogging::Keyboard::HotkeyInvoked();
          v66 = v81;
          _PostTransformableMessageExtended(v31, 0x312u, v53, v71, v81, 1);
          goto LABEL_142;
        }
LABEL_141:
        v66 = v81;
LABEL_142:
        CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v31 + 16), *((_DWORD *)v66 + 1) == 1);
        goto LABEL_143;
      }
LABEL_139:
      ShellHangDetection::Execute(v32);
      PostMessage(v31, 274LL, 61744LL, 0LL);
      if ( *(_QWORD *)(SGDGetUserSessionState(v64) + 13784) )
        *(_QWORD *)(SGDGetUserSessionState(v65) + 13784) = 0LL;
      goto LABEL_141;
    }
  }
LABEL_143:
  v58 = v4;
LABEL_144:
  v68 = *(_DWORD *)(SGDGetUserSessionState(v51) + 13824);
  if ( (v68 & 8) != 0 && (unsigned __int8)(v4 + 127) <= 2u )
  {
    v69 = SGDGetUserSessionState(v67);
    ZwUpdateWnfStateData(&WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL, 0LL, 0LL, 0LL, v69, 0, 0);
    TraceLoggingPenHotkey(v68, v58);
  }
  return v74 == 0;
}
