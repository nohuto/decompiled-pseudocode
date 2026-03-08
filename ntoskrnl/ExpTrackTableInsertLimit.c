/*
 * XREFs of ExpTrackTableInsertLimit @ 0x1406067BC
 * Callers:
 *     ExPoolSetLimit @ 0x140605324 (ExPoolSetLimit.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KeGenericCallDpcEx @ 0x1403C07D0 (KeGenericCallDpcEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x140413D50 (ZwCreateWnfStateName.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpPlGrowTableIfNeeded @ 0x1406061B4 (ExpPlGrowTableIfNeeded.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpTrackTableInsertLimit(__int64 a1)
{
  _QWORD *v1; // rbx
  int v3; // esi
  unsigned int *Pool2; // rdi
  unsigned int v5; // esi
  __int64 v6; // r15
  __int64 v7; // r8
  unsigned int *v8; // rcx
  __int64 *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int i; // r9d
  __int64 v13; // r12
  unsigned int v14; // r15d
  __int64 v15; // r10
  _QWORD *v16; // r13
  _QWORD *v17; // r14
  __int64 v18; // r11
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v27; // eax
  bool v28; // zf
  unsigned int j; // edx
  __int64 v30; // rax
  _QWORD *v31; // rcx
  unsigned int k; // ebx
  void *v33; // rcx
  __int64 v35; // [rsp+40h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-38h] BYREF
  __int64 v37; // [rsp+70h] [rbp-10h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v1 = 0LL;
  v3 = ExpPlGrowTableIfNeeded();
  if ( v3 >= 0 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, 56LL * (unsigned int)(*(_DWORD *)(a1 + 4) - 1) + 64, 1819242320LL);
    if ( Pool2 )
    {
      v5 = 0;
      *Pool2 = *(_DWORD *)(a1 + 4);
      if ( *(_DWORD *)(a1 + 4) )
      {
        while ( 1 )
        {
          v6 = ExAllocatePool2(64LL, 112LL, 1819242320LL);
          v7 = 14LL * v5;
          *(_QWORD *)&Pool2[v7 + 2] = v6;
          if ( !v6 )
            break;
          *(_QWORD *)(v6 + 8) = *(unsigned int *)(48LL * v5 + a1 + 8);
          v8 = &Pool2[v7 + 6];
          v9 = (__int64 *)(48LL * v5 + a1 + 24);
          v10 = 2LL;
          do
          {
            *((_QWORD *)v8 - 1) = *(v9 - 1);
            v11 = *v9;
            v9 += 2;
            *(_QWORD *)v8 = v11;
            v8 += 6;
            --v10;
          }
          while ( v10 );
          v37 = 0LL;
          if ( (int)ZwCreateWnfStateName((__int64)&v37, 3LL) >= 0 )
            *(_QWORD *)(v6 + 64) = v37;
          if ( ++v5 >= *(_DWORD *)(a1 + 4) )
            goto LABEL_11;
        }
        v3 = -1073741670;
      }
      else
      {
LABEL_11:
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        for ( i = 0; i < *Pool2; ++i )
        {
          v13 = 14LL * i;
          v14 = (unsigned int)dword_140CF7E04 >> 5;
          v15 = -1LL << (dword_140CF7E04 & 0x1F);
          v16 = *(_QWORD **)&Pool2[v13 + 2];
          v17 = v16 + 1;
          v18 = (_DWORD)v16[1] & (unsigned int)v15;
          if ( (unsigned int)dword_140CF7E04 >> 5 )
          {
            v19 = (char *)qword_140CF7E08
                + 8
                * ((37
                  * (BYTE6(v18)
                   + 37
                   * (BYTE5(v18)
                    + 37
                    * (BYTE4(v18)
                     + 37
                     * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
                  + HIBYTE(v18)) & (v14 - 1));
            while ( 1 )
            {
              v20 = (_QWORD *)*v19;
              v19 = v20;
              if ( ((unsigned __int8)v20 & 1) != 0 )
                break;
              if ( v18 == (v15 & v20[1]) )
              {
                if ( !v20 )
                  break;
                *v17 = v1;
                v1 = v16 + 1;
                *(_QWORD *)&Pool2[v13 + 2] = v20;
                goto LABEL_20;
              }
            }
          }
          v35 = *v17 & v15;
          v21 = qword_140CF7E08;
          v22 = (37
               * (BYTE6(v35)
                + 37
                * (BYTE5(v35)
                 + 37
                 * (BYTE4(v35)
                  + 37 * (BYTE3(v35) + 37 * (BYTE2(v35) + 37 * (BYTE1(v35) + 37 * ((unsigned __int8)v35 + 11623883)))))))
               + HIBYTE(v35)) & (v14 - 1);
          *v16 = *((_QWORD *)qword_140CF7E08 + v22);
          v21[v22] = v16;
          ++ExPoolLimitState;
LABEL_20:
          ;
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v28 = (v27 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v27;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
        KeGenericCallDpcEx((__int64)ExpLimitInsertDpc, (__int64)Pool2);
        for ( j = 0; j < *Pool2; *(_QWORD *)&Pool2[14 * v30 + 2] = 0LL )
          v30 = j++;
        v3 = 0;
        while ( v1 )
        {
          v31 = v1 - 1;
          v1 = (_QWORD *)*v1;
          ExFreePoolWithTag(v31, 0);
        }
      }
      for ( k = 0; k < *Pool2; ++k )
      {
        v33 = *(void **)&Pool2[14 * k + 2];
        if ( v33 )
          ExFreePoolWithTag(v33, 0);
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v3;
}
