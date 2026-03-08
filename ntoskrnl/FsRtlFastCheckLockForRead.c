/*
 * XREFs of FsRtlFastCheckLockForRead @ 0x1402C8270
 * Callers:
 *     FsRtlCheckLockForReadAccess @ 0x1402C7F90 (FsRtlCheckLockForReadAccess.c)
 * Callees:
 *     FsRtlCheckNoExclusiveConflict @ 0x140200C64 (FsRtlCheckNoExclusiveConflict.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForRead(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PFILE_OBJECT FileObject,
        PVOID ProcessId)
{
  _QWORD *LockInformation; // rsi
  LONGLONG QuadPart; // rax
  _RTL_SPLAY_LINKS *v10; // r14
  _RTL_SPLAY_LINKS *v11; // r15
  BOOLEAN v12; // bl
  unsigned __int64 v13; // rdi
  _QWORD *LastLock; // rax
  char v15; // al
  volatile signed __int64 *v16; // rcx
  BOOLEAN v17; // si
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // cl
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r8
  int v26; // eax
  _RTL_SPLAY_LINKS *v27; // [rsp+30h] [rbp-38h] BYREF
  _RTL_SPLAY_LINKS *v28; // [rsp+70h] [rbp+8h] BYREF

  LockInformation = FileLock->LockInformation;
  if ( !LockInformation )
    return 1;
  if ( !LockInformation[5] )
    return 1;
  QuadPart = Length->QuadPart;
  if ( !Length->QuadPart )
    return 1;
  v10 = (_RTL_SPLAY_LINKS *)StartingByte->QuadPart;
  v27 = v10;
  v11 = (_RTL_SPLAY_LINKS *)((char *)v10 + QuadPart - 1);
  v28 = v11;
  v12 = 1;
  v13 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  if ( (unsigned __int64)v11 < *LockInformation
    || (LastLock = FileObject->LastLock) != 0LL
    && (unsigned __int64)v10 >= *LastLock
    && (unsigned __int64)v11 <= LastLock[5]
    && *((_DWORD *)LastLock + 5) == Key
    && (PVOID)LastLock[4] == ProcessId )
  {
    KxReleaseSpinLock(LockInformation + 3);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v22 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  else
  {
    v15 = FsRtlCheckNoExclusiveConflict(
            (__int64)(LockInformation + 3),
            &v27,
            &v28,
            Key,
            (__int64)FileObject,
            (__int64)ProcessId);
    v16 = LockInformation + 3;
    v17 = v15;
    KxReleaseSpinLock(v16);
    if ( KiIrqlFlags )
    {
      v23 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v22 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
    v12 = v17;
  }
  __writecr8(v13);
  return v12;
}
