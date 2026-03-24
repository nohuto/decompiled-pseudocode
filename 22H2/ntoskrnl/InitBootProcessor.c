/*
 * XREFs of InitBootProcessor @ 0x140A39F24
 * Callers:
 *     KiInitializeKernel @ 0x14099CCF0 (KiInitializeKernel.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x1402056D0 (PoEnergyEstimationEnabled.c)
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     RtlULongLongAdd @ 0x14024CF90 (RtlULongLongAdd.c)
 *     RtlULongLongMult @ 0x14024E708 (RtlULongLongMult.c)
 *     RtlInitAnsiString @ 0x14024FB10 (RtlInitAnsiString.c)
 *     VslGetNestedPageProtectionFlags @ 0x140340410 (VslGetNestedPageProtectionFlags.c)
 *     DbgLoadImageSymbols @ 0x1403727E0 (DbgLoadImageSymbols.c)
 *     KeAdjustInterruptTime @ 0x14038D11C (KeAdjustInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x14038D698 (KeRebaselineSystemTime.c)
 *     RtlStringCbPrintfA @ 0x1403A83E4 (RtlStringCbPrintfA.c)
 *     HalInitializeBios @ 0x1403C4710 (HalInitializeBios.c)
 *     RtlStringCbCopyExA @ 0x1403CD090 (RtlStringCbCopyExA.c)
 *     KvfInitFeatureStates @ 0x1403CE94C (KvfInitFeatureStates.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1403CF3F8 (VslGetSecureSpeculationControlInformation.c)
 *     HvlPhase1Initialize @ 0x1403CF458 (HvlPhase1Initialize.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _strupr @ 0x1403D0920 (_strupr.c)
 *     strstr @ 0x1403D1180 (strstr.c)
 *     atol @ 0x1403D1220 (atol.c)
 *     KeBugCheck @ 0x1403FD550 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x140406F30 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     RtlStringCbCatExA @ 0x1404B6018 (RtlStringCbCatExA.c)
 *     __report_rangecheckfailure @ 0x1404B63BC (__report_rangecheckfailure.c)
 *     RtlControlStackTraceDataBase @ 0x140585BD4 (RtlControlStackTraceDataBase.c)
 *     RtlFindMessage @ 0x1406724A0 (RtlFindMessage.c)
 *     RtlGetHostNtSystemRoot @ 0x1406A6800 (RtlGetHostNtSystemRoot.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406F6920 (RtlAnsiStringToUnicodeString.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1407A7470 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrAccessResource @ 0x1407C5ED0 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x1407C5EF0 (LdrFindResource_U.c)
 *     RtlInitNlsTables @ 0x1407CC734 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1407CFCC4 (RtlResetRtlTranslations.c)
 *     ExpInitLicensing @ 0x1407D3FA8 (ExpInitLicensing.c)
 *     HalInitSystem @ 0x14099B910 (HalInitSystem.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 *     ObInitSystem @ 0x140A3D968 (ObInitSystem.c)
 *     SeInitSystem @ 0x140A478EC (SeInitSystem.c)
 *     KeInitializeClock @ 0x140A4B7CC (KeInitializeClock.c)
 *     PsInitSystem @ 0x140A4C2F8 (PsInitSystem.c)
 *     KeInitSystem @ 0x140A4C33C (KeInitSystem.c)
 *     MmInitSystem @ 0x140A53D6C (MmInitSystem.c)
 *     CmInitSystem0 @ 0x140A5F694 (CmInitSystem0.c)
 *     ExInitSystem @ 0x140A68944 (ExInitSystem.c)
 *     InbvDriverInitialize @ 0x140A6B590 (InbvDriverInitialize.c)
 *     PsInitializeQuotaSystem @ 0x140A6C13C (PsInitializeQuotaSystem.c)
 *     WheaInitializeServices @ 0x140A6C554 (WheaInitializeServices.c)
 *     BootApplicationPersistentDataInitialize @ 0x140A6C7CC (BootApplicationPersistentDataInitialize.c)
 *     DbgkInitialize @ 0x140A6D4AC (DbgkInitialize.c)
 *     ExComputeTickCountMultiplier @ 0x140A6EB00 (ExComputeTickCountMultiplier.c)
 *     VerifierInitSystem @ 0x140A6FA84 (VerifierInitSystem.c)
 *     PpInitSystem @ 0x140A72804 (PpInitSystem.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A73288 (InitializeDynamicPartitioningPolicy.c)
 *     KeNumaInitialize @ 0x140A736D4 (KeNumaInitialize.c)
 *     ExpValidateLoader @ 0x140A73C7C (ExpValidateLoader.c)
 *     ExpInitializeBootEnvironment @ 0x140A74038 (ExpInitializeBootEnvironment.c)
 *     ExInitializeHandleTablePackage @ 0x140A74084 (ExInitializeHandleTablePackage.c)
 *     HeadlessInit @ 0x140A74260 (HeadlessInit.c)
 *     ExBurnMemory @ 0x140A8C2C8 (ExBurnMemory.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140A8C354 (ExpRevokeBootLoaderPagePrivileges.c)
 *     RtlInitializeExceptionLog @ 0x140A936A8 (RtlInitializeExceptionLog.c)
 */

__int64 __fastcall InitBootProcessor(__int64 a1)
{
  char *v2; // rdi
  char *v3; // rax
  char *v4; // rax
  __int64 v5; // rdx
  char *v6; // rax
  char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r11
  ULONG_PTR v10; // rdi
  ULONG_PTR v11; // r10
  ULONGLONG v12; // rcx
  ULONG_PTR v13; // r8
  ULONG_PTR v14; // r9
  __int64 v15; // r9
  __int64 v16; // r8
  USHORT *v17; // rdx
  USHORT *v18; // rcx
  int v19; // ecx
  NTSTATUS v20; // eax
  UNICODE_STRING *HostNtSystemRoot; // r13
  NTSTATUS v22; // eax
  int v23; // eax
  unsigned int v24; // r14d
  PVOID PoolWithTag; // rax
  void *v26; // rdi
  unsigned int v27; // r15d
  __int64 *i; // rdi
  char *v29; // r8
  unsigned int v30; // r9d
  __int64 v31; // rdx
  char v32; // al
  NTSTATUS v33; // eax
  size_t v34; // rdx
  const char *v35; // r8
  NTSTRSAFE_PSTR *v36; // r9
  int Message; // eax
  NTSTATUS v38; // eax
  size_t v39; // rdx
  const char *v40; // r8
  NTSTATUS v41; // eax
  NTSTATUS v42; // eax
  NTSTATUS v43; // eax
  NTSTATUS v44; // eax
  NTSTATUS v45; // eax
  PVOID v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  void *v49; // rdi
  __int64 result; // rax
  size_t *pcbRemaining; // [rsp+28h] [rbp-E0h]
  ULONG dwFlags; // [rsp+30h] [rbp-D8h]
  int dwFlagsa; // [rsp+30h] [rbp-D8h]
  unsigned int DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  size_t cbDest; // [rsp+50h] [rbp-B8h] BYREF
  ULONGLONG pullResult; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int *v58; // [rsp+60h] [rbp-A8h] BYREF
  void *v59; // [rsp+68h] [rbp-A0h] BYREF
  const char *v60; // [rsp+70h] [rbp-98h] BYREF
  NTSTRSAFE_PSTR v61[3]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v62[3]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v63[4]; // [rsp+A8h] [rbp-60h] BYREF
  char pszDest[256]; // [rsp+C8h] [rbp-40h] BYREF
  char v65[64]; // [rsp+1C8h] [rbp+C0h] BYREF

  dword_140D257B4 = -1;
  dword_140D2499C = 259;
  v60 = 0LL;
  v58 = 0LL;
  cbDest = 0LL;
  qword_140D24968 = (__int64)&PspTimeZoneStateBuffer;
  dword_140D24998 = 1;
  byte_140D24959 = 1;
  DestinationString_8 = 0LL;
  *(_OWORD *)&v61[1] = 0LL;
  ExpValidateLoader();
  MEMORY[0xFFFFF780000002C4] = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 2868LL);
  ExpInitLicensing((__int64)&PspHostSiloGlobals);
  if ( (VslGetNestedPageProtectionFlags() & 6) == 6 )
    ExpRevokeBootLoaderPagePrivileges(a1);
  VslGetSecureSpeculationControlInformation();
  v2 = *(char **)(a1 + 216);
  LODWORD(InitializationPhase) = 0;
  if ( v2 )
  {
    strupr(v2);
    v3 = strstr(v2, "PERFMEM");
    if ( v3 )
    {
      v4 = strstr(v3, "=");
      if ( v4 )
      {
        v5 = (__int64)atol(v4 + 1) << 8;
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2824LL) )
        {
          BBTPagesToReserve = v5;
        }
        else if ( v5 )
        {
          BBTPagesToReserve = ExBurnMemory(a1, v5, 23LL, &BBTMemoryDescriptor);
        }
      }
    }
    v6 = strstr(v2, "BURNMEMORY");
    if ( v6 )
    {
      v7 = strstr(v6, "=");
      if ( v7 )
      {
        v8 = (__int64)atol(v7 + 1) << 8;
        if ( v8 )
          ExBurnMemory(a1, v8, 6LL, &BurnMemoryDescriptor);
      }
    }
    if ( strstr(v2, "FORCEGROUPAWARE") )
      KeForceGroupAwareness = 1;
  }
  v9 = a1 + 32;
  v10 = 0LL;
  v11 = *(_QWORD *)(a1 + 32);
  while ( v11 != v9 )
  {
    if ( *(_DWORD *)(v11 + 16) == 21 )
    {
      v12 = *(_QWORD *)(v11 + 32);
      pullResult = 0LL;
      if ( RtlULongLongMult(v12, 0x1000uLL, &pullResult) < 0
        || RtlULongLongAdd(InitNlsTableSize, pullResult, &InitNlsTableSize) < 0 )
      {
        goto LABEL_92;
      }
    }
    v13 = *(_QWORD *)(v11 + 24);
    v14 = *(_QWORD *)(v11 + 32);
    if ( v13 < v10 )
      KeBugCheckEx(0x31u, v11, v13, v14, v10);
    v11 = *(_QWORD *)v11;
    v10 = v13 + v14;
  }
  v15 = *(_QWORD *)(a1 + 224);
  if ( v15 )
  {
    if ( *(_QWORD *)v15 && *(_QWORD *)(v15 + 8) )
    {
      InitNlsTableBase = *(void **)v15;
      InitAnsiCodePageDataOffset = 0;
      InitOemCodePageDataOffset = *(_DWORD *)(v15 + 8) - *(_DWORD *)v15;
      v19 = *(_DWORD *)(v15 + 16) - *(_DWORD *)v15;
    }
    else
    {
      v19 = 0;
      InitNlsTableBase = *(void **)(v15 + 16);
      InitAnsiCodePageDataOffset = 0;
      InitOemCodePageDataOffset = 0;
    }
    InitUnicodeCaseTableDataOffset = v19;
    v16 = *(_QWORD *)(v15 + 16);
    v17 = *(USHORT **)(v15 + 8);
    v18 = *(USHORT **)v15;
  }
  else
  {
    v16 = 0LL;
    InitNlsTableBase = 0LL;
    v17 = 0LL;
    InitUnicodeCaseTableDataOffset = 0;
    v18 = 0LL;
    InitAnsiCodePageDataOffset = 0;
    InitOemCodePageDataOffset = 0;
  }
  RtlInitNlsTables(v18, v17, v16);
  RtlResetRtlTranslations();
  ExLeapSecondData = *(PVOID *)(*(_QWORD *)(a1 + 240) + 2944LL);
  WheaInitializeServices();
  ((void (__fastcall *)(ULONG_PTR))off_140C008B0[0])(HalIommuDispatch);
  qword_140D587E8 = __rdtsc();
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, a1) )
    KeBugCheck(0x5Cu);
  qword_140D587F0 = __rdtsc();
  KeInitializeClock((unsigned int)InitializationPhase);
  PsInitializeQuotaSystem(1LL);
  CmInitSystem0(a1);
  KvfInitFeatureStates(a1);
  if ( !PoEnergyEstimationEnabled() )
    _interlockedbittestandreset(*(volatile signed __int32 **)(KiProcessorBlock[0] + 24), 0x15u);
  if ( !(unsigned __int8)KeInitSystem(0LL) )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0xBuLL, 0LL, 0LL);
  ExpTickCountMultiplier = ExComputeTickCountMultiplier();
  MEMORY[0xFFFFF78000000004] = ExpTickCountMultiplier;
  MEMORY[0xFFFFF7800000023C] = 0;
  v20 = RtlStringCbPrintfA(pszDest, 0x100uLL, "C:%s", *(const char **)(a1 + 200));
  if ( v20 < 0 )
    KeBugCheckEx(0x6Eu, v20, 0LL, 0LL, 0LL);
  RtlInitAnsiString(&DestinationString_8, pszDest);
  DestinationString_8.Buffer[--DestinationString_8.Length] = 0;
  HostNtSystemRoot = (UNICODE_STRING *)RtlGetHostNtSystemRoot();
  HostNtSystemRoot->Buffer = (wchar_t *)0xFFFFF78000000030LL;
  *(_DWORD *)&HostNtSystemRoot->Length = 34078720;
  v22 = RtlAnsiStringToUnicodeString(HostNtSystemRoot, &DestinationString_8, 0);
  if ( v22 < 0 )
    KeBugCheckEx(0x6Eu, v22, 1uLL, 0LL, 0LL);
  v63[0] = 11LL;
  v63[1] = 1LL;
  v63[2] = 0LL;
  v59 = 0LL;
  DestinationString = 0;
  if ( (int)LdrFindResource_U(0x140000000LL, v63, 3u, &v58) >= 0
    && (int)LdrAccessResource(0x140000000LL, (unsigned __int64)v58, (__int64)&v59, (__int64)&DestinationString) >= 0 )
  {
    KiBugCodeMessages = v59;
  }
  CmNtGlobalFlag2 &= 1u;
  MEMORY[0xFFFFF78000000258] = CmGlobalValidationRunlevel;
  MEMORY[0xFFFFF7800000028B] = 1;
  v23 = CmNtSpBuildNumber & 0xFFF;
  HIWORD(CmNtCSDVersion) = 0;
  CmNtSpBuildNumber = v23;
  if ( CmNtCSDReleaseType )
    CmNtCSDVersion |= v23 << 16;
  if ( InitTickRolloverDelayLength != 4 || InitTickRolloverDelayType != 4 )
    InitTickRolloverDelay = 0;
  if ( InitTickRolloverDelay )
  {
    KeAdjustInterruptTime(10000LL * (unsigned int)-InitTickRolloverDelay, 1);
    KeRebaselineSystemTime();
  }
  NtGlobalFlag |= CmNtGlobalFlag;
  NtGlobalFlag2 |= CmNtGlobalFlag2;
  MEMORY[0xFFFFF780000003C0] = 1;
  MEMORY[0xFFFFF780000003C4] = 1;
  MEMORY[0xFFFFF7800000036A] = 1;
  if ( !(unsigned __int8)ExInitSystem() )
    goto LABEL_92;
  KeNumaInitialize();
  VerifierInitSystem(a1);
  InitializeDynamicPartitioningPolicy();
  EtwBootPerfData = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned __int8)MmInitSystem(0LL, a1) )
    goto LABEL_92;
  qword_140D58798 = KeQueryPerformanceCounter(0LL).QuadPart;
  KiHwPolicyDriverImageBase = 0LL;
  HalInitializeBios(0, a1);
  InbvDriverInitialize(0LL, a1, 0LL);
  if ( KiBugCodeMessages )
  {
    v24 = DestinationString;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, DestinationString, 0x6342694Bu);
    v26 = PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheck(0x7Du);
    memmove(PoolWithTag, KiBugCodeMessages, v24);
    KiBugCodeMessages = v26;
  }
  if ( *(_DWORD *)(a1 + 12) < 2u )
  {
    IopAutoReboot = 0;
    KeBugCheckEx(0x196u, *(unsigned int *)(a1 + 12), 2uLL, 0LL, 0LL);
  }
  v27 = 0;
  for ( i = *(__int64 **)(a1 + 16); i != (__int64 *)(a1 + 16); ++v27 )
  {
    if ( v27 >= 3 )
    {
      v29 = (char *)i[10];
      if ( *(_WORD *)v29 == 92 )
      {
        v30 = *((unsigned __int16 *)i + 36) >> 1;
        if ( (unsigned __int64)v30 + 1 <= 0x100 )
        {
          v31 = 0LL;
          do
          {
            v32 = *v29;
            v29 += 2;
            pszDest[v31] = v32;
            v31 = (unsigned int)(v31 + 1);
          }
          while ( (unsigned int)v31 < v30 );
          if ( (unsigned int)v31 >= 0x100uLL )
            _report_rangecheckfailure();
          pszDest[v31] = 0;
LABEL_62:
          RtlInitAnsiString((PSTRING)&v61[1], pszDest);
          DbgLoadImageSymbols((__int64)&v61[1], i[6], 0xFFFFFFFFLL);
        }
      }
      else if ( ((unsigned __int64)HostNtSystemRoot->Length >> 1)
              + 17
              + ((unsigned __int64)*((unsigned __int16 *)i + 44) >> 1) <= 0x100 )
      {
        v33 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%ws\\System32\\Drivers\\%wZ", HostNtSystemRoot->Buffer + 2, i + 11);
        if ( v33 < 0 )
          KeBugCheckEx(0x31u, v33, 3uLL, 0LL, 0LL);
        goto LABEL_62;
      }
    }
    i = (__int64 *)*i;
  }
  if ( BYTE1(KdDebuggerEnabled) )
    DbgBreakPointWithStatus(1u);
  ExpInitializeBootEnvironment(a1);
  HvlPhase1Initialize(a1);
  if ( **(_DWORD **)(a1 + 240) >= 0xE38u )
    HeadlessInit(a1);
  BootApplicationPersistentDataInitialize(a1);
  MEMORY[0xFFFFF780000002B4] = 2147418111;
  MEMORY[0xFFFFF780000002B8] = 0x80000000;
  if ( CmNtCSDVersion )
  {
    Message = RtlFindMessage(0x140000000LL, 0xBu, 0, 0x40000087u, (unsigned __int16 **)&v60);
    if ( Message < 0 )
      KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
    RtlInitAnsiString(&DestinationString_8, v60 + 4);
    DestinationString_8.Length -= 2;
    dwFlagsa = (unsigned __int8)CmNtCSDVersion != 0 ? (unsigned __int8)CmNtCSDVersion + 64 : 0;
    LODWORD(pcbRemaining) = BYTE1(CmNtCSDVersion);
    v38 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &DestinationString_8, pcbRemaining);
    if ( v38 < 0 )
      KeBugCheckEx(0x31u, v38, 5uLL, 0LL, 0LL);
    if ( (CmNtCSDVersion & 0xFFFF0000) != 0 )
    {
      v61[0] = 0LL;
      v41 = RtlStringCbCatExA(pszDest, v39, v40, v61, &cbDest, dwFlagsa);
      if ( v41 < 0 )
        KeBugCheckEx(0x31u, v41, 6uLL, 0LL, 0LL);
      v42 = RtlStringCbPrintfA(v61[0], cbDest, "v.%u", HIWORD(CmNtCSDVersion));
      if ( v42 < 0 )
        KeBugCheckEx(0x31u, v42, 7uLL, 0LL, 0LL);
    }
  }
  else
  {
    v43 = RtlStringCbCopyExA(pszDest, v34, v35, v36, &cbDest, dwFlags);
    if ( v43 < 0 )
      KeBugCheckEx(0x31u, v43, 8uLL, 0LL, 0LL);
    CmCSDVersionString.MaximumLength = 256 - cbDest;
  }
  RtlInitAnsiString(&DestinationString_8, pszDest);
  v44 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, &DestinationString_8, 1u);
  if ( v44 < 0 )
    KeBugCheckEx(0x31u, v44, 9uLL, 0LL, 0LL);
  v45 = RtlStringCbPrintfA(v65, 0x40uLL, "%u.%u", 6, 3);
  if ( v45 < 0 )
    KeBugCheckEx(0x31u, v45, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, v65) )
LABEL_92:
    KeBugCheck(0x31u);
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v46 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x800000uLL, 0x63617453u);
    v49 = v46;
    if ( v46 )
    {
      v62[0] = v46;
      v62[1] = 0x800000LL;
      v62[2] = 0x800000LL;
      if ( (int)RtlControlStackTraceDataBase(v48, v47, v62) < 0 )
        ExFreePoolWithTag(v49, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  ExInitializeHandleTablePackage();
  if ( !(unsigned __int8)ObInitSystem() )
    KeBugCheck(0x5Eu);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x5Fu);
  if ( !(unsigned __int8)PsInitSystem(0LL, a1) || (int)DbgkInitialize() < 0 )
    KeBugCheck(0x60u);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x8Fu);
  MEMORY[0xFFFFF7800000026C] = 10;
  MEMORY[0xFFFFF78000000270] = 0;
  MEMORY[0xFFFFF78000000260] = 19041;
  MEMORY[0xFFFFF7800000026A] = KeProcessorArchitecture;
  MEMORY[0xFFFFF7800000002C] = -31132;
  MEMORY[0xFFFFF7800000002E] = -31132;
  result = 0LL;
  MEMORY[0xFFFFF780000003A4] = 0;
  return result;
}
