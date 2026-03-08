/*
 * XREFs of KiMonitorCacheErrata @ 0x140576EC0
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MmReadProcessPageTables @ 0x14064325C (MmReadProcessPageTables.c)
 */

__int64 KiMonitorCacheErrata()
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v1; // r13
  __int64 v2; // rbx
  __int64 result; // rax
  volatile signed __int32 *v4; // rdx
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r12
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rdx
  __int64 v11; // r14
  unsigned __int8 v12; // cl
  struct _KPRCB *v13; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = (_DWORD *)KiCacheErrataMonitor;
  v2 = KiCacheErrataMonitor + 16 * (CurrentPrcb->Number + 39LL);
  _InterlockedExchange64((volatile __int64 *)v2, -1LL);
  result = (unsigned int)(*(_DWORD *)(v2 + 8) - KiSanitizedProfileInterval);
  *(_DWORD *)(v2 + 8) = result;
  if ( (int)result <= 0 )
  {
    v4 = &v1[4 * *(unsigned int *)(v2 + 12) + 156];
    if ( (volatile signed __int32 *)v2 != v4 && !_interlockedbittestandreset64(v4, CurrentPrcb->Number) )
    {
      v5 = 0LL;
      v6 = KiProcessorBlock[*(unsigned int *)(v2 + 12)];
      v7 = *(_QWORD *)(v6 + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 15 )
          LODWORD(v10) = 0x8000;
        else
          v10 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
        SchedulerAssist[5] |= v10;
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v6 + 48), 0LL) )
      {
        v11 = *(_QWORD *)(v6 + 8);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
        {
          v5 = *(_QWORD *)(v11 + 184);
          if ( (_UNKNOWN *)v5 != &KiInitialProcess )
            v5 &= -(__int64)(ObReferenceObjectSafeWithTag(*(_QWORD *)(v11 + 184)) != 0);
          *(_QWORD *)(v11 + 64) = 0LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 48), 0LL);
      }
      if ( v7 == *(_QWORD *)(v6 + 8) )
        MmReadProcessPageTables(v6);
      if ( KiIrqlFlags )
      {
        v12 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
        {
          v13 = KeGetCurrentPrcb();
          v14 = v13->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v16 = (v15 & v14[5]) == 0;
          v14[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)v13);
        }
      }
      __writecr8(CurrentIrql);
      if ( v5 )
      {
        if ( (_UNKNOWN *)v5 != &KiInitialProcess )
          ObDereferenceObjectDeferDeleteWithTag((PVOID)v5, 0x61727245u);
      }
    }
    *(_DWORD *)(v2 + 8) = *v1;
    result = (*(_DWORD *)(v2 + 12) + 1) / (unsigned int)KeNumberProcessors_0;
    *(_DWORD *)(v2 + 12) = (*(_DWORD *)(v2 + 12) + 1) % (unsigned int)KeNumberProcessors_0;
  }
  return result;
}
