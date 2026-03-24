/*
 * XREFs of PspAllocateThread @ 0x14064B048
 * Callers:
 *     NtCreateUserProcess @ 0x14060A1D0 (NtCreateUserProcess.c)
 *     PspCreateThread @ 0x140648C4C (PspCreateThread.c)
 *     PspCreatePicoThread @ 0x14090BF50 (PspCreatePicoThread.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140205710 (PoEnergyEstimationEnabled.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     PsQueryThreadStartAddress @ 0x14025FB90 (PsQueryThreadStartAddress.c)
 *     RtlGetExtendedContextLength @ 0x140276470 (RtlGetExtendedContextLength.c)
 *     KeSelectIdealProcessor @ 0x140277F88 (KeSelectIdealProcessor.c)
 *     KeQuerySystemTimeUnsafe @ 0x140278EC8 (KeQuerySystemTimeUnsafe.c)
 *     ExInitializePushLock @ 0x140278EE0 (ExInitializePushLock.c)
 *     KeQueryMaximumGroupCount @ 0x140278EF0 (KeQueryMaximumGroupCount.c)
 *     KeQuerySystemTimePrecise @ 0x140278F00 (KeQuerySystemTimePrecise.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeSelectNodeForAffinity @ 0x1402ECD60 (KeSelectNodeForAffinity.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     KeInitializeSemaphore @ 0x140356600 (KeInitializeSemaphore.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     RtlLocateExtendedFeature @ 0x14058F520 (RtlLocateExtendedFeature.c)
 *     MmSecureVirtualMemoryEx @ 0x14061FC20 (MmSecureVirtualMemoryEx.c)
 *     ExCreateHandleEx @ 0x14062D820 (ExCreateHandleEx.c)
 *     MmCreateTeb @ 0x14064BE0C (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x14064C384 (PspSetupUserStack.c)
 *     PspWow64InitThread @ 0x1406959A0 (PspWow64InitThread.c)
 *     PspWow64SetupUserStack @ 0x1406AF8F8 (PspWow64SetupUserStack.c)
 *     PspDeleteUserStack @ 0x1406BECD8 (PspDeleteUserStack.c)
 *     MmDeleteTeb @ 0x1406E93D0 (MmDeleteTeb.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 *     PspSetupUserShadowStack @ 0x14090A5DC (PspSetupUserShadowStack.c)
 *     PspUmsInitThread @ 0x14090A74C (PspUmsInitThread.c)
 *     KeInitThread @ 0x14098F2E0 (KeInitThread.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspAllocateThread(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        PADAPTER_OBJECT *a10,
        _BYTE *a11,
        _DMA_OPERATIONS **a12)
{
  char v13; // bl
  __int64 v16; // r8
  struct _KTHREAD *CurrentThread; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // r14d
  _QWORD *v21; // r11
  int Object; // r14d
  __int64 v23; // rax
  _QWORD *v24; // r11
  unsigned int v25; // ebx
  unsigned int MaximumGroupCount; // ecx
  PADAPTER_OBJECT v28; // rsi
  __int64 v29; // rax
  int v30; // eax
  ULONG_PTR v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 Handle; // rax
  __int64 v36; // rdx
  int v37; // r8d
  __int16 v38; // dx
  __int16 v39; // cx
  __int16 v40; // ax
  _BYTE *v41; // rcx
  int v42; // ecx
  int v43; // eax
  _DWORD *v44; // r9
  __int64 Teb; // rbx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  _DMA_OPERATIONS *PoolWithTag; // rax
  _DWORD *v50; // r9
  char *ExtendedFeature; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  _DMA_OPERATIONS **v54; // r8
  __int64 v55; // rcx
  int inited; // eax
  _DMA_OPERATIONS *DmaOperations; // rcx
  unsigned int v58; // [rsp+28h] [rbp-160h]
  unsigned int v59; // [rsp+38h] [rbp-150h]
  int v60; // [rsp+50h] [rbp-138h]
  char v61; // [rsp+54h] [rbp-134h]
  __int16 v62; // [rsp+54h] [rbp-134h]
  int v63; // [rsp+58h] [rbp-130h]
  __int64 v64; // [rsp+60h] [rbp-128h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-120h] BYREF
  __int64 v66; // [rsp+70h] [rbp-118h] BYREF
  _BYTE *v67; // [rsp+78h] [rbp-110h]
  _DMA_OPERATIONS **p_DmaOperations; // [rsp+80h] [rbp-108h]
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp-100h] BYREF
  __int64 v70; // [rsp+90h] [rbp-F8h]
  __int64 v71; // [rsp+98h] [rbp-F0h]
  __int64 v72; // [rsp+A0h] [rbp-E8h]
  struct _KTHREAD *v73; // [rsp+A8h] [rbp-E0h]
  ULONG_PTR v74; // [rsp+B0h] [rbp-D8h]
  __int64 v75; // [rsp+B8h] [rbp-D0h]
  __int64 v76; // [rsp+C0h] [rbp-C8h]
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp-C0h]
  char v78; // [rsp+D0h] [rbp-B8h] BYREF
  int v79; // [rsp+D1h] [rbp-B7h]
  __int16 v80; // [rsp+D5h] [rbp-B3h]
  char v81; // [rsp+D7h] [rbp-B1h]
  __int64 v82; // [rsp+D8h] [rbp-B0h]
  __int64 v83; // [rsp+E0h] [rbp-A8h]
  __int64 v84; // [rsp+E8h] [rbp-A0h]
  int v85; // [rsp+F0h] [rbp-98h]
  int v86; // [rsp+F4h] [rbp-94h]
  int v87; // [rsp+F8h] [rbp-90h]
  int v88; // [rsp+FCh] [rbp-8Ch]
  __int64 v89; // [rsp+100h] [rbp-88h]
  __int64 v90; // [rsp+108h] [rbp-80h]
  PADAPTER_OBJECT *v91; // [rsp+110h] [rbp-78h]
  _BYTE v92[48]; // [rsp+118h] [rbp-70h] BYREF

  v13 = a3;
  v74 = BugCheckParameter1;
  BugCheckParameter2 = a2;
  v75 = a4;
  v76 = a5;
  v70 = (__int64)a6;
  v91 = a10;
  v67 = a11;
  v16 = (__int64)a12;
  p_DmaOperations = a12;
  memset(v92, 0, sizeof(v92));
  v66 = 0LL;
  v71 = 0LL;
  DmaAdapter = 0LL;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  LODWORD(NumberOfBytes) = 0;
  CurrentThread = KeGetCurrentThread();
  v73 = CurrentThread;
  v63 = 0;
  if ( a6 )
    v18 = *a6;
  else
    v18 = 0LL;
  v72 = v18;
  v64 = v18;
  if ( !a4 )
    goto LABEL_22;
  v19 = 0LL;
  v20 = *(_DWORD *)(a4 + 4);
  v21 = (_QWORD *)((a4 + 320) & -(__int64)((v20 & 0x1000) != 0));
  if ( (v20 & 0x4000) != 0 )
    v19 = KiProcessorBlock[*(unsigned int *)(a4 + 252)];
  if ( v19 )
  {
    if ( v21 )
    {
      if ( *(unsigned __int8 *)(v19 + 208) != *(_WORD *)(((a4 + 320) & -(__int64)((*(_DWORD *)(a4 + 4) & 0x1000) != 0))
                                                       + 8)
        || *v21 && (*v21 & *(_QWORD *)(v19 + 200)) == 0LL )
      {
        Object = -1073741776;
LABEL_34:
        ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
        return (unsigned int)Object;
      }
    }
    else
    {
      *(_DWORD *)(a4 + 4) = v20 | 0x1000;
      *(_WORD *)(a4 + 328) = *(unsigned __int8 *)(v19 + 208);
      *(_QWORD *)(a4 + 320) = qword_140CFC848[*(unsigned __int8 *)(v19 + 208)];
    }
    v63 = *(unsigned __int16 *)(*(_QWORD *)(v19 + 192) + 146LL) + 1;
    goto LABEL_18;
  }
  if ( v21 && *v21 )
  {
    v23 = KeSelectNodeForAffinity((a4 + 320) & -(__int64)((*(_DWORD *)(a4 + 4) & 0x1000) != 0));
    v63 = *(unsigned __int16 *)(v23 + 146) + 1;
    *(_DWORD *)(a4 + 4) = v20 | 0x4000;
    *(_DWORD *)(a4 + 252) = (unsigned __int16)KeSelectIdealProcessor(v23, v24, 0LL, 0LL);
    v16 = (__int64)p_DmaOperations;
    CurrentThread = v73;
LABEL_18:
    v13 = a3;
  }
  if ( (*(_DWORD *)(a4 + 4) & 0x8000) != 0
    && (*(_QWORD *)(BugCheckParameter1 + 1408) || (_KPROCESS *)BugCheckParameter1 != CurrentThread->Process) )
  {
    goto LABEL_24;
  }
LABEL_22:
  *(_DWORD *)(v16 + 384) = 0;
  *(_BYTE *)(v16 + 388) = v13;
  if ( a5 )
  {
    if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
    {
LABEL_24:
      Object = -1073741811;
      goto LABEL_34;
    }
    if ( a2 )
    {
      if ( v13 == 1 && (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_DWORD *)(v16 + 384) = *(_DWORD *)(a2 + 24) & (v13 != 0 ? 7666 : 73714);
    }
  }
  else if ( a2 )
  {
    *(_DWORD *)(v16 + 384) = *(_DWORD *)(a2 + 24) & 0x11FF2;
  }
  v61 = PoEnergyEstimationEnabled();
  v25 = v61 != 0 ? 2400 : 2200;
  MaximumGroupCount = KeQueryMaximumGroupCount();
  LODWORD(p_DmaOperations) = 0;
  if ( MaximumGroupCount > 1 )
  {
    LODWORD(p_DmaOperations) = (v61 != 0 ? 2407 : 2207) & 0xFFFFFFF8;
    v25 = (_DWORD)p_DmaOperations + 8 * MaximumGroupCount;
  }
  v59 = v25;
  v58 = v25;
  LOBYTE(MaximumGroupCount) = a3;
  Object = ObCreateObjectEx(MaximumGroupCount, (_DWORD)PsThreadType, a2, a3);
  v60 = Object;
  if ( Object < 0 )
    goto LABEL_34;
  v28 = DmaAdapter;
  memset(DmaAdapter, 0, v25);
  if ( v61 )
  {
    DmaAdapter[95].DmaOperations = (_DMA_OPERATIONS *)&DmaAdapter[137].DmaOperations;
    _interlockedbittestandset((volatile signed __int32 *)v28, 0x15u);
    v28 = DmaAdapter;
  }
  if ( KiSchedulerAssistThreadFlagEnabled )
  {
    _interlockedbittestandset((volatile signed __int32 *)v28, 0x16u);
    v28 = DmaAdapter;
  }
  v29 = (unsigned int)p_DmaOperations;
  if ( (_DWORD)p_DmaOperations )
  {
    *(_DWORD *)&v28[81].Version |= 0x20000u;
    *(_QWORD *)&v28[96].Version = (char *)v28 + v29;
  }
  ExInitializePushLock((PKSPIN_LOCK)&v28[79].DmaOperations);
  p_DmaOperations = &v28[71].DmaOperations;
  v28[71].DmaOperations = *(_DMA_OPERATIONS **)(BugCheckParameter1 + 1088);
  v30 = *a9;
  if ( (*a9 & 4) != 0 )
  {
    *(_DWORD *)&v28[81].Version |= 4u;
    v30 = *a9;
  }
  if ( (v30 & 0x200) != 0 )
    *(_DWORD *)(&v28[7].Size + 1) |= 0x200000u;
  v31 = (ULONG_PTR)&v28[80];
  BugCheckParameter2 = (ULONG_PTR)&v28[80];
  *(_QWORD *)&v28[80].Version = 0LL;
  LODWORD(v28[80].DmaOperations) = 7;
  KeInitializeSemaphore((PRKSEMAPHORE)&v28[72].DmaOperations, 0, 1);
  *(_QWORD *)&v28[68].Version = (char *)v28 + 1080;
  v28[67].DmaOperations = (_DMA_OPERATIONS *)&v28[67].DmaOperations;
  v28[86].DmaOperations = (_DMA_OPERATIONS *)&v28[86];
  *(_QWORD *)&v28[86].Version = v28 + 86;
  v28[87].DmaOperations = (_DMA_OPERATIONS *)&v28[87];
  *(_QWORD *)&v28[87].Version = v28 + 87;
  *(_QWORD *)&v28[88].Version = 0LL;
  *(_QWORD *)&v28[93].Version = (char *)v28 + 1480;
  v28[92].DmaOperations = (_DMA_OPERATIONS *)&v28[92].DmaOperations;
  v28[93].DmaOperations = 0LL;
  v28[75].DmaOperations = (_DMA_OPERATIONS *)&v28[75];
  *(_QWORD *)&v28[75].Version = v28 + 75;
  v28[88].DmaOperations = 0LL;
  *(_QWORD *)&v28[70].Version = 0LL;
  *(_QWORD *)&v28[71].Version = (char *)v28 + 1128;
  v28[70].DmaOperations = (_DMA_OPERATIONS *)&v28[70].DmaOperations;
  v28[96].DmaOperations = (_DMA_OPERATIONS *)-3LL;
  if ( KeQuerySystemTimeUnsafe() )
  {
    KeQuerySystemTimePrecise((__int64 *)&v28[67], v32, v33, v34);
  }
  else
  {
    v28 = DmaAdapter;
    *(_QWORD *)&DmaAdapter[67].Version = MEMORY[0xFFFFF78000000014];
  }
  *(_QWORD *)&v28[99].Version = (char *)v28 + 1576;
  v28[98].DmaOperations = (_DMA_OPERATIONS *)&v28[98].DmaOperations;
  v28[99].DmaOperations = 0LL;
  v28[100].DmaOperations = (_DMA_OPERATIONS *)&v28[100];
  *(_QWORD *)&v28[100].Version = v28 + 100;
  ExAcquirePushLockExclusiveEx(v31, 0LL);
  Handle = ExCreateHandleEx(PspCidTable, (__int64)v28, 0, 0, 0LL);
  *(_QWORD *)&v28[72].Version = Handle;
  if ( !Handle )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    Object = -1073741670;
    v60 = -1073741670;
    v28 = DmaAdapter;
    goto LABEL_116;
  }
  if ( a5 )
  {
    v37 = *a9;
    v38 = (16 * (*a9 & 0x40)) | 8;
    if ( (*a9 & 2) == 0 )
      v38 = 16 * (v37 & 0x40);
    v39 = v38 | 0x2000;
    if ( (v37 & 0x80u) == 0 )
      v39 = v38;
    v40 = v39 | 0x4000;
    if ( (v37 & 0x100) == 0 )
      v40 = v39;
    v62 = v40;
    v41 = v67;
    if ( !v67 )
    {
      if ( !*(_QWORD *)(BugCheckParameter1 + 2240) )
      {
        Teb = (__int64)v73->Teb;
        v66 = Teb;
        *(_QWORD *)&v28[69].Version = PsQueryThreadStartAddress((__int64)v73, 1);
        *(_QWORD *)&v28[77].Version = v73[1].ApcState.ApcListHead[0].Blink;
        *(_DWORD *)(&v28[81].Size + 1) |= 0x10u;
        if ( (*(_DWORD *)(BugCheckParameter1 + 2516) & 0x4000) != 0
          && (*(_DWORD *)(a5 + 48) & 0x100040) == 0x100040
          && (*(_DWORD *)(*(int *)(a5 + 1248) + a5 + 1232) & 0x800LL) != 0 )
        {
          ExtendedFeature = RtlLocateExtendedFeature((_DWORD *)(a5 + 1232), 0xBu, 0LL);
          if ( ExtendedFeature )
          {
            if ( (*ExtendedFeature & 1) != 0 && *((_QWORD *)ExtendedFeature + 1) )
              *(_DWORD *)(&v28[7].Size + 1) |= 0x100000u;
          }
        }
        v52 = *(_QWORD *)(BugCheckParameter1 + 1408);
        if ( v52 )
        {
          v53 = 14392LL;
          if ( *(_WORD *)(v52 + 8) != 0x8664 )
            v53 = 12288LL;
          v70 = v53;
        }
        else
        {
          v70 = 6200LL;
        }
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v92, v50);
        if ( MmSecureVirtualMemoryEx(Teb, v70, 4, 0) )
        {
          v54 = p_DmaOperations;
          *(_OWORD *)(Teb + 64) = *(_OWORD *)p_DmaOperations;
          *(_OWORD *)(Teb + 2008) = *(_OWORD *)v54;
          *(_DWORD *)(Teb + 6044) = 0;
          *(_DWORD *)(Teb + 6120) = 0;
          *(_WORD *)(Teb + 6126) &= 0x62Cu;
          *(_WORD *)(Teb + 6126) |= v62 | 0x40;
          v55 = *(_QWORD *)(BugCheckParameter1 + 1408);
          if ( v55 )
          {
            if ( *(_WORD *)(v55 + 8) == 0x8664 )
            {
              v89 = Teb + 0x2000;
              *(_QWORD *)(Teb + 8256) = *v54;
              *(_QWORD *)(Teb + 8264) = *(_QWORD *)&v28[72].Version;
              *(_QWORD *)(Teb + 10200) = *v54;
              *(_QWORD *)(Teb + 10208) = *(_QWORD *)&v28[72].Version;
              *(_DWORD *)(Teb + 14236) = 0;
              *(_DWORD *)(Teb + 14312) = 0;
              *(_WORD *)(Teb + 14318) &= 0x62Cu;
              *(_WORD *)(Teb + 14318) |= v62 | 0x40;
            }
            else
            {
              v90 = Teb + 0x2000;
              v85 = *(_DWORD *)v54;
              *(_DWORD *)(Teb + 8224) = v85;
              v86 = *(_DWORD *)&v28[72].Version;
              *(_DWORD *)(Teb + 8228) = v86;
              v87 = *(_DWORD *)v54;
              *(_DWORD *)(Teb + 9908) = v87;
              v88 = *(_DWORD *)&v28[72].Version;
              *(_DWORD *)(Teb + 9912) = v88;
              *(_DWORD *)(Teb + 12188) = 0;
              *(_DWORD *)(Teb + 12228) = 0;
              *(_WORD *)(Teb + 12234) &= 0x62Cu;
              *(_WORD *)(Teb + 12234) |= v62 | 0x40;
            }
          }
        }
        else
        {
          Object = -1073741503;
          v60 = -1073741503;
        }
LABEL_105:
        KiUnstackDetachProcess((__int64)v92, 0);
        if ( Object < 0 )
          goto LABEL_116;
        goto LABEL_106;
      }
      v47 = *(_QWORD *)(a5 + 248);
      *(_QWORD *)&v28[69].Version = v47;
      *(_QWORD *)&v28[77].Version = v47;
      v48 = v70;
      v28[94].DmaOperations = *(_DMA_OPERATIONS **)(v70 + 8);
      *(_QWORD *)&v28[95].Version = *(_QWORD *)(v48 + 16);
      _interlockedbittestandset((volatile signed __int32 *)v28, 0x1Au);
      RtlGetExtendedContextLength(MEMORY[0xFFFFF780000003D8] != 0LL ? 1048671 : 1048607, (__int64)&NumberOfBytes);
      PoolWithTag = (_DMA_OPERATIONS *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x63537350u);
      v28 = DmaAdapter;
      DmaAdapter[97].DmaOperations = PoolWithTag;
      if ( !PoolWithTag )
      {
        Object = -1073741670;
        v60 = -1073741670;
        goto LABEL_116;
      }
      Teb = v66;
LABEL_106:
      inited = KeInitThread(v28, 0LL, PspUserThreadStartup);
      goto LABEL_108;
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 2516) & 0x4000) != 0 && (!a4 || (*(_DWORD *)(a4 + 4) & 0x8000) == 0) )
      *(_DWORD *)(&v28[7].Size + 1) |= 0x100000u;
    if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
    {
      v78 = 0;
      v83 = 0x8000LL;
      v84 = 0x40000LL;
      v82 = 0LL;
      Object = PspSetupUserStack(BugCheckParameter1, a5, v64, &v78, v63, v58, 0, v59, &DmaAdapter, 0LL);
      v60 = Object;
      if ( Object >= 0 )
      {
        v42 = (int)v67;
        *v67 ^= (v78 ^ *v67) & 2;
        v43 = PspWow64SetupUserStack(BugCheckParameter1, v36, v64, v42, v63);
LABEL_68:
        Object = v43;
        v60 = v43;
      }
    }
    else
    {
      Object = PspSetupUserStack(BugCheckParameter1, a5, v64, v41, v63, v58, 0, v59, &DmaAdapter, 0LL);
      v60 = Object;
      if ( Object >= 0 && (*(_DWORD *)(&v28[7].Size + 1) & 0x100000) != 0 )
      {
        v43 = PspSetupUserShadowStack(BugCheckParameter1, v63);
        goto LABEL_68;
      }
    }
    if ( Object < 0 )
      goto LABEL_116;
    Object = MmCreateTeb(BugCheckParameter1, (__int64)&v66);
    v60 = Object;
    if ( Object < 0 )
      goto LABEL_116;
    *(_QWORD *)&v28[69].Version = *(_QWORD *)(a5 + 248);
    *(_QWORD *)&v28[77].Version = *(_QWORD *)(a5 + 128);
    Teb = v66;
    if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
    {
      Object = PspWow64InitThread(BugCheckParameter1);
      v60 = Object;
      if ( Object < 0 )
        goto LABEL_116;
    }
    if ( v62 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v92, v44);
      *(_WORD *)(Teb + 6126) = v62;
      v46 = *(_QWORD *)(BugCheckParameter1 + 1408);
      if ( v46 )
      {
        if ( *(_WORD *)(v46 + 8) == 0x8664 )
        {
          v89 = Teb + 0x2000;
          *(_WORD *)(Teb + 14318) = v62;
        }
        else
        {
          v90 = Teb + 0x2000;
          *(_WORD *)(Teb + 12234) = v62;
        }
      }
      Object = 0;
      v60 = 0;
      goto LABEL_105;
    }
    goto LABEL_106;
  }
  *(_QWORD *)&v28[69].Version = a7;
  *(_QWORD *)&v28[77].Version = a7;
  inited = KeInitThread(v28, 0LL, PspSystemThreadStartup);
  Teb = v66;
LABEL_108:
  v60 = inited;
  Object = inited;
  if ( inited < 0 )
  {
    if ( !Teb || !v67 )
      goto LABEL_116;
    goto LABEL_115;
  }
  if ( a4 )
  {
    if ( (*(_DWORD *)(a4 + 4) & 0x8000) != 0 )
    {
      LOBYTE(v36) = a3;
      Object = PspUmsInitThread(v28, v36, a4, Teb);
      v60 = Object;
      if ( Object < 0 )
      {
LABEL_115:
        MmDeleteTeb(BugCheckParameter1, Teb);
LABEL_116:
        if ( v67 && *v67 )
          PspDeleteUserStack(BugCheckParameter1, v36, v64, v67);
        DmaOperations = v28[97].DmaOperations;
        if ( DmaOperations )
        {
          ExFreePoolWithTag(DmaOperations, 0x63537350u);
          v28[97].DmaOperations = 0LL;
        }
        if ( *(_QWORD *)&v28[72].Version )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v28[80], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&v28[80]);
          KeAbPostRelease((ULONG_PTR)&v28[80]);
          Object = v60;
          v28 = DmaAdapter;
        }
        if ( !*(_QWORD *)&v28[34].Version )
          ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
        HalPutDmaAdapter(v28);
        return (unsigned int)Object;
      }
    }
  }
  *v91 = v28;
  return 0LL;
}
