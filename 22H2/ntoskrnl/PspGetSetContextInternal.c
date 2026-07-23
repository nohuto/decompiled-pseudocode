/*
 * XREFs of PspGetSetContextInternal @ 0x1406C2670
 * Callers:
 *     PspGetSetContextSpecialApc @ 0x140406E10 (PspGetSetContextSpecialApc.c)
 * Callees:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14021DF20 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpGetStackLimits @ 0x1402D0BE0 (RtlpGetStackLimits.c)
 *     RtlGetExtendedContextLength @ 0x14033F480 (RtlGetExtendedContextLength.c)
 *     RtlpIsFrameInBoundsEx @ 0x140340838 (RtlpIsFrameInBoundsEx.c)
 *     RtlpVirtualUnwind @ 0x1403408B0 (RtlpVirtualUnwind.c)
 *     KeVerifyContextXStateCetU @ 0x14034095C (KeVerifyContextXStateCetU.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeVerifyContextIpForUserCet @ 0x1403F24AC (KeVerifyContextIpForUserCet.c)
 *     RtlpCaptureContext @ 0x1404070B0 (RtlpCaptureContext.c)
 *     KeDoesTebMatchThread @ 0x140526BB0 (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x140526BCC (KeGetCurrentUmsTeb.c)
 *     RtlCopyContext @ 0x1406C0EA8 (RtlCopyContext.c)
 *     PspGetContext @ 0x1406C2D84 (PspGetContext.c)
 *     PspSetContext @ 0x1406C3150 (PspSetContext.c)
 *     VslGetSetSecureContext @ 0x14088FB14 (VslGetSetSecureContext.c)
 *     KeClearUmsThreadKernelLock @ 0x1408BD4C4 (KeClearUmsThreadKernelLock.c)
 *     KeUpdateUmsThreadState @ 0x1408BD7AC (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x1408BDEEC (KeBuildPrimaryThreadContext.c)
 *     KeCopyContextFromUch @ 0x1408BE1D0 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x1408BE48C (KeCopyContextFromUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x1408BEB2C (KeUpdatePrimaryThreadContext.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090EC1C (PspRundownUmsThreadForApcDelivery.c)
 *     PspSetUmsThreadContext @ 0x14090EDE8 (PspSetUmsThreadContext.c)
 *     PspSetContextState @ 0x14090F1F4 (PspSetContextState.c)
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
  unsigned __int64 v32; // rax
  _CONTEXT *v33; // rsi
  __int64 v34; // rcx
  char *v36; // [rsp+20h] [rbp-E0h]
  __int64 *v37; // [rsp+28h] [rbp-D8h]
  __int64 *v38; // [rsp+30h] [rbp-D0h]
  _KTRAP_FRAME **v39; // [rsp+38h] [rbp-C8h]
  __int64 v40; // [rsp+40h] [rbp-C0h]
  unsigned __int64 *v41; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v42; // [rsp+50h] [rbp-B0h]
  __int64 v43; // [rsp+58h] [rbp-A8h]
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  int v45; // [rsp+68h] [rbp-98h]
  ULONG ContextLength; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned __int64 v47; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v48; // [rsp+78h] [rbp-88h] BYREF
  _KTRAP_FRAME *v49; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v50; // [rsp+88h] [rbp-78h] BYREF
  __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v52; // [rsp+98h] [rbp-68h]
  __int128 v53; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-50h]
  __int128 v55; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-38h]
  _OWORD v57[2]; // [rsp+D0h] [rbp-30h] BYREF
  char v58; // [rsp+F0h] [rbp-10h] BYREF
  char v59; // [rsp+180h] [rbp+80h] BYREF
  unsigned __int64 *v60; // [rsp+188h] [rbp+88h] BYREF
  char v61; // [rsp+190h] [rbp+90h] BYREF
  char v62; // [rsp+198h] [rbp+98h] BYREF
  char v63; // [rsp+1A0h] [rbp+A0h] BYREF
  char v64; // [rsp+1C8h] [rbp+C8h] BYREF
  char v65; // [rsp+1D0h] [rbp+D0h] BYREF
  char v66; // [rsp+1D8h] [rbp+D8h] BYREF
  char v67; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned __int64 v68; // [rsp+1E8h] [rbp+E8h]
  char v69; // [rsp+2F0h] [rbp+1F0h] BYREF
  char v70; // [rsp+300h] [rbp+200h] BYREF
  char v71; // [rsp+310h] [rbp+210h] BYREF
  char v72; // [rsp+320h] [rbp+220h] BYREF
  char v73; // [rsp+330h] [rbp+230h] BYREF
  char v74; // [rsp+340h] [rbp+240h] BYREF
  char v75; // [rsp+350h] [rbp+250h] BYREF
  char v76; // [rsp+360h] [rbp+260h] BYREF
  char v77; // [rsp+370h] [rbp+270h] BYREF
  char v78; // [rsp+380h] [rbp+280h] BYREF

  v52 = a3;
  v49 = 0LL;
  v51 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  LOBYTE(v44) = 0;
  HIDWORD(v44) = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 120);
  ContextLength = 0;
  LOBYTE(v45) = 0;
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
        v14 = PspRundownUmsThreadForApcDelivery(CurrentThread, (char *)&v44 + 4, *Object, 0LL);
        *(_DWORD *)(a1 + 92) = v14;
        if ( v14 >= 0 )
        {
          v15 = *(_QWORD *)(a1 + 120);
          if ( a2 )
          {
            v16 = PspSetUmsThreadContext(CurrentThread, *(_QWORD *)(a1 + 120), (char *)&v44 + 4);
          }
          else
          {
            v16 = 0;
            if ( (v44 & 0x200000000LL) != 0 )
              v16 = KeCopyContextFromUmsContext(v15, *(_QWORD *)CurrentThread->WaitBlock[3].Object);
            else
              KeCopyContextFromUch(v15, CurrentThread->WaitBlock[3].SparePtr);
          }
          *(_DWORD *)(a1 + 92) = v16;
          v17 = KeClearUmsThreadKernelLock(v13);
          if ( v17 < 0 )
            *(_DWORD *)(a1 + 92) = v17;
          if ( (v44 & 0x800000000LL) != 0 )
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
    if ( (unsigned __int8)RtlpGetStackLimits((__int64)&v48, (__int64)&v47) )
    {
      v54 = qword_140E00030;
      memset(v57, 0, sizeof(v57));
      v53 = *(_OWORD *)&xmmword_140E00020;
      RtlpCaptureContext();
      v30 = (unsigned __int64)v60;
      *(_QWORD *)(a1 + 280) = &v59;
      *(_QWORD *)(a1 + 296) = &v61;
      *(_QWORD *)(a1 + 304) = &v62;
      *(_QWORD *)(a1 + 312) = &v63;
      *(_QWORD *)(a1 + 352) = &v64;
      *(_QWORD *)(a1 + 360) = &v65;
      *(_QWORD *)(a1 + 368) = &v66;
      *(_QWORD *)(a1 + 376) = &v67;
      *(_QWORD *)(a1 + 176) = &v69;
      *(_QWORD *)(a1 + 184) = &v70;
      *(_QWORD *)(a1 + 192) = &v71;
      *(_QWORD *)(a1 + 200) = &v72;
      *(_QWORD *)(a1 + 208) = &v73;
      *(_QWORD *)(a1 + 216) = &v74;
      *(_QWORD *)(a1 + 224) = &v75;
      *(_QWORD *)(a1 + 232) = &v76;
      *(_QWORD *)(a1 + 240) = &v77;
      *(_QWORD *)(a1 + 248) = &v78;
      *(_QWORD *)(a1 + 288) = &v60;
      while ( 1 )
      {
        v31 = v68;
        if ( v68 <= 0xFFFF800000000000uLL || !RtlpIsFrameInBoundsEx(&v48, v30, &v47, (unsigned __int64 *)v57) )
          break;
        if ( RtlpLookupFunctionEntryForStackWalks(v31, (__int64)&v53) )
        {
          v43 = 0LL;
          v42 = &v47;
          v41 = &v48;
          v40 = a1 + 128;
          v39 = &v49;
          v38 = &v51;
          v37 = &v44;
          v36 = &v58;
          if ( (int)RtlpVirtualUnwind(0, *((__int64 *)&v53 + 1), v31) < 0 )
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
          v30 = (unsigned __int64)v60;
        }
        else
        {
          if ( !*((_QWORD *)&v53 + 1) )
            goto LABEL_75;
          v32 = *v60;
          v30 = (unsigned __int64)++v60;
          v68 = v32;
        }
        if ( v49 == TrapFrame )
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
      v27 = (unsigned __int8)v45;
      if ( *(_BYTE *)(a1 + 88) == 1 )
        v27 = 1;
      v45 = v27;
    }
    if ( *(_BYTE *)(a1 + 88) != 1 )
      goto LABEL_46;
    v28 = *(_QWORD *)(a1 + 120);
    v50 = 0LL;
    SetSecureContext = KeVerifyContextXStateCetU((__int64)CurrentThread, v28, &v50);
    if ( SetSecureContext >= 0 )
    {
      if ( (*(_BYTE *)(a1 + 89) & 4) == 0
        || (v29 = *(_QWORD *)(a1 + 120),
            v55 = 0LL,
            LODWORD(v55) = 3,
            v56 = 0LL,
            SetSecureContext = KeVerifyContextIpForUserCet((__int64)CurrentThread, v29, (int *)&v55, (__int64)&v50),
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
          PspSetContext(
            TrapFrame,
            a1 + 128,
            *(_QWORD *)(a1 + 120),
            *(unsigned __int8 *)(a1 + 88),
            v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44);
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
    v33 = *(_CONTEXT **)(a1 + 120);
    PspGetContext(TrapFrame, a1 + 128, v33);
    if ( (CurrentThread->Header.Reserved1 & 8) != 0 )
    {
      RtlCopyContext(v33, v33->ContextFlags, (PCONTEXT)CurrentThread[1].WaitBlock[3].Thread);
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
  v34 = a1 + 96;
  if ( (*(_BYTE *)(a1 + 89) & 1) == 0 )
    v34 = 0LL;
  *v52 = v34;
  return (unsigned __int8)v45;
}
