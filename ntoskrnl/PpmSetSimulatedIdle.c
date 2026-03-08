/*
 * XREFs of PpmSetSimulatedIdle @ 0x1405837CC
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140236BF0 (KeGetProcessorIndexFromNumber.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpmSetSimulatedIdle(__int64 a1)
{
  ULONG ProcessorIndexFromNumber; // eax
  char v4; // cl
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  _PPM_IDLE_STATES *IdleStates; // rax
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  _DWORD *v14; // r9
  int v15; // edx
  bool v16; // zf
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(a1 + 4));
  if ( ProcessorIndexFromNumber == -1 )
    return 3221225485LL;
  *(_DWORD *)Affinity.Reserved = 0;
  Affinity.Reserved[2] = 0;
  v4 = KiProcessorIndexToNumberMappingTable[ProcessorIndexFromNumber] & 0x3F;
  Affinity.Group = (unsigned int)KiProcessorIndexToNumberMappingTable[ProcessorIndexFromNumber] >> 6;
  Affinity.Mask = 1LL << v4;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v8 = 4;
    if ( CurrentIrql != 2 )
      v8 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v8;
  }
  IdleStates = CurrentPrcb->PowerState.IdleStates;
  if ( IdleStates )
  {
    v11 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 < IdleStates->ProcessorIdleCount )
    {
      IdleStates->IdleOverride = 1;
      v10 = 0;
      IdleStates->OverrideIndex = v11;
    }
    else
    {
      v10 = -1073741811;
    }
  }
  else
  {
    v10 = -1073741637;
  }
  if ( KiIrqlFlags )
  {
    v12 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
    {
      v13 = KeGetCurrentPrcb();
      v14 = v13->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v16 = (v15 & v14[5]) == 0;
      v14[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick((__int64)v13);
    }
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v10;
}
