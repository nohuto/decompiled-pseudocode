/*
 * XREFs of CcCachemapUninitWorkerThread @ 0x140217120
 * Callers:
 *     <none>
 * Callees:
 *     CcFindNextWorkQueueEntry @ 0x14021746C (CcFindNextWorkQueueEntry.c)
 *     CcWriteBehind @ 0x140219768 (CcWriteBehind.c)
 *     CcFreeWorkQueueEntry @ 0x140219E50 (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x140219EF0 (CcDereferencePartition.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcCachemapUninitWorkerThread(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rcx
  __int64 NextWorkQueueEntry; // rsi
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  _DWORD *v11; // r9
  int v12; // eax
  bool v13; // zf
  __int64 result; // rax
  unsigned __int64 OldIrql; // r13
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  __int64 v20; // [rsp+50h] [rbp-C0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-B8h] BYREF
  _DWORD v22[2]; // [rsp+70h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+78h] [rbp-98h]
  _QWORD v24[6]; // [rsp+80h] [rbp-90h] BYREF
  _QWORD v25[3]; // [rsp+B0h] [rbp-60h] BYREF
  _QWORD *v26; // [rsp+C8h] [rbp-48h] BYREF
  int v27; // [rsp+D0h] [rbp-40h]
  int v28; // [rsp+D4h] [rbp-3Ch]
  _QWORD *v29; // [rsp+D8h] [rbp-38h] BYREF
  int v30; // [rsp+E0h] [rbp-30h]
  int v31; // [rsp+E4h] [rbp-2Ch]

  v22[1] = 0;
  v24[2] = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v22[0] = 0;
  v23 = 0LL;
  if ( *(_DWORD *)(a1 + 32) != 5 )
    KeBugCheckEx(0x34u, 0x1CFBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v2 = *(_QWORD *)(a1 + 56);
  v20 = v2;
  v24[3] = v2;
  v3 = *(_QWORD *)(a1 + 72);
  v24[4] = v3;
  v4 = *(_QWORD *)(a1 + 64);
  v24[5] = v4;
  v25[1] = v3 + 120;
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 832), &LockHandle);
    NextWorkQueueEntry = CcFindNextWorkQueueEntry(v5, v3);
    v24[1] = NextWorkQueueEntry;
    if ( !NextWorkQueueEntry )
      break;
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
    {
      v24[0] = NextWorkQueueEntry;
      v26 = v24;
      v27 = 8;
      v28 = 0;
      EtwTraceKernelEvent((unsigned int)&v26, 1, -2147352576, 5633, 4200706);
    }
    if ( *(_DWORD *)(NextWorkQueueEntry + 128) == 2 )
    {
      v23 = NextWorkQueueEntry;
      CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), v22, v3);
    }
    v2 = v20;
    if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
    {
      v25[0] = NextWorkQueueEntry;
      v29 = v25;
      v30 = 8;
      v31 = 0;
      EtwTraceKernelEvent((unsigned int)&v29, 1, -2147352576, 5634, 4200706);
    }
    CcFreeWorkQueueEntry((PSLIST_ENTRY)NextWorkQueueEntry);
  }
  v7 = *(_QWORD **)(v3 + 168);
  if ( *v7 != v3 + 160 )
    __fastfail(3u);
  *(_QWORD *)a1 = v3 + 160;
  *(_QWORD *)(a1 + 8) = v7;
  *v7 = a1;
  *(_QWORD *)(v3 + 168) = a1;
  --*(_DWORD *)(v3 + 176);
  KxReleaseQueuedSpinLock(&LockHandle);
  v8 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v9 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && LockHandle.OldIrql <= 0xFu && v9 >= 2u )
    {
      v10 = KeGetCurrentPrcb();
      v11 = v10->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
  }
  __writecr8(v8);
  result = CcDereferencePartition(v2);
  if ( v4 )
  {
    result = _InterlockedDecrement64((volatile signed __int64 *)(v4 + 8));
    if ( result <= -1 )
      __fastfail(0xEu);
  }
  return result;
}
