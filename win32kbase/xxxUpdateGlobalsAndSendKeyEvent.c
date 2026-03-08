/*
 * XREFs of xxxUpdateGlobalsAndSendKeyEvent @ 0x1C008097C
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C00087B0 (NtMITSynthesizeKeyboardInput.c)
 *     xxxKeyEventEx @ 0x1C007F2E0 (xxxKeyEventEx.c)
 * Callees:
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C000EE70 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     UpdateKeyLights @ 0x1C0031B40 (UpdateKeyLights.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     GetActiveHKL @ 0x1C007F950 (GetActiveHKL.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1C007FFC0 (IsKeyboardDelegationEnabledForThread.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C0080360 (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     UpdateAsyncKeyState @ 0x1C00922C0 (UpdateAsyncKeyState.c)
 *     ApiSetEditionHandleRawInput @ 0x1C00B9DC8 (ApiSetEditionHandleRawInput.c)
 *     ApiSetEditionHandleAltTabCancel @ 0x1C00BA778 (ApiSetEditionHandleAltTabCancel.c)
 *     ApiSetEditionDoHotKeys @ 0x1C00BABE4 (ApiSetEditionDoHotKeys.c)
 *     ApiSetEditionHandleAltTab @ 0x1C00CBA50 (ApiSetEditionHandleAltTab.c)
 *     xxxWindowEvent @ 0x1C00D40F8 (xxxWindowEvent.c)
 *     Feature_KIDV2__private_IsEnabledDeviceUsage @ 0x1C00DDF28 (Feature_KIDV2__private_IsEnabledDeviceUsage.c)
 *     GetKeyboardDelegationTargetQ @ 0x1C00E1100 (GetKeyboardDelegationTargetQ.c)
 *     PtiKbdFromQ @ 0x1C00F43EE (PtiKbdFromQ.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01E3DAC (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1C0214A98 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C0219C84 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C023EAE8 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     ApiSetEditionIsSAS @ 0x1C023FE40 (ApiSetEditionIsSAS.c)
 *     HasHidTable @ 0x1C0271E70 (HasHidTable.c)
 */

char __fastcall xxxUpdateGlobalsAndSendKeyEvent(
        unsigned __int16 a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        __int64 a10,
        __int64 *a11,
        __int64 a12)
{
  struct tagTHREADINFO *v12; // r14
  int v14; // ebp
  unsigned __int16 v15; // r13
  unsigned __int16 v16; // dx
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdi
  __int64 KeyboardDelegationTargetQ; // rax
  unsigned __int8 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rcx
  char result; // al
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int8 v45; // di
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // r13d
  int v49; // edx
  int v50; // ecx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int16 v61; // di
  __int64 v62; // rax
  __int64 v63; // r12
  __int16 v64; // r12
  int v65; // ecx
  int v66; // [rsp+80h] [rbp-78h]
  int v67; // [rsp+84h] [rbp-74h] BYREF
  int v68; // [rsp+88h] [rbp-70h]
  __int64 v69; // [rsp+90h] [rbp-68h] BYREF
  __int64 v70; // [rsp+98h] [rbp-60h] BYREF
  struct tagTHREADINFO *v71; // [rsp+A0h] [rbp-58h]
  unsigned __int16 v72; // [rsp+100h] [rbp+8h]
  unsigned int v76; // [rsp+150h] [rbp+58h]

  v12 = gptiCurrent;
  v71 = gptiCurrent;
  v14 = a1 & 0x8000;
  v15 = a1 & 0x100;
  v72 = a1 & 0x100;
  v67 = 0;
  v16 = (v14 != 0) + 256;
  v68 = v16;
  v17 = v16;
  v66 = v16;
  if ( a11 )
    v18 = *a11;
  else
    v18 = 0LL;
  v70 = v18;
  v76 = 0;
  v69 = -1LL;
  if ( a8 )
  {
    if ( a10 )
    {
      v19 = *(_QWORD *)a10;
      v76 = *(_DWORD *)(a10 + 8);
    }
    else
    {
      v20 = *((_QWORD *)gptiCurrent + 53);
      v19 = *(_QWORD *)(v20 + 864);
      v76 = *(_DWORD *)(v20 + 12) >> 31;
      v17 = v16;
    }
  }
  else
  {
    v19 = v69;
  }
  v21 = CKeyboardProcessor::HandleLeftRightVKs(a1);
  if ( (*(_BYTE *)(SGDGetUserSessionState(v23, v22, v24, v25) + 14060) & 0x10) != 0
    && (*(_BYTE *)(SGDGetUserSessionState(v27, v26, v28, v29) + 14060) & 4) == 0 )
  {
    v66 = v17 + 4;
  }
  if ( gptiBlockInput && (struct tagTHREADINFO *)gptiBlockInput != v12 )
  {
    LODWORD(v69) = 0;
    LOBYTE(v27) = a1;
    if ( !(unsigned int)ApiSetEditionIsSAS(v27, &v69) )
    {
      v38 = 2LL;
      return InputTraceLogging::Keyboard::DropInput(v38);
    }
    gptiBlockInput = 0LL;
  }
  if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() )
  {
    v34 = gpqForeground;
    if ( gpqForeground )
    {
      if ( IsKeyboardDelegationEnabledForThread(
             *(InputDelegation **)(gpqForeground + 104),
             (const struct tagTHREADINFO *)v30) )
      {
        KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
        if ( KeyboardDelegationTargetQ )
          v34 = KeyboardDelegationTargetQ;
      }
    }
    if ( (_BYTE)v21 != (_BYTE)a1 )
    {
      v36 = a1 ^ 1;
      if ( v14
        && (v37 = SGDGetUserSessionState(v31, v30, v32, v33),
            v30 = (unsigned int)(1 << (2 * (v36 & 3))),
            ((unsigned __int8)v30 & *(_BYTE *)(((unsigned __int64)v36 >> 2) + v37 + 13992)) != 0) )
      {
        v12 = v71;
      }
      else
      {
        v12 = v71;
        if ( !gptiBlockInput || (struct tagTHREADINFO *)gptiBlockInput == v71 )
        {
          LOBYTE(v30) = v21;
          LOBYTE(v32) = v14 != 0;
          UpdateAsyncKeyState(v34, v30, v32);
        }
      }
    }
    LOBYTE(v30) = a1;
    LOBYTE(v32) = v14 != 0;
    UpdateAsyncKeyState(v34, v30, v32);
    if ( !gfEnableHexNumpad || !v34 )
      goto LABEL_46;
    v43 = PtiKbdFromQ(v34);
    if ( (unsigned int)HasHidTable(v43) )
    {
      v44 = v34;
      goto LABEL_44;
    }
LABEL_45:
    LowLevelHexNumpad(a2, v21, a1 & 0x8000, v15);
    goto LABEL_46;
  }
  if ( (_BYTE)v21 != (_BYTE)a1 )
  {
    v45 = a1 ^ 1;
    if ( !v14
      || (v46 = SGDGetUserSessionState(v31, v30, v32, v33),
          v30 = (unsigned int)(1 << (2 * (v45 & 3))),
          ((unsigned __int8)v30 & *(_BYTE *)(((unsigned __int64)v45 >> 2) + v46 + 13992)) == 0) )
    {
      if ( !gptiBlockInput || (struct tagTHREADINFO *)gptiBlockInput == v12 )
      {
        LOBYTE(v30) = v21;
        LOBYTE(v32) = v14 != 0;
        UpdateAsyncKeyState(gpqForeground, v30, v32);
      }
    }
  }
  LOBYTE(v30) = a1;
  LOBYTE(v32) = v14 != 0;
  UpdateAsyncKeyState(gpqForeground, v30, v32);
  if ( !gfEnableHexNumpad || !gpqForeground )
    goto LABEL_46;
  v47 = ((__int64 (*)(void))PtiKbdFromQ)();
  if ( !(unsigned int)HasHidTable(v47) )
    goto LABEL_45;
  v44 = gpqForeground;
LABEL_44:
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(v44) + 424) + 824LL) + 100LL) & 0x20) == 0 )
    goto LABEL_45;
LABEL_46:
  if ( !v14
    && ((_BYTE)v21 == 20 || (unsigned __int8)(v21 + 112) <= 1u || (_BYTE)v21 == 21 && (GetActiveHKL() & 0x3FF) == 0x11) )
  {
    UpdateKeyLights(a8, v40, v41, v42);
    xxxWindowEvent(-2147483642, 0, v21, 0, 0);
  }
  if ( gptiForeground )
    v48 = *((_DWORD *)gptiForeground + 221);
  else
    v48 = 0;
  if ( (unsigned int)ApiSetEditionHandleAltTabCancel(v19, v76, (_DWORD)v12, a1 & 0x8000, v21, a8, v48) )
  {
    v38 = 4LL;
    return InputTraceLogging::Keyboard::DropInput(v38);
  }
  LOBYTE(v49) = a1;
  LOBYTE(v50) = v21;
  if ( (unsigned int)ApiSetEditionDoHotKeys(v50, v49, a1 & 0x8000, v48, (__int64)&v70, (__int64)&v67) )
  {
    result = 4;
    if ( (unsigned int)dword_1C02CA7E0 > 4 )
    {
      result = tlgKeywordOn((__int64)&dword_1C02CA7E0, 0x4000LL);
      if ( result )
        return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
                 &dword_1C02CA7E0,
                 &unk_1C029CBB1);
    }
    return result;
  }
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, (__int64)v12, v19, v76) )
  {
    v38 = 0LL;
    return InputTraceLogging::Keyboard::DropInput(v38);
  }
  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 1) == 0 )
  {
    v55 = (a1 & 0x1000) != 0 && a8 ? 0LL : a6;
    LOBYTE(v54) = a1;
    LOBYTE(v53) = v21;
    if ( (unsigned int)ApiSetEditionHandleRawInput(a3, a9, v53, v54, v66, v55, a2, a1, a1 & 0x8000, a5) )
    {
      v38 = 5LL;
      return InputTraceLogging::Keyboard::DropInput(v38);
    }
  }
  if ( v67 )
  {
    v38 = 6LL;
    return InputTraceLogging::Keyboard::DropInput(v38);
  }
  if ( (*(_BYTE *)(SGDGetUserSessionState(v52, v51, v53, v54) + 13996) & 0x10) == 0
    || (v60 = SGDGetUserSessionState(v57, v56, v58, v59), v57 = 4LL, (*(_BYTE *)(v60 + 13996) & 4) != 0)
    || (_BYTE)v21 == 23 )
  {
    v64 = v68;
    v61 = v68;
    if ( (_BYTE)v21 == 18 )
    {
      if ( v14 )
      {
        if ( *(_DWORD *)(SGDGetUserSessionState(v57, v56, v58, v59) + 13816) )
          v61 = v64 + 4;
        v63 = a5;
        LOBYTE(v65) = 18;
        ApiSetEditionHandleAltTab(v65, a2, v72, a3, a4, (__int64)&v70, a5, v61);
        goto LABEL_86;
      }
      gppiLockSFW = 0LL;
    }
  }
  else
  {
    v72 |= 0x2000u;
    v61 = v68 + 4;
    v62 = SGDGetUserSessionState(4LL, v56, v58, v59);
    if ( (_BYTE)v21 == 18 )
    {
      *(_DWORD *)(v62 + 13816) = 1;
      v63 = a5;
      if ( !v14 )
        gppiLockSFW = 0LL;
      goto LABEL_86;
    }
    *(_DWORD *)(v62 + 13816) = 0;
  }
  v63 = a5;
LABEL_86:
  if ( a8 && HIDWORD(v70) == 4 && a6 )
    a4 = *(unsigned __int16 *)(a6 + 6);
  return ApiSetEditionHandleAndPostKeyEvent(
           a8,
           v19,
           v76,
           a1 & 0x8000,
           v21,
           v48,
           a2,
           a1,
           v72,
           a7,
           (__int64)&v70,
           a3,
           v63,
           a4,
           v61,
           a12);
}
