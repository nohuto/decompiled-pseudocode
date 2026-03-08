/*
 * XREFs of KiUpdateProcessorCount @ 0x140A860DC
 * Callers:
 *     KiUpdateNumberProcessorsIpi @ 0x140A9C500 (KiUpdateNumberProcessorsIpi.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KiGetCurrentGroupCount @ 0x140303174 (KiGetCurrentGroupCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiUpdateProcessorCount(__int64 a1, int a2)
{
  int v3; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  volatile CCHAR v6; // al
  __int64 v7; // rcx
  char result; // al
  signed __int32 v9; // eax
  signed __int32 v10; // ett

  KiActiveGroups = KiGetCurrentGroupCount();
  _disable();
  LODWORD(KeNumberProcessors_0) = KeNumberProcessors_0 + 1;
  KeAddProcessorAffinityEx((unsigned __int16 *)KeActiveProcessors, v3);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v9 = *SchedulerAssist;
    do
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange(SchedulerAssist, v9 & 0xFFDFFFFF, v9);
    }
    while ( v10 != v9 );
    if ( (v9 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  if ( !a2 )
  {
    v6 = KeNumberProcessorsGroup0[0];
    KeNumberProcessorsGroup0[0] = v6 + 1;
  }
  v7 = MmWriteableSharedUserData;
  result = KiActiveGroups;
  ++*(_DWORD *)(MmWriteableSharedUserData + 960);
  ++*(_WORD *)(v7 + 874);
  *(_BYTE *)(v7 + 964) = result;
  return result;
}
