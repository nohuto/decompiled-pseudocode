/*
 * XREFs of MiDrainControlAreaWrites @ 0x140214FDC
 * Callers:
 *     MiDestroySection @ 0x1402017AC (MiDestroySection.c)
 *     MiPrepareSegmentForDeletion @ 0x140214F04 (MiPrepareSegmentForDeletion.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForGate @ 0x1402931D8 (KeWaitForGate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiDrainControlAreaWrites(__int64 a1, KIRQL a2)
{
  bool v3; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  int v10; // [rsp+28h] [rbp-28h]
  int v11; // [rsp+2Ch] [rbp-24h]
  __int16 v12; // [rsp+30h] [rbp-20h] BYREF
  char v13; // [rsp+32h] [rbp-1Eh]
  char v14; // [rsp+33h] [rbp-1Dh]
  int v15; // [rsp+34h] [rbp-1Ch]
  _QWORD v16[3]; // [rsp+38h] [rbp-18h] BYREF

  v11 = 0;
  v3 = *(_DWORD *)(a1 + 76) == 0;
  v14 = 0;
  if ( !v3 )
  {
    do
    {
      v15 = 0;
      v16[1] = v16;
      v10 = 8;
      v16[0] = v16;
      v9 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 80) = &v9;
      v12 = 263;
      v13 = 6;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && a2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << (a2 + 1));
          v3 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v3 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(a2);
      KeWaitForGate(&v12, 18LL);
      a2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    }
    while ( *(_DWORD *)(a1 + 76) );
  }
}
