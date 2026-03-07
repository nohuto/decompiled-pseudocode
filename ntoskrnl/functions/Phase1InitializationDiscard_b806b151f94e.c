char __fastcall Phase1InitializationDiscard(ULONG_PTR BugCheckParameter3)
{
  unsigned int v1; // r15d
  struct _LIST_ENTRY *Blink; // r12
  __int64 Pool2; // rax
  char *v5; // r13
  struct _KTHREAD *CurrentThread; // rcx
  char *v7; // rcx
  char *v8; // rax
  const char *v9; // rbx
  const char *v10; // rsi
  char *v11; // rax
  char *v12; // rax
  char *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  ULONG_PTR v16; // rcx
  char v17; // al
  char v18; // cl
  int v19; // eax
  char v20; // cl
  bool v21; // sf
  int v22; // eax
  char v23; // cl
  int Message; // eax
  NTSTRSAFE_PSTR v25; // rbx
  int v26; // r15d
  size_t v27; // rdi
  char *v28; // rbx
  NTSTATUS v29; // eax
  NTSTATUS v30; // eax
  __int64 v31; // r15
  _OWORD *v32; // rax
  char *v33; // rcx
  __int64 v34; // rdx
  __int128 v35; // xmm1
  int Flink_high; // eax
  char *v37; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char *v39; // rax
  char *v40; // rax
  char *v41; // rax
  char *v42; // rax
  char *v43; // rax
  const char *v44; // rbx
  unsigned int v45; // r9d
  int v46; // eax
  __int64 v47; // r9
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  NTSTATUS v50; // eax
  __int64 v51; // r8
  __int64 v52; // r9
  int inited; // eax
  int v54; // eax
  int SystemRootLink; // eax
  __int64 v56; // r8
  int v57; // eax
  __int128 *DisplayContext; // rax
  ULONG_PTR v59; // rbx
  int v60; // eax
  int v61; // eax
  int v62; // eax
  __int64 v63; // rdx
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  int v68; // ebx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  char *v73; // rax
  char *v74; // r15
  __int16 v75; // ax
  bool v76; // zf
  int v77; // eax
  int v78; // eax
  char *v80; // rax
  char *v81; // rdi
  __int16 v82; // ax
  int v83; // edx
  char v84; // al
  char *v85; // rax
  const char *v86; // rbx
  unsigned int v87; // eax
  char *v88; // rcx
  __int64 v89; // rdi
  unsigned int v90; // eax
  __int64 v91; // rdi
  __int64 v92; // rax
  char v93; // al
  NTSTATUS v94; // eax
  NTSTATUS v95; // eax
  char *v96; // rax
  __int16 v97; // bx
  char *v98; // rax
  char *v99; // rax
  char *v100; // rax
  char *v101; // rax
  char *v102; // rax
  const char *v103; // rsi
  __int64 v104; // rax
  int v105; // eax
  int v106; // ecx
  unsigned int v107; // r9d
  SIZE_T Size; // [rsp+20h] [rbp-E0h]
  int Tag; // [rsp+28h] [rbp-D8h]
  char v110; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER SystemTime; // [rsp+48h] [rbp-B8h] BYREF
  int v112; // [rsp+50h] [rbp-B0h]
  const char *v113; // [rsp+58h] [rbp-A8h] BYREF
  int v114; // [rsp+60h] [rbp-A0h]
  int v115; // [rsp+64h] [rbp-9Ch] BYREF
  char *EndPtr; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v118; // [rsp+78h] [rbp-88h] BYREF
  __int64 v119; // [rsp+80h] [rbp-80h]
  int v120; // [rsp+88h] [rbp-78h] BYREF
  size_t pcbRemaining; // [rsp+90h] [rbp-70h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+98h] [rbp-68h] BYREF
  __int64 v123; // [rsp+A0h] [rbp-60h] BYREF
  STRING v124; // [rsp+A8h] [rbp-58h] BYREF
  TIME_FIELDS TimeFields; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v127[8]; // [rsp+E0h] [rbp-20h] BYREF
  char pszDest[24]; // [rsp+160h] [rbp+60h] BYREF

  v1 = 0;
  SystemTime.QuadPart = 0LL;
  LocalTime.QuadPart = 0LL;
  v123 = 0LL;
  v113 = 0LL;
  v124 = 0LL;
  v118 = 0LL;
  TimeFields = 0LL;
  LOBYTE(v112) = 0;
  v120 = 0;
  v114 = 0;
  v115 = 0;
  DestinationString = 0LL;
  memset(v127, 0, 0x74uLL);
  Blink = PsGetCurrentServerSiloGlobals()[78].Blink;
  Pool2 = ExAllocatePool2(64LL, 0x200uLL, 0x74696E49u);
  v5 = (char *)Pool2;
  if ( !Pool2 )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  v110 = 0;
  v119 = Pool2 + 256;
  LODWORD(InitializationPhase) = 1;
  KeSetPriorityThread(CurrentThread, 31);
  v7 = *(char **)(BugCheckParameter3 + 216);
  if ( v7 )
  {
    v8 = strupr(v7);
    v9 = v8;
    v10 = v8;
    if ( v8 )
    {
      v11 = strstr(v8, " HYPERVISORROOTPROC=");
      if ( v11 )
      {
        v80 = strstr(v11, "=");
        if ( v80 )
          KeRootProcSpecified = atol(v80 + 1);
      }
      v12 = strstr(v9, " HYPERVISORROOTPROCNUMANODES=");
      if ( v12 )
      {
        v81 = strstr(v12, "=");
        if ( v81 )
        {
LABEL_107:
          while ( (unsigned int)KeRootProcNumaNodesSpecified < 0x40 )
          {
            v82 = atol(++v81);
            v83 = KeRootProcNumaNodesSpecified;
            *((_WORD *)&KeRootProcNumaNodes + (unsigned int)KeRootProcNumaNodesSpecified) = v82;
            v84 = *v81;
            KeRootProcNumaNodesSpecified = v83 + 1;
            if ( v84 != 44 )
            {
              while ( v84 != 32 && v84 )
              {
                v84 = *++v81;
                if ( *v81 == 44 )
                  goto LABEL_107;
              }
              break;
            }
          }
        }
      }
      v13 = strstr(v10, " HYPERVISORROOTPROCNUMANODELPS=");
      if ( v13 )
      {
        v85 = strstr(v13, "=");
        KeRootProcNumaNodeLpsSpecified = 1;
        v86 = v85;
        KeRootProcNumaNodesSpecified = 0;
        KeRootProcSpecified = 0;
        if ( v85 )
        {
          do
          {
LABEL_117:
            ++v86;
            EndPtr = 0LL;
            v87 = strtoul(v86, &EndPtr, 10);
            v88 = EndPtr;
            v89 = v87;
            if ( v86 != EndPtr )
            {
              if ( *EndPtr == 95 )
              {
                v86 = EndPtr + 1;
                v90 = strtoul(EndPtr + 1, &EndPtr, 10);
                v88 = EndPtr;
                v1 = v90;
              }
              if ( v86 != v88 && *v88 == 61 && (unsigned int)v89 < 0x40 )
              {
                v91 = 2 * v89;
                v86 = v88 + 1;
                if ( !qword_140D24988[v91] )
                {
                  v92 = ExAllocatePool2(64LL, 0x80uLL, 0x400u);
                  if ( !v92 )
                    KeBugCheck(0x31u);
                  KeRootProcNumaNodeLps[v91] = 1024LL;
                  qword_140D24988[v91] = v92;
                }
                if ( v1 < 0x10 )
                  *(_QWORD *)(qword_140D24988[v91] + 8LL * v1) = strtoui64(v86, &EndPtr, 16);
              }
            }
            v93 = *v86;
            v1 = 0;
          }
          while ( *v86 == 44 );
          while ( v93 != 32 && v93 )
          {
            v93 = *++v86;
            if ( *v86 == 44 )
              goto LABEL_117;
          }
        }
      }
    }
  }
  else
  {
    v10 = 0LL;
  }
  v14 = KiSubNodeConfigBlock;
  word_140C6A9EC = 0;
  *(_BYTE *)(KiSubNodeConfigBlock + 5) &= 0xFCu;
  *(_BYTE *)(v14 + 4) = 0;
  KiPerformGroupConfiguration(BugCheckParameter3);
  v15 = KiSubNodeConfigBlock;
  KiCommitGroupSubNodeAssignments(*(_WORD *)(KiSubNodeConfigBlock + 6));
  v16 = (unsigned int)InitializationPhase;
  *(_QWORD *)(v15 + 16) |= 1uLL;
  if ( !(unsigned __int8)HalInitSystem(v16, BugCheckParameter3) )
    goto LABEL_216;
  KeInitializeClock((unsigned int)InitializationPhase);
  if ( v10 && strstr(v10, "NOGUIBOOT") )
    goto LABEL_219;
  v17 = byte_140C6A808;
  byte_140C6A7CC = 0;
  if ( byte_140C6A808 )
  {
    v18 = byte_140C6A80A;
    if ( byte_140C6A80A )
    {
      v19 = BgDisplayProgressIndicator(1);
      v20 = byte_140C6A809;
      v21 = v19 < 0;
      v17 = byte_140C6A808;
      if ( !v21 )
        v20 = 1;
      byte_140C6A809 = v20;
      v18 = byte_140C6A80A;
    }
    if ( v17 && v18 )
    {
      v22 = BgDisplayBackgroundUpdate(1);
      v23 = byte_140C6A7F0;
      if ( v22 >= 0 )
        v23 = 1;
      byte_140C6A7F0 = v23;
    }
  }
  qword_140C6A7D8 = (__int64 (__fastcall *)(_QWORD))DisplayFilter;
  InbvDriverInitialize(1LL, BugCheckParameter3, 7LL);
  DisplayBootBitmap(0);
  if ( v10 )
  {
LABEL_219:
    if ( strstr(v10, "MININT") )
    {
      InitIsWinPEMode = 1;
      if ( strstr(v10, "INRAM") )
        InitWinPEModeType |= 0x80000000;
      else
        InitWinPEModeType |= 1u;
    }
  }
  Message = RtlFindMessage(0x140000000LL, 0xBu, 0, 0x4000007Eu, (unsigned __int16 **)&v113);
  pcbRemaining = 256LL;
  v25 = v5;
  v26 = Message;
  ppszDestEnd = v5;
  if ( CmCSDVersionString.Length )
  {
    v94 = RtlStringCbPrintfExA(v5, 0xFFuLL, &ppszDestEnd, &pcbRemaining, 0, ": %wZ");
    if ( v94 < 0 )
      KeBugCheckEx(0x32u, v94, 7uLL, 0LL, 0LL);
    v25 = ppszDestEnd;
    v27 = pcbRemaining;
  }
  else
  {
    v27 = 255LL;
    pcbRemaining = 255LL;
  }
  *v25 = 0;
  v28 = v25 + 1;
  ppszDestEnd = v28;
  v29 = RtlStringCbPrintfA(pszDest, 0x18uLL, "%u.%u", 10, 0);
  if ( v29 < 0 )
    KeBugCheckEx(0x32u, v29, 7uLL, 1uLL, 0LL);
  if ( v26 < 0 )
  {
    v95 = RtlStringCbCopyA(v28, v27, "MICROSOFT (R) WINDOWS (TM)\n");
    if ( v95 < 0 )
      KeBugCheckEx(0x32u, v95, 7uLL, 3uLL, 0LL);
  }
  else
  {
    Tag = (int)v5;
    LODWORD(Size) = (unsigned __int16)NtBuildNumber;
    v30 = RtlStringCbPrintfA(v28, v27, v113 + 4, pszDest, Size);
    if ( v30 < 0 )
      KeBugCheckEx(0x32u, v30, 7uLL, 2uLL, 0LL);
  }
  InbvDisplayString((__int64)v28);
  v31 = (__int64)(v5 + 256);
  v32 = v5 + 256;
  v33 = v5;
  v34 = 2LL;
  do
  {
    *v32 = *(_OWORD *)v33;
    v32[1] = *((_OWORD *)v33 + 1);
    v32[2] = *((_OWORD *)v33 + 2);
    v32[3] = *((_OWORD *)v33 + 3);
    v32[4] = *((_OWORD *)v33 + 4);
    v32[5] = *((_OWORD *)v33 + 5);
    v32[6] = *((_OWORD *)v33 + 6);
    v32 += 8;
    v35 = *((_OWORD *)v33 + 7);
    v33 += 128;
    *(v32 - 1) = v35;
    --v34;
  }
  while ( v34 );
  if ( !(unsigned __int8)PoInitSystem(0LL, BugCheckParameter3) )
LABEL_215:
    KeBugCheck(0xA0u);
  if ( !ExpRealTimeIsUniversal )
  {
    Flink_high = HIDWORD(Blink[27].Flink);
    if ( Flink_high == -1 )
    {
      HIDWORD(Blink[27].Flink) = ExpAltTimeZoneBias;
      Flink_high = ExpAltTimeZoneBias;
      v110 = 1;
    }
    Blink[27].Blink = (struct _LIST_ENTRY *)(600000000LL * Flink_high);
    *(_DWORD *)(MmWriteableSharedUserData + 604) = 0;
    ExpWriteTimeZoneBias(&Blink[27].Blink, 60 * Flink_high);
  }
  GetBootSystemTime(*(_QWORD *)(BugCheckParameter3 + 240), &SystemTime);
  if ( v10 )
  {
    v37 = strstr(v10, "YEAR");
    if ( v37 )
    {
      v96 = strstr(v37, "=");
      if ( v96 )
      {
        v97 = atol(v96 + 1);
        RtlTimeToTimeFields(&SystemTime, &TimeFields);
        TimeFields.Year = v97;
        RtlTimeFieldsToTime(&TimeFields, &SystemTime);
      }
    }
  }
  if ( ExpRealTimeIsUniversal )
    LocalTime = SystemTime;
  else
    ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  KeSetSystemTime((__int64)&SystemTime, (__int64)&v123, 4);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  PoNotifySystemTimeSet(
    (__int64 *)&SystemTime,
    &v123,
    0,
    (int)&LocalTime,
    HIDWORD(CurrentServerSiloGlobals[78].Blink[27].Flink),
    Tag,
    ExpSystemIsInCmosMode);
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( (int)ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v115) < 0 || v114 != 4 || v115 != 4 )
    KeRegisteredProcessors = 1;
  if ( v10 )
  {
    v39 = strstr(v10, " BOOTPROC=");
    if ( v39 )
    {
      v98 = strstr(v39, "=");
      if ( v98 )
        KeBootprocSpecified = atol(v98 + 1);
    }
    v40 = strstr(v10, " NUMPROC=");
    if ( v40 )
    {
      v99 = strstr(v40, "=");
      if ( v99 )
        KeNumprocSpecified = atol(v99 + 1);
    }
    v41 = strstr(v10, " HYPERVISORNUMPROC=");
    if ( v41 )
    {
      v100 = strstr(v41, "=");
      if ( v100 )
        KeHypervisorNumprocSpecified = atol(v100 + 1);
    }
    if ( !KeRootProcNumaNodeLpsSpecified )
    {
      v42 = strstr(v10, " HYPERVISORROOTPROCPERNODE=");
      if ( v42 )
      {
        v101 = strstr(v42, "=");
        if ( v101 )
          KeRootProcPerNodeSpecified = atol(v101 + 1);
      }
      v43 = strstr(v10, " HYPERVISORROOTPROCPERCORE=");
      if ( v43 )
      {
        v102 = strstr(v43, "=");
        if ( v102 )
          *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5) = atol(v102 + 1);
      }
    }
    if ( strstr(v10, " MAXPROC") )
      KeMaximumProcessors = 2048;
  }
  qword_140D81778 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors();
  qword_140D81780 = KeQueryPerformanceCounter(0LL).QuadPart;
  EtwTimeProfileReset();
  KeSetAffinityProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0, (unsigned __int16 *)KeActiveProcessors);
  MakeGdtReadOnly();
  v44 = (int)RtlFindMessage(0x140000000LL, 0xBu, 0, 0x40000089u, &v118) < 0
      ? "MultiProcessor Kernel\r\n"
      : (const char *)(v118 + 2);
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
LABEL_216:
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v124, v44);
  if ( v124.Length >= 2u )
    v124.Length -= 2;
  v45 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v45 = 1073741981;
  v46 = RtlFindMessage(0x140000000LL, 0xBu, 0, v45, (unsigned __int16 **)&v113);
  v47 = 0LL;
  v48 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v48 )
  {
    v49 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v47 += *v49;
      v49 += 2;
      --v48;
    }
    while ( v48 );
  }
  if ( v46 < 0 )
    v50 = RtlStringCbPrintfA(
            v5,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v47 + 255) >> 8,
            &v124);
  else
    v50 = RtlStringCbPrintfA(
            v5,
            0x100uLL,
            v113 + 4,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v47 + 255) >> 8,
            &v124);
  if ( v50 < 0 )
    KeBugCheckEx(0x32u, v50, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)v5);
  ExFreePoolWithTag(v5, 0);
  if ( !ObInitSystem(1) )
    KeBugCheck(0x62u);
  if ( !(unsigned __int8)ExInitSystem(BugCheckParameter3) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 1uLL, 0LL);
  HalReportResourceUsage(0xFFFFFFFFLL);
  if ( !IoCreateObjectTypes() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 4uLL, 0LL);
  if ( !KeInitSystem(1) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  if ( !KdInitSystem(InitializationPhase, 0LL, v51, v52) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 3uLL, 0LL);
  inited = TmInitSystem(
             &TmResourceManagerObjectType,
             &TmEnlistmentObjectType,
             &TmTransactionManagerObjectType,
             &TmTransactionObjectType);
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  v54 = DbgkInitialize();
  if ( v54 < 0 )
    KeBugCheckEx(0x32u, v54, 0LL, 0LL, 0LL);
  BcdInitializeBcdSyncMutant();
  VerifierInitSystem(0LL);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x63u);
  PspInitPhase1();
  ExInitLicenseCallback();
  SystemRootLink = CreateSystemRootLink(BugCheckParameter3);
  if ( SystemRootLink < 0 )
    KeBugCheckEx(0x64u, SystemRootLink, 0LL, 0LL, 0LL);
  qword_140D81798 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !MmInitSystem(1LL, BugCheckParameter3, v56) )
    KeBugCheckEx(0x65u, (unsigned __int8)byte_140C67BC2, 0LL, 0LL, 0LL);
  qword_140D817A0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !CcInitializeCacheManager(1) )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)CmInitSystem1(BugCheckParameter3) )
    KeBugCheck(0x67u);
  PsInitializeBootCpuPartitions();
  v57 = ExInitializeLeapSecondData();
  if ( v57 < 0 )
    KeBugCheckEx(0x32u, v57, 0xCuLL, 0LL, 0LL);
  InitSkuSessionParameters();
  qword_140D81768 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset(v127, 0, 0x78uLL);
  *((_QWORD *)&v127[0] + 1) = MmMapLockedRestartPages;
  *(_QWORD *)&v127[1] = MmUnmapLockedRestartPages;
  *((_QWORD *)&v127[1] + 1) = KeRemoveEnclavePage;
  *(_QWORD *)&v127[2] = KdPullRemoteFileEx;
  *((_QWORD *)&v127[2] + 1) = CmSaveKeyToBuffer;
  *(_QWORD *)&v127[3] = KeIsBugCheckActive;
  *((_QWORD *)&v127[3] + 1) = CmOpenKeyForBugCheckRecovery;
  *(_QWORD *)&v127[4] = MiPageToNode;
  *((_QWORD *)&v127[4] + 1) = MmGetNextNode;
  LODWORD(v127[0]) = 120;
  if ( VslVsmEnabled )
  {
    VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
    qword_140D81748 = (__int64)VslpRegisterKsrCallback;
  }
  DisplayContext = BgGetDisplayContext();
  v59 = (int)KsrInitSystem(BugCheckParameter3, v127, DisplayContext);
  qword_140D81770 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v59 + 0x80000000) >= 0 && (_DWORD)v59 != -1073741637 )
    KeBugCheckEx(0x32u, v59, 0LL, 1uLL, 0LL);
  ExKsrInterface = v127[5];
  qword_140C316A0 = *(_QWORD *)&v127[7];
  *(_OWORD *)&xmmword_140C31690 = v127[6];
  v60 = EmInitSystem(0LL, BugCheckParameter3);
  if ( v60 < 0 )
    KeBugCheckEx(0x32u, v60, 8uLL, 0LL, 0LL);
  v61 = MfgInitSystem(BugCheckParameter3);
  if ( v61 < 0 )
    KeBugCheckEx(0x32u, v61, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  v62 = SmInitSystem(0);
  if ( v62 < 0 )
    KeBugCheckEx(0x32u, v62, 0xBuLL, 0LL, 0LL);
  v64 = VmInitSystem(0, v63);
  if ( v64 < 0 )
    KeBugCheckEx(0x32u, v64, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2656LL) & 2) == 0 || strstr(v10, "FORCETIMESYNC") )
    ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL);
  if ( (HvlpFlags & 2) != 0 )
    ZwUpdateWnfStateData((__int64)&WNF_HVL_CPU_MGMT_PARTITION, 0LL);
  FsRtlSendModernAppTermination(&v120, 1u, 1);
  ExInitializeTimeRefresh(v66, v65, v67);
  ExAcquireTimeRefreshLock(1u);
  ExInitializeUtcTimeZoneBias(&LocalTime);
  v68 = HIDWORD(Blink[27].Flink);
  ExpRefreshTimeZoneInformation(0);
  ExReleaseTimeRefreshLock();
  if ( v110 )
  {
    ExLocalTimeToSystemTime(&LocalTime, &SystemTime);
    KeSetSystemTime((__int64)&SystemTime, (__int64)&v123, 4);
  }
  else if ( v68 != HIDWORD(Blink[27].Flink) )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem(v70, v69, v71) )
    KeBugCheck(0x68u);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&RtlLznt1DecompressChunkLookaside,
    0LL,
    0LL,
    512,
    88,
    1667529324,
    0,
    0);
  ExInitializePagedLookasideList(&RtlpRangeListEntryLookasideList, 0LL, 0LL, 0, 0x38uLL, 0x656C5252u, 0x10u);
  HvlDebuggerSupportInitialize(BugCheckParameter3);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, BugCheckParameter3, &KdpContext, v72);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x90u);
  LpcLegacyMaxMessageLength = 648;
  if ( (int)AlpcpInitSystem() < 0 )
    KeBugCheck(0x6Au);
  LpcPortObjectType = AlpcPortObjectType;
  LpcWaitablePortObjectType = (__int64)AlpcPortObjectType;
  if ( !v10 )
    goto LABEL_96;
  v73 = strstr(v10, "SAFEBOOT:");
  v74 = v73;
  if ( !v73 )
  {
LABEL_95:
    v31 = v119;
    goto LABEL_96;
  }
  v103 = v73 + 9;
  if ( !strncmp(v73 + 9, "MINIMAL", 7uLL) )
  {
    LODWORD(InitSafeBootMode) = 1;
  }
  else
  {
    if ( strncmp(v103, "NETWORK", 7uLL) )
    {
      if ( !strncmp(v103, "DSREPAIR", 8uLL) )
      {
        LODWORD(InitSafeBootMode) = 3;
        v104 = 17LL;
      }
      else
      {
        LODWORD(InitSafeBootMode) = 0;
        v104 = 9LL;
      }
      goto LABEL_196;
    }
    LODWORD(InitSafeBootMode) = 2;
  }
  v104 = 16LL;
LABEL_196:
  if ( v74[v104] )
  {
    v105 = strncmp(&v74[v104], "(ALTERNATESHELL)", 0x10uLL);
    v106 = (unsigned __int8)v112;
    if ( !v105 )
      v106 = 1;
    v112 = v106;
  }
  if ( !(_DWORD)InitSafeBootMode )
    goto LABEL_95;
  v118 = 0LL;
  v107 = 0;
  switch ( (_DWORD)InitSafeBootMode )
  {
    case 1:
      v107 = 168;
      break;
    case 2:
      v107 = 169;
      break;
    case 3:
      v107 = 170;
      break;
  }
  if ( (int)RtlFindMessage(0x140000000LL, 0xBu, 0, v107, &v118) >= 0 )
    InbvDisplayString((__int64)(v118 + 2));
  v31 = v119;
LABEL_96:
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 240) + 132LL) & 0x800) != 0 )
  {
    if ( (int)RtlFindMessage(0x140000000LL, 0xBu, 0, 0xB7u, (unsigned __int16 **)&v113) >= 0 )
      InbvDisplayString((__int64)(v113 + 4));
    IopInitializeBootLogging(BugCheckParameter3, v31);
  }
  ExInitSystemPhase2();
  v75 = ExpComputeCyclesPerYield();
  v76 = InitIsWinPEMode == 0;
  *(_WORD *)(MmWriteableSharedUserData + 726) = v75;
  if ( !v76 )
    CreateMiniNtBootKey();
  v77 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v77 < 0 )
    KeBugCheckEx(0x32u, v77, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  v78 = ExInitializeExternalBootSupport();
  if ( v78 < 0 )
    KeBugCheckEx(0x32u, v78, 8uLL, 0LL, 0LL);
  if ( !(unsigned __int8)PoInitSystem(1LL, BugCheckParameter3) )
    goto LABEL_215;
  KeWaitForSingleObject(&stru_140C66F68, Executive, 0, 0, 0LL);
  return v112;
}
