/*
 * XREFs of PpmClearSimulatedIdle @ 0x140581BAC
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140236BF0 (KeGetProcessorIndexFromNumber.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpmClearSimulatedIdle(struct _PROCESSOR_NUMBER *a1)
{
  ULONG ProcessorIndexFromNumber; // eax
  char v3; // cl
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  _PPM_IDLE_STATES *IdleStates; // rax
  unsigned int v9; // edi
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r9
  int v13; // edx
  bool v14; // zf
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a1);
  if ( ProcessorIndexFromNumber == -1 )
    return 3221225485LL;
  *(_DWORD *)Affinity.Reserved = 0;
  Affinity.Reserved[2] = 0;
  v3 = KiProcessorIndexToNumberMappingTable[ProcessorIndexFromNumber] & 0x3F;
  Affinity.Group = (unsigned int)KiProcessorIndexToNumberMappingTable[ProcessorIndexFromNumber] >> 6;
  Affinity.Mask = 1LL << v3;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v7 = 4;
    if ( CurrentIrql != 2 )
      v7 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v7;
  }
  IdleStates = CurrentPrcb->PowerState.IdleStates;
  if ( IdleStates )
  {
    if ( IdleStates->IdleOverride )
    {
      IdleStates->OverrideIndex = 0;
      IdleStates->IdleOverride = 0;
    }
    v9 = 0;
  }
  else
  {
    v9 = -1073741637;
  }
  if ( KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
    {
      v11 = KeGetCurrentPrcb();
      v12 = v11->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v14 = (v13 & v12[5]) == 0;
      v12[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)v11);
    }
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v9;
}
