/*
 * XREFs of CmNotifyRunDown @ 0x1407D9F54
 * Callers:
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     KeRemoveQueueApc @ 0x1402F7360 (KeRemoveQueueApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     CmpCancelSubordinatePost @ 0x1406B4E10 (CmpCancelSubordinatePost.c)
 *     CmpFreeSubordinatePost @ 0x1406B4E5C (CmpFreeSubordinatePost.c)
 *     CmpFreePostBlock @ 0x1406B5600 (CmpFreePostBlock.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmNotifyRunDown(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  int v11; // ecx
  _QWORD *v12; // rdx
  _KPROCESS *Process; // rcx
  _QWORD *v14; // rdx
  __int16 v15; // ax
  char v16; // al
  struct _KEVENT *v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rcx
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  __int64 v30[7]; // [rsp+30h] [rbp-38h] BYREF

  *(_OWORD *)v30 = 0LL;
  v1 = a1 + 1176;
  result = *(_QWORD *)(a1 + 1176);
  if ( result && result != v1 )
  {
    CmpInitializeThreadInfo((__int64)v30);
    CmpLockRegistry(v4, v3, v5, v6);
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( *(_QWORD *)v1 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD **)v1;
        if ( *(_QWORD *)v1 == v1 )
          break;
        v9 = *v8;
        if ( v8[1] != v1 || *(_QWORD **)(v9 + 8) != v8 )
LABEL_35:
          __fastfail(3u);
        *(_QWORD *)v1 = v9;
        *(_QWORD *)(v9 + 8) = v1;
        v10 = v8 - 2;
        v11 = *((_DWORD *)v8 + 10);
        if ( (v11 & 0x10000) != 0 )
        {
          if ( (_WORD)v11 != 2 )
            goto LABEL_29;
          v12 = (_QWORD *)v10[8];
          if ( (_QWORD *)v12[13] == v12 + 13 )
          {
            DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v12);
            if ( (_BYTE)KdDebuggerEnabled )
            {
              if ( !(_BYTE)KdDebuggerNotPresent )
                __debugbreak();
            }
          }
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process[1].Affinity.StaticBitmap[30]
            && ((v15 = WORD2(Process[2].Affinity.StaticBitmap[20]), v15 == 332) || v15 == 452 ? (v16 = 1) : (v16 = 0),
                v16) )
          {
            **(_DWORD **)(v10[8] + 104LL) = 267;
            *(_DWORD *)(*(_QWORD *)(v10[8] + 104LL) + 4LL) = 0;
          }
          else
          {
            **(_DWORD **)(v10[8] + 104LL) = 267;
            *(_QWORD *)(*(_QWORD *)(v10[8] + 104LL) + 8LL) = 0LL;
          }
          v14 = (_QWORD *)v10[8];
          if ( (_QWORD *)v14[13] == v14 + 13 )
          {
            DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v14);
            if ( (_BYTE)KdDebuggerEnabled )
            {
              if ( !(_BYTE)KdDebuggerNotPresent )
                __debugbreak();
            }
          }
          v17 = *(struct _KEVENT **)(v10[8] + 8LL);
          if ( v17 )
          {
            KeSetEvent(v17, 0, 0);
            ObfDereferenceObject(*(PVOID *)(v10[8] + 8LL));
          }
          if ( !KeRemoveQueueApc(v10[8] + 16LL) )
          {
LABEL_29:
            v18 = *v10;
            v19 = (_QWORD *)v10[1];
            if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v19 != v10 )
              goto LABEL_35;
            *v19 = v18;
            *(_QWORD *)(v18 + 8) = v19;
            CmpCancelSubordinatePost((__int64)v10, 0LL);
          }
          CmpFreeSubordinatePost((__int64)v10);
          CmpFreePostBlock(v10);
        }
        else
        {
          v24 = *(_QWORD **)(v1 + 8);
          if ( *v24 != v1 )
            goto LABEL_35;
          *v8 = v1;
          v8[1] = v24;
          *v24 = v8;
          *(_QWORD *)(v1 + 8) = v8;
        }
      }
    }
    if ( KiIrqlFlags )
    {
      v25 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v29 = (v28 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v28;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    CmpUnlockRegistry(v21, v20, v22, v23);
    return CmCleanupThreadInfo(v30);
  }
  return result;
}
