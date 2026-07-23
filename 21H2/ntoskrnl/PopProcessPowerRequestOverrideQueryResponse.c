/*
 * XREFs of PopProcessPowerRequestOverrideQueryResponse @ 0x140270EE0
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14066DD84 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PopQueuePowerRequestCallbacks @ 0x140270738 (PopQueuePowerRequestCallbacks.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PopAcquirePowerRequestPushLock @ 0x14066E888 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x14066F86C (PopReleasePowerRequestPushLock.c)
 *     PopPowerRequestFindEntryById @ 0x140670048 (PopPowerRequestFindEntryById.c)
 *     PopProcessDisplayRequiredChange @ 0x140670990 (PopProcessDisplayRequiredChange.c)
 *     PopNotifyUserPowerRequestAction @ 0x1408E1BC8 (PopNotifyUserPowerRequestAction.c)
 */

LONG_PTR __fastcall PopProcessPowerRequestOverrideQueryResponse(unsigned int *a1)
{
  unsigned int v1; // r14d
  unsigned int v3; // edi
  void *v4; // r13
  char v5; // r15
  __int64 *EntryById; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  bool v10; // zf
  unsigned int v11; // r12d
  _DWORD *SchedulerAssist; // r8
  unsigned __int64 OldIrql; // rbx
  unsigned int v14; // ebx
  int *v15; // rsi
  unsigned int v16; // ebx
  int *v17; // rsi
  LONG_PTR result; // rax
  signed int v19; // ebx
  int v20; // r14d
  int *v21; // rax
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v27; // eax
  int v28; // [rsp+20h] [rbp-40h]
  unsigned int v29; // [rsp+28h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  int v31; // [rsp+48h] [rbp-18h] BYREF
  __int16 v32; // [rsp+4Ch] [rbp-14h]
  int v33; // [rsp+50h] [rbp-10h] BYREF
  __int16 v34; // [rsp+54h] [rbp-Ch]

  v1 = a1[2];
  v31 = 0;
  v3 = 0;
  v32 = 0;
  v28 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v33 = 0;
  v4 = 0LL;
  v34 = 0;
  v5 = 0;
  v29 = v1;
  PopAcquirePowerRequestPushLock(0LL);
  EntryById = (__int64 *)PopPowerRequestFindEntryById(*a1);
  if ( EntryById )
  {
    v9 = *EntryById;
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    v10 = *(_DWORD *)(v9 + 24) == v1;
    v11 = *(_DWORD *)(v9 + 24) ^ v1;
    *(_DWORD *)(v9 + 24) = v1;
    if ( !v10 )
    {
      do
      {
        _BitScanForward((unsigned int *)&v19, v11);
        v20 = 1 << v19;
        if ( *(_DWORD *)(v9 + 4LL * v19 + 32) )
        {
          if ( *(_DWORD *)(v9 + 88) && PopPowerRequestNotificationsEnabled && (unsigned int)v19 <= 3 )
            v5 = 1;
          if ( !v19 && *(_QWORD *)(v9 + 120) )
          {
            v4 = *(void **)(v9 + 120);
            ObfReferenceObjectWithTag(v4, 0x72506F50u);
          }
          v21 = &PopPowerRequestAttributes[4 * v19];
          v22 = *v21;
          if ( (v20 & v29) != 0 )
          {
            v23 = v22 - 1;
            v28 = 2;
            *v21 = v23;
            if ( !v19 || v19 == 3 || !v23 )
              --*(_BYTE *)(v19 + v9 + 72);
            if ( v5 )
              *((_BYTE *)&v33 + v19) = 1;
          }
          else
          {
            v28 = 1;
            if ( v22 != -1 )
            {
              v24 = v22 + 1;
              *v21 = v24;
              if ( !v19 || v19 == 3 || v24 == 1 )
                ++*(_BYTE *)(v19 + v9 + 72);
            }
            if ( v5 )
              *((_BYTE *)&v31 + v19) = 1;
          }
        }
        v11 &= ~v20;
      }
      while ( v11 );
    }
    PopQueuePowerRequestCallbacks(v9, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = (unsigned int)LockHandle.OldIrql + 1;
          v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v10 = (v27 & SchedulerAssist[5]) == 0;
          v7 = (unsigned int)v27 & SchedulerAssist[5];
          SchedulerAssist[5] = v7;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    v14 = 0;
    v15 = &v31;
    do
    {
      if ( *(_BYTE *)v15 )
      {
        LOBYTE(SchedulerAssist) = 1;
        PopNotifyUserPowerRequestAction(v9, v14, SchedulerAssist);
      }
      ++v14;
      v15 = (int *)((char *)v15 + 1);
    }
    while ( v14 < 6 );
    v16 = 0;
    v17 = &v33;
    do
    {
      if ( *(_BYTE *)v17 )
        PopNotifyUserPowerRequestAction(v9, v16, 0LL);
      ++v16;
      v17 = (int *)((char *)v17 + 1);
    }
    while ( v16 < 6 );
    v3 = v28;
  }
  result = PopReleasePowerRequestPushLock(v8, v7);
  if ( v4 )
  {
    PopProcessDisplayRequiredChange(v4, v3);
    return ObfDereferenceObjectWithTag(v4, 0x72506F50u);
  }
  return result;
}
