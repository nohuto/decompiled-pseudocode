/*
 * XREFs of HalpAllocateAdapterChannel @ 0x140512850
 * Callers:
 *     HalAllocateAdapterChannel @ 0x140452D00 (HalAllocateAdapterChannel.c)
 *     HalpBuildScatterGatherList @ 0x14050D490 (HalpBuildScatterGatherList.c)
 *     HalAllocateAdapterChannelEx @ 0x140511E50 (HalAllocateAdapterChannelEx.c)
 *     HalRealAllocateAdapterChannelV3 @ 0x140512800 (HalRealAllocateAdapterChannelV3.c)
 * Callees:
 *     HalpDmaStartWcb @ 0x1404FE9F0 (HalpDmaStartWcb.c)
 *     HalpAllocateDmaResourcesInternal @ 0x140512A4C (HalpAllocateDmaResourcesInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpAllocateAdapterChannel(__int64 a1, __int64 a2, unsigned int a3, int a4, char a5, __int64 a6)
{
  int v6; // esi
  int v11; // ecx
  __int16 v12; // cx
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // ebp
  __int64 v17; // rdx
  char v18; // r15
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v23; // r9
  int v24; // edx
  bool v25; // zf

  v6 = 4;
  if ( (*(_DWORD *)(a2 + 20) & 2) != 0 )
  {
    _m_prefetchw((const void *)(a2 - 8));
    if ( (_InterlockedOr((volatile signed __int32 *)(a2 - 8), 4u) & 2) != 0 )
      return 3221225760LL;
  }
  if ( *(_BYTE *)(a1 + 440) && a3 > *(_DWORD *)(a1 + 232) )
    return 3221225626LL;
  v11 = *(_DWORD *)(a2 + 20);
  if ( (a5 & 2) != 0 )
    v12 = v11 | 4;
  else
    v12 = v11 & 0xFFFB;
  *(_QWORD *)(a2 + 24) = a6;
  *(_DWORD *)(a2 + 40) = a3;
  *(_DWORD *)(a2 + 16) = 1;
  v13 = (a4 << 12) | v12 & 0xFFF;
  v14 = v13 | 1;
  v15 = v13 & 0xFFFFFFFE;
  v16 = (a5 & 1) != 0 ? 0xC000009A : 0;
  if ( (a5 & 1) == 0 )
    v14 = v15;
  *(_DWORD *)(a2 + 20) = v14;
  if ( HalpDmaStartWcb(a1, (_QWORD *)a2, v14 & 1) )
  {
    *(_QWORD *)(a1 + 352) = a2;
    v18 = 0;
    CurrentIrql = 0;
    *(_DWORD *)(a1 + 248) = a3;
    *(_DWORD *)(a1 + 388) = 1;
    *(_DWORD *)(a1 + 624) = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql != 2 )
        {
          v17 = -1LL << (CurrentIrql + 1);
          v6 = v17 & 4;
        }
        SchedulerAssist[5] |= v6;
      }
      v18 = 1;
    }
    LOBYTE(v17) = 1;
    if ( (unsigned __int8)HalpAllocateDmaResourcesInternal(a1, v17, 0LL) )
      v16 = 0;
    if ( v18 )
    {
      if ( KiIrqlFlags )
      {
        v21 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v23 = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v25 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  return v16;
}
