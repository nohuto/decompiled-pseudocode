/*
 * XREFs of HalpReadWriteWheaPhysicalMemory @ 0x14051F3D0
 * Callers:
 *     HalpReadWheaPhysicalMemory @ 0x14051F3B0 (HalpReadWheaPhysicalMemory.c)
 *     HalpWriteWheaPhysicalMemory @ 0x14051F640 (HalpWriteWheaPhysicalMemory.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     HalpRemapVirtualAddress64 @ 0x1402D7C00 (HalpRemapVirtualAddress64.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpReadWriteWheaPhysicalMemory(char a1, __int64 a2, unsigned int a3, char *a4)
{
  char *v4; // r15
  unsigned int v5; // esi
  __int64 v6; // rbx
  int v7; // eax
  unsigned int Number; // ecx
  unsigned __int64 v9; // r13
  KSPIN_LOCK *v10; // rbp
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rdx
  __int64 v14; // r14
  unsigned int v15; // ecx
  const void *v16; // rdx
  void *v17; // rcx
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  char v25; // [rsp+68h] [rbp+10h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( !a2 )
    return 3221225485LL;
  if ( a3 > 8 )
    return 3221225485LL;
  v7 = 278;
  if ( !_bittest(&v7, a3) || !a4 )
    return 3221225485LL;
  Number = KeGetPcr()->Prcb.Number;
  if ( HalpProcessorInMceHandler == Number )
  {
    v9 = HalpWheaMappingMceReservation;
    v10 = &HalpWheaMappingMceLock;
  }
  else if ( HalpProcessorInNmiHandler == Number )
  {
    v9 = HalpWheaMappingNmiReservation;
    v10 = (KSPIN_LOCK *)&HalpWheaMappingNmiLock;
  }
  else
  {
    v9 = HalpWheaMappingReservation;
    v10 = (KSPIN_LOCK *)&HalpWheaMappingLock;
  }
  v25 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xFu )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 15 )
        LODWORD(v13) = 0x8000;
      else
        v13 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      SchedulerAssist[5] |= v13;
    }
    v25 = 1;
  }
  KxAcquireSpinLock(v10);
  for ( ; v5; v5 -= v14 )
  {
    HalpRemapVirtualAddress64(v9, v6, 1);
    v14 = v5;
    v15 = 4096 - (v6 & 0xFFF);
    if ( v5 >= v15 )
      v14 = v15;
    if ( a1 )
    {
      v16 = (const void *)(v9 + (v6 & 0xFFF));
      v17 = v4;
    }
    else
    {
      v16 = v4;
      v17 = (void *)(v9 + (v6 & 0xFFF));
    }
    memmove(v17, v16, (unsigned int)v14);
    v6 += v14;
    v4 += v14;
  }
  KxReleaseSpinLock((volatile signed __int64 *)v10);
  if ( v25 )
  {
    if ( KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
