/*
 * XREFs of VfBuildScatterGatherList @ 0x1409CC000
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140213400 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x1409CAE00 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x1409CB060 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x1409CB0EC (VF_ASSERT_IRQL.c)
 *     ViAllocateMapRegisterFile @ 0x1409CE5C4 (ViAllocateMapRegisterFile.c)
 *     ViCheckMdlLength @ 0x1409CEC54 (ViCheckMdlLength.c)
 *     ViFreeMapRegisterFile @ 0x1409CF3C4 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x1409CF748 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x1409CFA50 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x1409CFC60 (ViHalPreprocessOptions.c)
 *     ViMapDoubleBuffer @ 0x1409D0094 (ViMapDoubleBuffer.c)
 *     ViSwap @ 0x1409D0A00 (ViSwap.c)
 */

__int64 VfBuildScatterGatherList(__int64 a1, __int64 a2, ...)
{
  PVOID *v2; // r14
  PMDL v3; // rsi
  int v4; // edi
  PVOID **v5; // rbx
  __int64 v6; // r15
  __int64 AdapterInformationInternal; // rdi
  unsigned int v9; // eax
  unsigned int v10; // ebx
  _QWORD *v11; // rax
  __int64 v12; // r12
  __int64 v13; // r8
  __int64 (__fastcall *v14)(); // r13
  unsigned __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 MapRegisterFile; // rax
  char v18; // cl
  int v19; // ecx
  int v20; // eax
  PVOID *v21; // rax
  int v22; // eax
  unsigned int v23; // r14d
  KSPIN_LOCK *v24; // rsi
  unsigned __int64 v25; // rdi
  char **v26; // r8
  PVOID *v27; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  bool v32; // zf
  char v33; // [rsp+28h] [rbp-61h]
  __int64 v34; // [rsp+70h] [rbp-19h] BYREF
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, PMDL, PVOID *, _DWORD, __int64 (__fastcall *)(), __int64, _BYTE, __int64, _DWORD); // [rsp+78h] [rbp-11h]
  PMDL MemoryDescriptorList; // [rsp+E8h] [rbp+5Fh] BYREF
  va_list MemoryDescriptorLista; // [rsp+E8h] [rbp+5Fh]
  PVOID *v40; // [rsp+F0h] [rbp+67h] BYREF
  va_list va1; // [rsp+F0h] [rbp+67h]
  __int64 v42; // [rsp+F8h] [rbp+6Fh]
  __int64 (__fastcall *v43)(); // [rsp+100h] [rbp+77h]
  __int64 v44; // [rsp+108h] [rbp+7Fh]
  __int64 v45; // [rsp+110h] [rbp+87h]
  __int64 v46; // [rsp+118h] [rbp+8Fh]
  __int64 v47; // [rsp+120h] [rbp+97h]
  va_list va2; // [rsp+128h] [rbp+9Fh] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(MemoryDescriptorLista, a2);
  MemoryDescriptorList = va_arg(va1, PMDL);
  va_copy(va2, va1);
  v40 = va_arg(va2, PVOID *);
  v42 = va_arg(va2, _QWORD);
  v43 = va_arg(va2, __int64 (__fastcall *)());
  v44 = va_arg(va2, _QWORD);
  v45 = va_arg(va2, _QWORD);
  v46 = va_arg(va2, _QWORD);
  v47 = va_arg(va2, _QWORD);
  v2 = v40;
  v3 = MemoryDescriptorList;
  v4 = a1;
  v5 = 0LL;
  v6 = 0LL;
  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, PMDL, PVOID *, _DWORD, __int64 (__fastcall *)(), __int64, _BYTE, __int64, _DWORD))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(v4);
  if ( !AdapterInformationInternal )
  {
    v12 = v44;
LABEL_14:
    v14 = v43;
    goto LABEL_15;
  }
  VF_ASSERT_IRQL(2u);
  if ( !v3 )
    return 3221225485LL;
  _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 164));
  _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 168));
  v3 = MemoryDescriptorList;
  VERIFY_BUFFER_LOCKED((ULONG_PTR)MemoryDescriptorList);
  if ( *(_DWORD *)(AdapterInformationInternal + 192) == 3 )
  {
    v9 = ViCheckMdlLength(v3, 0LL, (unsigned int)v42);
    if ( v9 )
    {
      v10 = v9;
      ViHalPreprocessOptions(
        byte_140C12ED4,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v9,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v10, 0LL, 0LL, byte_140C12ED4);
    }
  }
  v11 = ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
  v12 = v44;
  v5 = (PVOID **)v11;
  v2 = v40;
  if ( !v11 )
    goto LABEL_14;
  v13 = (unsigned int)v42;
  v11[8] = 0LL;
  v14 = v43;
  *v11 = v12;
  v15 = ((unsigned __int64)((unsigned __int16)v2 & 0xFFF) + v13 + 4095) >> 12;
  *((_DWORD *)v11 + 12) = v15;
  v11[1] = v14;
  v11[7] = AdapterInformationInternal;
  v16 = v11 + 9;
  v16[1] = v16;
  *v16 = v16;
  MapRegisterFile = ViAllocateMapRegisterFile(AdapterInformationInternal, (unsigned int)v15);
  v34 = MapRegisterFile;
  v6 = MapRegisterFile;
  if ( !MapRegisterFile )
  {
LABEL_9:
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v5);
    v5 = 0LL;
    v6 = 0LL;
    goto LABEL_15;
  }
  v18 = v45;
  *(_BYTE *)(MapRegisterFile + 25) = 1;
  v33 = v18;
  v5[2] = (PVOID *)(v5 + 13);
  v19 = MapRegisterFile;
  v20 = v42;
  v5[12] = (PVOID *)v6;
  v5[3] = v2;
  *((_DWORD *)v5 + 8) = v20;
  if ( !(unsigned int)ViMapDoubleBuffer(v19, v3, v33) )
  {
    ViFreeMapRegisterFile(AdapterInformationInternal);
    goto LABEL_9;
  }
  v21 = v5[2];
  v12 = (__int64)v5;
  v14 = ViScatterGatherCallback;
  *(_OWORD *)v21 = *(_OWORD *)&v3->Next;
  *((_OWORD *)v21 + 1) = *(_OWORD *)&v3->Process;
  *((_OWORD *)v21 + 2) = *(_OWORD *)&v3->StartVa;
  ViSwap(&v34, (PMDL *)MemoryDescriptorLista, (PVOID **)va1);
  v2 = v40;
  v3 = MemoryDescriptorList;
LABEL_15:
  v22 = RealDmaOperation(a1, a2, v3, v2, v42, v14, v12, v45, v46, v47);
  v23 = v22;
  if ( AdapterInformationInternal && v22 < 0 )
  {
    DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
    if ( v6 )
      ViFreeMapRegisterFile(AdapterInformationInternal);
    if ( v5 )
    {
      v24 = (KSPIN_LOCK *)(AdapterInformationInternal + 72);
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 72));
      v26 = (char **)v5[9];
      v27 = v5[10];
      if ( v26[1] != (char *)(v5 + 9) || *v27 != v5 + 9 )
        __fastfail(3u);
      *v27 = v26;
      v26[1] = (char *)v27;
      KxReleaseSpinLock(v24);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v25 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
            v32 = (v31 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v31;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v25);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v5);
    }
  }
  return v23;
}
