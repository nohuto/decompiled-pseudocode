/*
 * XREFs of ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140312490
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KeSetActualBasePriorityThread @ 0x14022FF20 (KeSetActualBasePriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x14024B500 (KeWaitForMultipleObjects.c)
 *     SmFpFree @ 0x1402686A4 (SmFpFree.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x14026D1D4 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14026D2EC (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x14026D3B0 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     SmFpAllocate @ 0x1403130C8 (SmFpAllocate.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x140313878 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStReadThread(__int64 a1)
{
  KSPIN_LOCK *v1; // r15
  __int64 v3; // rbp
  __int64 Context; // r14
  NTSTATUS v5; // eax
  _SLIST_ENTRY **v6; // rdi
  KIRQL v7; // al
  __int64 *v8; // rdx
  unsigned __int64 v9; // rbx
  _SLIST_ENTRY *v10; // rsi
  struct _MDL *v11; // rbx
  unsigned int Issue; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(KSPIN_LOCK **)a1;
  v3 = *(_QWORD *)a1 + 6488LL;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 12);
  Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(v1);
  *(_DWORD *)(a1 + 32) = Context == 0 ? 0xC000009A : 0;
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( Context )
  {
    Object[0] = v1 + 815;
    Object[1] = v1 + 812;
    do
    {
      while ( 1 )
      {
        v5 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
        if ( v5 )
          break;
        KeResetEvent((PRKEVENT)Object[0]);
        v6 = (_SLIST_ENTRY **)(v1 + 818);
        while ( 1 )
        {
          v7 = KeAcquireSpinLockRaiseToDpc(v1 + 820);
          v8 = *(__int64 **)(v3 + 64);
          v9 = v7;
          if ( v8 == (__int64 *)v6 )
          {
            v10 = 0LL;
          }
          else
          {
            v10 = *v6;
            *v6 = (_SLIST_ENTRY *)((unsigned __int64)(*v6)->Next & 0xFFFFFFFFFFFFFFF8uLL);
            if ( v10 == (_SLIST_ENTRY *)v8 )
            {
              *v6 = 0LL;
              *(_QWORD *)(v3 + 64) = v3 + 56;
            }
            else
            {
              *v8 = *v8 & 7 | (8 * (((unsigned __int64)*v8 >> 3) - 1));
            }
          }
          KxReleaseSpinLock(v1 + 820);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
                v17 = (v16 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v16;
                if ( v17 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v9);
          if ( !v10 )
            break;
          v11 = (struct _MDL *)SmFpAllocate(&dword_140D24480, 1);
          Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue((__int64)v1, (__int64)v10, Context);
          SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete((__int64)v1, v10, Issue);
          SmFpFree((__int64)&dword_140D24480, 3, (__int64)(v1 + 811), v11);
        }
      }
    }
    while ( v5 != 1 );
  }
  if ( Context )
    ST_STORE<SM_TRAITS>::StReleaseReadContext((__int64)v1, Context);
}
