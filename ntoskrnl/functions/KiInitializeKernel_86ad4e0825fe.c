__int64 __fastcall KiInitializeKernel(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR a4, unsigned int a5, __int64 a6)
{
  ULONG_PTR v7; // rdi
  char v8; // al
  int v9; // r13d
  char XSaveFeatureFlags; // al
  char v16; // cl
  ULONG_PTR v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 result; // rax
  int v27; // eax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  int v31; // eax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  bool v42; // zf
  __int64 v43; // r9
  __int64 v44; // rbx
  unsigned __int64 v45; // r11
  int TopologyIdForProcessor; // eax
  __int64 v47; // rcx
  int v48; // r10d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v52; // [rsp+30h] [rbp-2A8h] BYREF
  __int64 v53; // [rsp+38h] [rbp-2A0h]
  __int64 v54; // [rsp+40h] [rbp-298h]
  __int64 v55; // [rsp+48h] [rbp-290h]
  __int64 v56; // [rsp+50h] [rbp-288h]
  ULONG_PTR v57; // [rsp+58h] [rbp-280h]
  __int64 v58; // [rsp+60h] [rbp-278h]
  int v59; // [rsp+68h] [rbp-270h]
  int v60; // [rsp+6Ch] [rbp-26Ch]
  int v61; // [rsp+70h] [rbp-268h]
  int v62; // [rsp+74h] [rbp-264h]
  __int128 v63; // [rsp+78h] [rbp-260h] BYREF
  _DWORD v64[128]; // [rsp+90h] [rbp-248h] BYREF

  v52 = a3;
  v53 = a2;
  v55 = a1;
  v56 = a2;
  v57 = a4;
  v54 = a6;
  v58 = a6;
  v63 = 0LL;
  if ( !a5 )
  {
    HvlPhase0Initialize(a6);
    if ( KiSystemCallSelector == 1 && (HvlEnlightenments & 0x80000) != 0 )
      *(_DWORD *)(MmWriteableSharedUserData + 776) = 1;
  }
  v7 = *(_QWORD *)(a4 + 35232);
  v8 = *(_BYTE *)(a4 + 141);
  if ( v8 == 2 || ((v8 - 1) & 0xFD) == 0 )
    KiSetHardwareSpeculationControlFeatures(a4, *(_QWORD *)(a4 + 35232));
  KiCheckMicrocode(a4, a2);
  memset(v64, 0, sizeof(v64));
  _fxsave(v64);
  if ( a5 )
  {
    if ( KiFpuLeakage )
      v7 |= 0x20000000000uLL;
    KiSetPageAttributesTable();
    KiInitializeTopologyStructures(a4);
    v9 = 65471;
  }
  else
  {
    KiDetectFpuLeakage();
    KiFpuLeakage = v27;
    if ( v27 )
      v7 |= 0x20000000000uLL;
    if ( KiFlushPcid )
    {
      v28 = __readcr3();
      __writecr3(v28);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v34 = __readcr4();
      if ( (v34 & 0x20080) != 0 )
      {
        __writecr4(v34 ^ 0x80);
        __writecr4(v34);
      }
      else
      {
        v35 = __readcr3();
        __writecr3(v35);
      }
    }
    KiSetPageAttributesTable();
    if ( MEMORY[0xFFFFF78000000280] )
      v7 |= 0x80000000uLL;
    else
      v7 = v7 & 0xFFFFFFFF3FFFFFFFuLL | 0x40000000;
    v29 = __readcr4();
    __writecr4(v29 | 0x18);
    if ( KiFlushPcid )
    {
      v30 = __readcr3();
      __writecr3(v30);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v36 = __readcr4();
      if ( (v36 & 0x20080) != 0 )
      {
        __writecr4(v36 ^ 0x80);
        __writecr4(v36);
      }
      else
      {
        v37 = __readcr3();
        __writecr3(v37);
      }
    }
    KiConfigureInitialNodes(a4);
    KiConfigureProcessorBlock(a4);
    KiInitializeTopologyStructures(a4);
    v9 = 65471;
    v31 = 65471;
    if ( v64[7] )
      v31 = v64[7];
    KiMxCsrMask = v31;
    KeCompactServiceTable(
      (ULONG_PTR)KiServiceTable,
      (unsigned __int8 *)&KiArgumentTable,
      KiServiceLimit,
      0LL,
      0x40000000);
  }
  KiSetCacheInformation();
  PoInitializePrcb((PVOID)a4);
  *(_QWORD *)(a4 + 34968) = 0LL;
  *(_QWORD *)(a4 + 34976) = a4 + 34976;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    XSaveFeatureFlags = KeGetXSaveFeatureFlags();
    v7 |= (XSaveFeatureFlags & 8 | 0x800LL) << 12;
    if ( (XSaveFeatureFlags & 0x10) != 0 )
      v7 |= 0x4000000000uLL;
    if ( (XSaveFeatureFlags & 0x40) != 0 )
      v7 |= 0x80000000000000uLL;
  }
  _RAX = 0LL;
  __asm { cpuid }
  v59 = _RAX;
  v60 = _RBX;
  v61 = _RCX;
  v62 = _RDX;
  v16 = *(_BYTE *)(a4 + 141);
  if ( (v16 == 2 || v16 == 1) && (unsigned int)_RAX >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    v59 = _RAX;
    v60 = _RBX;
    v61 = _RCX;
    v62 = _RDX;
    if ( (_RCX & 0x80u) != 0LL )
      KiCetCapable = 1;
  }
  if ( KiCetCapable )
  {
    if ( (_bittest64(&KeEnabledSupervisorXStateFeatures, 0xBu) & ((v7 & 0x800000) != 0)) != 0 )
    {
      v7 |= 0x400000000000uLL;
      *(_QWORD *)(a4 + 35232) |= 0x400000000000uLL;
      v38 = __readcr4();
      __writecr4(v38 | 0x800000);
      KiUserCetAllowed = 1;
      if ( !*(_DWORD *)(a4 + 36) && *(_BYTE *)(a4 + 141) == 1 && *(_BYTE *)(a4 + 64) == 25 )
        KiUserCetPl3SspCanonicalizeUpperMask = 0x7FFF;
    }
  }
  if ( a5 )
  {
    if ( v64[7] )
      v9 = v64[7];
    v22 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL | 0x8000000;
    if ( (v7 & 0x8000000) == 0 )
      v22 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL;
    if ( *(_BYTE *)(a4 + 141) == 2 && *(_BYTE *)(a4 + 64) == 6 && *(_BYTE *)(a4 + 67) == 23 && *(_BYTE *)(a4 + 66) == 10 )
    {
      KeGetTopologyIdForProcessor(a4, 4);
      v44 = 0LL;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v45 = 0x140000000uLL;
        while ( 1 )
        {
          TopologyIdForProcessor = KeGetTopologyIdForProcessor(*(_QWORD *)(v45 + 8 * v44 + 13764992), 4);
          if ( v48 == TopologyIdForProcessor )
            break;
          v44 = (unsigned int)(v44 + 1);
          if ( (unsigned int)v44 >= (unsigned int)KeNumberProcessors_0 )
            goto LABEL_127;
        }
        v43 = v47;
      }
LABEL_127:
      v7 &= ~0x100000uLL;
      if ( (*(_DWORD *)(v43 + 35232) & 0x100000) != 0 )
        v7 |= 0x100000uLL;
    }
    if ( v7 != v22
      || v9 != KiMxCsrMask
      || *(_DWORD *)(KiProcessorBlock[0] + 232) != *(_DWORD *)(a4 + 232)
      || *(_DWORD *)(KiProcessorBlock[0] + 160) != *(_DWORD *)(a4 + 160)
      || *(_DWORD *)(KiProcessorBlock[0] + 164) != *(_DWORD *)(a4 + 164) )
    {
      KeBugCheckEx(0x3Eu, v7, v22, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v42 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
        SchedulerAssist[5] &= 0xFFFF0007;
        if ( v42 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(2uLL);
    HvlEnlightenProcessor(0);
  }
  else
  {
    KeProcessorArchitecture = 9;
    KeProcessorLevel = *(char *)(a4 + 64);
    KeProcessorRevision = *(_WORD *)(a4 + 66);
    KeFeatureBits = v7;
    if ( KiIrqlFlags )
    {
      v39 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v39 - 2) <= 0xDu )
      {
        v40 = KeGetCurrentPrcb();
        v41 = v40->SchedulerAssist;
        v42 = (v41[5] & 0xFFFF0003) == 0;
        v41[5] &= 0xFFFF0003;
        if ( v42 )
          KiRemoveSystemWorkPriorityKick((__int64)v40);
      }
    }
    __writecr8(1uLL);
    KiFreezeExecutionLock = 0LL;
    KiInitSystem(v55);
    v32 = __rdtsc();
    KiWaitNever = __ROR8__(v32 ^ __ROL8__(v32, 43), v32 & 0xF);
    v33 = __rdtsc();
    KiWaitAlways = __ROL8__(__ROR8__(v33, 47) ^ v33, v33 & 0xF);
    HviGetHypervisorFeatures(&v63);
    if ( (WORD6(v63) & 0x1000) != 0 )
      KiNPIEPEnabled = 1;
    if ( (unsigned int)KiIsKernelCfgActive() )
      RtlInitKernelModeSpecialMachineFrameEntries();
  }
  if ( KiNPIEPEnabled )
  {
    v23 = 0LL;
    __writemsr(0x40000040u, 0xFuLL);
  }
  KiEnableXSave(0LL, v23);
  v24 = MmWriteableSharedUserData;
  *(_QWORD *)(MmWriteableSharedUserData + 760) = 195LL;
  *(_WORD *)(v24 + 630) = 257;
  *(_BYTE *)(v24 + 634) = 1;
  *(_WORD *)(v24 + 636) = 257;
  *(_BYTE *)(v24 + 638) = 1;
  *(_BYTE *)(v24 + 642) = 1;
  if ( (v7 & 0x80000) != 0 )
    *(_BYTE *)(v24 + 641) = 1;
  if ( (v7 & 0x4000) != 0 )
    *(_BYTE *)(v24 + 635) = 1;
  if ( (v7 & 0x800000) != 0 )
    *(_BYTE *)(v24 + 645) = 1;
  if ( (v7 & 0x10000000) != 0 )
    *(_BYTE *)(v24 + 650) = 1;
  if ( (v7 & 0x4000000) != 0 )
    *(_BYTE *)(v24 + 648) = 1;
  if ( (v7 & 0x8000000) != 0 )
    *(_BYTE *)(v24 + 649) = 1;
  if ( (v7 & 0x100000000LL) != 0 )
    *(_BYTE *)(v24 + 656) = 1;
  if ( (v7 & 0x400000000LL) != 0 )
    *(_BYTE *)(v24 + 660) = 1;
  if ( (v7 & 0x800000000000LL) != 0 )
    *(_BYTE *)(v24 + 664) = 1;
  if ( (v7 & 0x1000000000000LL) != 0 )
    *(_BYTE *)(v24 + 665) = 1;
  if ( (v7 & 0x2000000000000LL) != 0 )
    *(_BYTE *)(v24 + 666) = 1;
  if ( (MEMORY[0xFFFFF780000003D8] & 4) != 0 && (v7 & 0x4000000000000LL) != 0 )
    *(_BYTE *)(v24 + 667) = 1;
  if ( (MEMORY[0xFFFFF780000003D8] & 4) != 0 && (v7 & 0x8000000000000LL) != 0 )
    *(_BYTE *)(v24 + 668) = 1;
  if ( (v7 & 0x10000000000000LL) != 0 && (MEMORY[0xFFFFF780000003D8] & 0xE0) != 0 )
    *(_BYTE *)(v24 + 669) = 1;
  if ( (v7 & 0x40000000000000LL) != 0 )
    *(_BYTE *)(v24 + 670) = 1;
  *(_BYTE *)(v24 + 749) = KiVirtFlags;
  if ( a5 )
  {
    KiStartIdleThread(v53, a4, v52);
    v25 = v54;
  }
  else
  {
    v25 = v54;
    KiInitializeAndStartInitialThread(v53, v52, a4, v54);
  }
  if ( a5 )
  {
    KiStartPrcbThreads(a4);
    if ( !HalpInitSystemPhase1(0LL) )
      KeBugCheck(0x5Cu);
  }
  else
  {
    InitBootProcessor(v25);
  }
  KiCompleteKernelInit(a4, v53, a5);
  *(_QWORD *)(v25 + 136) = 0LL;
  LODWORD(v52) = 0;
  while ( 1 )
  {
    result = (unsigned int)KiBarrierWait;
    if ( !KiBarrierWait )
      break;
    KeYieldProcessorEx(&v52);
  }
  if ( KiClockTimerPerCpuTickScheduling )
  {
    if ( a5 )
      return KeInitializeClockOtherProcessors(a4);
  }
  return result;
}
