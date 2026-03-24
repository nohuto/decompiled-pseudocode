/*
 * XREFs of xxxDoHotKeyStuff @ 0x1C01052A0
 * Callers:
 *     EditionDoHotKeys @ 0x1C0105250 (EditionDoHotKeys.c)
 * Callees:
 *     DoExplorerHangDetection @ 0x1C00089F0 (DoExplorerHangDetection.c)
 *     zzzCancelJournalling @ 0x1C0029398 (zzzCancelJournalling.c)
 *     _PostMessage @ 0x1C002DC40 (_PostMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D28C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A40 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     _PostThreadMessageEx @ 0x1C00DA7B4 (_PostThreadMessageEx.c)
 *     _SetMagnificationInputTransform @ 0x1C00EB690 (_SetMagnificationInputTransform.c)
 *     IsUninterceptable @ 0x1C0105218 (IsUninterceptable.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C01057DC (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     IsHotKey @ 0x1C0105878 (IsHotKey.c)
 *     IsSAS @ 0x1C0105958 (IsSAS.c)
 *     HasRawInputForegroundTarget @ 0x1C0105BA4 (HasRawInputForegroundTarget.c)
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NII@Z @ 0x1C0105C5C (-IsPenQuickLaunchAndShouldBeDisabled@@YA_NII@Z.c)
 *     ?IsPenQuickLaunchHotKey@@YA_NII@Z @ 0x1C0105CC8 (-IsPenQuickLaunchHotKey@@YA_NII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01EACE0 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01EAE7C (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@4444@Z @ 0x1C0224B80 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U2@.c)
 *     ?TraceLoggingPenHotkey@@YAXII@Z @ 0x1C02253E0 (-TraceLoggingPenHotkey@@YAXII@Z.c)
 *     ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1C0225AE8 (-TraceLoggingYieldedHotkey@@YAXII@Z.c)
 *     xxxActivateDebugger @ 0x1C02482C8 (xxxActivateDebugger.c)
 */

__int64 __fastcall xxxDoHotKeyStuff(unsigned int a1, int a2, int a3, struct tagINPUT_MESSAGE_SOURCE *a4)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // esi
  unsigned int v9; // edi
  int v10; // r13d
  __int64 v11; // rcx
  _WORD *v12; // rdi
  __int64 v13; // rax
  unsigned int v15; // eax
  int v16; // edx
  __int16 v17; // r15
  int v18; // eax
  __int16 v19; // r15
  void (__fastcall *v20)(_QWORD, _QWORD); // r8
  __int64 v21; // rsi
  int v22; // r12d
  __int64 v23; // r13
  __int64 v24; // rax
  struct _LARGE_STRING *v25; // r9
  struct tagINPUT_MESSAGE_SOURCE *v26; // rdi
  struct tagTHREADINFO *v27; // rdx
  unsigned int v28; // edi
  __int64 v29; // rax
  __int64 v30; // r9
  __int16 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // r8
  bool v34; // zf
  bool v35; // zf
  __int64 v36; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // r9d
  _QWORD *i; // rax
  int v42; // [rsp+28h] [rbp-A1h]
  void (__fastcall *v43)(_QWORD, _QWORD); // [rsp+60h] [rbp-69h] BYREF
  int v44; // [rsp+68h] [rbp-61h] BYREF
  int v45; // [rsp+6Ch] [rbp-5Dh] BYREF
  int v46; // [rsp+70h] [rbp-59h] BYREF
  BOOL v47; // [rsp+74h] [rbp-55h] BYREF
  _BYTE v48[8]; // [rsp+78h] [rbp-51h] BYREF
  __int64 v49; // [rsp+80h] [rbp-49h] BYREF
  __int128 v50; // [rsp+88h] [rbp-41h] BYREF
  __int64 v51; // [rsp+98h] [rbp-31h]
  _QWORD v52[3]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-11h] BYREF
  __int128 v54; // [rsp+C0h] [rbp-9h]
  __int64 v55; // [rsp+D0h] [rbp+7h]
  int v56; // [rsp+D8h] [rbp+Fh]
  char v57; // [rsp+130h] [rbp+67h] BYREF
  unsigned int v58; // [rsp+138h] [rbp+6Fh]
  int v59; // [rsp+140h] [rbp+77h]
  struct tagINPUT_MESSAGE_SOURCE *v60; // [rsp+148h] [rbp+7Fh]

  v60 = a4;
  v59 = a3;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v48);
  v7 = 0;
  v58 = 0;
  v8 = 0;
  v9 = 0;
  switch ( a1 )
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
      if ( a1 <= 0x5A || a1 > 0x5C )
        gfsModOnlyCandidate = 0;
      else
        v8 = 8;
      break;
  }
  if ( a2 )
  {
    gfsModifiers &= ~v8;
    if ( v8 )
    {
      v9 = gfsModOnlyCandidate;
      v58 = gfsModOnlyCandidate;
      gfsModOnlyCandidate = 0;
    }
    if ( qword_1C033AAC8 )
      qword_1C033AAC8 = 0LL;
  }
  else
  {
    v15 = v8 | gfsModifiers;
    gfsModifiers |= v8;
    if ( v8 )
      gfsModOnlyCandidate = v15;
  }
  LOBYTE(v6) = a1;
  v10 = IsSAS(v6, &gfsModifiers);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v48);
  if ( a1 == 174 )
  {
    if ( a2 )
    {
LABEL_95:
      gbVolumeDownPressed = 0;
      goto LABEL_13;
    }
    if ( !gbVolumeUpPressed )
    {
      gbVolumeDownPressed = 1;
      goto LABEL_13;
    }
    xxxHandleVolumeUpDownCombo();
LABEL_92:
    gbVolumeUpPressed = 0;
    goto LABEL_13;
  }
  if ( a1 == 175 )
  {
    if ( !a2 )
    {
      if ( !gbVolumeDownPressed )
      {
        gbVolumeUpPressed = 1;
        goto LABEL_13;
      }
      xxxHandleVolumeUpDownCombo();
      goto LABEL_95;
    }
    goto LABEL_92;
  }
LABEL_13:
  if ( !v10 && (gfInNumpadHexInput & 1) != 0 )
    return 0LL;
  if ( v9 && a2 )
  {
    v12 = (_WORD *)IsHotKey(v9);
  }
  else
  {
    v12 = (_WORD *)IsHotKey(gfsModifiers);
    if ( !v12 || !v10 )
    {
      v13 = IsUninterceptable();
      if ( v13 )
        v12 = (_WORD *)v13;
    }
  }
  if ( v12 || !a2 && (gfsModifiers & 8) != 0 && (a1 - 19 <= 0x47 || a1 <= 0xF || a1 - 93 <= 0x22) )
  {
    v16 = 0;
    if ( v12 )
    {
      if ( *(_QWORD *)v12 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)v12 + 424LL);
        if ( v11 )
          v16 = *(_DWORD *)(v11 + 56);
      }
    }
    if ( (unsigned int)dword_1C032B3D8 > 5
      && (qword_1C032B3E8 & 0x400000000000LL) != 0
      && (qword_1C032B3F0 & 0x400000000000LL) == qword_1C032B3F0 )
    {
      v44 = v16;
      v45 = v16;
      v46 = a2;
      v47 = v12 != 0LL;
      v57 = a1;
      LODWORD(v43) = gfsModifiers;
      v49 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (unsigned int)&unk_1C02F30E2,
        v47,
        gfsModifiers,
        (__int64)&v49,
        (__int64)&v43,
        (__int64)&v57,
        (__int64)&v47,
        (__int64)&v46,
        (__int64)&v45,
        (__int64)&v44);
    }
    if ( v12 && gbLockScreenActive && !v10 && (v12[13] & 0x2000) == 0 )
      return 0LL;
  }
  WindowArrangementSequence::TestSequence(
    (WindowArrangementSequence *)v12,
    (const struct tagHOTKEY *const)a1,
    v8,
    gfsModifiers,
    a2 == 0,
    v42);
  if ( !v12 )
    return 0LL;
  v17 = v12[13];
  if ( v17 < 0 && !v10 && v60 && *((_DWORD *)v60 + 1) != 4 )
    return 0LL;
  v51 = 0LL;
  v50 = 0LL;
  if ( (v17 & 0x8800) == 0
    && (unsigned int)HasRawInputForegroundTarget(&v50)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v50 + 1) + 424LL) + 832LL) + 100LL) & 0x200) != 0 )
  {
    return 0LL;
  }
  v18 = *((_DWORD *)v12 + 8);
  if ( v18 == -7 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 168LL);
    if ( v21 )
    {
      gfsModOnlyCandidate = 0;
      goto LABEL_81;
    }
  }
  else if ( (unsigned int)(v18 + 6) <= 1 )
  {
    if ( !a2 )
      return (unsigned int)xxxActivateDebugger((unsigned __int16)v12[12]);
    return v7;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 64LL) & 1) != 0
    && *(PVOID *)(*(_QWORD *)v12 + 456LL) != grpdeskLogon
    && !*((_QWORD *)v12 + 1)
    && gbLockScreenActive
    && (v17 & 0x2000) == 0
    || !v58 && a2 )
  {
    return 0LL;
  }
  if ( v10 || a1 == 27 && gfsModifiers == 2 )
  {
    zzzCancelJournalling();
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 216LL) )
    {
      v53 = 0LL;
      v55 = 0LL;
      v54 = 0LL;
      v56 = 3;
      SetMagnificationInputTransform((__int128 *)&v53, v32, v33);
    }
    CancelCapturedMipOverride();
  }
  if ( !v59 )
    goto LABEL_54;
  switch ( a1 )
  {
    case 9u:
      v35 = (v59 & 1) == 0;
      goto LABEL_134;
    case 0xDu:
      v35 = (v59 & 8) == 0;
      goto LABEL_134;
    case 0x1Bu:
      if ( (v59 & 2) != 0 && (gfsModifiers & 3) == 1 )
        return 0LL;
      if ( (v59 & 0x40) == 0 )
        break;
      v34 = (gfsModifiers & 3) == 2;
      goto LABEL_136;
    case 0x20u:
      v35 = (v59 & 4) == 0;
LABEL_134:
      if ( v35 )
        break;
      v34 = (gfsModifiers & 3) == 1;
      goto LABEL_136;
    case 0x2Cu:
      if ( (gfsModifiers & 3) == 0 && (v59 & 0x20) != 0 )
        return 0LL;
      if ( (v59 & 0x10) != 0 )
      {
        v34 = (gfsModifiers & 3) == 1;
LABEL_136:
        if ( v34 )
          return 0LL;
      }
      break;
  }
LABEL_54:
  if ( gfsModifiers == 2 && a1 == 27 && !a2 )
  {
    v52[2] = 0LL;
    if ( ghwndSwitch )
    {
      v36 = HMValidateHandleNoSecure(ghwndSwitch, 1);
      if ( v36 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v52[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v52;
        v52[1] = v36;
        HMLockObject(v36);
        xxxSetForegroundWindow2(v36, 0LL, 0);
        ThreadUnlock1(v38);
      }
    }
  }
  if ( (v12[13] & 0x1000) == 0 )
  {
    if ( !IsPenQuickLaunchAndShouldBeDisabled(gfsModifiers, a1) )
    {
      v19 = v12[13];
      v20 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v12 + 1);
      v21 = *((_QWORD *)v12 + 2);
      v22 = *((_DWORD *)v12 + 8);
      v23 = *(_QWORD *)v12;
      v43 = v20;
      if ( (v19 & 0x200) != 0 )
      {
        if ( gpqForeground
          && *(_QWORD *)(gpqForeground + 120LL)
          && (!IsPenQuickLaunchHotKey(gfsModifiers, a1) || (v40 & HIDWORD(gpdwCPUserPreferencesMask)) == 0) )
        {
          for ( i = (_QWORD *)*((_QWORD *)v12 + 6); i != (_QWORD *)(v12 + 24); i = (_QWORD *)*i )
          {
            if ( *(_QWORD *)(*(i - 3) + 432LL) == v39 )
            {
              v23 = *(i - 3);
              v21 = *(i - 2);
              v22 = *((_DWORD *)i - 1);
              v19 = *((_WORD *)i - 4);
              TraceLoggingYieldedHotkey((unsigned __int16)v12[12], *((_DWORD *)v12 + 7));
              v20 = 0LL;
              goto LABEL_58;
            }
          }
        }
        v20 = v43;
      }
LABEL_58:
      if ( (v19 & 0x100) != 0 )
        goto LABEL_70;
      if ( !v21 )
      {
        v29 = qword_1C033AAC8;
        v30 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
        v31 = v19 & 0x4000;
        if ( v20 )
        {
          if ( !v31 || v30 != qword_1C033AAC8 )
          {
            if ( qword_1C033AAC8 != v30 )
              v29 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
            qword_1C033AAC8 = v29;
            v20(v22, (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16));
          }
          goto LABEL_70;
        }
        if ( v31 && v30 == qword_1C033AAC8 )
        {
          v26 = v60;
        }
        else
        {
          v26 = v60;
          if ( qword_1C033AAC8 != v30 )
            v29 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
          qword_1C033AAC8 = v29;
          PostThreadMessageEx(v23, 786LL, v22, v30, v60);
        }
        v27 = (struct tagTHREADINFO *)v23;
        goto LABEL_69;
      }
      if ( v21 != 1 )
      {
LABEL_61:
        if ( !v21 )
        {
LABEL_70:
          v28 = gfsModifiers;
          if ( (gfsModifiers & 8) != 0 && a1 - 129 <= 2 )
          {
            ZwUpdateWnfStateData(&WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL, 0LL, 0LL);
            TraceLoggingPenHotkey(v28, a1);
          }
          LOBYTE(v7) = v58 == 0;
          return v7;
        }
        if ( v21 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 24) + 8LL) + 168LL) || v22 != 61744 )
        {
          v24 = qword_1C033AAC8;
          v25 = (struct _LARGE_STRING *)((unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16));
          if ( (v19 & 0x4000) != 0 && v25 == (struct _LARGE_STRING *)qword_1C033AAC8 )
          {
            v26 = v60;
          }
          else
          {
            v26 = v60;
            if ( (struct _LARGE_STRING *)qword_1C033AAC8 != v25 )
              v24 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
            qword_1C033AAC8 = v24;
            _PostTransformableMessageExtended(v21, 0x312u, v22, v25, v60, 1);
          }
          goto LABEL_68;
        }
LABEL_81:
        DoExplorerHangDetection(*(struct tagDESKTOP **)(v21 + 24));
        PostMessage(v21, 274, 61744, 0);
        v26 = v60;
        if ( qword_1C033AAC8 )
          qword_1C033AAC8 = 0LL;
LABEL_68:
        v27 = *(struct tagTHREADINFO **)(v21 + 16);
LABEL_69:
        CInputGlobals::SetPtiLastWoken(gpInputGlobals, v27, *((_DWORD *)v26 + 1) == 1);
        goto LABEL_70;
      }
      if ( gpqForeground )
      {
        v21 = *(_QWORD *)(gpqForeground + 112LL);
        goto LABEL_61;
      }
    }
    return 0LL;
  }
  return HandleIAMHotKey((const struct tagHOTKEY *const)v12);
}
