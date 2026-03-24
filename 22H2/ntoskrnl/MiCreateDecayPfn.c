/*
 * XREFs of MiCreateDecayPfn @ 0x140306428
 * Callers:
 *     MiFinishHardFault @ 0x140239200 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiCopyDataPageToImagePage @ 0x140284A68 (MiCopyDataPageToImagePage.c)
 *     MiDeleteVa @ 0x1402B8110 (MiDeleteVa.c)
 * Callees:
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     MiMakeTransitionPte @ 0x1402AF040 (MiMakeTransitionPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY MiCreateDecayPfn()
{
  PSLIST_ENTRY result; // rax
  ULONG_PTR v1; // rdi
  unsigned __int16 *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rdx
  _DWORD *v5; // r9
  unsigned __int64 v6; // rsi
  char v7; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  result = RtlpInterlockedPopEntrySList(&stru_140C4E9B0);
  v1 = (ULONG_PTR)result;
  if ( result )
  {
    v2 = *(unsigned __int16 **)(qword_140C4E648
                              + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
    result[1].Next = (_SLIST_ENTRY *)MiMakeTransitionPte((__int64)&result[0x5800000000LL] / 48, 4);
    *(_QWORD *)(v1 + 40) ^= (v3 ^ *(_QWORD *)(v1 + 40)) & 0xFFFFFFFFFLL;
    v6 = (unsigned __int8)MiLockPageInline(v1, v4, v3, v5);
    *(_BYTE *)(v1 + 35) |= 8u;
    v7 = *(_BYTE *)(v1 + 35);
    *(_QWORD *)(v1 + 40) ^= (*(_QWORD *)(v1 + 40) ^ ((unsigned __int64)*v2 << 39)) & 0x1FF8000000000LL;
    *(_BYTE *)(v1 + 35) = v7 & 0xF8 | 5;
    MiInsertPageInList(v1, 4u);
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
    return (PSLIST_ENTRY)v1;
  }
  return result;
}
