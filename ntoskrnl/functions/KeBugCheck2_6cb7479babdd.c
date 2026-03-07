void __fastcall __noreturn KeBugCheck2(
        unsigned int a1,
        __int64 a2,
        unsigned __int64 a3,
        const CHAR *a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdx
  signed __int32 v12; // eax
  unsigned int v13; // edx
  signed __int32 v14; // ecx
  char v15; // r12
  char CurrentStackInformation; // r8
  signed __int32 v17; // eax
  unsigned int v18; // edx
  signed __int32 v19; // ecx
  __int64 ExtendedSupervisorState; // rcx
  char v21; // r12
  int v22; // ecx
  size_t v23; // r8
  __int64 v24; // rbx
  char *v25; // rcx
  __int64 v26; // rdx
  _CONTEXT *Context; // rax
  __int128 v28; // xmm1
  char v29; // r9
  unsigned __int64 v30; // rdx
  unsigned int v31; // ecx
  __int64 v32; // r15
  __int64 v33; // rcx
  bool v34; // di
  bool v35; // si
  __int64 v36; // r8
  __int64 v37; // rbx
  bool v38; // cf
  unsigned __int64 Teb; // rax
  __int64 UnloadedDriver; // rax
  __int64 *v41; // rcx
  unsigned __int64 v42; // r15
  struct _KTHREAD *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  bool v47; // di
  int IsEmptyAffinity; // eax
  unsigned __int8 v49; // cl
  _DWORD *v50; // r8
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v54; // ecx
  bool v55; // di
  unsigned int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rcx
  _OWORD *v59; // rax
  char *v60; // rcx
  __int64 v61; // rdx
  __int128 v62; // xmm1
  unsigned int v63; // ebx
  int v64; // ecx
  char v65; // [rsp+41h] [rbp-BFh]
  char v66; // [rsp+44h] [rbp-BCh]
  char v67; // [rsp+48h] [rbp-B8h] BYREF
  bool v68; // [rsp+49h] [rbp-B7h]
  bool v69; // [rsp+4Ah] [rbp-B6h]
  __int64 v70; // [rsp+50h] [rbp-B0h]
  char v71; // [rsp+58h] [rbp-A8h]
  bool v72; // [rsp+59h] [rbp-A7h]
  char v73; // [rsp+5Ah] [rbp-A6h]
  PCSTR Format; // [rsp+60h] [rbp-A0h]
  unsigned int v75; // [rsp+68h] [rbp-98h] BYREF
  __int64 v76; // [rsp+70h] [rbp-90h]
  int v77; // [rsp+7Ch] [rbp-84h]
  __int64 v78; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v79; // [rsp+88h] [rbp-78h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-70h]
  struct _KPRCB *CurrentPrcb; // [rsp+98h] [rbp-68h]
  unsigned int Number; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall *v83)(); // [rsp+A8h] [rbp-58h]
  __int64 v84; // [rsp+B0h] [rbp-50h] BYREF
  void *Src; // [rsp+B8h] [rbp-48h] BYREF
  PCSTR v86; // [rsp+C0h] [rbp-40h]
  _DWORD v87[68]; // [rsp+D0h] [rbp-30h] BYREF
  char v88[1232]; // [rsp+1E0h] [rbp+E0h] BYREF
  char pszDest[176]; // [rsp+6B0h] [rbp+5B0h] BYREF

  v75 = a1;
  v70 = a6;
  memset(v87, 0, 0x108uLL);
  pszDest[0] = 0;
  CurrentThread = KeGetCurrentThread();
  v78 = 0LL;
  v83 = KiBugCheckProgress;
  v69 = IopAutoReboot != 0;
  v67 = 0;
  v66 = 0;
  v71 = 0;
  v73 = 0;
  Format = 0LL;
  v86 = 0LL;
  v76 = 0LL;
  v68 = 1;
  v72 = 0;
  v77 = 0;
  if ( (HvlpFlags & 2) != 0 )
    HvlNotifyRootCrashdump(4);
  v84 = 0LL;
  Src = 0LL;
  v79 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v11) = 4;
        else
          v11 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v11;
      }
    }
  }
  if ( KeGetCurrentThread()->InitialStack )
  {
    CurrentStackInformation = KeQueryCurrentStackInformation((__int64)&v79, (__int64)&Src, (__int64)&v84);
    v17 = KiBugCheckActive;
    v18 = (16 * KeGetCurrentPrcb()->Number) | 3;
    do
    {
      if ( (v17 & 3) == 3 )
      {
        v15 = 0;
        v65 = 0;
        goto LABEL_23;
      }
      v19 = v17;
      v17 = _InterlockedCompareExchange(&KiBugCheckActive, v18, v17);
    }
    while ( v17 != v19 );
    if ( CurrentStackInformation )
    {
      if ( v79 > 9 || (v22 = 929, !_bittest(&v22, v79)) )
      {
        v23 = v84 - (_QWORD)Src;
        if ( (unsigned __int64)(v84 - (_QWORD)Src) > 0x6000 )
          v23 = 24576LL;
        memmove(&KiPreBugcheckStackSaveArea, Src, v23);
      }
    }
    v15 = 1;
    v65 = 1;
    goto LABEL_34;
  }
  v12 = KiBugCheckActive;
  v13 = (16 * KeGetCurrentPrcb()->Number) | 3;
  do
  {
    if ( (v12 & 3) == 3 )
    {
      v15 = 0;
      goto LABEL_16;
    }
    v14 = v12;
    v12 = _InterlockedCompareExchange(&KiBugCheckActive, v13, v12);
  }
  while ( v12 != v14 );
  v15 = 1;
LABEL_16:
  v65 = v15;
  if ( v15 )
  {
LABEL_34:
    if ( KiRecoveryCallbackCount <= 0 )
      KiBugcheckOwnerKeepsOthersFrozen = 1;
  }
LABEL_23:
  if ( KeSmapEnabled )
    __asm { stac }
  CurrentPrcb = KeGetCurrentPrcb();
  ExtendedSupervisorState = (__int64)CurrentPrcb->ExtendedSupervisorState;
  Number = CurrentPrcb->Number;
  KeSaveSupervisorState(ExtendedSupervisorState, KeEnabledSupervisorXStateFeatures | 0x100);
  if ( !qword_140C3CDA0 )
    goto LABEL_26;
  if ( PopSimulateHiberBugcheck )
    PoPowerDownActionInProgress = 0;
  if ( *(_BYTE *)(qword_140C3CDA0 + 3) )
  {
    if ( v15 )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "A bugcheck occurred during the late stages of hibernate suspend or resume.\n"
        "Due to verification temporarily enabled by Po during this time,\n"
        "regular bugcheck processing may not work.\n"
        "\n");
      if ( v75 == 10 )
        DbgPrintEx(
          0x65u,
          0,
          "Memory was accessed during this time that was not properly marked\n"
          "for the boot phase of hibernate! Check the callstack and parameters\n"
          "to find the pages that need to be marked.\n"
          "\n");
    }
    v83 = 0LL;
    v21 = 1;
  }
  else
  {
LABEL_26:
    v21 = 0;
  }
  v24 = (__int64)CurrentPrcb;
  v25 = v88;
  v26 = 9LL;
  Context = CurrentPrcb->Context;
  do
  {
    *(_OWORD *)v25 = *(_OWORD *)&Context->P1Home;
    *((_OWORD *)v25 + 1) = *(_OWORD *)&Context->P3Home;
    *((_OWORD *)v25 + 2) = *(_OWORD *)&Context->P5Home;
    *((_OWORD *)v25 + 3) = *(_OWORD *)&Context->ContextFlags;
    *((_OWORD *)v25 + 4) = *(_OWORD *)&Context->SegGs;
    *((_OWORD *)v25 + 5) = *(_OWORD *)&Context->Dr1;
    *((_OWORD *)v25 + 6) = *(_OWORD *)&Context->Dr3;
    v25 += 128;
    v28 = *(_OWORD *)&Context->Dr7;
    Context = (_CONTEXT *)((char *)Context + 128);
    *((_OWORD *)v25 - 1) = v28;
    --v26;
  }
  while ( v26 );
  v29 = v65;
  *(_OWORD *)v25 = *(_OWORD *)&Context->P1Home;
  *((_OWORD *)v25 + 1) = *(_OWORD *)&Context->P3Home;
  *((_OWORD *)v25 + 2) = *(_OWORD *)&Context->P5Home;
  *((_OWORD *)v25 + 3) = *(_OWORD *)&Context->ContextFlags;
  *((_OWORD *)v25 + 4) = *(_OWORD *)&Context->SegGs;
  if ( !v65 )
  {
    v35 = 1;
    v47 = v72;
    goto LABEL_166;
  }
  IoNotifyDump(4);
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(2LL);
  v31 = v75;
  if ( v75 == 229 )
  {
    KiScanBugCheckCallbackList();
    ((void (__fastcall *)(_QWORD))off_140C01CB8[0])(0LL);
    HalReturnToFirmware(3);
  }
  qword_140C42448 = a2;
  qword_140C42450 = a3;
  if ( v75 == -1073741103 )
    v31 = 195;
  qword_140C42458 = (__int64)a4;
  KiBugCheckData = v31;
  v75 = v31;
  qword_140C42460 = a5;
  if ( v31 <= 0xCB )
  {
    if ( v31 == 203 )
    {
      v76 = a2;
      goto LABEL_103;
    }
    if ( v31 != 10 )
    {
      if ( v31 != 59 )
      {
        if ( v31 == 76 )
        {
          v41 = &qword_140C42448;
          v66 = 1;
          v71 = 1;
          v30 = (unsigned __int64)&KiCurrentEtwBufferOffset;
          KiBugCheckData = (unsigned int)a2;
          v42 = a3 - (_QWORD)&qword_140C42448;
          v86 = (PCSTR)a5;
          do
          {
            *v41 = *(__int64 *)((char *)v41 + v42);
            ++v41;
          }
          while ( (__int64)v41 < (__int64)&KiCurrentEtwBufferOffset );
          v32 = v70;
          v35 = 1;
          goto LABEL_93;
        }
        if ( v31 != 80 )
        {
          if ( v31 == 123 )
          {
            v32 = v70;
            v68 = ((unsigned __int8)a4 & 1) == 0;
            v35 = ((unsigned __int8)a4 & 2) == 0;
            goto LABEL_92;
          }
          if ( v31 == 142 )
          {
LABEL_62:
            v32 = v70;
            if ( v70 )
            {
LABEL_66:
              if ( v31 != 142 )
              {
                v33 = *(_QWORD *)(v32 + 360);
                v76 = v33;
                if ( KeGetCurrentThread()->ApcStateIndex == 1
                  && (unsigned __int64)(v33 - qword_140C65668) < 0x8000000000LL
                  && (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                {
                  goto LABEL_70;
                }
              }
              goto LABEL_91;
            }
            if ( a4 && ((unsigned __int8)a4 & 3) == 0 )
            {
              v32 = (__int64)a4;
              v70 = (__int64)a4;
              goto LABEL_66;
            }
LABEL_91:
            v35 = 1;
            goto LABEL_92;
          }
          if ( v31 != 160 )
          {
            if ( v31 == 190 )
              goto LABEL_62;
LABEL_114:
            v32 = v70;
            if ( v70 )
              v76 = *(_QWORD *)(v70 + 360);
            goto LABEL_91;
          }
          v32 = v70;
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            || (unsigned __int64)(a2 - 240) > 1 )
          {
            goto LABEL_91;
          }
          v66 = 1;
LABEL_75:
          v35 = 1;
LABEL_92:
          a4 = Format;
LABEL_93:
          v34 = v66;
          goto LABEL_94;
        }
        v32 = v70;
        v36 = 0LL;
        if ( !v70 )
        {
          if ( !a4 || ((unsigned __int8)a4 & 3) != 0 )
          {
            v67 = 1;
LABEL_86:
            if ( v76 != a2
              || (unsigned __int64)(a2 - qword_140C65668) >= 0x8000000000LL
              || (Teb = (unsigned __int64)CurrentThread->Teb) != 0 && Teb < 0xFFFF800000000000uLL )
            {
              if ( !v36 )
              {
                UnloadedDriver = MmLocateUnloadedDriver(a2);
                if ( UnloadedDriver )
                {
                  KiBugCheckDriverOffset = a2 - *(_DWORD *)(UnloadedDriver + 16);
                  KiBugCheckDriver = UnloadedDriver;
                  KiBugCheckData = 206LL;
                }
              }
            }
            else
            {
              KiBugCheckData = 207LL;
            }
            goto LABEL_91;
          }
          v32 = (__int64)a4;
          v70 = (__int64)a4;
        }
        v76 = *(_QWORD *)(v32 + 360);
        v37 = v76;
        qword_140C42458 = v76;
        v36 = KiPcToFileHeader(v76, &v78, 0LL, &v67);
        if ( KeGetCurrentThread()->ApcStateIndex == 1 )
        {
          v38 = (unsigned __int64)(v37 - qword_140C65668) < 0x8000000000LL;
          v24 = (__int64)CurrentPrcb;
          if ( v38 )
          {
            v30 = (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0;
            v66 = v30;
          }
        }
        else
        {
          v24 = (__int64)CurrentPrcb;
        }
        goto LABEL_86;
      }
      v76 = a5;
LABEL_103:
      v32 = v70;
      goto LABEL_91;
    }
LABEL_127:
    v76 = a5;
    if ( a5 < ExPoolCodeStart || a5 >= ExPoolCodeEnd )
    {
      v44 = KiPcToFileHeader(a5, &v78, 0LL, &v67);
      if ( v67 != 1 )
      {
        v32 = v70;
        v35 = 1;
        a4 = Format;
        KiBugCheckData = 209LL;
        if ( v44 )
        {
          KiBugCheckDriverOffset = a5 - v44;
          KiBugCheckDriver = v78 + 88;
        }
        goto LABEL_93;
      }
      KiBugCheckDriverOffset = a5 - v44;
      KiBugCheckDriver = v78 + 88;
      v45 = KiPcToFileHeader(a2, &v78, 1LL, &v67);
      if ( !v45 )
      {
        v46 = MmLocateUnloadedDriver(a2);
        v32 = v70;
        v34 = 0;
        a4 = Format;
        if ( v46 )
        {
          KiBugCheckDriverOffset = a2 - *(_DWORD *)(v46 + 16);
          KiBugCheckDriver = v46;
          KiBugCheckData = 212LL;
        }
        v35 = 1;
        goto LABEL_94;
      }
      KiBugCheckData = 211LL;
      KiBugCheckDriverOffset = a2 - v45;
      KiBugCheckDriver = v78 + 88;
    }
    else
    {
      KiBugCheckData = 197LL;
    }
    goto LABEL_103;
  }
  switch ( v31 )
  {
    case 0xD1u:
      goto LABEL_127;
    case 0xD8u:
      v78 = a2;
      KiBugCheckDriver = a2 + 88;
      goto LABEL_103;
    case 0xEAu:
      KiBugCheckDriver = (__int64)a4;
      goto LABEL_103;
  }
  if ( v31 != 239 )
  {
    if ( v31 == 252 )
      goto LABEL_62;
    if ( v31 != 317 )
    {
      if ( v31 == 335 )
      {
        if ( a3 < 0x100 && a5 )
        {
          v43 = CurrentThread;
          if ( *(_QWORD *)(a5 + 8) )
            v43 = *(struct _KTHREAD **)(a5 + 8);
          CurrentThread = v43;
        }
        v32 = v70;
        v34 = (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0;
        goto LABEL_71;
      }
      if ( v31 != 456 )
        goto LABEL_114;
      v32 = v70;
      v73 = 1;
      goto LABEL_75;
    }
    v77 = 8;
    goto LABEL_103;
  }
  v32 = v70;
LABEL_70:
  v34 = 1;
LABEL_71:
  a4 = Format;
  v35 = 1;
  v66 = v34;
LABEL_94:
  if ( KiBugCheckDriver )
  {
    KiBugCheckUnicodeToAnsi(KiBugCheckDriver, pszDest);
  }
  else if ( v76 )
  {
    KiDumpParameterImages(pszDest);
  }
  if ( !WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters )
  {
    WheapSelLogSetNtSchedulerAvailabilityNoLock();
    if ( (unsigned __int8)IpmiHwContextInitialized(&WheaIpmiContext) )
      IpmiLibAddSelBugcheckRecord();
  }
  BugCheckProgressEfiSafeToCall = KiBugCheckData != 265;
  if ( v35 )
  {
    LOBYTE(v30) = v21;
    KiCollectTriageDumpDataBlocks(KiBugCheckData, v30);
  }
  if ( v69 && (PartialDumpControl & 4) != 0 )
  {
    qword_140C42498 = v32;
    KiCrashDumpContext = (__int64)v88;
    qword_140C42488 = (__int64)CurrentThread;
    qword_140C42490 = (__int64)v83;
    byte_140C424A0 = v34;
    byte_140C424A1 = v21;
    KiAttemptBugcheckRecovery();
  }
  v47 = 1;
  KiBugcheckOwnerKeepsOthersFrozen = 1;
  off_140C01CD8[0]();
  HvlEnlightenments &= 0x2000u;
  IoSaveBugCheckProgress(96);
  IsEmptyAffinity = KeIsEmptyAffinityEx(KiNmiInProgress);
  ((void (__fastcall *)(bool))off_140C01AA8[0])(IsEmptyAffinity == 0);
  KiFilterBugCheckInfo(&v75, (__int64)&KiBugCheckData);
  if ( CrashdmpDumpBlock )
    v47 = !v35;
  HvlLogGuestCrashInformation(KiBugCheckData, qword_140C42448, qword_140C42450, qword_140C42458, qword_140C42460, v47);
  if ( !KdPitchDebugger )
    qword_140C021C8 = (__int64)v88;
  if ( (unsigned __int8)KiBugCheckShouldEnterPostBugCheckDebugger(v75, 0LL) )
  {
    if ( !*(_BYTE *)(v24 + 32422) )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Fatal System Error: 0x%08lx\n                       (0x%p,0x%p,0x%p,0x%p)\n\n",
        KiBugCheckData,
        (const void *)qword_140C42448,
        (const void *)qword_140C42450,
        (const void *)qword_140C42458,
        (const void *)qword_140C42460);
      if ( KiBugCheckDriver )
        DbgPrintEx(0x65u, 0, "Driver at fault: %s.\n", pszDest);
      if ( v71 )
      {
        if ( a4 )
          DbgPrintEx(0x65u, 0, a4);
        if ( v86 )
          DbgPrintEx(0x65u, 0, v86);
      }
    }
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
      KiBugCheckDebugBreak(3u);
  }
  v29 = v65;
LABEL_166:
  _disable();
  v49 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 <= 0xFu )
  {
    v50 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v49 == 15 )
      LODWORD(v51) = 0x8000;
    else
      v51 = (-1LL << (v49 + 1)) & 0xFFFC;
    v50[5] |= v51;
  }
  if ( v29 )
  {
    if ( (unsigned int)KeNumberProcessors_0 > 1 && !KiHypervisorInitiatedCrashDump )
    {
      KiSetDebuggerOwner(v24);
      v87[0] = 2097153;
      memset(&v87[1], 0, 0x104uLL);
      KiCopyAffinityEx((__int64)v87, 0x20u, (unsigned __int16 *)KeActiveProcessors);
      KeRemoveProcessorAffinityEx((unsigned __int16 *)v87, *(_DWORD *)(v24 + 36));
      KiSendFreeze((__int64)v87, 0);
      KeStallExecutionProcessor(0xF4240u);
    }
    IoSaveInitialBugCheckProgress(KiBugCheckData, qword_140C42448);
    IoSaveBugCheckProgress(1);
    LOBYTE(v52) = v47;
    KiBugCheckProgressCpusFrozen(v52);
    if ( v21 )
    {
      v55 = v68;
    }
    else
    {
      v54 = v77;
      if ( v47 )
        v54 = v77 | 4;
      v55 = v68;
      v56 = v54 | 2;
      if ( v69 )
        v56 = v54;
      v57 = v56 | 1;
      if ( v68 )
        v57 = v56;
      KiDisplayBlueScreen(v57);
    }
    LOBYTE(v53) = 1;
    HvlPrepareForRootCrashdump(v53);
    if ( !v21 )
    {
      IoSaveBugCheckProgress(2);
      KiInvokeBugCheckEntryCallbacks(1LL, 0LL, 0LL);
      KiInvokeBugCheckEntryCallbacks(8LL, 0LL, 0LL);
      IoSaveBugCheckProgress(5);
      LOBYTE(v58) = 1;
      KiInvokeBugCheckAddTriageDumpDataCallbacks(v58);
    }
    if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger )
      KdEnableDebuggerWithLock(0);
    v59 = *(_OWORD **)(v24 + 35264);
    v60 = v88;
    v61 = 9LL;
    do
    {
      *v59 = *(_OWORD *)v60;
      v59[1] = *((_OWORD *)v60 + 1);
      v59[2] = *((_OWORD *)v60 + 2);
      v59[3] = *((_OWORD *)v60 + 3);
      v59[4] = *((_OWORD *)v60 + 4);
      v59[5] = *((_OWORD *)v60 + 5);
      v59[6] = *((_OWORD *)v60 + 6);
      v59 += 8;
      v62 = *((_OWORD *)v60 + 7);
      v60 += 128;
      *(v59 - 1) = v62;
      --v61;
    }
    while ( v61 );
    *v59 = *(_OWORD *)v60;
    v59[1] = *((_OWORD *)v60 + 1);
    v59[2] = *((_OWORD *)v60 + 2);
    v59[3] = *((_OWORD *)v60 + 3);
    v59[4] = *((_OWORD *)v60 + 4);
    if ( v35 )
    {
      KdDecodeDataBlock();
      qword_140C42488 = (__int64)CurrentThread;
      qword_140C42490 = (__int64)v83;
      qword_140C42498 = v70;
      byte_140C424A0 = v66;
      KiCrashDumpContext = (__int64)v88;
      byte_140C424A1 = v21;
      KiBugCheckWriteCrashDump(&KiCrashDumpContext);
    }
  }
  else
  {
    v63 = KiBugCheckActive;
    KiHandleMultipleBugchecksDuringRecovery((unsigned int)KiBugCheckActive);
    if ( Number != v63 >> 4 )
    {
      while ( 1 )
      {
        if ( KeGetPcr()->Prcb.CombinedNmiMceActive && KeGetCurrentPrcb()->IpiFrozen == 5 )
          KiFreezeTargetExecution(0LL, 0LL);
        _mm_pause();
      }
    }
    if ( KiHypervisorInitiatedCrashDump || (v63 & 0xC) >= 8 )
    {
      while ( 1 )
        off_140C019E8();
    }
    if ( CrashdmpDumpBlock )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x20000u;
      IoUpdateBugCheckProgressEnvVariable();
    }
    _InterlockedExchangeAdd(&KiBugCheckActive, 4u);
    if ( (v63 & 0xC) != 0 )
      KiBugCheckDebugBreak(4u);
    v55 = v68;
  }
  HvlResumeFromRootCrashdump(0);
  IoSaveBugCheckProgress(99);
  if ( !v21 )
    KiScanBugCheckCallbackList();
  off_140C01CC8[0]();
  IoSaveBugCheckProgress(4);
  if ( v69 )
  {
    KiResumeForReboot = 1;
    KiSendThawExecution(0);
    KiBugcheckUnloadDebugSymbols();
    ((void (__fastcall *)(_QWORD))off_140C01CB8[0])(0LL);
    if ( PoPowerDownActionInProgress && !PoPowerResetActionInProgress
      || PoModernStandbyActionInProgress
      || v73
      || (v64 = 3, !v55) )
    {
      v64 = 1;
    }
    HalReturnToFirmware(v64);
  }
  KiBugCheckDebugBreak(4u);
}
