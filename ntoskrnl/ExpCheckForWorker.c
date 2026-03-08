/*
 * XREFs of ExpCheckForWorker @ 0x14060A838
 * Callers:
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     ExpFreePoolChecks @ 0x140313BA0 (ExpFreePoolChecks.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     PsGetNextPartition @ 0x1402FF5F0 (PsGetNextPartition.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall ExpCheckForWorker(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR BugCheckParameter4; // r13
  void *i; // rcx
  _QWORD *result; // rax
  _QWORD *v6; // rdi
  unsigned __int16 j; // bp
  unsigned __int16 *v8; // rdx
  __int64 v9; // r15
  volatile signed __int32 *v10; // rbx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rdx
  volatile signed __int32 **v14; // rdx
  int k; // ecx
  volatile signed __int32 *m; // r8
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v19; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int16 *v22; // [rsp+60h] [rbp+8h]

  BugCheckParameter4 = BugCheckParameter3 + a2;
  for ( i = 0LL; ; i = v6 )
  {
    result = PsGetNextPartition(i);
    v6 = result;
    if ( !result )
      break;
    if ( result != PspSystemPartition || result[2] )
    {
      for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
      {
        v8 = (unsigned __int16 *)KeNodeBlock[j];
        v9 = 0LL;
        if ( v8 == (unsigned __int16 *)((char *)&KiNodeInit + 304 * j) )
          v8 = 0LL;
        v22 = v8;
        do
        {
          v10 = *(volatile signed __int32 **)(*(_QWORD *)(*(_QWORD *)(v6[2] + 8LL) + 8LL * *v8) + v9);
          if ( ((unsigned __int8)v10 & 1) == 0 && v10 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              if ( CurrentIrql == 2 )
                LODWORD(v13) = 4;
              else
                v13 = (-1LL << (CurrentIrql + 1)) & 4;
              SchedulerAssist[5] |= v13;
            }
            KiAcquireKobjectLockSafe(v10);
            v14 = (volatile signed __int32 **)(v10 + 6);
            for ( k = 0; k < 32; ++k )
            {
              for ( m = *v14; m != &v10[4 * k + 6]; m = *(volatile signed __int32 **)m )
              {
                if ( (unsigned __int64)m >= BugCheckParameter3 && (unsigned __int64)m < BugCheckParameter4 )
                  KeBugCheckEx(0xE4u, 0LL, (ULONG_PTR)m, BugCheckParameter3, BugCheckParameter4);
              }
              v14 += 2;
            }
            _InterlockedAnd(v10, 0xFFFFFF7F);
            if ( KiIrqlFlags )
            {
              v17 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v19 = CurrentPrcb->SchedulerAssist;
                v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v21 = (v20 & v19[5]) == 0;
                v19[5] &= v20;
                if ( v21 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
            __writecr8(CurrentIrql);
          }
          v8 = v22;
          v9 += 8LL;
        }
        while ( v9 < 64 );
      }
    }
  }
  return result;
}
