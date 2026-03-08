/*
 * XREFs of HalpContinueProcessingWaitQueue @ 0x14050D774
 * Callers:
 *     HalPutScatterGatherListV3 @ 0x14050CE18 (HalPutScatterGatherListV3.c)
 *     IoFreeAdapterChannelV3 @ 0x14050DD90 (IoFreeAdapterChannelV3.c)
 * Callees:
 *     HalpDmaGetNextWcb @ 0x1404FDF04 (HalpDmaGetNextWcb.c)
 *     IoFreeAdapterChannelV3Internal @ 0x14050DDE4 (IoFreeAdapterChannelV3Internal.c)
 *     HalpAllocateDmaResourcesInternal @ 0x140512A4C (HalpAllocateDmaResourcesInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpContinueProcessingWaitQueue(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int i; // ebp
  __int64 *NextWcb; // rax
  char v5; // si
  int v6; // eax
  unsigned __int8 v7; // r8
  _DWORD *SchedulerAssist; // r10
  __int64 v9; // rdx
  char v10; // r14
  unsigned __int8 v11; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v13; // r9
  int v14; // eax
  bool v15; // zf
  int v17; // [rsp+48h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  for ( i = 0; ; ++i )
  {
    NextWcb = HalpDmaGetNextWcb(a1);
    if ( !NextWcb )
      break;
    *(_QWORD *)(a1 + 352) = NextWcb;
    v5 = 0;
    *(_DWORD *)(a1 + 248) = *((_DWORD *)NextWcb + 10);
    v6 = *((_DWORD *)NextWcb + 4);
    *(_DWORD *)(a1 + 624) = 0;
    *(_DWORD *)(a1 + 388) = v6;
    if ( CurrentIrql < 2u )
    {
      v7 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v7 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v7 == 2 )
          LODWORD(v9) = 4;
        else
          v9 = (-1LL << (v7 + 1)) & 4;
        SchedulerAssist[5] |= v9;
      }
      CurrentIrql = v7;
      v5 = 1;
    }
    v17 = 1;
    v10 = HalpAllocateDmaResourcesInternal(a1, 0LL, &v17);
    if ( v10 && v17 != 1 )
    {
      if ( v17 != 2 )
      {
        if ( v17 != 3 )
          goto LABEL_18;
        *(_DWORD *)(a1 + 248) = 0;
      }
      IoFreeAdapterChannelV3Internal(a1);
    }
LABEL_18:
    if ( v5 )
    {
      if ( KiIrqlFlags )
      {
        v11 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
    if ( !v10 )
      return i;
  }
  return i;
}
