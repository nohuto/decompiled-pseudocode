/*
 * XREFs of PspGetSetContextInternal @ 0x1407035C0
 * Callers:
 *     PspGetSetContextSpecialApc @ 0x140429670 (PspGetSetContextSpecialApc.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     RtlVirtualUnwind2 @ 0x140296070 (RtlVirtualUnwind2.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140296DC0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpIsFrameInBoundsEx @ 0x140297A70 (RtlpIsFrameInBoundsEx.c)
 *     RtlpValidateContextXStateDisabledFeatures @ 0x140298364 (RtlpValidateContextXStateDisabledFeatures.c)
 *     KeVerifyContextXStateCetU @ 0x140298378 (KeVerifyContextXStateCetU.c)
 *     KeVerifyContextIpForUserCet @ 0x1402989A8 (KeVerifyContextIpForUserCet.c)
 *     RtlpGetStackLimits @ 0x1402AB970 (RtlpGetStackLimits.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlpCaptureContext @ 0x140429980 (RtlpCaptureContext.c)
 *     RtlCopyContext @ 0x140702F70 (RtlCopyContext.c)
 *     PspGetContext @ 0x140703C00 (PspGetContext.c)
 *     PspSetContext @ 0x140703FB0 (PspSetContext.c)
 *     VslGetSetSecureContext @ 0x14093237C (VslGetSetSecureContext.c)
 *     PspSetContextState @ 0x1409B4D94 (PspSetContextState.c)
 */

__int64 __fastcall PspGetSetContextInternal(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 v3; // r13
  _QWORD *v4; // rsi
  __int64 v5; // rdi
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
  _DWORD *v17; // rdx
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
  __int64 v29; // [rsp+B0h] [rbp-58h]
  __int128 v30; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-40h]
  __int128 v32; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-28h]
  _OWORD v34[4]; // [rsp+E8h] [rbp-20h] BYREF
  char v35[144]; // [rsp+128h] [rbp+20h] BYREF
  char v36; // [rsp+1B8h] [rbp+B0h] BYREF
  unsigned __int64 v37; // [rsp+1C0h] [rbp+B8h] BYREF
  char v38; // [rsp+1C8h] [rbp+C0h] BYREF
  char v39; // [rsp+1D0h] [rbp+C8h] BYREF
  char v40; // [rsp+1D8h] [rbp+D0h] BYREF
  char v41; // [rsp+200h] [rbp+F8h] BYREF
  char v42; // [rsp+208h] [rbp+100h] BYREF
  char v43; // [rsp+210h] [rbp+108h] BYREF
  char v44; // [rsp+218h] [rbp+110h] BYREF
  unsigned __int64 v45; // [rsp+220h] [rbp+118h]
  char v46; // [rsp+328h] [rbp+220h] BYREF
  char v47; // [rsp+338h] [rbp+230h] BYREF
  char v48; // [rsp+348h] [rbp+240h] BYREF
  char v49; // [rsp+358h] [rbp+250h] BYREF
  char v50; // [rsp+368h] [rbp+260h] BYREF
  char v51; // [rsp+378h] [rbp+270h] BYREF
  char v52; // [rsp+388h] [rbp+280h] BYREF
  char v53; // [rsp+398h] [rbp+290h] BYREF
  char v54; // [rsp+3A8h] [rbp+2A0h] BYREF
  char v55; // [rsp+3B8h] [rbp+2B0h] BYREF

  v3 = 0;
  v4 = (_QWORD *)(a1 + 128);
  v5 = a2;
  v27 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  LOBYTE(v22) = 0;
  CurrentThread = KeGetCurrentThread();
  v8 = *(_QWORD *)(a1 + 120);
  v23 = a3;
  v29 = a2;
  v9 = *(_DWORD *)(v8 + 48);
  LODWORD(v24) = 0;
  if ( *(_BYTE *)(a1 + 88) )
  {
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x200) != 0 )
    {
      if ( (int)RtlGetExtendedContextLength(v9, (__int64)&v24) >= 0 )
      {
        SetSecureContext = VslGetSetSecureContext(v5, *(_QWORD *)(a1 + 120), (unsigned int)v24);
        a3 = v23;
        goto LABEL_59;
      }
      goto LABEL_57;
    }
    for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    TrapFrame = (_KTRAP_FRAME *)(i - 50);
  }
  else
  {
    TrapFrame = CurrentThread->TrapFrame;
    if ( !TrapFrame || TrapFrame->SegCs != 16 )
      goto LABEL_58;
  }
  if ( (*(_BYTE *)(a1 + 89) & 2) != 0 )
  {
    if ( (unsigned __int8)RtlpGetStackLimits((__int64)&v26, (__int64)&v25) )
    {
      v31 = qword_140E00040;
      memset(v34, 0, sizeof(v34));
      v30 = xmmword_140E00030;
      RtlpCaptureContext();
      v4[19] = &v36;
      v4[21] = &v38;
      v4[22] = &v39;
      v4[23] = &v40;
      v4[28] = &v41;
      v4[29] = &v42;
      v4[30] = &v43;
      v4[31] = &v44;
      v4[6] = &v46;
      v4[7] = &v47;
      v4[8] = &v48;
      v4[9] = &v49;
      v4[10] = &v50;
      v4[11] = &v51;
      v4[12] = &v52;
      v4[13] = &v53;
      v4[14] = &v54;
      v4[15] = &v55;
      v4[20] = &v37;
      while ( 1 )
      {
        v14 = v45;
        if ( v45 <= 0xFFFF800000000000uLL || !RtlpIsFrameInBoundsEx(&v26, v37, &v25, (unsigned __int64 *)v34) )
          break;
        v15 = (unsigned int)RtlpLookupFunctionEntryForStackWalks(v14, (__int64)&v30);
        if ( !*((_QWORD *)&v30 + 1) )
          goto LABEL_57;
        if ( (int)RtlVirtualUnwind2(
                    0,
                    SDWORD2(v30),
                    v14,
                    v15,
                    (__int64)v35,
                    (__int64)&v22,
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
          v5 = v29;
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
    }
LABEL_57:
    a3 = v23;
LABEL_58:
    SetSecureContext = -1073741823;
    goto LABEL_59;
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
  if ( v5 )
  {
    if ( v16 == 1048584 )
    {
      if ( *(_BYTE *)(a1 + 88) == 1 )
      {
        v3 = 1;
        goto LABEL_28;
      }
    }
    else if ( *(_BYTE *)(a1 + 88) == 1 )
    {
LABEL_28:
      v17 = *(_DWORD **)(a1 + 120);
      v24 = 0LL;
      SetSecureContext = KeVerifyContextXStateCetU((__int64)CurrentThread, v17, &v24);
      if ( SetSecureContext < 0 )
      {
        a3 = v23;
        goto LABEL_59;
      }
      if ( (*(_BYTE *)(a1 + 89) & 4) != 0 )
      {
        v18 = *(_QWORD *)(a1 + 120);
        v32 = 0LL;
        LODWORD(v32) = 3;
        v33 = 0LL;
        SetSecureContext = KeVerifyContextIpForUserCet((__int64)CurrentThread, v18, (unsigned int *)&v32, (__int64)&v24);
        if ( SetSecureContext < 0 )
        {
          a3 = v23;
          goto LABEL_59;
        }
      }
    }
    v19 = *(_BYTE *)(a1 + 88);
    if ( v19 == 1
      && (SetSecureContext = RtlpValidateContextXStateDisabledFeatures(
                               *(_QWORD *)(a1 + 120),
                               CurrentThread->ExtendedFeatureDisableMask),
          SetSecureContext < 0) )
    {
      a3 = v23;
    }
    else if ( CurrentThread[1].WaitBlock[3].Thread
           && v19 == 1
           && ((*(_BYTE *)(a1 + 89) & 2) != 0 || (CurrentThread->Header.Reserved1 & 8) != 0) )
    {
      PspSetContextState(CurrentThread, *(_QWORD *)(a1 + 120));
      a3 = v23;
      SetSecureContext = 0;
    }
    else
    {
      PspSetContext(TrapFrame, v4, *(_QWORD *)(a1 + 120));
      a3 = v23;
      SetSecureContext = 0;
    }
    goto LABEL_59;
  }
  if ( v16 == 1048584 && *(_BYTE *)(a1 + 88) == 1 )
    _fxsave((void *)(*(_QWORD *)(a1 + 120) + 256LL));
  if ( CurrentThread[1].WaitBlock[3].Thread && *(_BYTE *)(a1 + 88) == 1 )
  {
    v20 = *(_QWORD *)(a1 + 120);
    PspGetContext(TrapFrame, v4, v20);
    if ( (CurrentThread->Header.Reserved1 & 8) != 0 )
    {
      RtlCopyContext(v20, *(_DWORD *)(v20 + 48), (__int64)CurrentThread[1].WaitBlock[3].Thread);
      a3 = v23;
      SetSecureContext = 0;
      goto LABEL_59;
    }
  }
  else
  {
    PspGetContext(TrapFrame, v4, *(_QWORD *)(a1 + 120));
  }
  a3 = v23;
  SetSecureContext = 0;
LABEL_59:
  *(_DWORD *)(a1 + 92) = SetSecureContext;
  result = v3;
  if ( (*(_BYTE *)(a1 + 89) & 1) != 0 )
    *a3 = a1 + 96;
  else
    *a3 = 0LL;
  return result;
}
