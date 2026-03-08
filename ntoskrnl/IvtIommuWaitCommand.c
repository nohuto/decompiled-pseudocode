/*
 * XREFs of IvtIommuWaitCommand @ 0x1402F4874
 * Callers:
 *     IvtInvalidateRemappingTableEntries @ 0x1402F4800 (IvtInvalidateRemappingTableEntries.c)
 *     IvtFlushTbInternal @ 0x1403ABA60 (IvtFlushTbInternal.c)
 *     IvtInvalidateAllContextEntries @ 0x1403B0A30 (IvtInvalidateAllContextEntries.c)
 *     IvtDrainSvmPageRequests @ 0x140529DE0 (IvtDrainSvmPageRequests.c)
 *     IvtFlushDeviceTbOnly @ 0x14052A180 (IvtFlushDeviceTbOnly.c)
 *     IvtInvalidateContextEntry @ 0x14052AF68 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateScalableModePasidCache @ 0x14052AFF4 (IvtInvalidateScalableModePasidCache.c)
 * Callees:
 *     IvtIommuSendCommand @ 0x1402F49A4 (IvtIommuSendCommand.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IvtIommuWaitCommand(__int64 a1, int a2, int a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // esi
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // rdx
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-30h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    CurrentIrql = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 15 )
        LODWORD(v12) = 0x8000;
      else
        v12 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      SchedulerAssist[5] |= v12;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
  }
  v7 = *(_QWORD *)(a1 + 192);
  v8 = *(_QWORD *)(a1 + 200);
  v19[0] = v7;
  v19[1] = v8;
  *(_DWORD *)(a1 + 176) = 1;
  if ( a2 )
    v19[0] = v7 | 0x80;
  IvtIommuSendCommand(a1, v19, 1LL);
  v9 = 0;
  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 176);
    if ( !(_DWORD)result )
      break;
    if ( (++v9 & dword_140C6211C) == 0 && qword_140C62120 )
      qword_140C62120(v9);
    else
      _mm_pause();
  }
  if ( !a3 )
  {
    KxReleaseQueuedSpinLock(&LockHandle);
    if ( KiIrqlFlags )
    {
      v13 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
