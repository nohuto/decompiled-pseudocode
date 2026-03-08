/*
 * XREFs of ExpPlGrowTableIfNeeded @ 0x1406061B4
 * Callers:
 *     ExpTrackTableInsertLimit @ 0x1406067BC (ExpTrackTableInsertLimit.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 ExpPlGrowTableIfNeeded()
{
  __int64 v0; // rbx
  int v1; // esi
  unsigned __int64 OldIrql; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v6; // eax
  bool v7; // zf
  unsigned int v8; // ebx
  char *Pool2; // rsi
  unsigned int v10; // r15d
  unsigned __int64 v11; // rbx
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  _DWORD *v14; // r8
  int v15; // eax
  char i; // cl
  unsigned __int64 v17; // rcx
  char v18; // dl
  unsigned int v19; // edi
  __int64 v20; // r8
  _QWORD *v21; // r11
  _QWORD *v22; // r9
  __int64 v23; // rdx
  char *v24; // rax
  unsigned __int8 v25; // r15
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r8
  _DWORD *v28; // rdi
  int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r8
  _DWORD *v32; // rdi
  int v33; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  __int64 v36; // [rsp+70h] [rbp+30h]

  v0 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
  if ( ExPoolLimitState >= 2 * ((unsigned int)dword_140CF7E04 >> 5) )
  {
    v0 = 2 * ((unsigned int)dword_140CF7E04 >> 5);
    v1 = 1;
    if ( (unsigned int)v0 < 4 )
      v0 = 4LL;
  }
  else
  {
    v1 = 0;
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
      v6 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v7 = (v6 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v6;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( v1 )
  {
    while ( 1 )
    {
      Pool2 = (char *)ExAllocatePool2(64LL, 8LL * (unsigned int)v0, 1819242320LL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
      if ( ExPoolLimitState < 2 * ((unsigned int)dword_140CF7E04 >> 5) )
        break;
      v10 = 2 * ((unsigned int)dword_140CF7E04 >> 5);
      if ( v10 < 4 )
        v10 = 4;
      if ( (unsigned int)v0 >= v10 )
      {
        if ( (((_DWORD)v0 - 1) & (unsigned int)v0) != 0 )
        {
          for ( i = -1; (_DWORD)v0; LODWORD(v0) = (unsigned int)v0 >> 1 )
            ++i;
          v0 = (unsigned int)(1 << i);
        }
        if ( (unsigned int)v0 > 0x4000000 )
          v0 = 0x4000000LL;
        v17 = (unsigned int)v0;
        if ( Pool2 > &Pool2[8 * v0] )
          v17 = 0LL;
        if ( v17 )
          memset64(Pool2, (unsigned __int64)&ExPoolLimitState + 1, v17);
        v18 = dword_140CF7E04;
        v19 = 0;
        v20 = -1LL << (dword_140CF7E04 & 0x1F);
        if ( (dword_140CF7E04 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v21 = qword_140CF7E08;
            while ( 1 )
            {
              v22 = (_QWORD *)v21[v19];
              if ( ((unsigned __int8)v22 & 1) != 0 )
                break;
              v21[v19] = *v22;
              v36 = v20 & v22[1];
              v23 = (37
                   * (BYTE6(v36)
                    + 37
                    * (BYTE5(v36)
                     + 37
                     * (BYTE4(v36)
                      + 37
                      * (BYTE3(v36) + 37 * (BYTE2(v36) + 37 * (BYTE1(v36) + 37 * ((unsigned __int8)v36 + 11623883)))))))
                   + HIBYTE(v36)) & (unsigned int)(v0 - 1);
              *v22 = *(_QWORD *)&Pool2[8 * v23];
              *(_QWORD *)&Pool2[8 * v23] = v22;
            }
            v18 = dword_140CF7E04;
            ++v19;
          }
          while ( v19 < (unsigned int)dword_140CF7E04 >> 5 );
        }
        v24 = (char *)qword_140CF7E08;
        qword_140CF7E08 = Pool2;
        Pool2 = v24;
        dword_140CF7E04 = (32 * v0) | v18 & 0x1F;
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v25 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          v26 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && LockHandle.OldIrql <= 0xFu && v26 >= 2u )
          {
            v27 = KeGetCurrentPrcb();
            v28 = v27->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v7 = (v29 & v28[5]) == 0;
            v28[5] &= v29;
            if ( v7 )
              KiRemoveSystemWorkPriorityKick((__int64)v27);
          }
        }
        v8 = 0;
        goto LABEL_57;
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v11 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v12 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && LockHandle.OldIrql <= 0xFu && v12 >= 2u )
        {
          v13 = KeGetCurrentPrcb();
          v14 = v13->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v7 = (v15 & v14[5]) == 0;
          v14[5] &= v15;
          if ( v7 )
            KiRemoveSystemWorkPriorityKick((__int64)v13);
        }
      }
      __writecr8(v11);
      ExFreePoolWithTag(Pool2, 0);
      v0 = v10;
    }
    v8 = 0;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v25 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v30 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && LockHandle.OldIrql <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v7 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick((__int64)v31);
      }
    }
LABEL_57:
    __writecr8(v25);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return 0;
  }
  return v8;
}
