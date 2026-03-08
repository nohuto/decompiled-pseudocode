/*
 * XREFs of ExpSvmServicePageFault @ 0x14060C5F0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpSvmServicePageFault(char a1, signed __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  _KPROCESS *Process; // rbp
  _KPROCESS *v8; // rsi
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  char v15; // bl
  ULONG_PTR v16; // rcx
  unsigned int v17; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v19; // [rsp+38h] [rbp-50h] BYREF

  v3 = a3;
  memset(&v19, 0, sizeof(v19));
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (a1 & 8) != 0 )
    return 3221225477LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_140C2CFD8, &LockHandle);
  v8 = (_KPROCESS *)*((_QWORD *)qword_140C2CFD0 + 2 * v3);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  v15 = 0;
  if ( Process != v8 )
  {
    KiStackAttachProcess(v8, 0, (__int64)&v19);
    v15 = 1;
  }
  v16 = a1 & 2 | 0x10LL;
  if ( (a1 & 4) == 0 )
    v16 = a1 & 2;
  v17 = MmAccessFault(v16, a2, 1, 0LL);
  if ( v15 )
    KiUnstackDetachProcess(&v19);
  return v17;
}
