/*
 * XREFs of EmonAllocateResources @ 0x14051A90C
 * Callers:
 *     EmonReserveProfileResources @ 0x14051C110 (EmonReserveProfileResources.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140372460 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140505958 (HalpPmuReservedResourcesProcessorCallback.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14051BCC0 (EmonReleaseProfileResourcesInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall EmonAllocateResources(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  __int32 v7; // ebp
  int v10; // edi
  int v11; // eax
  size_t v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  unsigned __int64 v15; // rsi
  _QWORD *v16; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v19; // eax
  _DWORD *SchedulerAssist; // r8
  bool v21; // zf
  __int64 v22; // rcx
  int v24; // [rsp+20h] [rbp-48h] BYREF
  int v25; // [rsp+24h] [rbp-44h]
  _QWORD *v26; // [rsp+28h] [rbp-40h]
  __int64 v27; // [rsp+30h] [rbp-38h]
  __int64 v28; // [rsp+38h] [rbp-30h]

  v25 = 0;
  v7 = 1;
  *a6 = -1LL;
  if ( a4 )
  {
    v7 = _InterlockedExchange(&EmonPebsInUse, 1);
    if ( v7 )
      return (unsigned int)-1073741670;
    v11 = EmonPebsEntrySize;
    if ( *(_DWORD *)(a4 + 8) )
      v11 = *(_DWORD *)(a4 + 8);
    EmonPebsEntrySizeInUse = v11;
  }
  v12 = 80 * (unsigned int)HalpQueryMaximumRegisteredProcessorCount() + 112;
  v13 = (_QWORD *)HalpMmAllocCtxAlloc(v12, v12);
  v14 = v13;
  if ( !v13 )
  {
    v10 = -1073741801;
LABEL_23:
    if ( a4 && !v7 )
    {
      EmonPebsEntrySizeInUse = 0;
      EmonPebsInUse = 0;
    }
    return (unsigned int)v10;
  }
  memset(v13, 0, v12);
  v14[2] = a2;
  if ( a4 )
    v14[3] = *(_QWORD *)a4;
  v25 = 0;
  v24 = a5;
  v27 = a1;
  v26 = v14;
  v28 = a4;
  v10 = HalpPmuReservedResourcesProcessorCallback(
          a3,
          (__int64 (__fastcall *)(__int64))EmonMarkCountersReserved,
          (__int64)&v24,
          (__int64)v14);
  if ( v10 < 0 )
  {
    EmonReleaseProfileResourcesInternal(v14);
    HalpMmAllocCtxFree(v22, (__int64)v14);
    goto LABEL_23;
  }
  v15 = KeAcquireSpinLockRaiseToDpc(&EmonReservedResourcesLock);
  v16 = (_QWORD *)qword_140C60098;
  if ( *(__int64 **)qword_140C60098 != &EmonReservedResourcesList )
    __fastfail(3u);
  *v14 = &EmonReservedResourcesList;
  v14[1] = v16;
  *v16 = v14;
  qword_140C60098 = (__int64)v14;
  KxReleaseSpinLock((volatile signed __int64 *)&EmonReservedResourcesLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v21 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v15);
  *a6 = v14;
  return (unsigned int)v10;
}
