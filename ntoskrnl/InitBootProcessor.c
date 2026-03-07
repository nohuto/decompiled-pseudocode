__int64 __fastcall InitBootProcessor(ULONG_PTR a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  char *v4; // rdi
  char *v5; // rax
  char *v6; // rax
  ULONG_PTR v7; // rax
  _QWORD *v8; // rdx
  ULONG_PTR v9; // r8
  ULONG_PTR v10; // r9
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned int v18; // esi
  void *Pool2; // rax
  void *v20; // rdi
  unsigned int v21; // r15d
  __int64 *i; // rsi
  char *v23; // r8
  unsigned int v24; // r9d
  __int64 v25; // rdx
  char v26; // al
  __int64 v27; // rcx
  __int64 v28; // rcx
  NTSTATUS v29; // eax
  size_t v30; // rdx
  const char *v31; // r8
  NTSTRSAFE_PSTR *v32; // r9
  __int64 v33; // rax
  int Message; // eax
  NTSTATUS v35; // eax
  size_t v36; // rdx
  const char *v37; // r8
  NTSTATUS v38; // eax
  NTSTATUS v39; // eax
  NTSTATUS v40; // eax
  NTSTATUS v41; // eax
  NTSTATUS v42; // eax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  void *v46; // rdi
  int v47; // eax
  __int64 v48; // rcx
  __int64 result; // rax
  unsigned int InitFailureLocation; // eax
  size_t *pcbRemaining; // [rsp+28h] [rbp-E0h]
  ULONG dwFlags; // [rsp+30h] [rbp-D8h]
  int dwFlagsa; // [rsp+30h] [rbp-D8h]
  size_t Size; // [rsp+38h] [rbp-D0h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+40h] [rbp-C8h] BYREF
  size_t SourceString[3]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int *v57; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD DestinationString[3]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v59[3]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v60[4]; // [rsp+98h] [rbp-70h] BYREF
  char v61[64]; // [rsp+B8h] [rbp-50h] BYREF
  char pszDest[256]; // [rsp+F8h] [rbp-10h] BYREF

  dword_140D4ADF4 = -1;
  qword_140D49EA8 = (__int64)&PspTimeZoneStateBuffer;
  ppszDestEnd = 0LL;
  v57 = 0LL;
  memset(SourceString, 0, sizeof(SourceString));
  dword_140D49EDC = 259;
  dword_140D49ED8 = 1;
  word_140D49DE8 = -535;
  *(_OWORD *)&DestinationString[1] = 0LL;
  word_140D49E28 = -535;
  ExpValidateLoader();
  *(_DWORD *)(MmWriteableSharedUserData + 708) = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 2900LL);
  ExpInitLicensing(PspHostSiloGlobals);
  RtlNlsInitState((__int64)PspHostSiloGlobals);
  if ( (VslGetNestedPageProtectionFlags() & 6) == 6 )
    ExpRevokeBootLoaderPagePrivileges(a1);
  if ( KeIsKernelCetEnabled() )
  {
    if ( (KeKernelCetWrssEnabledScenarios & 4) != 0 && (_BYTE)KdDebuggerNotPresent )
      LOBYTE(KeKernelCetWrssEnabledScenarios) = KeKernelCetWrssEnabledScenarios & 0xFB;
    if ( (VslGetNestedPageProtectionFlags() & 0x400) != 0 )
      LOBYTE(KeKernelCetWrssEnabledScenarios) = KeKernelCetWrssEnabledScenarios | 2;
    v2 = __readmsr(0x6A2u);
    if ( (_BYTE)KeKernelCetWrssEnabledScenarios )
      v3 = v2 | 2;
    else
      v3 = v2 & 0xFFFFFFFFFFFFFFFDuLL;
    __writemsr(0x6A2u, v3);
  }
  VslGetSecureSpeculationControlInformation();
  v4 = *(char **)(a1 + 216);
  LODWORD(InitializationPhase) = 0;
  if ( v4 )
  {
    strupr(v4);
    v5 = strstr(v4, "BURNMEMORY");
    if ( v5 )
    {
      v6 = strstr(v5, "=");
      if ( v6 )
      {
        if ( (__int64)atol(v6 + 1) << 8 )
          ExBurnMemory(a1);
      }
    }
    if ( strstr(v4, "FORCEGROUPAWARE") )
      KeForceGroupAwareness = 1;
  }
  v7 = 0LL;
  v8 = *(_QWORD **)(a1 + 32);
  while ( v8 != (_QWORD *)(a1 + 32) )
  {
    v9 = v8[4];
    v10 = v8[5];
    if ( v9 < v7 )
      KeBugCheckEx(0x31u, (ULONG_PTR)v8, v9, v10, v7);
    v8 = (_QWORD *)*v8;
    v7 = v10 + v9;
  }
  v11 = *(_QWORD *)(a1 + 224);
  if ( v11 )
  {
    InitNlsTableBase = *(_QWORD *)(v11 + 16);
    ExPreInitializeNls();
  }
  ExLeapSecondData = *(PVOID *)(*(_QWORD *)(a1 + 240) + 2976LL);
  WheaInitializeServices();
  ((void (__fastcall *)(ULONG_PTR))off_140C01CC0[0])(HalIommuDispatch);
  qword_140D817A8 = __rdtsc();
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, a1) )
    KeBugCheck(0x5Cu);
  qword_140D817B0 = __rdtsc();
  KeInitializeClock((unsigned int)InitializationPhase);
  PsInitializeQuotaSystem(1LL);
  CmInitSystem0(a1);
  KvfInitFeatureStates(a1);
  if ( !(unsigned __int8)PoEnergyEstimationEnabled() )
    _interlockedbittestandreset(*(volatile signed __int32 **)(KiProcessorBlock[0] + 24), 0x15u);
  if ( !KeInitSystem(0) )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0xBuLL, 0LL, 0LL);
  v12 = ExComputeTickCountMultiplier();
  v13 = MmWriteableSharedUserData;
  ExpTickCountMultiplier = v12;
  DestinationString[0] = 0LL;
  LODWORD(Size) = 0;
  *(_DWORD *)(MmWriteableSharedUserData + 4) = v12;
  *(_DWORD *)(v13 + 572) = 0;
  v60[0] = 11LL;
  v60[1] = 1LL;
  v60[2] = 0LL;
  if ( (int)LdrFindResource_U(0x140000000LL, v60, 3u, &v57) >= 0
    && (int)LdrAccessResource(0x140000000uLL, (unsigned __int64)v57, (__int64)DestinationString, (__int64)&Size) >= 0 )
  {
    KiBugCodeMessages = (void *)DestinationString[0];
  }
  CmNtGlobalFlag2 &= 7u;
  v14 = MmWriteableSharedUserData;
  *(_DWORD *)(MmWriteableSharedUserData + 600) = CmGlobalValidationRunlevel;
  *(_BYTE *)(v14 + 651) = 1;
  v15 = CmNtSpBuildNumber & 0xFFF;
  HIWORD(CmNtCSDVersion) = 0;
  CmNtSpBuildNumber = v15;
  if ( CmNtCSDReleaseType )
    CmNtCSDVersion |= v15 << 16;
  if ( InitTickRolloverDelayLength != 4 || InitTickRolloverDelayType != 4 )
    InitTickRolloverDelay = 0;
  if ( InitTickRolloverDelay )
  {
    KeAdjustInterruptTime(10000LL * (unsigned int)-InitTickRolloverDelay, 1);
    KeRebaselineSystemTime();
  }
  NtGlobalFlag |= CmNtGlobalFlag;
  NtGlobalFlag2 |= CmNtGlobalFlag2;
  v16 = MmWriteableSharedUserData;
  *(_DWORD *)(MmWriteableSharedUserData + 960) = 1;
  *(_BYTE *)(v16 + 964) = 1;
  *(_WORD *)(v16 + 874) = 1;
  if ( !(unsigned __int8)ExInitSystem(0LL) )
    goto LABEL_88;
  WheaSelLogInitialize(a1);
  KeNumaInitialize();
  VerifierInitSystem(a1);
  InitializeDynamicPartitioningPolicy();
  EtwBootPerfData = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !MmInitSystem(0LL, a1, v17) )
  {
    InitFailureLocation = MmGetInitFailureLocation();
    KeBugCheckEx(0x31u, 0LL, 0x64uLL, InitFailureLocation, 0LL);
  }
  qword_140D81758 = KeQueryPerformanceCounter(0LL).QuadPart;
  EtwInitialize(0, a1);
  KiHwPolicyDriverImageBase = 0LL;
  HalInitializeBios(0, (_QWORD *)a1);
  InbvDriverInitialize(0, a1, 0);
  if ( KiBugCodeMessages )
  {
    v18 = Size;
    Pool2 = (void *)ExAllocatePool2(64LL, (unsigned int)Size, 0x6342694Bu);
    v20 = Pool2;
    if ( !Pool2 )
      KeBugCheck(0x7Du);
    memmove(Pool2, KiBugCodeMessages, v18);
    KiBugCodeMessages = v20;
  }
  if ( *(_DWORD *)(a1 + 12) < 2u )
  {
    IopAutoReboot = 0;
    KeBugCheckEx(0x196u, *(unsigned int *)(a1 + 12), 2uLL, 0LL, 0LL);
  }
  v21 = 0;
  for ( i = *(__int64 **)(a1 + 16); i != (__int64 *)(a1 + 16); ++v21 )
  {
    if ( v21 >= 3 )
    {
      v23 = (char *)i[10];
      if ( *(_WORD *)v23 != 92 )
      {
        v28 = -1LL;
        do
          ++v28;
        while ( *(_BYTE *)(*(_QWORD *)(a1 + 200) + v28) );
        if ( v28 + ((unsigned __int64)*((unsigned __int16 *)i + 44) >> 1) + 18 > 0x100 )
          goto LABEL_59;
        v29 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%sSystem32\\Drivers\\%wZ");
        if ( v29 < 0 )
          KeBugCheckEx(0x31u, v29, 3uLL, 0LL, 0LL);
        goto LABEL_58;
      }
      v24 = *((unsigned __int16 *)i + 36) >> 1;
      if ( (unsigned __int64)v24 + 1 <= 0x100 )
      {
        LODWORD(v25) = 0;
        do
        {
          v26 = *v23;
          v23 += 2;
          v27 = (unsigned int)v25;
          v25 = (unsigned int)(v25 + 1);
          pszDest[v27] = v26;
        }
        while ( (unsigned int)v25 < v24 );
        if ( (unsigned int)v25 >= 0x100uLL )
          _report_rangecheckfailure();
        pszDest[v25] = 0;
LABEL_58:
        RtlInitAnsiString((PSTRING)&DestinationString[1], pszDest);
        DbgLoadImageSymbols((__int64)&DestinationString[1], i[6], 0xFFFFFFFFLL);
      }
    }
LABEL_59:
    i = (__int64 *)*i;
  }
  if ( BYTE1(KdDebuggerEnabled) )
    DbgBreakPointWithStatus(1u);
  ExpInitializeBootEnvironment(a1);
  HvlPhase1Initialize(a1);
  if ( **(_DWORD **)(a1 + 240) >= 0xF20u )
    HeadlessInit(a1);
  BootApplicationPersistentDataInitialize(a1);
  v33 = MmWriteableSharedUserData;
  *(_DWORD *)(MmWriteableSharedUserData + 692) = 2147418111;
  *(_DWORD *)(v33 + 696) = 0x80000000;
  if ( CmNtCSDVersion )
  {
    Message = RtlFindMessage(0x140000000LL, 0xBu, 0, 0x40000087u, (unsigned __int16 **)&ppszDestEnd);
    if ( Message < 0 )
      KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
    RtlInitAnsiString((PSTRING)&SourceString[1], ppszDestEnd + 4);
    LOWORD(SourceString[1]) -= 2;
    dwFlagsa = (unsigned __int8)CmNtCSDVersion != 0 ? (unsigned __int8)CmNtCSDVersion + 64 : 0;
    LODWORD(pcbRemaining) = BYTE1(CmNtCSDVersion);
    v35 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &SourceString[1], pcbRemaining);
    if ( v35 < 0 )
      KeBugCheckEx(0x31u, v35, 5uLL, 0LL, 0LL);
    if ( (CmNtCSDVersion & 0xFFFF0000) != 0 )
    {
      ppszDestEnd = 0LL;
      v38 = RtlStringCbCatExA(pszDest, v36, v37, &ppszDestEnd, SourceString, dwFlagsa);
      if ( v38 < 0 )
        KeBugCheckEx(0x31u, v38, 6uLL, 0LL, 0LL);
      v39 = RtlStringCbPrintfA(ppszDestEnd, SourceString[0], "v.%u", HIWORD(CmNtCSDVersion));
      if ( v39 < 0 )
        KeBugCheckEx(0x31u, v39, 7uLL, 0LL, 0LL);
    }
  }
  else
  {
    v40 = RtlStringCbCopyExA(pszDest, v30, v31, v32, SourceString, dwFlags);
    if ( v40 < 0 )
      KeBugCheckEx(0x31u, v40, 8uLL, 0LL, 0LL);
    CmCSDVersionString.MaximumLength = 256 - LOWORD(SourceString[0]);
  }
  RtlInitAnsiString((PSTRING)&SourceString[1], pszDest);
  v41 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, (PCANSI_STRING)&SourceString[1], 1u);
  if ( v41 < 0 )
    KeBugCheckEx(0x31u, v41, 9uLL, 0LL, 0LL);
  v42 = RtlStringCbPrintfA(v61, 0x40uLL, "%u.%u", 6, 3);
  if ( v42 < 0 )
    KeBugCheckEx(0x31u, v42, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, v61) )
LABEL_88:
    KeBugCheck(0x31u);
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v43 = ExAllocatePool2(64LL, 0x800000uLL, 0x63617453u);
    v46 = (void *)v43;
    if ( v43 )
    {
      v59[0] = v43;
      v59[1] = 0x800000LL;
      v59[2] = 0x800000LL;
      if ( (int)RtlControlStackTraceDataBase(v45, v44, v59) < 0 )
        ExFreePoolWithTag(v46, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  ExInitializeHandleTablePackage();
  if ( !ObInitSystem(0) )
    KeBugCheck(0x5Eu);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x5Fu);
  if ( !PsInitSystem(0, (void *)a1) || (DbgkInitialize(), v47 < 0) )
    KeBugCheck(0x60u);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x8Fu);
  v48 = MmWriteableSharedUserData;
  *(_WORD *)(MmWriteableSharedUserData + 618) = KeProcessorArchitecture;
  result = 0LL;
  *(_QWORD *)(v48 + 620) = 10LL;
  *(_DWORD *)(v48 + 608) = 22621;
  *(_DWORD *)(v48 + 44) = -2040232348;
  *(_DWORD *)(v48 + 932) = 0;
  return result;
}
