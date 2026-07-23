/*
 * XREFs of VfGetScatterGatherList @ 0x1409CD0F0
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

__int64 VfGetScatterGatherList(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // r15
  PMDL v3; // rsi
  int v4; // edi
  _QWORD *v5; // rbx
  __int64 AdapterInformationInternal; // rax
  unsigned int v7; // r12d
  __int64 v8; // rdi
  unsigned int v10; // eax
  unsigned int v11; // ebx
  _QWORD *v12; // rax
  __int64 v13; // r13
  ULONG ByteOffset; // r9d
  __int64 v15; // rax
  PMDL v16; // rdx
  ULONG v17; // r8d
  ULONG ByteCount; // ecx
  int v19; // r10d
  ULONG v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 MapRegisterFile; // rax
  __int64 v24; // r14
  _OWORD *v25; // rax
  __int64 (__fastcall *v26)(); // rax
  int v27; // eax
  unsigned int v28; // r14d
  KSPIN_LOCK *v29; // rsi
  unsigned __int64 v30; // rdi
  __int64 v31; // r8
  _QWORD *v32; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  bool v37; // zf
  char v38; // [rsp+20h] [rbp-58h]
  __int64 v39; // [rsp+50h] [rbp-28h]
  __int64 v40; // [rsp+58h] [rbp-20h] BYREF
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, PMDL, __int64, unsigned int, __int64 (__fastcall *)(), __int64, _BYTE); // [rsp+60h] [rbp-18h]
  PMDL MemoryDescriptorList; // [rsp+D0h] [rbp+58h] BYREF
  va_list MemoryDescriptorLista; // [rsp+D0h] [rbp+58h]
  __int64 v46; // [rsp+D8h] [rbp+60h] BYREF
  va_list va1; // [rsp+D8h] [rbp+60h]
  __int64 v48; // [rsp+E0h] [rbp+68h]
  __int64 (__fastcall *v49)(); // [rsp+E8h] [rbp+70h]
  __int64 v50; // [rsp+F0h] [rbp+78h]
  __int64 v51; // [rsp+F8h] [rbp+80h]
  va_list va2; // [rsp+100h] [rbp+88h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(MemoryDescriptorLista, a2);
  MemoryDescriptorList = va_arg(va1, PMDL);
  va_copy(va2, va1);
  v46 = va_arg(va2, _QWORD);
  v48 = va_arg(va2, _QWORD);
  v49 = va_arg(va2, __int64 (__fastcall *)());
  v50 = va_arg(va2, _QWORD);
  v51 = va_arg(va2, _QWORD);
  v2 = v46;
  v3 = MemoryDescriptorList;
  v39 = 0LL;
  v4 = a1;
  v5 = 0LL;
  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, PMDL, __int64, unsigned int, __int64 (__fastcall *)(), __int64, _BYTE))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(v4);
  v7 = v48;
  v8 = AdapterInformationInternal;
  if ( !AdapterInformationInternal )
    goto LABEL_19;
  VF_ASSERT_IRQL(2u);
  if ( !v3 )
    return 3221225485LL;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 164));
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 168));
  v3 = MemoryDescriptorList;
  VERIFY_BUFFER_LOCKED((ULONG_PTR)MemoryDescriptorList);
  if ( *(_DWORD *)(v8 + 192) == 3 )
  {
    v10 = ViCheckMdlLength(v3, 0LL, v7);
    if ( v10 )
    {
      v11 = v10;
      ViHalPreprocessOptions(
        byte_140C12EF4,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v10,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v11, 0LL, 0LL, byte_140C12EF4);
    }
  }
  v12 = ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
  v2 = v46;
  v5 = v12;
  if ( v12 )
  {
    v12[8] = 0LL;
    v13 = v50;
    *v12 = v50;
    ByteOffset = v2 & 0xFFF;
    v15 = (__int64)v49;
    v16 = v3;
    v5[10] = v5 + 9;
    v5[9] = v5 + 9;
    v5[1] = v15;
    v17 = LODWORD(v3->StartVa) + v3->ByteOffset + v3->ByteCount - v2;
    ByteCount = v17;
    v19 = 0;
    while ( v17 < v7 )
    {
      v16 = v16->Next;
      if ( !v16 )
        break;
      v20 = ByteOffset + 4095;
      ByteOffset = v16->ByteOffset;
      v21 = ByteCount + v20;
      ByteCount = v16->ByteCount;
      v19 += v21 >> 12;
      v17 += ByteCount;
    }
    if ( v17 + 4096 < ByteOffset + v7 )
    {
      DECREMENT_SCATTER_GATHER_LISTS(v8);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v5);
      return 3221225507LL;
    }
    v5[7] = v8;
    v22 = v19 + ((ByteOffset + ByteCount - v17 + v7 + 4095) >> 12);
    *((_DWORD *)v5 + 12) = v22;
    MapRegisterFile = ViAllocateMapRegisterFile(v8, v22);
    v40 = MapRegisterFile;
    v24 = MapRegisterFile;
    if ( MapRegisterFile )
    {
      *(_BYTE *)(MapRegisterFile + 25) = 1;
      v5[12] = MapRegisterFile;
      v5[2] = v5 + 13;
      v38 = v51;
      v5[3] = v2;
      *((_DWORD *)v5 + 8) = v7;
      if ( (unsigned int)ViMapDoubleBuffer(MapRegisterFile, v3, v38) )
      {
        v25 = (_OWORD *)v5[2];
        v39 = v24;
        v13 = (__int64)v5;
        *v25 = *(_OWORD *)&v3->Next;
        v25[1] = *(_OWORD *)&v3->Process;
        v25[2] = *(_OWORD *)&v3->StartVa;
        ViSwap(&v40, (PMDL *)MemoryDescriptorLista, (__int64 *)va1);
        v2 = v46;
        v26 = ViScatterGatherCallback;
        v3 = MemoryDescriptorList;
        goto LABEL_21;
      }
      ViFreeMapRegisterFile(v8);
    }
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v5);
    v5 = 0LL;
  }
  else
  {
LABEL_19:
    v13 = v50;
  }
  v26 = v49;
LABEL_21:
  v27 = RealDmaOperation(a1, a2, v3, v2, v7, v26, v13, v51);
  v28 = v27;
  if ( v8 && v27 < 0 )
  {
    DECREMENT_SCATTER_GATHER_LISTS(v8);
    if ( v39 )
      ViFreeMapRegisterFile(v8);
    if ( v5 )
    {
      v29 = (KSPIN_LOCK *)(v8 + 72);
      v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 72));
      v31 = v5[9];
      v32 = (_QWORD *)v5[10];
      if ( *(_QWORD **)(v31 + 8) != v5 + 9 || (_QWORD *)*v32 != v5 + 9 )
        __fastfail(3u);
      *v32 = v31;
      *(_QWORD *)(v31 + 8) = v32;
      KxReleaseSpinLock(v29);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v30 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v30 + 1));
            v37 = (v36 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v36;
            if ( v37 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v30);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v5);
    }
  }
  return v28;
}
