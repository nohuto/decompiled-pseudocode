/*
 * XREFs of MiDrainEngineDescriptors @ 0x1402A9904
 * Callers:
 *     MiAbsorbPossibleEngineChanges @ 0x1402A87C4 (MiAbsorbPossibleEngineChanges.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteAcceleratorDescriptor @ 0x14065241C (MiDeleteAcceleratorDescriptor.c)
 */

__int64 __fastcall MiDrainEngineDescriptors(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // r14
  _QWORD *v4; // rbx
  KIRQL v5; // di
  __int64 result; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  KIRQL v14; // al
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 200) + 23160LL));
  v3 = (_QWORD *)(a1 + 112);
  v4 = *(_QWORD **)(a1 + 112);
  v5 = v2;
  if ( v4 != (_QWORD *)(a1 + 112) )
  {
    do
    {
      v7 = (_QWORD *)*v4;
      if ( !*((_BYTE *)v4 + 16) && ((*(_DWORD *)(v4[3] + 52LL) & 1) != 0 || byte_140C69494) )
      {
        v8 = (_QWORD *)v4[1];
        if ( (_QWORD *)v7[1] != v4 || (_QWORD *)*v8 != v4 )
          __fastfail(3u);
        *v8 = v7;
        v7[1] = v8;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 200) + 23160LL));
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v12 = ~(unsigned __int16)(-1LL << (v5 + 1));
            v13 = (v12 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v12;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v5);
        MiDeleteAcceleratorDescriptor(v4 + 4);
        v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 200) + 23160LL));
        v7 = (_QWORD *)*v3;
        v5 = v14;
      }
      v4 = v7;
    }
    while ( v7 != v3 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 200) + 23160LL));
  if ( KiIrqlFlags )
  {
    v15 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && v5 <= 0xFu && v15 >= 2u )
    {
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << (v5 + 1));
      v13 = (v18 & v17[5]) == 0;
      v17[5] &= v18;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v16);
    }
  }
  result = v5;
  __writecr8(v5);
  return result;
}
