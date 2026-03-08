/*
 * XREFs of IommuGetAtsSettings @ 0x1403A3090
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     IommupHvGetDeviceAtsCapability @ 0x14052287C (IommupHvGetDeviceAtsCapability.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IommuGetAtsSettings(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  KIRQL v6; // al
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  char v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v14 = 0;
  if ( *(_DWORD *)a1 != 1 || (*(_BYTE *)(a1 + 4) & 1) != 0 || (*(_BYTE *)(a1 + 10) & 3) != 0 )
    return 3221225659LL;
  if ( HalpHvIommu )
  {
    result = IommupHvGetDeviceAtsCapability(a1, &v14);
    v2 = result;
    if ( (int)result < 0 )
      return result;
    if ( !v14 )
      return 3221225659LL;
  }
  v6 = KeAcquireSpinLockRaiseToDpc(&HalpIommuAtsDeviceLock);
  v7 = HalpIommuAtsDeviceList;
  v8 = v6;
  if ( (__int64 *)HalpIommuAtsDeviceList == &HalpIommuAtsDeviceList )
  {
LABEL_8:
    v2 = -1073741275;
  }
  else
  {
    while ( *(_WORD *)(v7 + 24) != *(_WORD *)(a1 + 8) || *(_WORD *)(v7 + 28) != *(_WORD *)(a1 + 12) )
    {
      v7 = *(_QWORD *)v7;
      if ( (__int64 *)v7 == &HalpIommuAtsDeviceList )
        goto LABEL_8;
    }
    *a2 |= 1u;
    *a2 ^= (*a2 ^ (2 * *(_BYTE *)(v7 + 40))) & 2;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&HalpIommuAtsDeviceLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v8);
  return v2;
}
