/*
 * XREFs of PspGetSetContextInternal @ 0x1406EA840
 * Callers:
 *     PspGetSetContextSpecialApc @ 0x140420250 (PspGetSetContextSpecialApc.c)
 * Callees:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140281490 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlVirtualUnwind2 @ 0x140281680 (RtlVirtualUnwind2.c)
 *     RtlpIsFrameInBoundsEx @ 0x140282250 (RtlpIsFrameInBoundsEx.c)
 *     RtlpGetStackLimits @ 0x1403129F0 (RtlpGetStackLimits.c)
 *     RtlpValidateContextXStateDisabledFeatures @ 0x1403649B4 (RtlpValidateContextXStateDisabledFeatures.c)
 *     KeVerifyContextXStateCetU @ 0x1403649C8 (KeVerifyContextXStateCetU.c)
 *     RtlGetExtendedContextLength @ 0x140364A90 (RtlGetExtendedContextLength.c)
 *     KeVerifyContextIpForUserCet @ 0x14036551C (KeVerifyContextIpForUserCet.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlpCaptureContext @ 0x140420560 (RtlpCaptureContext.c)
 *     PspSetContext @ 0x1407603A0 (PspSetContext.c)
 *     PspGetContext @ 0x1407ED060 (PspGetContext.c)
 *     RtlCopyContext @ 0x1407EE220 (RtlCopyContext.c)
 *     VslGetSetSecureContext @ 0x14093F65C (VslGetSetSecureContext.c)
 *     PspSetContextState @ 0x1409B51B8 (PspSetContextState.c)
 */

__int64 __fastcall PspGetSetContextInternal(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 v3; // di
  _QWORD *v4; // rsi
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rax
  unsigned int v9; // r12d
  _KTRAP_FRAME *TrapFrame; // r15
  int SetSecureContext; // eax
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  unsigned __int64 v14; // rdi
  int v15; // eax
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rdx
  char v19; // r9
  __int64 v20; // rdi
  __int64 result; // rax
  __int64 v22; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v23; // [rsp+80h] [rbp-88h]
  unsigned __int64 v24; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v25; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v26; // [rsp+98h] [rbp-70h] BYREF
  _KTRAP_FRAME *v27; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v29; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-48h]
  __int128 v31; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-30h]
  _OWORD v33[4]; // [rsp+E8h] [rbp-20h] BYREF
  char v34[144]; // [rsp+128h] [rbp+20h] BYREF
  char v35; // [rsp+1B8h] [rbp+B0h] BYREF
  unsigned __int64 v36; // [rsp+1C0h] [rbp+B8h] BYREF
  char v37; // [rsp+1C8h] [rbp+C0h] BYREF
  char v38; // [rsp+1D0h] [rbp+C8h] BYREF
  char v39; // [rsp+1D8h] [rbp+D0h] BYREF
  char v40; // [rsp+200h] [rbp+F8h] BYREF
  char v41; // [rsp+208h] [rbp+100h] BYREF
  char v42; // [rsp+210h] [rbp+108h] BYREF
  char v43; // [rsp+218h] [rbp+110h] BYREF
  unsigned __int64 v44; // [rsp+220h] [rbp+118h]
  char v45; // [rsp+328h] [rbp+220h] BYREF
  char v46; // [rsp+338h] [rbp+230h] BYREF
  char v47; // [rsp+348h] [rbp+240h] BYREF
  char v48; // [rsp+358h] [rbp+250h] BYREF
  char v49; // [rsp+368h] [rbp+260h] BYREF
  char v50; // [rsp+378h] [rbp+270h] BYREF
  char v51; // [rsp+388h] [rbp+280h] BYREF
  char v52; // [rsp+398h] [rbp+290h] BYREF
  char v53; // [rsp+3A8h] [rbp+2A0h] BYREF
  char v54; // [rsp+3B8h] [rbp+2B0h] BYREF

  v3 = 0;
  v4 = (_QWORD *)(a1 + 128);
  v5 = a1;
  v27 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = *(_QWORD *)(a1 + 120);
  v23 = a3;
  LODWORD(v24) = 0;
  v9 = *(_DWORD *)(v8 + 48);
  LOWORD(v22) = 0;
  if ( *(_BYTE *)(a1 + 88) )
  {
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x200) != 0 )
    {
      if ( (int)RtlGetExtendedContextLength(v9, (__int64)&v24) >= 0 )
      {
        SetSecureContext = VslGetSetSecureContext(a2, *(_QWORD *)(v5 + 120), (unsigned int)v24);
        a3 = v23;
        a1 = v5;
        goto LABEL_60;
      }
      goto LABEL_58;
    }
    for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    TrapFrame = (_KTRAP_FRAME *)(i - 50);
  }
  else
  {
    TrapFrame = CurrentThread->TrapFrame;
    if ( !TrapFrame || TrapFrame->SegCs != 16 )
      goto LABEL_59;
  }
  if ( (*(_BYTE *)(v5 + 89) & 2) != 0 )
  {
    if ( (unsigned __int8)RtlpGetStackLimits((__int64)&v26, (__int64)&v25) )
    {
      v30 = qword_140E00040;
      memset(v33, 0, sizeof(v33));
      v29 = xmmword_140E00030;
      RtlpCaptureContext();
      v4[19] = &v35;
      v4[21] = &v37;
      v4[22] = &v38;
      v4[23] = &v39;
      v4[28] = &v40;
      v4[29] = &v41;
      v4[30] = &v42;
      v4[31] = &v43;
      v4[6] = &v45;
      v4[7] = &v46;
      v4[8] = &v47;
      v4[9] = &v48;
      v4[10] = &v49;
      v4[11] = &v50;
      v4[12] = &v51;
      v4[13] = &v52;
      v4[14] = &v53;
      v4[15] = &v54;
      v4[20] = &v36;
      while ( 1 )
      {
        v14 = v44;
        if ( v44 < 0xFFFF800000000000uLL || !RtlpIsFrameInBoundsEx(&v26, v36, &v25, (unsigned __int64 *)v33) )
          break;
        v15 = (unsigned int)RtlpLookupFunctionEntryForStackWalks(v14, (__int64)&v29);
        if ( !*((_QWORD *)&v29 + 1) )
          goto LABEL_57;
        if ( (int)RtlVirtualUnwind2(
                    0,
                    SDWORD2(v29),
                    v14,
                    v15,
                    (__int64)v34,
                    (__int64)&v22 + 1,
                    (__int64)&v28,
                    (__int64)&v27,
                    (__int64)v4,
                    (__int64)&v26,
                    (__int64)&v25,
                    0LL,
                    0) < 0 )
        {
          if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
            NT_ASSERT(
              "*** Ps:  Context unwind failure
    A stack frame did not unwind properly
    Perform a stack trace to fin"
              "d the culprit
    Use gh to continue!!
");
          goto LABEL_57;
        }
        if ( v27 == TrapFrame )
        {
          v3 = 0;
          goto LABEL_23;
        }
      }
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
        NT_ASSERT(
          "*** Ps:  Context unwind failure
    A stack frame did not unwind properly
    Perform a stack trace to find th"
          "e culprit
    Use gh to continue!!
");
LABEL_57:
      v3 = 0;
    }
LABEL_58:
    a3 = v23;
    a1 = v5;
LABEL_59:
    SetSecureContext = -1073741823;
    goto LABEL_60;
  }
  for ( j = CurrentThread->InitialStack; (j[1] & 1) != 0; j = (_QWORD *)j[5] )
    ;
  v4[19] = j - 58;
  v4[22] = j - 56;
  v4[23] = j - 57;
  v4[28] = j - 55;
  v4[29] = j - 54;
  v4[30] = j - 53;
  v4[31] = j - 52;
  v4[6] = j - 84;
  v4[7] = j - 82;
  v4[8] = j - 80;
  v4[9] = j - 78;
  v4[10] = j - 76;
  v4[11] = j - 74;
  v4[12] = j - 72;
  v4[13] = j - 70;
  v4[14] = j - 68;
  v4[15] = j - 66;
  v4[21] = &TrapFrame->Rbp;
LABEL_23:
  v16 = v9 & 0x100008;
  if ( a2 )
  {
    if ( v16 == 1048584 )
    {
      if ( *(_BYTE *)(v5 + 88) == 1 )
      {
        v3 = 1;
        LOBYTE(v22) = 1;
        goto LABEL_28;
      }
    }
    else if ( *(_BYTE *)(v5 + 88) == 1 )
    {
LABEL_28:
      v17 = *(_QWORD *)(v5 + 120);
      v24 = 0LL;
      SetSecureContext = KeVerifyContextXStateCetU((__int64)CurrentThread, v17, &v24);
      if ( SetSecureContext < 0 )
      {
        a3 = v23;
        a1 = v5;
        goto LABEL_60;
      }
      if ( (*(_BYTE *)(v5 + 89) & 4) != 0 )
      {
        v18 = *(_QWORD *)(v5 + 120);
        v31 = 0LL;
        LODWORD(v31) = 3;
        v32 = 0LL;
        SetSecureContext = KeVerifyContextIpForUserCet((__int64)CurrentThread, v18, (unsigned int *)&v31, (__int64)&v24);
        if ( SetSecureContext < 0 )
        {
          a3 = v23;
          a1 = v5;
          goto LABEL_60;
        }
      }
    }
    v19 = *(_BYTE *)(v5 + 88);
    if ( v19 == 1
      && (SetSecureContext = RtlpValidateContextXStateDisabledFeatures(
                               *(_QWORD *)(v5 + 120),
                               CurrentThread->ExtendedFeatureDisableMask),
          SetSecureContext < 0) )
    {
      a3 = v23;
      a1 = v5;
    }
    else if ( CurrentThread[1].WaitBlock[3].Thread
           && v19 == 1
           && ((*(_BYTE *)(v5 + 89) & 2) != 0 || (CurrentThread->Header.Reserved1 & 8) != 0) )
    {
      PspSetContextState(CurrentThread, *(_QWORD *)(v5 + 120));
      a3 = v23;
      SetSecureContext = 0;
      v3 = v22;
      a1 = v5;
    }
    else
    {
      PspSetContext(TrapFrame, v4, *(_QWORD *)(v5 + 120));
      a3 = v23;
      SetSecureContext = 0;
      v3 = v22;
      a1 = v5;
    }
    goto LABEL_60;
  }
  if ( v16 == 1048584 && *(_BYTE *)(v5 + 88) == 1 )
    _fxsave((void *)(*(_QWORD *)(v5 + 120) + 256LL));
  if ( CurrentThread[1].WaitBlock[3].Thread && *(_BYTE *)(v5 + 88) == 1 )
  {
    v20 = *(_QWORD *)(v5 + 120);
    PspGetContext(TrapFrame, v4, v20);
    if ( (CurrentThread->Header.Reserved1 & 8) != 0 )
    {
      RtlCopyContext(v20, *(unsigned int *)(v20 + 48), CurrentThread[1].WaitBlock[3].Thread);
      a3 = v23;
      SetSecureContext = 0;
      v3 = v22;
      a1 = v5;
      goto LABEL_60;
    }
  }
  else
  {
    PspGetContext(TrapFrame, v4, *(_QWORD *)(v5 + 120));
  }
  v3 = v22;
  SetSecureContext = 0;
  a3 = v23;
  a1 = v5;
LABEL_60:
  *(_DWORD *)(a1 + 92) = SetSecureContext;
  result = v3;
  if ( (*(_BYTE *)(v5 + 89) & 1) != 0 )
    *a3 = v5 + 96;
  else
    *a3 = 0LL;
  return result;
}
