/*
 * XREFs of MiAttemptSectionDelete @ 0x1402F3B10
 * Callers:
 *     MmFlushImageSection @ 0x1402E1460 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x1402F3AB0 (MiForceSectionClosed.c)
 * Callees:
 *     MiCleanSection @ 0x14020165C (MiCleanSection.c)
 *     KeWaitForGate @ 0x1402931D8 (KeWaitForGate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x14034C47C (MiRemoveUnusedSegment.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiAttemptSectionDelete(__int64 a1, unsigned __int8 a2, char a3)
{
  bool v4; // zf
  unsigned __int64 v6; // rdi
  int v8; // eax
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r11
  _DWORD *v11; // r9
  int v12; // edx
  __int64 v13; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  int v19; // [rsp+28h] [rbp-28h]
  int v20; // [rsp+2Ch] [rbp-24h]
  __int16 v21; // [rsp+30h] [rbp-20h] BYREF
  char v22; // [rsp+32h] [rbp-1Eh]
  char v23; // [rsp+33h] [rbp-1Dh]
  int v24; // [rsp+34h] [rbp-1Ch]
  _QWORD v25[3]; // [rsp+38h] [rbp-18h] BYREF

  v20 = 0;
  v4 = *(_QWORD *)(a1 + 24) == 0LL;
  v6 = a2;
  v23 = 0;
  if ( !v4 || *(_QWORD *)(a1 + 40) || (v8 = *(_DWORD *)(a1 + 56), (v8 & 2) != 0) )
  {
    if ( (a3 & 4) != 0 )
      *(_DWORD *)(a1 + 56) |= 0x40000u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v4 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v4 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v6);
    return 0;
  }
  else if ( (v8 & 1) != 0 )
  {
    v24 = 0;
    v25[1] = v25;
    v25[0] = v25;
    v18 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v18;
    v19 = 1;
    v21 = 263;
    v22 = 6;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      v9 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v9 >= 2u )
      {
        v10 = KeGetCurrentPrcb();
        v11 = v10->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v4 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v4 )
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
    __writecr8(v6);
    KeWaitForGate((__int64)&v21, 19LL, 0);
    return 1;
  }
  else
  {
    MiRemoveUnusedSegment(a1);
    LOBYTE(v13) = v6;
    *(_QWORD *)(a1 + 40) = 1LL;
    return MiCleanSection(a1, v13, (a3 & 4) != 0);
  }
}
