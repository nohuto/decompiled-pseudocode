char __fastcall CcGetDirtyPagesHelper(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // r14
  int v8; // eax
  unsigned __int64 OldIrql; // rdi
  __int64 v10; // r15
  __int64 i; // rdi
  unsigned int v12; // r15d
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned __int64 v16; // rbx
  unsigned __int8 v17; // cl
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  PVOID P; // [rsp+40h] [rbp-C8h]
  __int64 v28; // [rsp+48h] [rbp-C0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-98h] BYREF
  __int64 v31; // [rsp+78h] [rbp-90h] BYREF
  __int64 v32; // [rsp+80h] [rbp-88h]
  __int64 v33; // [rsp+88h] [rbp-80h]
  __int64 v34; // [rsp+90h] [rbp-78h]
  void (__fastcall *v35)(__int64, __int64 *, __int64, __int64 *, __int64 *, __int64, __int64); // [rsp+98h] [rbp-70h]
  PKSPIN_LOCK SpinLock; // [rsp+A0h] [rbp-68h]
  _DWORD *v37; // [rsp+A8h] [rbp-60h]
  _DWORD *v38; // [rsp+B0h] [rbp-58h]
  _DWORD *v39; // [rsp+B8h] [rbp-50h]
  __int64 v40; // [rsp+C0h] [rbp-48h]
  __int64 v41; // [rsp+C8h] [rbp-40h]
  __int64 v43; // [rsp+128h] [rbp+20h] BYREF

  P = 0LL;
  v31 = 0LL;
  v43 = 0LL;
  v30 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v33 = a3[2];
  v32 = a3[3];
  v4 = *a3;
  v40 = *a3;
  v35 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64 *, __int64 *, __int64, __int64))a3[1];
  SpinLock = (PKSPIN_LOCK)(a1 + 768);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  v5 = a1 + 704;
  v41 = a1 + 704;
  v6 = *(_QWORD *)(a1 + 704) - 120LL;
  v28 = v6;
  while ( 1 )
  {
    v7 = (_QWORD *)(v6 + 120);
    if ( v6 + 120 == v5 )
      break;
    v8 = *(_DWORD *)(v6 + 152);
    if ( (v8 & 0x800) != 0 )
      KeBugCheckEx(0x34u, 0x42FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v8 & 0x2000000) != 0 && *(_QWORD *)(v6 + 248) == v4 || (v8 & 0x1000000) != 0 && **(_QWORD **)(v6 + 248) == v4 )
    {
      v37 = (_DWORD *)(v6 + 4);
      ++*(_DWORD *)(v6 + 4);
      v38 = (_DWORD *)(v6 + 544);
      ++*(_DWORD *)(v6 + 544);
      v39 = (_DWORD *)(v6 + 112);
      ++*(_DWORD *)(v6 + 112);
      KxReleaseQueuedSpinLock(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v21 = (v25 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v25;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v6 = v28;
        }
      }
      __writecr8(OldIrql);
      v10 = CcReferenceSharedCacheMapFileObject(v6);
      v34 = v10;
      ExAcquireFastMutex((PFAST_MUTEX)(v6 + 288));
      for ( i = *(_QWORD *)(v6 + 16) - 16LL; i + 16 != v6 + 16; i = *(_QWORD *)(i + 16) - 16LL )
      {
        if ( *(_WORD *)i == 765 && *(_BYTE *)(i + 2) )
        {
          v31 = *(_QWORD *)(i + 8);
          v12 = *(_DWORD *)(i + 4);
          v43 = *(_QWORD *)(i + 40);
          v30 = *(_QWORD *)(i + 48);
          ++*(_DWORD *)(i + 64);
          ExReleaseFastMutex((PFAST_MUTEX)(v6 + 288));
          if ( P )
          {
            CcUnpinFileDataEx(P);
            P = 0LL;
          }
          v13 = v12;
          v10 = v34;
          v35(v34, &v31, v13, &v43, &v30, v33, v32);
          if ( v43 )
          {
            v14 = a3[4];
            if ( !v14 || v43 < v14 )
              a3[4] = v43;
          }
          ExAcquireFastMutex((PFAST_MUTEX)(v6 + 288));
          v15 = *(_DWORD *)(i + 64);
          if ( v15 > 1 )
            *(_DWORD *)(i + 64) = v15 - 1;
          else
            P = (PVOID)i;
        }
      }
      ExReleaseFastMutex((PFAST_MUTEX)(v6 + 288));
      ObFastDereferenceObjectDeferDelete(v6 + 96, v10, 1666409283LL);
      if ( P )
      {
        CcUnpinFileDataEx(P);
        P = 0LL;
      }
      KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
      --*v37;
      --*v38;
      --*v39;
      v4 = v40;
    }
    v6 = *v7 - 120LL;
    v28 = v6;
    v5 = v41;
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  v16 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && LockHandle.OldIrql <= 0xFu && v17 >= 2u )
    {
      v18 = KeGetCurrentPrcb();
      v19 = v18->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v21 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  __writecr8(v16);
  return 1;
}
