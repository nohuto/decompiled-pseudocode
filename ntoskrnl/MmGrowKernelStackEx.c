/*
 * XREFs of MmGrowKernelStackEx @ 0x1402F61F0
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140315700 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KxSwitchKernelStackCallout @ 0x14041AD00 (KxSwitchKernelStackCallout.c)
 *     MmGrowKernelStack @ 0x14062B2A0 (MmGrowKernelStack.c)
 * Callees:
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x1402F63E4 (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MiAllocateKernelStackPages @ 0x14031D830 (MiAllocateKernelStackPages.c)
 *     MiChargeResident @ 0x140348DE8 (MiChargeResident.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmGrowKernelStackEx(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v3; // ebp
  __int64 v4; // r15
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  int v8; // eax
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v14; // zf
  signed __int32 v15; // eax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // rax
  _DWORD *v18; // r9
  int v19; // edx

  CurrentThread = KeGetCurrentThread();
  if ( (char *)CurrentThread->StackBase - (*((_QWORD *)CurrentThread->InitialStack + 1) & 0xFFFFFFFFFFFFFFFEuLL) < (void *)0x12000 )
    return 3221225659LL;
  v3 = 0;
  v4 = *(_QWORD *)(qword_140C67048 + 8LL * CurrentThread->Process[1].IdealProcessor[25]);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v11) = 4;
    if ( CurrentIrql != 2 )
      v11 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v11;
  }
  v6 = (((unsigned __int64)(a1 - a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v6 < (((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    if ( v6 < ((*((_QWORD *)CurrentThread->InitialStack + 1) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
    {
      ++dword_140C68138;
      v3 = -1073741571;
      goto LABEL_8;
    }
    v7 = ((__int64)((((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL - v6) >> 3)
       + 1;
    if ( (unsigned int)MiChargeResident(v4, v7, 0LL) )
    {
      v8 = MI_GET_NODE_FROM_VALID_PTE((((unsigned __int64)CurrentThread->StackBase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
      if ( (unsigned int)MiAllocateKernelStackPages(v4, v6, v7, (_DWORD)CurrentThread, v8, 2, 0LL) )
      {
        CurrentThread->StackLimit = (void *volatile)((__int64)(v6 << 25) >> 16);
        goto LABEL_8;
      }
      if ( (_UNKNOWN *)v4 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v7 + CachedResidentAvailable <= 0x100 && v7 < 0x80000 )
          {
            do
            {
              v15 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + v7,
                      CachedResidentAvailable);
              v14 = (_DWORD)CachedResidentAvailable == v15;
              LODWORD(CachedResidentAvailable) = v15;
              if ( v14 )
                goto LABEL_29;
            }
            while ( v15 != -1 && v7 + v15 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v7 += (int)CachedResidentAvailable - 192;
          }
        }
      }
      if ( v7 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 17280), v7);
LABEL_29:
      v3 = -1073741670;
      goto LABEL_8;
    }
    v3 = -1073741801;
  }
LABEL_8:
  if ( KiIrqlFlags )
  {
    v16 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
    {
      v17 = KeGetCurrentPrcb();
      v18 = v17->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v14 = (v19 & v18[5]) == 0;
      v18[5] &= v19;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(v17);
    }
  }
  __writecr8(CurrentIrql);
  return v3;
}
