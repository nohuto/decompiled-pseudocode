/*
 * XREFs of HalpDmaFindDeviceObjectByToken @ 0x14038C8C4
 * Callers:
 *     HalPnpGetDmaAdapter @ 0x14038C880 (HalPnpGetDmaAdapter.c)
 *     HalpDmaCheckAdapterToken @ 0x1404FF4E0 (HalpDmaCheckAdapterToken.c)
 *     HaliGetDmaAdapter @ 0x140502FF0 (HaliGetDmaAdapter.c)
 *     HalpDmaLinkDeviceObjectByToken @ 0x140821390 (HalpDmaLinkDeviceObjectByToken.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDmaFindDeviceObjectByToken(__int64 a1, char a2, char a3)
{
  __int64 *v4; // rsi
  __int64 v5; // rbx
  char v6; // bp
  KIRQL v9; // al
  __int64 *v10; // r9
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 **v13; // rax
  bool v15; // cf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc(&HalpDmaPdoListLock);
  v10 = (__int64 *)HalpDmaPdoList;
  v11 = v9;
  while ( v10 != &HalpDmaPdoList )
  {
    v4 = v10;
    if ( v10[2] == a1 )
    {
      v5 = v10[3];
      if ( a2 )
      {
        v12 = *v10;
        v13 = (__int64 **)v10[1];
        if ( *(__int64 **)(*v10 + 8) != v10 || *v13 != v10 )
          __fastfail(3u);
        *v13 = (__int64 *)v12;
        v6 = 1;
        *(_QWORD *)(v12 + 8) = v13;
      }
      if ( a3 )
      {
        v15 = *((_BYTE *)v10 + 32) != 0;
        *((_BYTE *)v10 + 32) = 1;
        v5 &= -(__int64)v15;
      }
      break;
    }
    v10 = (__int64 *)*v10;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&HalpDmaPdoListLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v20 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v11);
  if ( v6 )
    ExFreePoolWithTag(v4, 0);
  return v5;
}
