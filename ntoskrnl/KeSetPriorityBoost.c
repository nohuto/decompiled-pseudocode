/*
 * XREFs of KeSetPriorityBoost @ 0x14035112C
 * Callers:
 *     FsRtlpWaitForIoAtEof @ 0x140240CC0 (FsRtlpWaitForIoAtEof.c)
 *     ExpApplyPriorityBoost @ 0x140282C50 (ExpApplyPriorityBoost.c)
 *     KeGenericProcessorCallback @ 0x1402A9E48 (KeGenericProcessorCallback.c)
 *     FsRtlpDoBoost @ 0x1402ECD68 (FsRtlpDoBoost.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiSetPriorityBoost @ 0x1403512FC (KiSetPriorityBoost.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetPriorityBoost(__int64 a1, int a2)
{
  __int64 result; // rax
  char v5; // r12
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v8; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rax
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  int v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  result = (__int64)&KiInitialProcess;
  if ( *(_UNKNOWN **)(a1 + 544) != &KiInitialProcess )
  {
    v17 = 0LL;
    v5 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v10) = 4;
      if ( CurrentIrql != 2 )
        v10 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v10;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *(char *)(a1 + 195) <= 0 || *(char *)(a1 + 195) >= a2 )
      goto LABEL_25;
    v8 = *(_QWORD *)(a1 + 72);
    v16 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v16);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( *(char *)(a1 + 195) > 0 && *(char *)(a1 + 195) < a2 )
    {
      v5 = 1;
      KiSetPriorityBoost((unsigned int)&v17, a1, (_BYTE)a2, v8, KiLockQuantumTarget);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( v5 )
    {
      return KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v17, CurrentIrql);
    }
    else
    {
LABEL_25:
      if ( KiIrqlFlags )
      {
        v11 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          v13 = v12->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
