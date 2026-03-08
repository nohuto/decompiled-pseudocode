/*
 * XREFs of NtQueryInformationWorkerFactory @ 0x14060D380
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ExSystemExceptionFilter @ 0x140861790 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall NtQueryInformationWorkerFactory(HANDLE Handle, int a2, unsigned __int64 a3, int a4, _DWORD *a5)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  char *v12; // rdi
  __int64 v13; // rdx
  int v14; // ecx
  unsigned __int8 OldIrql; // si
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  PVOID Object; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v22; // [rsp+40h] [rbp-A8h]
  __int128 v23; // [rsp+50h] [rbp-98h]
  __int128 v24; // [rsp+60h] [rbp-88h]
  __int128 v25; // [rsp+70h] [rbp-78h]
  __int128 v26; // [rsp+80h] [rbp-68h]
  __int128 v27; // [rsp+90h] [rbp-58h]
  __int128 v28; // [rsp+A0h] [rbp-48h]
  __int64 v29; // [rsp+B0h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 != 7 )
    return -1073741821;
  if ( PreviousMode )
  {
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = 0x7FFFFFFF0000LL;
    v11 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v11 = a3;
    *(_BYTE *)v11 = *(_BYTE *)v11;
    *(_BYTE *)(v11 + 119) = *(_BYTE *)(v11 + 119);
    if ( a5 )
    {
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a5;
      *(_DWORD *)v10 = 120;
    }
  }
  else if ( a5 )
  {
    *a5 = 120;
  }
  if ( a4 != 120 )
    return -1073741820;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 8u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    HIBYTE(v23) = 0;
    HIDWORD(v25) = 0;
    HIDWORD(v29) = 0;
    v12 = (char *)Object;
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
    v22 = 0LL;
    *(_QWORD *)&v23 = *((_QWORD *)v12 + 14);
    WORD4(v23) = 0;
    BYTE10(v23) = (v12[408] & 8) != 0;
    v13 = *((_QWORD *)v12 + 2);
    v14 = *(_DWORD *)(v13 + 28);
    BYTE11(v23) = v14 == 0;
    BYTE12(v23) = *((_DWORD *)v12 + 100) != 0;
    *(_WORD *)((char *)&v23 + 13) = *(_WORD *)(v13 + 32);
    LODWORD(v24) = *((_DWORD *)v12 + 101);
    *(_QWORD *)((char *)&v24 + 4) = *((_QWORD *)v12 + 47);
    HIDWORD(v24) = *((_DWORD *)v12 + 98);
    LODWORD(v25) = v14;
    DWORD1(v25) = *((_DWORD *)v12 + 97);
    DWORD2(v25) = *(_DWORD *)(v13 + 24);
    *(_QWORD *)&v26 = 0LL;
    *((_QWORD *)&v26 + 1) = *((_QWORD *)v12 + 3);
    *(_QWORD *)&v27 = *((_QWORD *)v12 + 4);
    *((_QWORD *)&v27 + 1) = *(_QWORD *)(*((_QWORD *)v12 + 6) + 1088LL);
    v28 = *(_OWORD *)(v12 + 56);
    LODWORD(v29) = *((_DWORD *)v12 + 104);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v20 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        v12 = (char *)Object;
      }
    }
    __writecr8(OldIrql);
    ObfDereferenceObjectWithTag(v12, 0x746C6644u);
    *(_OWORD *)a3 = v22;
    *(_OWORD *)(a3 + 16) = v23;
    *(_OWORD *)(a3 + 32) = v24;
    *(_OWORD *)(a3 + 48) = v25;
    *(_OWORD *)(a3 + 64) = v26;
    *(_OWORD *)(a3 + 80) = v27;
    *(_OWORD *)(a3 + 96) = v28;
    *(_QWORD *)(a3 + 112) = v29;
    return 0;
  }
  return result;
}
