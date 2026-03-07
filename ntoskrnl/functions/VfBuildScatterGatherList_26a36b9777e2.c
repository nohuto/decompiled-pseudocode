__int64 VfBuildScatterGatherList(int a1, __int64 a2, ...)
{
  __int64 v2; // r15
  PMDL v3; // r14
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 AdapterInformationInternal; // rax
  __int64 v8; // r12
  __int64 v9; // rsi
  unsigned int v11; // eax
  unsigned int v12; // ebx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 MapRegisterFile; // rax
  __int64 v18; // rbx
  __int128 v19; // xmm0
  _OWORD *v20; // rax
  int v21; // eax
  unsigned int v22; // r14d
  unsigned __int64 v23; // rbx
  __int64 v24; // r8
  _QWORD *v25; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  bool v30; // zf
  char v31; // [rsp+20h] [rbp-50h]
  __int64 v32; // [rsp+60h] [rbp-10h] BYREF
  __int64 RealDmaAdapter; // [rsp+68h] [rbp-8h]
  PMDL MemoryDescriptorList; // [rsp+C0h] [rbp+50h] BYREF
  va_list MemoryDescriptorLista; // [rsp+C0h] [rbp+50h]
  __int64 v37; // [rsp+C8h] [rbp+58h] BYREF
  va_list va1; // [rsp+C8h] [rbp+58h]
  __int64 v39; // [rsp+D0h] [rbp+60h]
  __int64 (__fastcall *v40)(); // [rsp+D8h] [rbp+68h]
  __int64 v41; // [rsp+E0h] [rbp+70h]
  __int64 v42; // [rsp+E8h] [rbp+78h]
  __int64 v43; // [rsp+F0h] [rbp+80h]
  __int64 v44; // [rsp+F8h] [rbp+88h]
  va_list va2; // [rsp+100h] [rbp+90h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(MemoryDescriptorLista, a2);
  MemoryDescriptorList = va_arg(va1, PMDL);
  va_copy(va2, va1);
  v37 = va_arg(va2, _QWORD);
  v39 = va_arg(va2, _QWORD);
  v40 = va_arg(va2, __int64 (__fastcall *)());
  v41 = va_arg(va2, _QWORD);
  v42 = va_arg(va2, _QWORD);
  v43 = va_arg(va2, _QWORD);
  v44 = va_arg(va2, _QWORD);
  v2 = v37;
  v3 = MemoryDescriptorList;
  v5 = 0LL;
  v6 = 0LL;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v8 = (unsigned int)v39;
  v9 = AdapterInformationInternal;
  if ( !AdapterInformationInternal )
    goto LABEL_14;
  VF_ASSERT_IRQL(2u);
  if ( !v3 )
    return 3221225485LL;
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 196));
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 200));
  v3 = MemoryDescriptorList;
  VERIFY_BUFFER_LOCKED((ULONG_PTR)MemoryDescriptorList);
  if ( *(_DWORD *)(v9 + 224) == 3 )
  {
    v11 = ViCheckMdlLength(v3, 0LL, (unsigned int)v8);
    if ( v11 )
    {
      v12 = v11;
      ViHalPreprocessOptions(
        byte_140C0DD20,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v11,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v12, 0LL, 0LL, byte_140C0DD20);
    }
  }
  if ( ViDoubleBufferDma )
  {
    v13 = ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
    v2 = v37;
    v5 = (__int64)v13;
    if ( !v13 )
      goto LABEL_14;
    v14 = v41;
    v13[8] = 0LL;
    *v13 = v14;
    v15 = ((unsigned __int64)(v2 & 0xFFF) + v8 + 4095) >> 12;
    v13[1] = v40;
    *((_DWORD *)v13 + 12) = v15;
    v13[7] = v9;
    v16 = v13 + 9;
    v16[1] = v16;
    *v16 = v16;
    MapRegisterFile = ViAllocateMapRegisterFile(v9, (unsigned int)v15);
    v32 = MapRegisterFile;
    v18 = MapRegisterFile;
    if ( !MapRegisterFile )
      goto LABEL_10;
    *(_BYTE *)(MapRegisterFile + 25) = 1;
    *(_QWORD *)(v5 + 96) = MapRegisterFile;
    *(_QWORD *)(v5 + 16) = v5 + 104;
    v31 = v42;
    *(_QWORD *)(v5 + 24) = v2;
    *(_DWORD *)(v5 + 32) = v8;
    if ( !(unsigned int)ViMapDoubleBuffer(MapRegisterFile, v3, v31) )
    {
      ViFreeMapRegisterFile(v9);
LABEL_10:
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v5);
      v5 = 0LL;
      goto LABEL_14;
    }
    v19 = *(_OWORD *)&v3->Next;
    v41 = v5;
    v40 = ViScatterGatherCallback;
    v20 = *(_OWORD **)(v5 + 16);
    v6 = v18;
    *v20 = v19;
    v20[1] = *(_OWORD *)&v3->Process;
    v20[2] = *(_OWORD *)&v3->StartVa;
    ViSwap(&v32, (PMDL *)MemoryDescriptorLista, (__int64 *)va1);
    v3 = MemoryDescriptorList;
  }
  v2 = v37;
LABEL_14:
  v21 = (*(__int64 (__fastcall **)(__int64, __int64, PMDL, __int64, _DWORD, __int64 (__fastcall *)(), __int64, _BYTE, __int64, _DWORD))(*(_QWORD *)(RealDmaAdapter + 8) + 112LL))(
          RealDmaAdapter,
          a2,
          v3,
          v2,
          v8,
          v40,
          v41,
          v42,
          v43,
          v44);
  v22 = v21;
  if ( v9 && v21 < 0 )
  {
    DECREMENT_SCATTER_GATHER_LISTS(v9);
    if ( v6 )
      ViFreeMapRegisterFile(v9);
    if ( v5 )
    {
      v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 104));
      v24 = *(_QWORD *)(v5 + 72);
      v25 = *(_QWORD **)(v5 + 80);
      if ( *(_QWORD *)(v24 + 8) != v5 + 72 || *v25 != v5 + 72 )
        __fastfail(3u);
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
      KxReleaseSpinLock((volatile signed __int64 *)(v9 + 104));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v23 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
          v30 = (v29 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v29;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v23);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v5);
    }
  }
  return v22;
}
