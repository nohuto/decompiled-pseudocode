/*
 * XREFs of IommuDomainDetachDevice @ 0x140523720
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     HalpIommuLeaveDmaDomain @ 0x140516044 (HalpIommuLeaveDmaDomain.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIommuDeleteDevice @ 0x140930ACC (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall IommuDomainDetachDevice(ULONG_PTR a1, __int64 a2, int a3)
{
  __int32 v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdx
  __int64 i; // rax
  char v13; // r14
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  int v19; // ebx
  __int64 v20; // rdx
  __int64 *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx

  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v11) = 4096;
    else
      v11 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v11;
  }
  KxAcquireSpinLock(&HalpIommuParaVirtDeviceCacheLock);
  for ( i = HalpIommuParaVirtDeviceCache; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &HalpIommuParaVirtDeviceCache )
    {
      v13 = 0;
      goto LABEL_15;
    }
    v4 = i;
    if ( *(_QWORD *)(i + 40) == a1 && *(_QWORD *)(i + 16) == a2 && *(_DWORD *)(i + 24) == a3 )
      break;
  }
  v5 = *(_QWORD *)(i + 32);
  v13 = 1;
  v3 = _InterlockedExchange((volatile __int32 *)(v5 + 16), 1);
  v20 = *(_QWORD *)i;
  v21 = *(__int64 **)(i + 8);
  if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v21 != i )
    __fastfail(3u);
  *v21 = v20;
  *(_QWORD *)(v20 + 8) = v21;
LABEL_15:
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
  if ( v13 )
  {
    v19 = HalpIommuLeaveDmaDomain(v5, a1);
    if ( v19 >= 0 )
    {
      if ( v3 != 2 )
        v19 = HalpIommuDeleteDevice(v5);
      HalpMmAllocCtxFree(v22, *(_QWORD *)(v4 + 48));
      HalpMmAllocCtxFree(v23, v4);
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return (unsigned int)v19;
}
