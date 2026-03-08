/*
 * XREFs of IvtDrainSvmPageRequests @ 0x140529DE0
 * Callers:
 *     <none>
 * Callees:
 *     IvtIommuWaitCommand @ 0x1402F4874 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x1402F49A4 (IvtIommuSendCommand.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IvtDrainSvmPageRequests(__int64 a1, unsigned __int16 a2, char a3)
{
  unsigned __int8 CurrentIrql; // bl
  int v7; // r13d
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-40h] BYREF
  __int128 v17; // [rsp+38h] [rbp-28h] BYREF
  __int128 v18; // [rsp+48h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v18 = 0LL;
  v17 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  v7 = LockHandle.OldIrql + 1;
  if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v7) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v9) = 0x8000;
    else
      v9 = (-1LL << ((unsigned __int8)v7 + CurrentIrql)) & 0xFFFC;
    SchedulerAssist[5] |= v9;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
  IvtIommuWaitCommand(a1, 0, v7);
  *(_QWORD *)&v18 = v18 & 0xFFFFFFFFFFFFFFC0uLL | 0x12;
  IvtIommuSendCommand(a1, (unsigned __int64)&v18, v7);
  *((_QWORD *)&v17 + 1) = WORD4(v17) & 0x7FE | 0x7FFFFFFFFFFFF801LL;
  *(_QWORD *)&v17 = v17 & 0xFFFFFFFF0000FE00uLL | 8 | (16 * (a3 & 0x1F | ((unsigned __int64)a2 << 12)));
  IvtIommuSendCommand(a1, (unsigned __int64)&v17, v7);
  IvtIommuWaitCommand(a1, 0, v7);
  IvtIommuSendCommand(a1, (unsigned __int64)&v18, v7);
  IvtIommuSendCommand(a1, (unsigned __int64)&v17, v7);
  IvtIommuWaitCommand(a1, v7, v7);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  if ( KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v7) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + CurrentIrql));
      v14 = (v13 & v12[5]) == 0;
      v12[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
