/*
 * XREFs of HalpDmaControllerCancelTransfer @ 0x140513FDC
 * Callers:
 *     HalCancelMappedTransfer @ 0x140511F20 (HalCancelMappedTransfer.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpDmaControllerCancelTransfer(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  char v8; // r14
  unsigned __int64 v9; // rdx
  _DWORD *SchedulerAssist; // r10
  int v11; // r8d
  volatile signed __int64 *v12; // rsi
  __int64 result; // rax
  bool v14; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax

  v6 = *(_QWORD *)(a1 + 56) + 160LL * a2;
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0;
  if ( CurrentIrql == 15 )
  {
    v12 = (volatile signed __int64 *)(a1 + 168);
  }
  else
  {
    v9 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v9);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v9 - 2) <= 0xDu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == (_BYTE)v9 )
        v11 = 1 << v9;
      else
        v11 = (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v9 + 1)) - 1) & 0xFFFFFFFC;
      SchedulerAssist[5] |= v11;
    }
    v12 = (volatile signed __int64 *)(a1 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
    v8 = 1;
  }
  *(_DWORD *)(a3 + 12) |= 1u;
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 152))(*(_QWORD *)(a1 + 64), a2);
  if ( (_BYTE)result )
  {
    v14 = *(_QWORD *)(v6 + 8) == 0LL;
    *(_BYTE *)(v6 + 6) = 1;
    *(_DWORD *)(v6 + 32) = 2;
    if ( !v14 )
      result = KiInsertQueueDpc(v6 + 40, 0LL, 0LL, 0LL, 0);
  }
  if ( v8 )
  {
    KxReleaseSpinLock(v12);
    if ( KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
