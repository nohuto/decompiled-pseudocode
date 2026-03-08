/*
 * XREFs of IommuSetDeviceFaultReporting @ 0x1405241C0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IommuSetDeviceFaultReporting(__int64 a1, int a2, char a3, _QWORD *a4)
{
  char v4; // si
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // rdx
  __int64 i; // rax
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  __int64 result; // rax

  v4 = 0;
  if ( !HalpHvIommu || !HalpHvParaVirtIommuDomain )
    return 3221225659LL;
  v9 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v12) = 4096;
    else
      v12 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v12;
  }
  KxAcquireSpinLock(&HalpIommuParaVirtDeviceCacheLock);
  for ( i = HalpIommuParaVirtDeviceCache; (__int64 *)i != &HalpIommuParaVirtDeviceCache; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 16) == a1 && *(_DWORD *)(i + 24) == a2 )
    {
      v9 = *(_QWORD *)(i + 32);
      v4 = 1;
      break;
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)&HalpIommuParaVirtDeviceCacheLock);
  if ( KiIrqlFlags )
  {
    v14 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v16 = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v18 = (v17 & v16[5]) == 0;
      v16[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( !v4 )
    return 3221225485LL;
  if ( a3 )
    *(_QWORD *)(v9 + 96) = *a4;
  *(_QWORD *)(v9 + 96) = 0LL;
  result = 3221225474LL;
  *(_QWORD *)(v9 + 104) = 0LL;
  return result;
}
