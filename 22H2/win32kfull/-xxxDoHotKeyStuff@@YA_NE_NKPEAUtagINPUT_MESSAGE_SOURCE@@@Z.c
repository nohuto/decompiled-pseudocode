/*
 * XREFs of ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00500BC
 * Callers:
 *     EditionDoHotKeys @ 0x1C0050070 (EditionDoHotKeys.c)
 * Callees:
 *     ?xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0010920 (-xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z @ 0x1C0014F98 (-IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z.c)
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1C0050618 (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 *     ?IsSAS@@YA_NEPEAI@Z @ 0x1C00506D4 (-IsSAS@@YA_NEPEAI@Z.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C0050780 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     ?IsUninterceptable@@YAPEAUtagHOTKEY@@PEAIE@Z @ 0x1C0050844 (-IsUninterceptable@@YAPEAUtagHOTKEY@@PEAIE@Z.c)
 *     ?ReportPenKey@@YAXIE@Z @ 0x1C00509C4 (-ReportPenKey@@YAXIE@Z.c)
 *     _SetMagnificationInputTransform @ 0x1C005AE40 (_SetMagnificationInputTransform.c)
 *     HasRawInputForegroundTarget @ 0x1C0060504 (HasRawInputForegroundTarget.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     zzzCancelJournalling @ 0x1C006EED0 (zzzCancelJournalling.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage @ 0x1C0139AA0 (Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage.c)
 *     ??B?$SGDKEYBOARDgfsModifiers@I@@QEBAIXZ @ 0x1C015240E (--B-$SGDKEYBOARDgfsModifiers@I@@QEBAIXZ.c)
 *     ??4?$SGDKEYBOARDgfsModOnlyCandidate@I@@QEAAAEBIAEBI@Z @ 0x1C01C00B4 (--4-$SGDKEYBOARDgfsModOnlyCandidate@I@@QEAAAEBIAEBI@Z.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01C00EC (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01C0270 (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 *     ?DismissTooltips@TooltipDismiss@@YAXXZ @ 0x1C022D52C (-DismissTooltips@TooltipDismiss@@YAXXZ.c)
 *     xxxActivateDebugger @ 0x1C022D650 (xxxActivateDebugger.c)
 */

bool __fastcall xxxDoHotKeyStuff(unsigned __int8 a1, unsigned __int8 a2, int a3, struct tagINPUT_MESSAGE_SOURCE *a4)
{
  unsigned int v4; // r14d
  int v5; // r15d
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  bool v16; // r12
  struct tagHOTKEY *v17; // rdi
  unsigned int v18; // eax
  TooltipDismiss *v19; // rcx
  unsigned int v20; // esi
  int v21; // eax
  __int64 v22; // rdx
  __int16 v23; // bx
  struct tagINPUT_MESSAGE_SOURCE *v24; // r13
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  char v28; // bl
  bool v29; // zf
  unsigned int v30; // eax
  unsigned int *v31; // rcx
  struct tagHOTKEY *v32; // rax
  bool v33; // zf
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // eax
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // eax
  int v50; // [rsp+28h] [rbp-40h]
  int v51; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v52[24]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v53; // [rsp+50h] [rbp-18h]
  int v54; // [rsp+58h] [rbp-10h]
  char v55; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v56; // [rsp+B8h] [rbp+50h]
  int v57; // [rsp+C0h] [rbp+58h]
  struct tagINPUT_MESSAGE_SOURCE *v58; // [rsp+C8h] [rbp+60h]

  v58 = a4;
  v57 = a3;
  v4 = a1;
  v5 = a2;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v55);
  v7 = 0;
  v8 = 0;
  v56 = 0;
  switch ( v4 )
  {
    case 0x10u:
      v8 = 4;
      break;
    case 0x11u:
      v8 = 2;
      break;
    case 0x12u:
      v8 = 1;
      break;
    default:
      if ( v4 - 91 < 2 )
      {
        v8 = 8;
      }
      else
      {
        v51 = 0;
        SGDKEYBOARDgfsModOnlyCandidate<unsigned int>::operator=(v6, &v51);
      }
      break;
  }
  v9 = SGDGetUserSessionState(v6);
  if ( (_BYTE)v5 )
  {
    v11 = ~v8;
    *(_DWORD *)(v9 + 13824) &= v11;
    if ( v8 )
    {
      v12 = SGDGetUserSessionState(v11);
      v51 = 0;
      v7 = *(_DWORD *)(v12 + 13828);
      v56 = v7;
      SGDKEYBOARDgfsModOnlyCandidate<unsigned int>::operator=(v13, &v51);
    }
    if ( *(_QWORD *)(SGDGetUserSessionState(v11) + 13784) )
      *(_QWORD *)(SGDGetUserSessionState(v10) + 13784) = 0LL;
  }
  else
  {
    *(_DWORD *)(v9 + 13824) |= v8;
    if ( v8 )
    {
      v51 = ((__int64 (*)(void))SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int)();
      SGDKEYBOARDgfsModOnlyCandidate<unsigned int>::operator=(v14, &v51);
    }
  }
  v15 = SGDGetUserSessionState(v10);
  v16 = IsSAS(v4, (unsigned int *)(v15 + 13824));
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v55);
  if ( (_BYTE)v4 != 0xAE )
  {
    if ( (_BYTE)v4 != 0xAF )
      goto LABEL_22;
    if ( (_BYTE)v5 )
      goto LABEL_21;
    if ( !gbVolumeDownPressed )
    {
      gbVolumeUpPressed = 1;
      goto LABEL_22;
    }
    xxxHandleVolumeUpDownCombo();
LABEL_74:
    gbVolumeDownPressed = 0;
    goto LABEL_22;
  }
  if ( (_BYTE)v5 )
    goto LABEL_74;
  if ( !gbVolumeUpPressed )
  {
    gbVolumeDownPressed = 1;
    goto LABEL_22;
  }
  xxxHandleVolumeUpDownCombo();
LABEL_21:
  gbVolumeUpPressed = 0;
LABEL_22:
  if ( !v16 && (gfInNumpadHexInput & 1) != 0 )
    return 0;
  if ( v7 && (_BYTE)v5 )
  {
    v17 = IsHotKey(v7, 0);
    goto LABEL_27;
  }
  v30 = ((__int64 (*)(void))SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int)();
  v17 = IsHotKey(v30, v4);
  if ( !v17 || !v16 )
  {
    v32 = IsUninterceptable(v31, v4);
    if ( !v32 )
    {
LABEL_27:
      if ( !v17 )
        goto LABEL_31;
      goto LABEL_28;
    }
    v17 = v32;
  }
LABEL_28:
  if ( gbLockScreenActive && !v16 && !_bittest16((const signed __int16 *)v17 + 17, 0xDu) )
    return 0;
LABEL_31:
  v18 = ((__int64 (*)(void))SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int)();
  WindowArrangementSequence::TestSequence(v17, (const struct tagHOTKEY *const)v4, v8, v18, v5 ^ 1, v50);
  v20 = v56;
  if ( v56 == 2 && (_BYTE)v5
    || (v21 = ((__int64 (*)(void))SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int)(), v22 = 0LL, v21 == 6)
    && (_BYTE)v4 == 121
    && !(_BYTE)v5 )
  {
    TooltipDismiss::DismissTooltips(v19);
    v22 = 0LL;
  }
  if ( !v17 )
    return 0;
  v23 = *((_WORD *)v17 + 17);
  v24 = v58;
  if ( v23 < 0 && !v16 && v58 && *((_DWORD *)v58 + 1) != 4 )
    return 0;
  memset(v52, 0, sizeof(v52));
  if ( (v23 & 0x8800) == 0 )
  {
    v25 = HasRawInputForegroundTarget(v52, 0LL);
    v22 = 0LL;
    if ( v25 )
    {
      v19 = *(TooltipDismiss **)(*(_QWORD *)&v52[8] + 424LL);
      if ( (*(_DWORD *)(*((_QWORD *)v19 + 106) + 100LL) & 0x200) != 0 )
        return 0;
    }
  }
  v26 = *((_DWORD *)v17 + 10);
  if ( v26 == -7 )
    goto LABEL_104;
  if ( (unsigned int)(v26 + 6) <= 1 )
  {
    if ( (_BYTE)v5 )
      v41 = 0;
    else
      v41 = xxxActivateDebugger(*((unsigned __int16 *)v17 + 16), 0LL);
    return v41 != 0;
  }
  v27 = *(unsigned int *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 64LL);
  if ( (v27 & 1) != 0 )
  {
    v27 = *(_QWORD *)v17;
    if ( *(PVOID *)(*(_QWORD *)v17 + 456LL) != grpdeskLogon
      && !*((_QWORD *)v17 + 1)
      && gbLockScreenActive
      && (v23 & 0x2000) == 0 )
    {
      return 0;
    }
  }
  if ( !v20 && (_BYTE)v5 )
    return 0;
  if ( v16
    || (_BYTE)v4 == 27 && (unsigned int)SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(v27, 0LL) == 2 )
  {
    zzzCancelJournalling(v27, v22);
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 224LL) )
    {
      memset(v52, 0, sizeof(v52));
      v53 = 0LL;
      v54 = 3;
      SetMagnificationInputTransform(v52);
    }
    CancelCapturedMipOverride();
  }
  v28 = v57;
  if ( !v57 )
    goto LABEL_90;
  if ( (_BYTE)v4 == 9 )
  {
    v29 = (v57 & 1) == 0;
LABEL_87:
    if ( !v29 )
    {
      v33 = (SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(v27, v22) & 3) == 1;
LABEL_89:
      if ( !v33 )
        goto LABEL_90;
      return 0;
    }
    goto LABEL_90;
  }
  if ( (_BYTE)v4 == 13 )
  {
    v29 = (v57 & 8) == 0;
    goto LABEL_87;
  }
  if ( (_BYTE)v4 != 27 )
  {
    if ( (_BYTE)v4 == 32 )
    {
      v29 = (v57 & 4) == 0;
    }
    else
    {
      if ( (_BYTE)v4 != 44 )
        goto LABEL_90;
      if ( (v57 & 0x20) != 0 && (SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(v27, v22) & 3) == 0 )
        return 0;
      v29 = (v28 & 0x10) == 0;
    }
    goto LABEL_87;
  }
  if ( (v57 & 2) != 0 && (SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(v27, v22) & 3) == 1 )
    return 0;
  if ( (v28 & 0x40) != 0 )
  {
    v33 = (SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(v27, v22) & 3) == 2;
    goto LABEL_89;
  }
LABEL_90:
  if ( (unsigned int)SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(v27, v22) == 2
    && (_BYTE)v4 == 27
    && !(_BYTE)v5 )
  {
    v35 = ghwndSwitch;
    memset(v52, 0, sizeof(v52));
    if ( ghwndSwitch )
    {
      LOBYTE(v34) = 1;
      v36 = HMValidateHandleNoSecure(ghwndSwitch, v34);
      v37 = v36;
      if ( v36 )
      {
        ThreadLock(v36, v52);
        xxxSetForegroundWindow2(v37, 0LL, 0LL);
        ThreadUnlock1(v39, v38, v40);
      }
    }
  }
  if ( *((_DWORD *)v17 + 10) == -17 )
  {
    v41 = HandleIAMHotKey(v17);
    return v41 != 0;
  }
  v43 = SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(v35, v34);
  if ( IsPenQuickLaunchAndShouldBeDisabled(v43, v4) )
    return 0;
LABEL_104:
  if ( (unsigned int)Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage(v19, v22) )
  {
    v46 = SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(v45, v44);
    ReportPenKey(v46, v4);
    xxxReportHotKey(v17, v5, v24);
  }
  else
  {
    xxxReportHotKey(v17, v5, v24);
    v49 = SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(v48, v47);
    ReportPenKey(v49, v4);
  }
  return v20 == 0;
}
