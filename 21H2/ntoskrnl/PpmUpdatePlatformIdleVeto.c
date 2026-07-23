/*
 * XREFs of PpmUpdatePlatformIdleVeto @ 0x140568470
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     PopExecuteOnTargetProcessors @ 0x14026977C (PopExecuteOnTargetProcessors.c)
 *     PopDeepSleepSetDisengageReason @ 0x14026F788 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x14026F810 (PopDeepSleepClearDisengageReason.c)
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x140513790 (KeFindFirstSetLeftAffinityEx.c)
 *     PpmUpdateIdleVeto @ 0x140568210 (PpmUpdateIdleVeto.c)
 *     PpmEventPlatformVetoRequest @ 0x14057A228 (PpmEventPlatformVetoRequest.c)
 */

__int64 __fastcall PpmUpdatePlatformIdleVeto(__int64 a1)
{
  int updated; // esi
  __int64 v3; // rax
  __int64 v4; // r14
  unsigned __int64 v5; // rdi
  __int64 v6; // r8
  unsigned int v7; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf
  int FirstSetLeftAffinity; // eax
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r8
  int v17; // eax
  char v19[16]; // [rsp+20h] [rbp-E8h] BYREF
  _DWORD v20[44]; // [rsp+30h] [rbp-D8h] BYREF

  v19[0] = 0;
  memset(&v20[2], 0, 0xA0uLL);
  if ( !PpmPlatformStates )
    return (unsigned int)-1073741637;
  v3 = *(unsigned int *)(a1 + 4);
  if ( (unsigned int)v3 >= *(_DWORD *)PpmPlatformStates )
    return (unsigned int)-1073741811;
  v4 = PpmPlatformStates + 384 * v3;
  v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
  updated = PpmUpdateIdleVeto(*(_BYTE *)(a1 + 12), *(_DWORD *)(a1 + 8), v4 + 80, v19);
  if ( updated < 0 )
    goto LABEL_21;
  LOBYTE(v6) = *(_BYTE *)(a1 + 12);
  PpmEventPlatformVetoRequest(*(unsigned int *)(a1 + 4), *(unsigned int *)(a1 + 8), v6);
  if ( *(_DWORD *)(a1 + 4) == *(_DWORD *)PpmPlatformStates - 1 )
  {
    if ( !v19[0] )
      goto LABEL_21;
    if ( *(_BYTE *)(a1 + 12) )
      PopDeepSleepSetDisengageReason(9u);
    else
      PopDeepSleepClearDisengageReason(9u);
  }
  if ( v19[0] )
  {
    v7 = KiProcessorIndexToNumberMappingTable[KeGetCurrentPrcb()->Number];
    if ( ((*(_QWORD *)(v4 + 8LL * (v7 >> 6) + 136) >> (v7 & 0x3F)) & 1) == 0 )
    {
      KxReleaseSpinLock(&PpmIdleVetoLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
            v12 = (v11 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v11;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v5);
      v20[0] = 1310721;
      memset(&v20[1], 0, 0xA4uLL);
      FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx((__int16 *)(v4 + 128));
      KeAddProcessorAffinityEx(v20, FirstSetLeftAffinity);
      PopExecuteOnTargetProcessors((__int64)v20, (__int64)HalSystemVectorDispatchEntry, 0LL, 0LL);
      return (unsigned int)updated;
    }
  }
LABEL_21:
  KxReleaseSpinLock(&PpmIdleVetoLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v12 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
    }
  }
  __writecr8(v5);
  return (unsigned int)updated;
}
