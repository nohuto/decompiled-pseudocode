__int64 __fastcall HalpNumaAddRangeProximity(unsigned __int64 a1, __int64 a2, int a3)
{
  int ProximityNode; // edi
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned int v8; // eax
  int v9; // eax
  void *v10; // rax
  void *v11; // rbx
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v21; // eax
  __int64 v22; // rcx
  int v23; // r9d
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  int v29; // eax
  _DWORD *v30; // r8
  int v31; // [rsp+30h] [rbp-59h] BYREF
  __int64 v32; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v33; // [rsp+40h] [rbp-49h] BYREF
  __int64 v34; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v36; // [rsp+70h] [rbp-19h]
  __int64 v37; // [rsp+78h] [rbp-11h]
  unsigned __int64 *v38; // [rsp+80h] [rbp-9h]
  __int64 v39; // [rsp+88h] [rbp-1h]
  __int64 *v40; // [rsp+90h] [rbp+7h]
  __int64 v41; // [rsp+98h] [rbp+Fh]
  __int64 *v42; // [rsp+A0h] [rbp+17h]
  __int64 v43; // [rsp+A8h] [rbp+1Fh]

  LOWORD(v31) = 0;
  if ( (unsigned int)dword_140C04B50 > 5 && tlgKeywordOn((__int64)&dword_140C04B50, 0x400000000000LL) )
  {
    v32 = 0x1000000LL;
    v36 = &v32;
    v37 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04B50, (unsigned __int8 *)word_1400291AA, 0LL, 0LL, 3u, v35);
  }
  HalpCheckSratMemoryRanges(a1);
  if ( a3 == -1 )
    return 0;
  ProximityNode = HalpNumaQueryProximityNode(a3, (unsigned __int16 *)&v31);
  if ( ProximityNode < 0 )
    goto LABEL_21;
  v7 = ExAcquireSpinLockExclusive(&HalpNumaMemoryRangeLock);
  v8 = 0;
  if ( HalpNumaMemoryRangeCount )
  {
    v6 = HalpNumaMemoryRanges;
    while ( *v6 != a1 )
    {
      ++v8;
      v6 += 2;
      if ( v8 >= HalpNumaMemoryRangeCount )
        goto LABEL_11;
    }
    LOWORD(v31) = *((_WORD *)HalpNumaMemoryRanges + 8 * v8 + 4);
    ExReleaseSpinLockExclusiveFromDpcLevel(&HalpNumaMemoryRangeLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v16 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v7);
    if ( *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 24) + 4LL * (unsigned __int16)v31) == a3 )
      return 0;
    ProximityNode = -1073741800;
    goto LABEL_21;
  }
LABEL_11:
  v9 = HalpNumaMaxMemoryRangeCount;
  if ( HalpNumaMemoryRangeCount >= (unsigned int)HalpNumaMaxMemoryRangeCount )
  {
    HalpNumaMaxMemoryRangeCount += 5;
    v10 = (void *)HalpMmAllocCtxAlloc((__int64)v6, (unsigned int)(16 * (v9 + 6)));
    v11 = v10;
    if ( !v10 )
    {
      HalpNumaMaxMemoryRangeCount -= 5;
      ExReleaseSpinLockExclusiveFromDpcLevel(&HalpNumaMemoryRangeLock);
      if ( KiIrqlFlags )
      {
        v12 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v12 >= 2u )
        {
          v13 = KeGetCurrentPrcb();
          v14 = v13->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v16 = (v15 & v14[5]) == 0;
          v14[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
      __writecr8(v7);
      ProximityNode = -1073741670;
LABEL_21:
      if ( (unsigned int)dword_140C04B50 > 5 && tlgKeywordOn((__int64)&dword_140C04B50, 0x400000000000LL) )
      {
        v31 = ProximityNode;
        v36 = (__int64 *)&v31;
        v37 = 4LL;
        v38 = &v33;
        v33 = a1;
        v40 = &v32;
        v39 = 8LL;
        v42 = &v34;
        LODWORD(v32) = a3;
        v41 = 4LL;
        v34 = 0x1000000LL;
        v43 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C04B50,
          (unsigned __int8 *)word_140029142,
          0LL,
          0LL,
          6u,
          v35);
      }
      return (unsigned int)ProximityNode;
    }
    memmove(v10, HalpNumaMemoryRanges, 16LL * (unsigned int)HalpNumaMemoryRangeCount);
    if ( HalpNumaDynamicMemoryRanges )
      HalpMmAllocCtxFree(v22, (__int64)HalpNumaMemoryRanges);
    HalpNumaDynamicMemoryRanges = 1;
    HalpNumaMemoryRanges = v11;
  }
  v23 = HalpNumaMemoryRangeCount;
  v24 = (unsigned __int16)v31;
  v25 = 2LL * (unsigned int)HalpNumaMemoryRangeCount;
  *((_QWORD *)HalpNumaMemoryRanges + v25) = a1;
  *((_DWORD *)HalpNumaMemoryRanges + 2 * v25 + 2) = v24;
  HalpNumaMemoryRangeCount = v23 + 1;
  qsort(
    HalpNumaMemoryRanges,
    (unsigned int)(v23 + 1),
    0x10uLL,
    (int (__cdecl *)(const void *, const void *))HalpNodeCostSort);
  v26 = 2LL * (unsigned int)HalpNumaMemoryRangeCount;
  *((_QWORD *)HalpNumaMemoryRanges + v26) = -1LL;
  *((_DWORD *)HalpNumaMemoryRanges + 2 * v26 + 2) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(&HalpNumaMemoryRangeLock);
  if ( KiIrqlFlags )
  {
    v27 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v27 >= 2u )
    {
      v28 = KeGetCurrentPrcb();
      v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v30 = v28->SchedulerAssist;
      v16 = (v29 & v30[5]) == 0;
      v30[5] &= v29;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(v28);
    }
  }
  __writecr8(v7);
  return (unsigned int)ProximityNode;
}
