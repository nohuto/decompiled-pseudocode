/*
 * XREFs of MiMoveBackgroundZeroThreads @ 0x1406529D0
 * Callers:
 *     MmReportParkedProcessors @ 0x140653870 (MmReportParkedProcessors.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A8A60 (KeSetUserGroupAffinityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlinkZeroThreadFromActiveDomain @ 0x140652FA8 (MiUnlinkZeroThreadFromActiveDomain.c)
 */

__int64 __fastcall MiMoveBackgroundZeroThreads(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  _QWORD **v14; // r13
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // r15
  BOOL v18; // r12d
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  _QWORD *v24; // [rsp+20h] [rbp-78h]
  __int64 v25; // [rsp+28h] [rbp-70h]
  __int64 v26; // [rsp+30h] [rbp-68h]
  char v27; // [rsp+38h] [rbp-60h]
  volatile LONG *SpinLock; // [rsp+40h] [rbp-58h]
  __int128 v29[5]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+8h]
  unsigned __int16 v31; // [rsp+B0h] [rbp+18h]
  unsigned int v32; // [rsp+B8h] [rbp+20h]

  v30 = a1;
  result = (__int64)MiSystemPartition;
  if ( (unsigned __int16 *)a1 == MiSystemPartition )
  {
    if ( !a2 )
      return result;
    CurrentIrql = 17;
    v27 = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v27 = CurrentIrql;
    __writecr8(2uLL);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      result = 4LL;
      if ( CurrentIrql != 2 )
        result = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= result;
    }
  }
  v5 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v6 = *(_QWORD *)(a1 + 16) + 25408LL * v5;
      if ( *(_QWORD *)(v6 + 22832) || *(_QWORD *)(v6 + 22856) )
      {
        SpinLock = (volatile LONG *)(v6 + 23160);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + 23160));
        v7 = *(_QWORD *)(v6 + 23152);
        if ( v7 && *(_QWORD *)(v6 + 23168) )
        {
          v8 = *(_DWORD *)(v7 + 92);
          v9 = v7 + 416;
          v10 = 2LL;
          v32 = v8;
          v26 = 2LL;
          do
          {
            if ( *(_DWORD *)(v9 + 140) )
            {
              if ( *(_BYTE *)v9 )
              {
                v29[0] = 0LL;
                if ( v8 )
                {
                  v11 = v8;
                  v12 = 0LL;
                  v25 = v8;
                  do
                  {
                    v13 = *(_QWORD *)(v9 + 104);
                    if ( *(_DWORD *)(v12 + v13 + 32) )
                    {
                      v14 = (_QWORD **)(v12 + v13 + 16);
                      v15 = *v14;
                      if ( *v14 != v14 )
                      {
                        do
                        {
                          v16 = (_QWORD *)*v15;
                          v17 = v15 - 23;
                          v24 = (_QWORD *)*v15;
                          if ( *(v15 - 10) )
                          {
                            v31 = *((_WORD *)v17 + 56);
                            v18 = 0;
                            ExAcquireSpinLockSharedAtDpcLevel(&dword_140C66840);
                            if ( v31 < (unsigned __int16)word_140C66848 )
                              v18 = (v17[13] & qword_140C66850[v31]) != 0;
                            ExReleaseSpinLockSharedFromDpcLevel(&dword_140C66840);
                            if ( v18 )
                            {
                              MiUnlinkZeroThreadFromActiveDomain(v9 - 24, v17);
                              KeSetUserGroupAffinityThread(v17[10], (__int64)v29);
                            }
                            v16 = v24;
                          }
                          v15 = v16;
                        }
                        while ( v16 != v14 );
                        v11 = v25;
                      }
                    }
                    v12 += 48LL;
                    v25 = --v11;
                  }
                  while ( v11 );
                  v10 = v26;
                  v8 = v32;
                }
              }
            }
            v9 += 296LL;
            v26 = --v10;
          }
          while ( v10 );
          ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        }
        else
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 23160));
        }
        a1 = v30;
      }
      result = (unsigned __int16)KeNumberNodes;
      ++v5;
    }
    while ( v5 < (unsigned __int16)KeNumberNodes );
    CurrentIrql = v27;
  }
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
    {
      v19 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = CurrentPrcb->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
