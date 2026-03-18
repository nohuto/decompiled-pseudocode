/*
 * XREFs of xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003DC00
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C0005F10 (NtMITSynthesizeKeyboardInput.c)
 *     xxxKeyEventEx @ 0x1C003D9F0 (xxxKeyEventEx.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C003D6FC (ApiSetEditionHandleAndPostKeyEvent.c)
 *     UpdateAsyncKeyState @ 0x1C003E060 (UpdateAsyncKeyState.c)
 *     ApiSetEditionDoHotKeys @ 0x1C003E238 (ApiSetEditionDoHotKeys.c)
 *     ApiSetEditionHandleAltTabCancel @ 0x1C003E380 (ApiSetEditionHandleAltTabCancel.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C003E4F0 (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     ApiSetEditionHandleRawInput @ 0x1C003E94C (ApiSetEditionHandleRawInput.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C003EB54 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     GetActiveHKL @ 0x1C003F290 (GetActiveHKL.c)
 *     UpdateKeyLights @ 0x1C0042A40 (UpdateKeyLights.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ApiSetEditionHandleAltTab @ 0x1C00C0240 (ApiSetEditionHandleAltTab.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01DB3B8 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C01E93C0 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 *     PtiKbdFromQ @ 0x1C01EA3D8 (PtiKbdFromQ.c)
 *     ApiSetEditionIsSAS @ 0x1C0208F94 (ApiSetEditionIsSAS.c)
 */

char __fastcall xxxUpdateGlobalsAndSendKeyEvent(
        __int16 a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7,
        unsigned int a8,
        int a9,
        __int64 a10,
        __int64 *a11,
        __int64 a12)
{
  struct tagTHREADINFO *v12; // rdi
  int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned int v19; // esi
  int v20; // r8d
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r15d
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rax
  int v30; // ecx
  __int16 v31; // di
  __int16 v32; // dx
  __int16 v33; // r13
  __int64 v34; // r8
  char result; // al
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned __int16 v39; // [rsp+82h] [rbp-67h]
  unsigned int v40; // [rsp+84h] [rbp-65h]
  int v42; // [rsp+8Ch] [rbp-5Dh]
  int v43; // [rsp+90h] [rbp-59h] BYREF
  __int64 v44; // [rsp+98h] [rbp-51h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-49h]
  __int64 v46; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-39h]
  __int64 v48; // [rsp+B8h] [rbp-31h]
  __int64 v49; // [rsp+C0h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+C8h] [rbp-21h] BYREF

  v12 = gptiCurrent;
  v47 = a5;
  v48 = a6;
  v49 = a12;
  v14 = a1 & 0x8000;
  v45 = a4;
  v39 = a1 & 0x100;
  v43 = 0;
  v42 = (unsigned __int16)((v14 != 0) + 256);
  if ( a11 )
    v15 = *a11;
  else
    v15 = 0LL;
  v40 = 0;
  v46 = v15;
  v44 = -1LL;
  if ( a8 )
  {
    if ( a10 )
    {
      v17 = *(_QWORD *)a10;
      v40 = *(_DWORD *)(a10 + 8);
    }
    else
    {
      v16 = *((_QWORD *)gptiCurrent + 53);
      v17 = *(_QWORD *)(v16 + 880);
      v40 = *(_DWORD *)(v16 + 12) >> 31;
    }
  }
  else
  {
    v17 = v44;
  }
  v19 = CKeyboardProcessor::HandleLeftRightVKs(a1);
  v22 = 4LL;
  if ( (byte_1C0295764 & 0x10) != 0 && (byte_1C0295764 & 4) == 0 )
    v42 = v20 + 4;
  v23 = gptiBlockInput;
  if ( gptiBlockInput && (struct tagTHREADINFO *)gptiBlockInput != v12 )
  {
    LODWORD(v44) = 0;
    LOBYTE(v22) = a1;
    if ( !(unsigned int)ApiSetEditionIsSAS(v22, &v44) )
    {
      v36 = 2LL;
      return InputTraceLogging::Keyboard::DropInput(v36);
    }
    v23 = 0LL;
    gptiBlockInput = 0LL;
  }
  if ( (_BYTE)v19 != (_BYTE)a1 )
  {
    LOBYTE(v21) = a1 ^ 1;
    if ( !v14
      || (v18 = (unsigned int)(1 << (2 * (v21 & 3))),
          ((unsigned __int8)v18 & *((_BYTE *)&gafAsyncKeyState + ((unsigned __int64)(unsigned __int8)v21 >> 2))) == 0) )
    {
      if ( !v23 || (struct tagTHREADINFO *)v23 == v12 )
      {
        LOBYTE(v18) = v19;
        LOBYTE(v23) = v14 != 0;
        UpdateAsyncKeyState(gpqForeground, v18, v23, v21);
      }
    }
  }
  LOBYTE(v18) = a1;
  LOBYTE(v23) = v14 != 0;
  UpdateAsyncKeyState(gpqForeground, v18, v23, v21);
  if ( gfEnableHexNumpad )
  {
    if ( gpqForeground )
    {
      v37 = ((__int64 (*)(void))PtiKbdFromQ)();
      if ( !qword_1C029BD50
        || !(unsigned int)qword_1C029BD50(v37)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424) + 832LL) + 100LL) & 0x20) == 0 )
      {
        LowLevelHexNumpad(a2, v19, v14, v39);
      }
    }
  }
  if ( !v14
    && ((unsigned __int8)(v19 + 112) <= 1u || (_BYTE)v19 == 20 || (_BYTE)v19 == 21 && (GetActiveHKL() & 0x3FF) == 0x11) )
  {
    UpdateKeyLights(a8);
    if ( qword_1C029BE68 )
      qword_1C029BE68(2147483654LL, 0LL, v19, 0LL, 0);
  }
  if ( gptiForeground )
    v24 = *((_DWORD *)gptiForeground + 219);
  else
    v24 = 0;
  if ( (unsigned int)ApiSetEditionHandleAltTabCancel(v17, v40, (_DWORD)v12, v14, v19, a8, v24) )
  {
    v36 = 4LL;
    return InputTraceLogging::Keyboard::DropInput(v36);
  }
  LOBYTE(v25) = a1;
  LOBYTE(v26) = v19;
  if ( !(unsigned int)ApiSetEditionDoHotKeys(v26, v25, v14, v24, (__int64)&v46, (__int64)&v43) )
  {
    if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, v12, v17, v40) )
    {
      if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) == 0
        && ((a1 & 0x1000) == 0 || !a8 ? (v29 = v48) : (v29 = 0LL),
            LOBYTE(v28) = a1,
            LOBYTE(v27) = v19,
            (unsigned int)ApiSetEditionHandleRawInput(a3, a9, v27, v28, v42, v29, a2, a1, v14, v47)) )
      {
        v36 = 5LL;
      }
      else
      {
        if ( !v43 )
        {
          v30 = 4;
          if ( (BYTE4(gafAsyncKeyState) & 0x10) == 0 || (BYTE4(gafAsyncKeyState) & 4) != 0 || (_BYTE)v19 == 23 )
          {
            v31 = (v14 != 0) + 256;
            if ( (_BYTE)v19 == 18 )
            {
              if ( v14 )
              {
                if ( dword_1C029AD38 )
                  v31 = (v14 != 0) + 260;
                LOBYTE(v30) = 18;
                v33 = a2;
                ApiSetEditionHandleAltTab(v30, a2, v39, a3, v45, (__int64)&v46, v47, v31);
                v32 = v39;
                goto LABEL_28;
              }
              gppiLockSFW = 0LL;
            }
            v32 = v39;
          }
          else
          {
            v31 = (v14 != 0) + 260;
            v32 = v39 | 0x2000;
            if ( (_BYTE)v19 == 18 )
            {
              v33 = a2;
              dword_1C029AD38 = 1;
              if ( !v14 )
                gppiLockSFW = 0LL;
              goto LABEL_28;
            }
            dword_1C029AD38 = 0;
          }
          v33 = a2;
LABEL_28:
          if ( a8 && HIDWORD(v46) == 4 && v48 )
            v34 = *(unsigned __int16 *)(v48 + 6);
          else
            v34 = v45;
          return ApiSetEditionHandleAndPostKeyEvent(
                   a8,
                   v17,
                   v40,
                   v14,
                   v19,
                   v24,
                   v33,
                   a1,
                   v32,
                   a7,
                   (__int64)&v46,
                   a3,
                   v47,
                   v34,
                   v31,
                   v49);
        }
        v36 = 6LL;
      }
    }
    else
    {
      v36 = 0LL;
    }
    return InputTraceLogging::Keyboard::DropInput(v36);
  }
  result = 4;
  if ( (unsigned int)dword_1C028EE70 > 4 )
  {
    result = tlgKeywordOn((__int64)&dword_1C028EE70, 0x4000LL);
    if ( result )
      return tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C0263213, 0, 0, 2u, &v50);
  }
  return result;
}
