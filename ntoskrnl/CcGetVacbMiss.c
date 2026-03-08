/*
 * XREFs of CcGetVacbMiss @ 0x140335850
 * Callers:
 *     CcGetVirtualAddress @ 0x14021FB80 (CcGetVirtualAddress.c)
 * Callees:
 *     SetVacb @ 0x14021804C (SetVacb.c)
 *     CcGetVacbLargeOffset @ 0x14021BBE0 (CcGetVacbLargeOffset.c)
 *     CcSetVacbInFreeList @ 0x14021BC58 (CcSetVacbInFreeList.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x14021BCF0 (CcReleaseBcbLockAndVacbLock.c)
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     FsRtlIsNtstatusExpected @ 0x1402ECFB0 (FsRtlIsNtstatusExpected.c)
 *     MmMapViewInSystemCache @ 0x140334FD0 (MmMapViewInSystemCache.c)
 *     CcGetVacbFromFreeList @ 0x140335C94 (CcGetVacbFromFreeList.c)
 *     CcIncrementVacbActiveCount @ 0x140335D80 (CcIncrementVacbActiveCount.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x140336C10 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CcUnmapInactiveViews @ 0x140535E58 (CcUnmapInactiveViews.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     CcUnmapVacb @ 0x1406A7150 (CcUnmapVacb.c)
 */

unsigned __int64 *__fastcall CcGetVacbMiss(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r13
  unsigned int v5; // edi
  unsigned __int8 v6; // r12
  int v7; // r15d
  int v8; // ebp
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // rdx
  _QWORD *ArbitraryUserPointer; // rcx
  unsigned __int64 *VacbFromFreeList; // rsi
  __int64 v15; // rdx
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v18; // r9
  int v19; // eax
  bool v20; // zf
  KIRQL v21; // bl
  int v22; // eax
  int v23; // edi
  __int64 v24; // rbx
  __int64 VacbLargeOffset; // rbp
  KIRQL v26; // bl
  KIRQL v27; // bl
  unsigned int v29; // [rsp+90h] [rbp+8h]
  __int64 v30; // [rsp+98h] [rbp+10h] BYREF
  int v31; // [rsp+A0h] [rbp+18h]
  int v32; // [rsp+A8h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v4 = *(_QWORD *)(a1 + 536);
  v5 = 0;
  HIDWORD(v30) = HIDWORD(a2);
  v6 = 0;
  v29 = 0;
  v7 = a4;
  LODWORD(v30) = a2 - (a2 & 0x3FFFF);
  v8 = a3;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v12) = 4;
      else
        v12 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v12;
    }
    ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
    KxAcquireQueuedSpinLock(ArbitraryUserPointer + 8, ArbitraryUserPointer[9]);
    if ( v6 )
      v29 = v5 | 2;
    VacbFromFreeList = (unsigned __int64 *)CcGetVacbFromFreeList(v4, v6);
    KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64);
    if ( KiIrqlFlags )
    {
      v16 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = -1LL << (CurrentIrql + 1);
        v18 = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)v15;
        v20 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    if ( VacbFromFreeList )
      break;
    while ( (unsigned int)CcUnmapInactiveViews(*(_QWORD *)(v4 + 8), v15, 0LL, 0LL) )
    {
      v21 = KeAcquireQueuedSpinLock(4uLL);
      VacbFromFreeList = (unsigned __int64 *)CcGetVacbFromFreeList(v4, v6);
      KeReleaseQueuedSpinLock(4uLL, v21);
      if ( VacbFromFreeList )
        goto LABEL_21;
    }
    if ( v7 == 1 )
      ++CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources;
    v23 = -1073741670;
    if ( !EnableFeatureServicing_CcInsufVAError )
      v23 = -1073740606;
LABEL_45:
    if ( v6 || v7 != 1 )
      RtlRaiseStatus(v23);
    v5 = v29;
    v6 = 1;
  }
LABEL_21:
  v22 = MmMapViewInSystemCache(*(_QWORD *)(a1 + 176), VacbFromFreeList, (unsigned __int64 *)&v30);
  v23 = v22;
  if ( !EnableFeatureServicing_CcInsufVAError && v22 == -1073741670 )
    v23 = -1073740606;
  if ( v8 )
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 288));
  ExAcquirePushLockExclusiveEx(a1 + 104, 0LL);
  v24 = v30;
  if ( *(__int64 *)(a1 + 32) <= 0x2000000 )
    VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v30 >> 18));
  else
    VacbLargeOffset = CcGetVacbLargeOffset(a1, v30);
  if ( VacbLargeOffset )
  {
    if ( v23 >= 0 )
    {
      CcIncrementVacbActiveCount(VacbLargeOffset);
      CcReleaseBcbLockAndVacbLock(v31, a1);
      CcUnmapVacb(VacbFromFreeList, a1, v29);
      v27 = KeAcquireQueuedSpinLock(4uLL);
      CcSetVacbInFreeList(v4, VacbFromFreeList, v6);
      KeReleaseQueuedSpinLock(4uLL, v27);
      return (unsigned __int64 *)VacbLargeOffset;
    }
    goto LABEL_39;
  }
  if ( v23 < 0 )
  {
LABEL_39:
    v8 = v31;
    CcReleaseBcbLockAndVacbLock(v31, a1);
    if ( v6 )
      ++CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources;
    else
      *VacbFromFreeList = 0LL;
    v26 = KeAcquireQueuedSpinLock(4uLL);
    CcSetVacbInFreeList(v4, VacbFromFreeList, v6);
    KeReleaseQueuedSpinLock(4uLL, v26);
    if ( !FsRtlIsNtstatusExpected(v23) )
      v23 = -1073741589;
    v7 = v32;
    goto LABEL_45;
  }
  if ( !SetVacb(a1, v24, (unsigned __int64)VacbFromFreeList) )
  {
    v23 = -1073741670;
    CcUnmapVacb(VacbFromFreeList, a1, v29);
    goto LABEL_39;
  }
  if ( VacbFromFreeList[1] != -1LL )
    KeBugCheckEx(0x34u, 0x780uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  VacbFromFreeList[1] = a1;
  VacbFromFreeList[2] = v24;
  CcIncrementVacbActiveCount(VacbFromFreeList);
  if ( v24 >= *(_QWORD *)(a1 + 376) )
    *(_QWORD *)(a1 + 376) = v24 + 0x40000;
  ExReleasePushLockEx((__int64 *)(a1 + 104), 0LL);
  if ( v31 )
    ExReleaseFastMutex((PFAST_MUTEX)(a1 + 288));
  return VacbFromFreeList;
}
