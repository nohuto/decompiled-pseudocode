/*
 * XREFs of IommupFindAndPopCachedDevice @ 0x140524604
 * Callers:
 *     IommuDomainAttachDevice @ 0x140523210 (IommuDomainAttachDevice.c)
 *     IommuDomainAttachDeviceEx @ 0x1405234A0 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDeviceEx @ 0x1405238E0 (IommuDomainDetachDeviceEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall IommupFindAndPopCachedDevice(__int64 a1, __int64 **a2)
{
  __int64 *v2; // rbp
  char v4; // di
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  __int64 *i; // rcx
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  __int64 v16; // rdx
  __int64 **v17; // rax

  v2 = 0LL;
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v8) = 4096;
    else
      v8 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v8;
  }
  KxAcquireSpinLock(&HalpIommuParaVirtDeviceCacheLock);
  for ( i = (__int64 *)HalpIommuParaVirtDeviceCache; i != &HalpIommuParaVirtDeviceCache; i = (__int64 *)*i )
  {
    v2 = i;
    if ( i[4] == a1 && i[5] == *(_QWORD *)(a1 + 24) && !*((_DWORD *)i + 6) )
    {
      v16 = *i;
      v4 = 1;
      v17 = (__int64 **)i[1];
      if ( *(__int64 **)(*i + 8) != i || *v17 != i )
        __fastfail(3u);
      *v17 = (__int64 *)v16;
      *(_QWORD *)(v16 + 8) = v17;
      break;
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)&HalpIommuParaVirtDeviceCacheLock);
  if ( KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v14 = (v13 & v12[5]) == 0;
      v12[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( v4 )
    *a2 = v2;
  return v4;
}
