/*
 * XREFs of MiCheckAndUpdateIoAttribution @ 0x140279098
 * Callers:
 *     MiValidFault @ 0x140209710 (MiValidFault.c)
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     IoReferenceIoAttributionFromThread @ 0x140278F68 (IoReferenceIoAttributionFromThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     IoDiskIoAttributionDereference @ 0x1402E06F4 (IoDiskIoAttributionDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckAndUpdateIoAttribution(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  KIRQL v7; // al
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  __int64 v11; // r14
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 16);
  v15 = 0LL;
  if ( qword_140C4DF40 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C4DF40;
  v3 = *(_QWORD *)(v2 >> 16);
  result = *(unsigned int *)(v3 + 56);
  if ( (result & 0x20) == 0 )
  {
    result = IoReferenceIoAttributionFromThread(CurrentThread, (__int64)&v15);
    if ( (int)result >= 0 )
    {
      v5 = v15;
      if ( v15 == 8LL * *(_QWORD *)(v3 + 120) )
      {
        v6 = v15;
      }
      else
      {
        v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        v8 = *(_QWORD *)(v3 + 120);
        v9 = v7;
        v10 = v8 & 0xE000000000000000uLL;
        v11 = 8 * v8;
        *(_QWORD *)(v3 + 120) = (v5 >> 3) | v10;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
        result = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= result;
              if ( v14 )
                result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v9);
        if ( !v11 )
          return result;
        v6 = v11;
      }
      return IoDiskIoAttributionDereference(v6);
    }
  }
  return result;
}
