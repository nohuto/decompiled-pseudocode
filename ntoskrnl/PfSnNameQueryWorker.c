/*
 * XREFs of PfSnNameQueryWorker @ 0x1402E1560
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PfSnVolumeKeyQuery @ 0x14076C3D0 (PfSnVolumeKeyQuery.c)
 */

void __fastcall PfSnNameQueryWorker(struct _EX_RUNDOWN_REF *a1)
{
  volatile LONG *v1; // r14
  KIRQL v3; // al
  unsigned __int64 *Count; // rsi
  unsigned __int64 v5; // rdi
  void *v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  int v14; // eax
  _DWORD *v15; // r8
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  v1 = (volatile LONG *)&a1[72];
  while ( 1 )
  {
    v3 = ExAcquireSpinLockExclusive(v1);
    Count = (unsigned __int64 *)a1[67].Count;
    v5 = v3;
    if ( !Count )
      break;
    a1[67].Count = *Count;
    *Count = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v5);
    v6 = (void *)Count[1];
    if ( (*(int (__fastcall **)(unsigned __int64, void *, __int64 *))(qword_140C64D48 + 16))(a1[44].Count, v6, &v16) >= 0 )
      PfSnVolumeKeyQuery(a1, v16, v6);
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  }
  a1[71].Count = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  if ( KiIrqlFlags )
  {
    v12 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v12 >= 2u )
    {
      v13 = KeGetCurrentPrcb();
      v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v15 = v13->SchedulerAssist;
      v11 = (v14 & v15[5]) == 0;
      v15[5] &= v14;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(v13);
    }
  }
  __writecr8(v5);
  ExReleaseRundownProtection_0(a1 + 45);
}
