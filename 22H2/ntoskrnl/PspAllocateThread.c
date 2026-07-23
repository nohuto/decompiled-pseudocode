/*
 * XREFs of PspAllocateThread @ 0x1406C3E08
 * Callers:
 *     NtCreateUserProcess @ 0x14060A630 (NtCreateUserProcess.c)
 *     PspCreateThread @ 0x1406C1A0C (PspCreateThread.c)
 *     PspCreatePicoThread @ 0x14090BFA0 (PspCreatePicoThread.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x1402056D0 (PoEnergyEstimationEnabled.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     PsQueryThreadStartAddress @ 0x14025F3F0 (PsQueryThreadStartAddress.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KeInitializeSemaphore @ 0x1402D6DB0 (KeInitializeSemaphore.c)
 *     RtlGetExtendedContextLength @ 0x14033F480 (RtlGetExtendedContextLength.c)
 *     KeSelectIdealProcessor @ 0x140340F98 (KeSelectIdealProcessor.c)
 *     KeQuerySystemTimeUnsafe @ 0x140341ED8 (KeQuerySystemTimeUnsafe.c)
 *     ExInitializePushLock @ 0x140341EF0 (ExInitializePushLock.c)
 *     KeQueryMaximumGroupCount @ 0x140341F00 (KeQueryMaximumGroupCount.c)
 *     KeQuerySystemTimePrecise @ 0x140341F10 (KeQuerySystemTimePrecise.c)
 *     KeSelectNodeForAffinity @ 0x14035E2C0 (KeSelectNodeForAffinity.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlLocateExtendedFeature @ 0x14058F460 (RtlLocateExtendedFeature.c)
 *     MmSecureVirtualMemoryEx @ 0x140620040 (MmSecureVirtualMemoryEx.c)
 *     MmDeleteTeb @ 0x140636AF0 (MmDeleteTeb.c)
 *     ObCreateObjectEx @ 0x140651EA0 (ObCreateObjectEx.c)
 *     ExCreateHandleEx @ 0x140664860 (ExCreateHandleEx.c)
 *     PspWow64InitThread @ 0x140679DC0 (PspWow64InitThread.c)
 *     PspWow64SetupUserStack @ 0x140692AAC (PspWow64SetupUserStack.c)
 *     PspDeleteUserStack @ 0x1406A1938 (PspDeleteUserStack.c)
 *     MmCreateTeb @ 0x1406C4BCC (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x1406C5144 (PspSetupUserStack.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     PspSetupUserShadowStack @ 0x14090A62C (PspSetupUserShadowStack.c)
 *     PspUmsInitThread @ 0x14090A79C (PspUmsInitThread.c)
 *     KeInitThread @ 0x14098FD94 (KeInitThread.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspAllocateThread(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        PADAPTER_OBJECT *a10,
        _DWORD *a11,
        _DMA_OPERATIONS **a12)
{
  unsigned __int8 v13; // bl
  __int64 v16; // r8
  struct _KTHREAD *CurrentThread; // r9
  _QWORD *v18; // rax
  __int64 v19; // rdx
  int v20; // r14d
  _QWORD *v21; // r11
  int v22; // r14d
  __int64 v23; // rax
  _QWORD *v24; // r11
  unsigned int v25; // ebx
  unsigned int MaximumGroupCount; // ecx
  PADAPTER_OBJECT v28; // rsi
  __int64 v29; // rax
  int v30; // eax
  ULONG_PTR v31; // rbx
  __int64 Handle; // rax
  volatile signed __int64 *v33; // rsi
  __int64 v34; // rdx
  int v35; // r8d
  __int16 v36; // dx
  __int16 v37; // cx
  __int16 v38; // ax
  _DWORD *v39; // rcx
  char *v40; // rcx
  int v41; // eax
  _DWORD *v42; // r9
  __int64 Teb; // rbx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  _DMA_OPERATIONS *PoolWithTag; // rax
  _DWORD *v48; // r9
  _QWORD *ExtendedFeature; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  _DMA_OPERATIONS **v52; // r8
  __int64 v53; // rcx
  int inited; // eax
  __int64 v55; // r8
  _DWORD *v56; // r9
  _DMA_OPERATIONS *DmaOperations; // rcx
  char *v58; // [rsp+20h] [rbp-168h]
  int v59; // [rsp+50h] [rbp-138h]
  char v60; // [rsp+54h] [rbp-134h]
  __int16 v61; // [rsp+54h] [rbp-134h]
  int v62; // [rsp+58h] [rbp-130h]
  _QWORD *v63; // [rsp+60h] [rbp-128h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-120h] BYREF
  __int64 v65; // [rsp+70h] [rbp-118h] BYREF
  _DWORD *v66; // [rsp+78h] [rbp-110h]
  _DMA_OPERATIONS **p_DmaOperations; // [rsp+80h] [rbp-108h]
  ULONG ContextLength; // [rsp+88h] [rbp-100h] BYREF
  __int64 v69; // [rsp+90h] [rbp-F8h]
  __int64 v70; // [rsp+98h] [rbp-F0h]
  _QWORD *v71; // [rsp+A0h] [rbp-E8h]
  struct _KTHREAD *v72; // [rsp+A8h] [rbp-E0h]
  ULONG_PTR v73; // [rsp+B0h] [rbp-D8h]
  __int64 v74; // [rsp+B8h] [rbp-D0h]
  __int64 v75; // [rsp+C0h] [rbp-C8h]
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp-C0h]
  char v77; // [rsp+D0h] [rbp-B8h] BYREF
  int v78; // [rsp+D1h] [rbp-B7h]
  __int16 v79; // [rsp+D5h] [rbp-B3h]
  char v80; // [rsp+D7h] [rbp-B1h]
  __int64 v81; // [rsp+D8h] [rbp-B0h]
  __int64 v82; // [rsp+E0h] [rbp-A8h]
  __int64 v83; // [rsp+E8h] [rbp-A0h]
  int v84; // [rsp+F0h] [rbp-98h]
  int v85; // [rsp+F4h] [rbp-94h]
  int v86; // [rsp+F8h] [rbp-90h]
  int v87; // [rsp+FCh] [rbp-8Ch]
  __int64 v88; // [rsp+100h] [rbp-88h]
  __int64 v89; // [rsp+108h] [rbp-80h]
  PADAPTER_OBJECT *v90; // [rsp+110h] [rbp-78h]
  _BYTE v91[48]; // [rsp+118h] [rbp-70h] BYREF

  v13 = a3;
  v73 = BugCheckParameter1;
  BugCheckParameter2 = a2;
  v74 = a4;
  v75 = a5;
  v69 = (__int64)a6;
  v90 = a10;
  v66 = a11;
  v16 = (__int64)a12;
  p_DmaOperations = a12;
  memset(v91, 0, sizeof(v91));
  v65 = 0LL;
  v70 = 0LL;
  DmaAdapter = 0LL;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  ContextLength = 0;
  CurrentThread = KeGetCurrentThread();
  v72 = CurrentThread;
  v62 = 0;
  if ( a6 )
    v18 = (_QWORD *)*a6;
  else
    v18 = 0LL;
  v71 = v18;
  v63 = v18;
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
        v22 = -1073741776;
LABEL_34:
        ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
        return (unsigned int)v22;
      }
    }
    else
    {
      *(_DWORD *)(a4 + 4) = v20 | 0x1000;
      *(_WORD *)(a4 + 328) = *(unsigned __int8 *)(v19 + 208);
      *(_QWORD *)(a4 + 320) = qword_140CFC848[*(unsigned __int8 *)(v19 + 208)];
    }
    v62 = *(unsigned __int16 *)(*(_QWORD *)(v19 + 192) + 146LL) + 1;
    goto LABEL_18;
  }
  if ( v21 && *v21 )
  {
    v23 = KeSelectNodeForAffinity((a4 + 320) & -(__int64)((*(_DWORD *)(a4 + 4) & 0x1000) != 0));
    v62 = *(unsigned __int16 *)(v23 + 146) + 1;
    *(_DWORD *)(a4 + 4) = v20 | 0x4000;
    *(_DWORD *)(a4 + 252) = (unsigned __int16)KeSelectIdealProcessor(v23, v24, 0LL, 0LL);
    v16 = (__int64)p_DmaOperations;
    CurrentThread = v72;
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
      v22 = -1073741811;
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
  v60 = PoEnergyEstimationEnabled();
  v25 = v60 != 0 ? 2400 : 2200;
  MaximumGroupCount = KeQueryMaximumGroupCount();
  LODWORD(p_DmaOperations) = 0;
  if ( MaximumGroupCount > 1 )
  {
    LODWORD(p_DmaOperations) = (v60 != 0 ? 2407 : 2207) & 0xFFFFFFF8;
    v25 = (_DWORD)p_DmaOperations + 8 * MaximumGroupCount;
  }
  v22 = ObCreateObjectEx(a3, PsThreadType, a2, a3, v58, v25, 0, v25, &DmaAdapter, 0LL);
  v59 = v22;
  if ( v22 < 0 )
    goto LABEL_34;
  v28 = DmaAdapter;
  memset(DmaAdapter, 0, v25);
  if ( v60 )
  {
    v28[95].DmaOperations = (_DMA_OPERATIONS *)&v28[137].DmaOperations;
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
    KeQuerySystemTimePrecise((LARGE_INTEGER *)&v28[67]);
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
    v33 = (volatile signed __int64 *)BugCheckParameter2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v33);
    KeAbPostRelease((ULONG_PTR)v33);
    v22 = -1073741670;
    v59 = -1073741670;
    v28 = DmaAdapter;
    goto LABEL_116;
  }
  if ( a5 )
  {
    v35 = *a9;
    v36 = (16 * (*a9 & 0x40)) | 8;
    if ( (*a9 & 2) == 0 )
      v36 = 16 * (v35 & 0x40);
    v37 = v36 | 0x2000;
    if ( (v35 & 0x80u) == 0 )
      v37 = v36;
    v38 = v37 | 0x4000;
    if ( (v35 & 0x100) == 0 )
      v38 = v37;
    v61 = v38;
    v39 = v66;
    if ( !v66 )
    {
      if ( !*(_QWORD *)(BugCheckParameter1 + 2240) )
      {
        Teb = (__int64)v72->Teb;
        v65 = Teb;
        *(_QWORD *)&v28[69].Version = PsQueryThreadStartAddress((__int64)v72, 1);
        *(_QWORD *)&v28[77].Version = v72[1].ApcState.ApcListHead[0].Blink;
        *(_DWORD *)(&v28[81].Size + 1) |= 0x10u;
        if ( (*(_DWORD *)(BugCheckParameter1 + 2516) & 0x4000) != 0
          && (*(_DWORD *)(a5 + 48) & 0x100040) == 0x100040
          && (*(_DWORD *)(*(int *)(a5 + 1248) + a5 + 1232) & 0x800LL) != 0 )
        {
          ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(a5 + 1232), 0xBu, 0LL);
          if ( ExtendedFeature )
          {
            if ( (*(_BYTE *)ExtendedFeature & 1) != 0 && ExtendedFeature[1] )
              *(_DWORD *)(&v28[7].Size + 1) |= 0x100000u;
          }
        }
        v50 = *(_QWORD *)(BugCheckParameter1 + 1408);
        if ( v50 )
        {
          v51 = 14392LL;
          if ( *(_WORD *)(v50 + 8) != 0x8664 )
            v51 = 12288LL;
          v69 = v51;
        }
        else
        {
          v69 = 6200LL;
        }
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v91, v48);
        if ( MmSecureVirtualMemoryEx(Teb, v69, 4, 0) )
        {
          v52 = p_DmaOperations;
          *(_OWORD *)(Teb + 64) = *(_OWORD *)p_DmaOperations;
          *(_OWORD *)(Teb + 2008) = *(_OWORD *)v52;
          *(_DWORD *)(Teb + 6044) = 0;
          *(_DWORD *)(Teb + 6120) = 0;
          *(_WORD *)(Teb + 6126) &= 0x62Cu;
          *(_WORD *)(Teb + 6126) |= v61 | 0x40;
          v53 = *(_QWORD *)(BugCheckParameter1 + 1408);
          if ( v53 )
          {
            if ( *(_WORD *)(v53 + 8) == 0x8664 )
            {
              v88 = Teb + 0x2000;
              *(_QWORD *)(Teb + 8256) = *v52;
              *(_QWORD *)(Teb + 8264) = *(_QWORD *)&v28[72].Version;
              *(_QWORD *)(Teb + 10200) = *v52;
              *(_QWORD *)(Teb + 10208) = *(_QWORD *)&v28[72].Version;
              *(_DWORD *)(Teb + 14236) = 0;
              *(_DWORD *)(Teb + 14312) = 0;
              *(_WORD *)(Teb + 14318) &= 0x62Cu;
              *(_WORD *)(Teb + 14318) |= v61 | 0x40;
            }
            else
            {
              v89 = Teb + 0x2000;
              v84 = *(_DWORD *)v52;
              *(_DWORD *)(Teb + 8224) = v84;
              v85 = *(_DWORD *)&v28[72].Version;
              *(_DWORD *)(Teb + 8228) = v85;
              v86 = *(_DWORD *)v52;
              *(_DWORD *)(Teb + 9908) = v86;
              v87 = *(_DWORD *)&v28[72].Version;
              *(_DWORD *)(Teb + 9912) = v87;
              *(_DWORD *)(Teb + 12188) = 0;
              *(_DWORD *)(Teb + 12228) = 0;
              *(_WORD *)(Teb + 12234) &= 0x62Cu;
              *(_WORD *)(Teb + 12234) |= v61 | 0x40;
            }
          }
        }
        else
        {
          v22 = -1073741503;
          v59 = -1073741503;
        }
LABEL_105:
        KiUnstackDetachProcess((__int64)v91, 0);
        if ( v22 < 0 )
          goto LABEL_116;
        goto LABEL_106;
      }
      v45 = *(_QWORD *)(a5 + 248);
      *(_QWORD *)&v28[69].Version = v45;
      *(_QWORD *)&v28[77].Version = v45;
      v46 = v69;
      v28[94].DmaOperations = *(_DMA_OPERATIONS **)(v69 + 8);
      *(_QWORD *)&v28[95].Version = *(_QWORD *)(v46 + 16);
      _interlockedbittestandset((volatile signed __int32 *)v28, 0x1Au);
      RtlGetExtendedContextLength(MEMORY[0xFFFFF780000003D8] != 0LL ? 1048671 : 1048607, &ContextLength);
      PoolWithTag = (_DMA_OPERATIONS *)ExAllocatePoolWithTag(PagedPool, ContextLength, 0x63537350u);
      v28 = DmaAdapter;
      DmaAdapter[97].DmaOperations = PoolWithTag;
      if ( !PoolWithTag )
      {
        v22 = -1073741670;
        v59 = -1073741670;
        goto LABEL_116;
      }
      Teb = v65;
LABEL_106:
      inited = KeInitThread(v28, 0LL, PspUserThreadStartup);
      goto LABEL_108;
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 2516) & 0x4000) != 0 && (!a4 || (*(_DWORD *)(a4 + 4) & 0x8000) == 0) )
      *(_DWORD *)(&v28[7].Size + 1) |= 0x100000u;
    if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
    {
      v77 = 0;
      v82 = 0x8000LL;
      v83 = 0x40000LL;
      v81 = 0LL;
      v22 = PspSetupUserStack(BugCheckParameter1, a5, v63, &v77, v62);
      v59 = v22;
      if ( v22 >= 0 )
      {
        v40 = (char *)v66;
        *(_BYTE *)v66 ^= (v77 ^ *(_BYTE *)v66) & 2;
        v41 = PspWow64SetupUserStack((_KPROCESS *)BugCheckParameter1, v34, (__int64)v63, v40, v62);
LABEL_68:
        v22 = v41;
        v59 = v41;
      }
    }
    else
    {
      v22 = PspSetupUserStack(BugCheckParameter1, a5, v63, v39, v62);
      v59 = v22;
      if ( v22 >= 0 && (*(_DWORD *)(&v28[7].Size + 1) & 0x100000) != 0 )
      {
        v41 = PspSetupUserShadowStack(BugCheckParameter1, v62);
        goto LABEL_68;
      }
    }
    if ( v22 < 0 )
      goto LABEL_116;
    v22 = MmCreateTeb(BugCheckParameter1, (__int64)&v65);
    v59 = v22;
    if ( v22 < 0 )
      goto LABEL_116;
    *(_QWORD *)&v28[69].Version = *(_QWORD *)(a5 + 248);
    *(_QWORD *)&v28[77].Version = *(_QWORD *)(a5 + 128);
    Teb = v65;
    if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
    {
      v22 = PspWow64InitThread((_KPROCESS *)BugCheckParameter1, (__int64)v63, (_QWORD *)a5, v65);
      v59 = v22;
      if ( v22 < 0 )
        goto LABEL_116;
    }
    if ( v61 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v91, v42);
      *(_WORD *)(Teb + 6126) = v61;
      v44 = *(_QWORD *)(BugCheckParameter1 + 1408);
      if ( v44 )
      {
        if ( *(_WORD *)(v44 + 8) == 0x8664 )
        {
          v88 = Teb + 0x2000;
          *(_WORD *)(Teb + 14318) = v61;
        }
        else
        {
          v89 = Teb + 0x2000;
          *(_WORD *)(Teb + 12234) = v61;
        }
      }
      v22 = 0;
      v59 = 0;
      goto LABEL_105;
    }
    goto LABEL_106;
  }
  *(_QWORD *)&v28[69].Version = a7;
  *(_QWORD *)&v28[77].Version = a7;
  inited = KeInitThread(v28, 0LL, PspSystemThreadStartup);
  Teb = v65;
LABEL_108:
  v59 = inited;
  v22 = inited;
  if ( inited < 0 )
  {
    if ( !Teb || !v66 )
      goto LABEL_116;
    goto LABEL_115;
  }
  if ( a4 )
  {
    if ( (*(_DWORD *)(a4 + 4) & 0x8000) != 0 )
    {
      LOBYTE(v34) = a3;
      v22 = PspUmsInitThread(v28, v34, a4, Teb);
      v59 = v22;
      if ( v22 < 0 )
      {
LABEL_115:
        MmDeleteTeb((_KPROCESS *)BugCheckParameter1, Teb, v55, v56);
LABEL_116:
        if ( v66 && *(_BYTE *)v66 )
          PspDeleteUserStack((_KPROCESS *)BugCheckParameter1, v34, v63, v66);
        DmaOperations = v28[97].DmaOperations;
        if ( DmaOperations )
        {
          ExFreePoolWithTag(DmaOperations, 0x63537350u);
          v28[97].DmaOperations = 0LL;
        }
        if ( *(_QWORD *)&v28[72].Version )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v28[80], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&v28[80]);
          KeAbPostRelease((ULONG_PTR)&v28[80]);
          v22 = v59;
          v28 = DmaAdapter;
        }
        if ( !*(_QWORD *)&v28[34].Version )
          ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
        HalPutDmaAdapter(v28);
        return (unsigned int)v22;
      }
    }
  }
  *v90 = v28;
  return 0LL;
}
