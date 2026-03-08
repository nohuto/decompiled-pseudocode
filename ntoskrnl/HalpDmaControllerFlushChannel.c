/*
 * XREFs of HalpDmaControllerFlushChannel @ 0x140514184
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x140511F70 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x140512DB0 (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpDmaControllerFlushChannel(__int64 a1, unsigned int a2)
{
  ULONG_PTR BugCheckParameter4; // r13
  unsigned __int8 CurrentIrql; // bl
  char v5; // r12
  unsigned __int64 v6; // rdx
  _DWORD *SchedulerAssist; // r10
  int v8; // r8d
  volatile signed __int64 *v9; // rbp
  __int64 v10; // rsi
  __int64 result; // rax
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf

  BugCheckParameter4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v5 = 0;
  if ( CurrentIrql == 15 )
  {
    v9 = (volatile signed __int64 *)(a1 + 168);
  }
  else
  {
    v6 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v6);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v6 - 2) <= 0xDu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == (_BYTE)v6 )
        v8 = 1 << v6;
      else
        v8 = (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v6 + 1)) - 1) & 0xFFFFFFFC;
      SchedulerAssist[5] |= v8;
    }
    v9 = (volatile signed __int64 *)(a1 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
    v5 = 1;
  }
  v10 = *(_QWORD *)(a1 + 56) + 160 * BugCheckParameter4;
  if ( !*(_BYTE *)(v10 + 6) && *(_QWORD *)(v10 + 8) )
    KeBugCheckEx(0xE6u, 0x23uLL, 0LL, *(unsigned int *)(a1 + 32), BugCheckParameter4);
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 120))(
             *(_QWORD *)(a1 + 64),
             (unsigned int)BugCheckParameter4);
  *(_BYTE *)(v10 + 6) = 0;
  *(_QWORD *)(v10 + 8) = 0LL;
  *(_QWORD *)(v10 + 16) = 0LL;
  if ( v5 )
  {
    KxReleaseSpinLock(v9);
    if ( KiIrqlFlags )
    {
      v12 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
