/*
 * XREFs of HalpLbrClearStack @ 0x140456700
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char HalpLbrClearStack()
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v2; // rdx
  unsigned int v3; // r11d
  unsigned __int64 v4; // r9
  int v5; // edi
  unsigned int v6; // r8d
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *v9; // r9
  int v10; // edx
  bool v11; // zf

  if ( !HalpLbrStackSize || !HalpLbrAreOperationsAllowed )
    return 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v2) = 0x8000;
    else
      v2 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v2;
  }
  if ( HalpArchLbrSupported )
  {
    v3 = 5326;
    __writemsr(0x14CEu, 0LL);
    __writemsr(0x14CFu, (unsigned int)HalpLbrStackSize);
    v4 = (unsigned int)HalpLbrCtlFlags;
  }
  else
  {
    v3 = 473;
    v4 = __readmsr(0x1D9u);
    __writemsr(0x1D9u, v4 & 0xFFFFFFFFFFFFFFFEuLL);
    v5 = HalpLbrStackSize;
    __writemsr(0x1C9u, (unsigned int)(HalpLbrStackSize - 1));
    v6 = 0;
    if ( v5 )
    {
      do
      {
        __writemsr(v6 + 1664, 0LL);
        ++v6;
      }
      while ( v6 < HalpLbrStackSize );
    }
  }
  __writemsr(v3, v4 | 1);
  if ( KiIrqlFlags )
  {
    v7 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v11 = (v10 & v9[5]) == 0;
      v9[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return 1;
}
