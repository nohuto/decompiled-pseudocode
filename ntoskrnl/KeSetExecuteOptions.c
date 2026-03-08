/*
 * XREFs of KeSetExecuteOptions @ 0x1402FFC84
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetExecuteOptions(__int64 a1, int a2)
{
  char v2; // bp
  unsigned int v4; // r15d
  unsigned __int8 CurrentIrql; // bl
  char v6; // al
  char v7; // al
  char v8; // cl
  char v9; // r8
  char v10; // cl
  char v11; // r8
  char v12; // cl
  char v13; // r8
  char v14; // cl
  char v15; // r8
  char v16; // cl
  char v17; // dl
  char v18; // r9
  bool v19; // zf
  char v20; // dl
  _DWORD *SchedulerAssist; // r9
  __int64 v23; // rdx
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v26; // r9
  int v27; // edx

  v2 = a2;
  if ( (a2 & 0xFFFFFF80) != 0 || !*(_QWORD *)(a1 + 1408) || *(_WORD *)(a1 + 2412) != 332 )
    return 3221225485LL;
  v4 = -1073741790;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v23) = 4;
    else
      v23 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v23;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v6 = *(_BYTE *)(a1 + 643);
  if ( (v6 & 8) == 0 )
  {
    v7 = v6 & 0xFE;
    if ( (v2 & 1) != 0 )
      v7 = v7 & 0xFC | 1;
    v8 = v7 | 4;
    if ( (v2 & 4) == 0 )
      v8 = v7;
    v9 = v8;
    v10 = v8 | 2;
    if ( (v2 & 2) == 0 )
      v10 = v9;
    v11 = v10;
    v12 = v10 | 0x10;
    if ( (v2 & 0x10) == 0 )
      v12 = v11;
    v13 = v12;
    v14 = v12 | 0x20;
    if ( (v2 & 0x20) == 0 )
      v14 = v13;
    v15 = v14;
    v16 = v14 | 0x40;
    if ( (v2 & 0x40) == 0 )
      v16 = v15;
    v17 = v16 | 8;
    if ( (v2 & 8) == 0 )
      v17 = v16;
    v18 = v17;
    v19 = (v17 & 2) == 0;
    v20 = v17 | 0x30;
    if ( v19 )
      v20 = v18;
    v4 = 0;
    *(_BYTE *)(a1 + 643) = v20;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags )
  {
    v24 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v26 = CurrentPrcb->SchedulerAssist;
      v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v19 = (v27 & v26[5]) == 0;
      v26[5] &= v27;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v4;
}
