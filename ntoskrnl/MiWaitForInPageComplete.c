/*
 * XREFs of MiWaitForInPageComplete @ 0x140342A90
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x14020DAF4 (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x140342F00 (MiIssueHardFault.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MiIsRetryIoStatus @ 0x140212D58 (MiIsRetryIoStatus.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiDeleteControlArea @ 0x140215028 (MiDeleteControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MiValidateInPage @ 0x140287570 (MiValidateInPage.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     MiZeroPhysicalPage @ 0x1402CE78C (MiZeroPhysicalPage.c)
 *     PfHardFaultLog @ 0x1402E03F4 (PfHardFaultLog.c)
 *     MiPrefetchRestOfCluster @ 0x1402FBFE0 (MiPrefetchRestOfCluster.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyPage @ 0x14032DC70 (MiCopyPage.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14032F834 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiValidatePagefilePageHash @ 0x140466E1A (MiValidatePagefilePageHash.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRetardMdl @ 0x14061A580 (MiRetardMdl.c)
 *     MiFlushAllFilesystemPages @ 0x140626E68 (MiFlushAllFilesystemPages.c)
 *     MiExceptionForMappedVa @ 0x14062E6B0 (MiExceptionForMappedVa.c)
 *     MiStoreFaultComplete @ 0x140659C34 (MiStoreFaultComplete.c)
 */

__int64 __fastcall MiWaitForInPageComplete(__int64 a1, ULONG_PTR a2, int *a3)
{
  ULONG_PTR v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // r15
  ULONG_PTR v7; // rbx
  ULONG_PTR v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // r13
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  bool v16; // zf
  int v17; // eax
  NTSTATUS v18; // r12d
  int v19; // esi
  int *v20; // r15
  ULONG_PTR v21; // r15
  int v22; // r15d
  __int64 result; // rax
  volatile signed __int64 *v24; // rcx
  unsigned __int64 v25; // r13
  unsigned int v26; // r15d
  void *v27; // rsi
  _QWORD *v28; // rdx
  unsigned __int64 v29; // rbp
  ULONG_PTR *i; // rsi
  __int64 v31; // r13
  __int64 v32; // rcx
  ULONG_PTR v33; // r13
  int v34; // r12d
  _QWORD *v35; // rax
  unsigned __int64 v36; // r12
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v40; // eax
  BOOL IsRetryIoStatus; // ebp
  ULONG_PTR v42; // rdi
  __int64 v43; // rbp
  unsigned __int64 v44; // rsi
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  int v47; // eax
  _DWORD *v48; // r8
  int v49; // [rsp+70h] [rbp-88h]
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp-80h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+80h] [rbp-78h] BYREF
  unsigned __int64 v52; // [rsp+90h] [rbp-68h]
  __int64 v53; // [rsp+98h] [rbp-60h]
  ULONG_PTR *v54; // [rsp+A0h] [rbp-58h]
  ULONG_PTR BugCheckParameter1; // [rsp+A8h] [rbp-50h]
  unsigned __int8 v56; // [rsp+100h] [rbp+8h] BYREF
  __int64 v57; // [rsp+108h] [rbp+10h]
  int *v58; // [rsp+110h] [rbp+18h]
  unsigned int v59; // [rsp+118h] [rbp+20h]

  v58 = a3;
  v3 = a2 + 272;
  v4 = *(_QWORD *)(a2 + 248);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = -1LL;
  BugCheckParameter1 = *(_QWORD *)(a2 + 232);
  BugCheckParameter4 = *(_QWORD *)(a2 + 224);
  v10 = *(_QWORD *)(a2 + 256);
  BugCheckParameter3[0] = -1LL;
  v56 = 0;
  if ( v10 )
    v3 = v10;
  v59 = 0;
  v53 = v4;
  v54 = (ULONG_PTR *)(v3 + 48);
  if ( !_bittest64((const signed __int64 *)(v4 + 40), 0x28u)
    && *(__int64 *)(v4 + 8) > 0
    && !(unsigned int)MiCheckSlabPfnBitmap(v4, 1LL, 0) )
  {
    v32 = (*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL;
    v33 = 0xAAAAAAAAAAAAAAABuLL * ((v4 + 0x220000000000LL) >> 4);
    v34 = ~(*(_DWORD *)(a1 + 80) << 12) & 0x20000 | 0x40000000;
    v57 = *(_QWORD *)(qword_140C67048 + 8 * v32);
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)&KeSwapProcessOrStackThread )
      v34 |= 8u;
    v35 = MiSearchNumaNodeTable(v33);
    MiFindContiguousPagesEx(
      v57,
      v33 + 1,
      qword_140C65820,
      0,
      0,
      1LL,
      *(unsigned __int8 *)(v53 + 34) >> 6,
      *((_DWORD *)v35 + 2),
      0x80000000,
      v34,
      0,
      0LL,
      (__int64)BugCheckParameter3);
  }
  v11 = *(_QWORD *)(a1 + 16);
  if ( (v11 & 1) != 0 )
  {
    v28 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)v28 == 2 )
    {
      if ( v6 )
        MiPrefetchRestOfCluster(a2, v28, v6);
    }
  }
  KeWaitForSingleObject((PVOID)(a2 + 32), WrPageIn, 0, 0, 0LL);
  if ( *(_QWORD *)(a2 + 264) )
    KeBugCheckEx(0x1Au, 0x61947uLL, a2, *(_QWORD *)(a2 + 264), 0LL);
  if ( v6 && (*(_BYTE *)(v6 + 187) & 0x60) == 0x60 && !*((_QWORD *)MiGetSharedVm(v6) + 4) )
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)(a2 + 104));
  if ( _bittest16((const signed __int16 *)(v3 + 10), 9u) )
  {
    MiRetardMdl(v3);
    *(_DWORD *)(a2 + 80) = -1073741670;
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 192) & 0x10) != 0 )
  {
    v31 = *(_QWORD *)(a2 + 336);
    if ( v31 )
    {
      v36 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v31 + 232));
      RtlAvlRemoveNode((unsigned __int64 *)(v31 + 240), (unsigned __int64 *)(a2 + 352));
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v31 + 232));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v36 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
          v16 = (v40 & SchedulerAssist[5]) == 0;
          v12 = v40 & SchedulerAssist[5];
          SchedulerAssist[5] = v12;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v36);
    }
  }
  v13 = *(unsigned int *)(a2 + 184);
  v14 = *(unsigned int *)(v3 + 40) + 4095LL + ((*(_DWORD *)(v3 + 32) + *(_DWORD *)(v3 + 44)) & 0xFFF);
  LODWORD(v57) = 0;
  v15 = v14 >> 12;
  v16 = (*(_DWORD *)(a2 + 192) & 0x100) == 0;
  v52 = v3 + 40 + 8 * v15;
  if ( !v16 )
    MiStoreFaultComplete(a2);
  v17 = *(_DWORD *)(a2 + 80);
  if ( *(_QWORD *)(a2 + 208) )
  {
    if ( v17 >= 0 )
    {
      LODWORD(v57) = MiValidateInPage(v15, a2);
      if ( (_DWORD)v57 == -1073740748 )
        *(_DWORD *)(a2 + 192) |= 0x100000u;
    }
    v24 = **(volatile signed __int64 ***)(a2 + 208);
    if ( _InterlockedExchangeAdd64(v24 + 14, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      MiDeleteControlArea((PVOID)v24);
  }
  else if ( v17 >= 0 && (*(_DWORD *)(a2 + 192) & 0x400000) != 0 )
  {
    LODWORD(v57) = MiValidatePagefilePageHash(a2);
  }
  v18 = *(_DWORD *)(a2 + 80);
  v49 = v59 & 1;
  if ( (v59 & 1) != 0 )
  {
    v19 = 2;
  }
  else
  {
    __incgsdword(0x2EA4u);
    __addgsdword(0x2EA0u, ((unsigned int)v13 >> 12) + ((v13 & 0xFFF) != 0));
    if ( v6 && (*(_DWORD *)(a2 + 192) & 8) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 168));
    v19 = 0;
  }
  v20 = v58;
  if ( *(_QWORD *)v58 )
    PfHardFaultLog(*(_QWORD **)v58, v19, v12);
  v16 = (*(_BYTE *)(v3 + 10) & 1) == 0;
  *v20 = v19;
  if ( !v16 )
    MmUnmapLockedPages(*(PVOID *)(v3 + 24), (PMDL)v3);
  *(_DWORD *)(a2 + 188) = -1;
  if ( v18 >= 0 )
  {
    v21 = *(_QWORD *)(a2 + 88);
    if ( v21 != v13 )
    {
      if ( v21 || (*(_DWORD *)(a2 + 192) & 8) == 0 )
      {
        if ( (*(_DWORD *)(a2 + 192) & 0x200000) != 0 && !v49 )
          KeBugCheckEx(0x7Au, 4uLL, v21, a2, BugCheckParameter4);
        v25 = 8
            * ((((*(_DWORD *)(v3 + 32) + *(_DWORD *)(v3 + 44)) & 0xFFF)
              - (unsigned __int64)(unsigned int)(v13 - *(_DWORD *)(v3 + 40))
              + v21
              + 4095) >> 12)
            + 40;
        v26 = v21 & 0xFFF;
        if ( v26 )
        {
          v27 = (void *)(v26 + MiMapPageInHyperSpaceWorker(*(_QWORD *)(v3 + v25), &v56, 0x80000000));
          memset(v27, 0, 4096 - v26);
          MiUnmapPageInHyperSpaceWorker((unsigned __int64)v27, v56);
        }
        if ( v25 + v3 + 8 <= v52 )
          *(_DWORD *)(a2 + 188) = ((__int64)(v25 - 48) >> 3) + 1;
      }
      else
      {
        v18 = -1073741801;
      }
    }
    v22 = v57;
    if ( (_DWORD)v57 != -1073741761 )
      goto LABEL_30;
    IsRetryIoStatus = 0;
LABEL_84:
    if ( BugCheckParameter4 > 0x7FFFFFFEFFFFLL
      && (unsigned int)MiGetSystemRegionType(BugCheckParameter4) != 8
      && !(unsigned int)MiExceptionForMappedVa(BugCheckParameter4) )
    {
      if ( !IsRetryIoStatus )
      {
        v42 = BugCheckParameter1;
        if ( (unsigned __int8)MmIsAddressValidEx(BugCheckParameter1) )
          v7 = MI_READ_PTE_LOCK_FREE(v42);
        MiFlushAllFilesystemPages(1LL);
        if ( v22 < 0 )
          v18 = v22;
        KeBugCheckEx(0x7Au, v42, v18, v7, BugCheckParameter4);
      }
      if ( v22 != -1073741761 )
        v18 = -1073741801;
    }
    goto LABEL_30;
  }
  if ( v18 != -1073741807 )
  {
    if ( v18 == -2147483626 )
      goto LABEL_30;
    IsRetryIoStatus = MiIsRetryIoStatus(v18, *(unsigned int *)(v3 + 40));
    if ( IsRetryIoStatus && !dword_140C692D8 && (!v49 || (v59 & 2) != 0) )
      dword_140C692D8 = 32;
    if ( (*(_DWORD *)(a2 + 192) & 8) != 0 )
    {
      v18 = -1073741801;
      goto LABEL_30;
    }
    v22 = v57;
    goto LABEL_84;
  }
  if ( (*(_DWORD *)(a2 + 192) & 0x200000) != 0 )
    KeBugCheckEx(0x7Au, 3uLL, 0xFFFFFFFFC0000011uLL, a2, BugCheckParameter4);
  v29 = v52;
  for ( i = v54; (unsigned __int64)i <= v29; ++i )
    MiZeroPhysicalPage(6 * *i, *i, 1LL, *(unsigned __int8 *)(48 * *i - 0x220000000000LL + 34) >> 6);
  v18 = 0;
LABEL_30:
  if ( BugCheckParameter3[0] != -1LL )
  {
    v43 = v53;
    MiCopyPage(BugCheckParameter3[0], 0xAAAAAAAAAAAAAAABuLL * ((v53 + 0x220000000000LL) >> 4), 1);
    v5 = 48 * BugCheckParameter3[0] - 0x220000000000LL;
    *(_QWORD *)(v5 + 16) = ZeroPte;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v5 + 16));
    if ( ((*(_QWORD *)(v5 + 40) >> 60) & 7) == 3 )
    {
      v44 = (unsigned __int8)MiLockPageInline(v5);
      *(_QWORD *)(v5 + 8) = *(_QWORD *)(v43 + 8);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v45 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v45 <= 0xFu && (unsigned __int8)v44 <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
          v48 = v46->SchedulerAssist;
          v16 = (v47 & v48[5]) == 0;
          v48[5] &= v47;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v46);
        }
      }
      __writecr8(v44);
    }
  }
  result = v59;
  *(_DWORD *)(a2 + 112) = v59;
  *(_QWORD *)(a2 + 104) = v5;
  *(_DWORD *)(a2 + 80) = v18;
  return result;
}
