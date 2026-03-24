/*
 * XREFs of xxxUpdateGlobalsAndSendKeyEvent @ 0x1C004C1F0
 * Callers:
 *     xxxKeyEventEx @ 0x1C004BFD0 (xxxKeyEventEx.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C012BB00 (NtMITSynthesizeKeyboardInput.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     UpdateAsyncKeyState @ 0x1C004C680 (UpdateAsyncKeyState.c)
 *     ApiSetEditionDoHotKeys @ 0x1C004C884 (ApiSetEditionDoHotKeys.c)
 *     ApiSetEditionHandleAltTabCancel @ 0x1C004C978 (ApiSetEditionHandleAltTabCancel.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C004CA8C (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C004CE34 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     ApiSetEditionHandleRawInput @ 0x1C004D718 (ApiSetEditionHandleRawInput.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C004D8C4 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C0098278 (ApiSetEditionGetActiveHKL.c)
 *     ApiSetEditionHandleAltTab @ 0x1C00A98A4 (ApiSetEditionHandleAltTab.c)
 *     UpdateKeyLights @ 0x1C00B0860 (UpdateKeyLights.c)
 *     ApiSetEditionIsSAS @ 0x1C00C07B4 (ApiSetEditionIsSAS.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01A1F34 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C01AFE98 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 *     PtiKbdFromQ @ 0x1C01B11A8 (PtiKbdFromQ.c)
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
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r15d
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rax
  int v29; // ecx
  __int16 v30; // di
  __int16 v31; // dx
  __int16 v32; // r13
  __int64 v33; // r8
  char result; // al
  unsigned __int8 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // eax
  __int16 ActiveHKL; // ax
  unsigned __int16 v41; // [rsp+82h] [rbp-67h]
  unsigned int v42; // [rsp+84h] [rbp-65h]
  int v44; // [rsp+8Ch] [rbp-5Dh]
  int v45; // [rsp+90h] [rbp-59h] BYREF
  __int64 v46; // [rsp+98h] [rbp-51h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-49h]
  __int64 v48; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-39h]
  __int64 v50; // [rsp+B8h] [rbp-31h]
  __int64 v51; // [rsp+C0h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+C8h] [rbp-21h] BYREF

  v12 = gptiCurrent;
  v49 = a5;
  v50 = a6;
  v51 = a12;
  v14 = a1 & 0x8000;
  v47 = a4;
  v41 = a1 & 0x100;
  v45 = 0;
  v44 = (unsigned __int16)((v14 != 0) + 256);
  if ( a11 )
    v15 = *a11;
  else
    v15 = 0LL;
  v42 = 0;
  v48 = v15;
  v46 = -1LL;
  if ( a8 )
  {
    if ( a10 )
    {
      v17 = *(_QWORD *)a10;
      v42 = *(_DWORD *)(a10 + 8);
    }
    else
    {
      v16 = *((_QWORD *)gptiCurrent + 53);
      v17 = *(_QWORD *)(v16 + 880);
      v42 = *(_DWORD *)(v16 + 12) >> 31;
    }
  }
  else
  {
    v17 = v46;
  }
  v19 = CKeyboardProcessor::HandleLeftRightVKs(a1);
  v21 = 4LL;
  if ( (byte_1C0250884 & 0x10) != 0 && (byte_1C0250884 & 4) == 0 )
    v44 = v20 + 4;
  v22 = gptiBlockInput;
  if ( gptiBlockInput && (struct tagTHREADINFO *)gptiBlockInput != v12 )
  {
    LODWORD(v46) = 0;
    LOBYTE(v21) = a1;
    if ( !(unsigned int)ApiSetEditionIsSAS(v21, &v46) )
    {
      v36 = 2LL;
      return InputTraceLogging::Keyboard::DropInput(v36);
    }
    v22 = 0LL;
    gptiBlockInput = 0LL;
  }
  if ( (_BYTE)v19 != (_BYTE)a1 )
  {
    v35 = a1 ^ 1;
    if ( !v14
      || (v18 = (unsigned int)(1 << (2 * (v35 & 3))),
          ((unsigned __int8)v18 & *((_BYTE *)&gafAsyncKeyState + ((unsigned __int64)v35 >> 2))) == 0) )
    {
      if ( !v22 || (struct tagTHREADINFO *)v22 == v12 )
      {
        LOBYTE(v18) = v19;
        LOBYTE(v22) = v14 != 0;
        UpdateAsyncKeyState(gpqForeground, v18, v22);
      }
    }
  }
  LOBYTE(v18) = a1;
  LOBYTE(v22) = v14 != 0;
  UpdateAsyncKeyState(gpqForeground, v18, v22);
  if ( gfEnableHexNumpad && gpqForeground )
  {
    v37 = ((__int64 (*)(void))PtiKbdFromQ)();
    v38 = (int)qword_1C0257000;
    if ( qword_1C0257000 )
      v38 = qword_1C0257000(v37);
    if ( !v38 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424) + 832LL) + 100LL) & 0x20) == 0 )
      LowLevelHexNumpad(a2, v19, v14, v41);
  }
  if ( !v14 )
  {
    if ( (_BYTE)v19 == 20
      || (unsigned __int8)(v19 + 112) <= 1u
      || (_BYTE)v19 == 21 && (ActiveHKL = ApiSetEditionGetActiveHKL(), (ActiveHKL & 0x3FF) == 0x11) )
    {
      UpdateKeyLights(a8);
      if ( qword_1C0257128 )
        qword_1C0257128(2147483654LL, 0LL, v19, 0LL, 0);
    }
  }
  if ( gptiForeground )
    v23 = *((_DWORD *)gptiForeground + 219);
  else
    v23 = 0;
  if ( (unsigned int)ApiSetEditionHandleAltTabCancel(v17, v42, (_DWORD)v12, v14, v19, a8, v23) )
  {
    v36 = 4LL;
    return InputTraceLogging::Keyboard::DropInput(v36);
  }
  LOBYTE(v24) = a1;
  LOBYTE(v25) = v19;
  if ( !(unsigned int)ApiSetEditionDoHotKeys(v25, v24, v14, v23, (__int64)&v48, (__int64)&v45) )
  {
    if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, v12, v17, v42) )
    {
      if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) == 0
        && ((a1 & 0x1000) == 0 || !a8 ? (v28 = v50) : (v28 = 0LL),
            LOBYTE(v27) = a1,
            LOBYTE(v26) = v19,
            (unsigned int)ApiSetEditionHandleRawInput(a3, a9, v26, v27, v44, v28, a2, a1, v14, v49)) )
      {
        v36 = 5LL;
      }
      else
      {
        if ( !v45 )
        {
          v29 = 4;
          if ( (BYTE4(gafAsyncKeyState) & 0x10) == 0 || (BYTE4(gafAsyncKeyState) & 4) != 0 || (_BYTE)v19 == 23 )
          {
            v30 = (v14 != 0) + 256;
            if ( (_BYTE)v19 == 18 )
            {
              if ( v14 )
              {
                if ( dword_1C02520A8 )
                  v30 = (v14 != 0) + 260;
                LOBYTE(v29) = 18;
                v32 = a2;
                ApiSetEditionHandleAltTab(v29, a2, v41, a3, v47, (__int64)&v48, v49, v30);
                v31 = v41;
                goto LABEL_25;
              }
              gppiLockSFW = 0LL;
            }
            v31 = v41;
          }
          else
          {
            v30 = (v14 != 0) + 260;
            v31 = v41 | 0x2000;
            if ( (_BYTE)v19 == 18 )
            {
              v32 = a2;
              dword_1C02520A8 = 1;
              if ( !v14 )
                gppiLockSFW = 0LL;
              goto LABEL_25;
            }
            dword_1C02520A8 = 0;
          }
          v32 = a2;
LABEL_25:
          if ( a8 && HIDWORD(v48) == 4 && v50 )
            v33 = *(unsigned __int16 *)(v50 + 6);
          else
            v33 = v47;
          return ApiSetEditionHandleAndPostKeyEvent(
                   a8,
                   v17,
                   v42,
                   v14,
                   v19,
                   v23,
                   v32,
                   a1,
                   v31,
                   a7,
                   (__int64)&v48,
                   a3,
                   v49,
                   v33,
                   v30,
                   v51);
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
  if ( (unsigned int)dword_1C024BA90 > 4 )
  {
    result = tlgKeywordOn((__int64)&dword_1C024BA90, 0x4000LL);
    if ( result )
      return tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C021FFAF, 0, 0, 2u, &v52);
  }
  return result;
}
