/*
 * XREFs of PspGetSetContextInternal @ 0x14063E6D0
 * Callers:
 *     PspGetSetContextSpecialApc @ 0x140407970 (PspGetSetContextSpecialApc.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140264410 (RtlGetExtendedContextLength.c)
 *     RtlpIsFrameInBoundsEx @ 0x1402657C8 (RtlpIsFrameInBoundsEx.c)
 *     RtlpVirtualUnwind @ 0x140265840 (RtlpVirtualUnwind.c)
 *     KeVerifyContextXStateCetU @ 0x1402658EC (KeVerifyContextXStateCetU.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1402C2860 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpGetStackLimits @ 0x14035B1A0 (RtlpGetStackLimits.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeVerifyContextIpForUserCet @ 0x1403F2D8C (KeVerifyContextIpForUserCet.c)
 *     RtlpCaptureContext @ 0x140407C10 (RtlpCaptureContext.c)
 *     KeDoesTebMatchThread @ 0x140526EB0 (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x140526ECC (KeGetCurrentUmsTeb.c)
 *     RtlCopyContext @ 0x14063CED8 (RtlCopyContext.c)
 *     PspGetContext @ 0x14063EDE4 (PspGetContext.c)
 *     PspSetContext @ 0x14063F1B0 (PspSetContext.c)
 *     VslGetSetSecureContext @ 0x14088FC24 (VslGetSetSecureContext.c)
 *     KeClearUmsThreadKernelLock @ 0x1408BD5D4 (KeClearUmsThreadKernelLock.c)
 *     KeUpdateUmsThreadState @ 0x1408BD8BC (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x1408BDFFC (KeBuildPrimaryThreadContext.c)
 *     KeCopyContextFromUch @ 0x1408BE2E0 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x1408BE59C (KeCopyContextFromUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x1408BEC3C (KeUpdatePrimaryThreadContext.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090ED2C (PspRundownUmsThreadForApcDelivery.c)
 *     PspSetUmsThreadContext @ 0x14090EEF8 (PspSetUmsThreadContext.c)
 *     PspSetContextState @ 0x14090F304 (PspSetContextState.c)
 */

__int64 __fastcall PspGetSetContextInternal(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rsi
  ULONG v7; // r12d
  _KTRAP_FRAME *TrapFrame; // r15
  int SetSecureContext; // eax
  _QWORD *i; // rcx
  char Reserved1; // cl
  _QWORD *Object; // rdx
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rcx
  int v16; // esi
  int v17; // eax
  __int64 v18; // r8
  int updated; // eax
  unsigned __int64 CurrentUmsTeb; // rax
  bool DoesTebMatchThread; // al
  __int64 v22; // rcx
  bool v23; // si
  int v24; // eax
  _QWORD *j; // rcx
  int v26; // r12d
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rsi
  unsigned int *v32; // rax
  unsigned __int64 v33; // rax
  _CONTEXT *v34; // rsi
  __int64 v35; // rcx
  char v37[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v38; // [rsp+64h] [rbp-9Ch] BYREF
  int v39; // [rsp+68h] [rbp-98h]
  ULONG ContextLength; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp-88h] BYREF
  _KTRAP_FRAME *v43; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v46; // [rsp+98h] [rbp-68h]
  __int128 v47; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-50h]
  __int128 v49; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-38h]
  _OWORD v51[2]; // [rsp+D0h] [rbp-30h] BYREF
  char v52[144]; // [rsp+F0h] [rbp-10h] BYREF
  char v53; // [rsp+180h] [rbp+80h] BYREF
  unsigned __int64 *v54; // [rsp+188h] [rbp+88h] BYREF
  char v55; // [rsp+190h] [rbp+90h] BYREF
  char v56; // [rsp+198h] [rbp+98h] BYREF
  char v57; // [rsp+1A0h] [rbp+A0h] BYREF
  char v58; // [rsp+1C8h] [rbp+C8h] BYREF
  char v59; // [rsp+1D0h] [rbp+D0h] BYREF
  char v60; // [rsp+1D8h] [rbp+D8h] BYREF
  char v61; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned __int64 v62; // [rsp+1E8h] [rbp+E8h]
  char v63; // [rsp+2F0h] [rbp+1F0h] BYREF
  char v64; // [rsp+300h] [rbp+200h] BYREF
  char v65; // [rsp+310h] [rbp+210h] BYREF
  char v66; // [rsp+320h] [rbp+220h] BYREF
  char v67; // [rsp+330h] [rbp+230h] BYREF
  char v68; // [rsp+340h] [rbp+240h] BYREF
  char v69; // [rsp+350h] [rbp+250h] BYREF
  char v70; // [rsp+360h] [rbp+260h] BYREF
  char v71; // [rsp+370h] [rbp+270h] BYREF
  char v72; // [rsp+380h] [rbp+280h] BYREF

  v46 = a3;
  v43 = 0LL;
  v45 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v37[0] = 0;
  v38 = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 120);
  ContextLength = 0;
  LOBYTE(v39) = 0;
  v7 = *(_DWORD *)(v6 + 48);
  if ( *(_BYTE *)(a1 + 88) )
  {
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x200) != 0 )
    {
      if ( RtlGetExtendedContextLength(v7, &ContextLength) < 0 )
      {
LABEL_75:
        *(_DWORD *)(a1 + 92) = -1073741823;
        goto LABEL_76;
      }
      SetSecureContext = VslGetSetSecureContext(a2, v6, ContextLength);
LABEL_8:
      *(_DWORD *)(a1 + 92) = SetSecureContext;
      goto LABEL_76;
    }
    for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    TrapFrame = (_KTRAP_FRAME *)(i - 50);
    Reserved1 = CurrentThread->Header.Reserved1;
    if ( (Reserved1 & 0x40) != 0 )
    {
      Object = CurrentThread->WaitBlock[3].Object;
      if ( (Object[10] & 4) != 0 )
      {
        v13 = *Object;
        v14 = PspRundownUmsThreadForApcDelivery(CurrentThread, &v38, *Object, 0LL);
        *(_DWORD *)(a1 + 92) = v14;
        if ( v14 >= 0 )
        {
          v15 = *(_QWORD *)(a1 + 120);
          if ( a2 )
          {
            v16 = PspSetUmsThreadContext(CurrentThread, *(_QWORD *)(a1 + 120), &v38);
          }
          else
          {
            v16 = 0;
            if ( (v38 & 2) != 0 )
              v16 = KeCopyContextFromUmsContext(v15, *(_QWORD *)CurrentThread->WaitBlock[3].Object);
            else
              KeCopyContextFromUch(v15, CurrentThread->WaitBlock[3].SparePtr);
          }
          *(_DWORD *)(a1 + 92) = v16;
          v17 = KeClearUmsThreadKernelLock(v13);
          if ( v17 < 0 )
            *(_DWORD *)(a1 + 92) = v17;
          if ( (v38 & 8) != 0 )
          {
            LOBYTE(v18) = 1;
            updated = KeUpdateUmsThreadState(v13, 0LL, v18);
            if ( updated < 0 )
              *(_DWORD *)(a1 + 92) = updated;
          }
        }
        goto LABEL_76;
      }
    }
    if ( Reserved1 < 0 )
    {
      CurrentUmsTeb = KeGetCurrentUmsTeb(CurrentThread);
      DoesTebMatchThread = KeDoesTebMatchThread((__int64)CurrentThread, CurrentUmsTeb);
      v23 = DoesTebMatchThread;
      if ( a2 )
      {
        v24 = KeUpdatePrimaryThreadContext(v22, *(_QWORD *)(a1 + 120));
        *(_DWORD *)(a1 + 92) = v24;
        if ( !v23 || v24 < 0 )
          goto LABEL_76;
      }
      else if ( !DoesTebMatchThread )
      {
        *(_DWORD *)(a1 + 92) = KeBuildPrimaryThreadContext(v22, 0, *(_QWORD *)(a1 + 120), 1, 0LL, 0LL);
        goto LABEL_76;
      }
    }
  }
  else
  {
    TrapFrame = CurrentThread->TrapFrame;
    if ( !TrapFrame || TrapFrame->SegCs != 16 )
      goto LABEL_75;
  }
  if ( (*(_BYTE *)(a1 + 89) & 2) != 0 )
  {
    if ( (unsigned __int8)RtlpGetStackLimits((__int64)&v42, (__int64)&v41) )
    {
      v48 = qword_140E00030;
      memset(v51, 0, sizeof(v51));
      v47 = *(_OWORD *)&xmmword_140E00020;
      RtlpCaptureContext();
      v30 = (unsigned __int64)v54;
      *(_QWORD *)(a1 + 280) = &v53;
      *(_QWORD *)(a1 + 296) = &v55;
      *(_QWORD *)(a1 + 304) = &v56;
      *(_QWORD *)(a1 + 312) = &v57;
      *(_QWORD *)(a1 + 352) = &v58;
      *(_QWORD *)(a1 + 360) = &v59;
      *(_QWORD *)(a1 + 368) = &v60;
      *(_QWORD *)(a1 + 376) = &v61;
      *(_QWORD *)(a1 + 176) = &v63;
      *(_QWORD *)(a1 + 184) = &v64;
      *(_QWORD *)(a1 + 192) = &v65;
      *(_QWORD *)(a1 + 200) = &v66;
      *(_QWORD *)(a1 + 208) = &v67;
      *(_QWORD *)(a1 + 216) = &v68;
      *(_QWORD *)(a1 + 224) = &v69;
      *(_QWORD *)(a1 + 232) = &v70;
      *(_QWORD *)(a1 + 240) = &v71;
      *(_QWORD *)(a1 + 248) = &v72;
      *(_QWORD *)(a1 + 288) = &v54;
      while ( 1 )
      {
        v31 = v62;
        if ( v62 <= 0xFFFF800000000000uLL || !RtlpIsFrameInBoundsEx(&v42, v30, &v41, (unsigned __int64 *)v51) )
          break;
        v32 = RtlpLookupFunctionEntryForStackWalks(v31, (__int64)&v47);
        if ( v32 )
        {
          if ( (int)RtlpVirtualUnwind(
                      0,
                      SDWORD2(v47),
                      v31,
                      (int)v32,
                      (__int64)v52,
                      (__int64)v37,
                      (__int64)&v45,
                      (__int64)&v43,
                      a1 + 128,
                      (__int64)&v42,
                      (__int64)&v41,
                      0LL) < 0 )
          {
            if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
              NT_ASSERT(
                "*** Ps:  Context unwind failure
    A stack frame did not unwind properly
    Perform a stack trace to f"
                "ind the culprit
    Use gh to continue!!
");
            goto LABEL_75;
          }
          v30 = (unsigned __int64)v54;
        }
        else
        {
          if ( !*((_QWORD *)&v47 + 1) )
            goto LABEL_75;
          v33 = *v54;
          v30 = (unsigned __int64)++v54;
          v62 = v33;
        }
        if ( v43 == TrapFrame )
          goto LABEL_34;
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
    goto LABEL_75;
  }
  for ( j = CurrentThread->InitialStack; (j[1] & 1) != 0; j = (_QWORD *)j[5] )
    ;
  *(_QWORD *)(a1 + 280) = j - 58;
  *(_QWORD *)(a1 + 304) = j - 56;
  *(_QWORD *)(a1 + 312) = j - 57;
  *(_QWORD *)(a1 + 352) = j - 55;
  *(_QWORD *)(a1 + 360) = j - 54;
  *(_QWORD *)(a1 + 368) = j - 53;
  *(_QWORD *)(a1 + 376) = j - 52;
  *(_QWORD *)(a1 + 176) = j - 84;
  *(_QWORD *)(a1 + 184) = j - 82;
  *(_QWORD *)(a1 + 192) = j - 80;
  *(_QWORD *)(a1 + 200) = j - 78;
  *(_QWORD *)(a1 + 208) = j - 76;
  *(_QWORD *)(a1 + 216) = j - 74;
  *(_QWORD *)(a1 + 224) = j - 72;
  *(_QWORD *)(a1 + 232) = j - 70;
  *(_QWORD *)(a1 + 240) = j - 68;
  *(_QWORD *)(a1 + 248) = j - 66;
  *(_QWORD *)(a1 + 296) = &TrapFrame->Rbp;
LABEL_34:
  v26 = v7 & 0x100008;
  if ( a2 )
  {
    if ( v26 == 1048584 )
    {
      v27 = (unsigned __int8)v39;
      if ( *(_BYTE *)(a1 + 88) == 1 )
        v27 = 1;
      v39 = v27;
    }
    if ( *(_BYTE *)(a1 + 88) != 1 )
      goto LABEL_46;
    v28 = *(_QWORD *)(a1 + 120);
    v44 = 0LL;
    SetSecureContext = KeVerifyContextXStateCetU((__int64)CurrentThread, v28, &v44);
    if ( SetSecureContext >= 0 )
    {
      if ( (*(_BYTE *)(a1 + 89) & 4) == 0
        || (v29 = *(_QWORD *)(a1 + 120),
            v49 = 0LL,
            LODWORD(v49) = 3,
            v50 = 0LL,
            SetSecureContext = KeVerifyContextIpForUserCet((__int64)CurrentThread, v29, (int *)&v49, (__int64)&v44),
            SetSecureContext >= 0) )
      {
LABEL_46:
        if ( CurrentThread[1].WaitBlock[3].Thread
          && *(_BYTE *)(a1 + 88) == 1
          && ((*(_BYTE *)(a1 + 89) & 2) != 0 || (CurrentThread->Header.Reserved1 & 8) != 0) )
        {
          PspSetContextState(CurrentThread, *(_QWORD *)(a1 + 120));
          *(_DWORD *)(a1 + 92) = 0;
        }
        else
        {
          PspSetContext(TrapFrame, a1 + 128, *(_QWORD *)(a1 + 120), *(unsigned __int8 *)(a1 + 88));
          *(_DWORD *)(a1 + 92) = 0;
        }
        goto LABEL_76;
      }
    }
    goto LABEL_8;
  }
  if ( v26 == 1048584 && *(_BYTE *)(a1 + 88) == 1 )
    _fxsave((void *)(*(_QWORD *)(a1 + 120) + 256LL));
  if ( CurrentThread[1].WaitBlock[3].Thread && *(_BYTE *)(a1 + 88) == 1 )
  {
    v34 = *(_CONTEXT **)(a1 + 120);
    PspGetContext(TrapFrame, a1 + 128, v34);
    if ( (CurrentThread->Header.Reserved1 & 8) != 0 )
    {
      RtlCopyContext(v34, v34->ContextFlags, (PCONTEXT)CurrentThread[1].WaitBlock[3].Thread);
      *(_DWORD *)(a1 + 92) = 0;
      goto LABEL_76;
    }
  }
  else
  {
    PspGetContext(TrapFrame, a1 + 128, *(_QWORD *)(a1 + 120));
  }
  *(_DWORD *)(a1 + 92) = 0;
LABEL_76:
  v35 = a1 + 96;
  if ( (*(_BYTE *)(a1 + 89) & 1) == 0 )
    v35 = 0LL;
  *v46 = v35;
  return (unsigned __int8)v39;
}
