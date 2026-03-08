/*
 * XREFs of MiPruneProcessLargePageCaches @ 0x1403614A0
 * Callers:
 *     MiDeleteProcessLargePageCache @ 0x1402A547C (MiDeleteProcessLargePageCache.c)
 *     MiComputeSystemTrimCriteria @ 0x14035FE9C (MiComputeSystemTrimCriteria.c)
 *     MiWorkingSetManager @ 0x1403616C0 (MiWorkingSetManager.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x14020FD6C (MiFreeLargeZeroPages.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInitializeLargePfnList @ 0x14035059C (MiInitializeLargePfnList.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiAppendTailList @ 0x14066509C (MiAppendTailList.c)
 */

__int64 __fastcall MiPruneProcessLargePageCaches(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 *v4; // r13
  _QWORD *v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // rdi
  __int64 *v10; // rbx
  KIRQL v11; // r14
  _QWORD *v12; // rbx
  _BYTE *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // r14d
  _QWORD *v17; // r15
  char *v18; // r12
  unsigned int v19; // r10d
  __int64 *i; // r11
  __int64 **v21; // rax
  __int64 *v22; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  KIRQL v28; // [rsp+20h] [rbp-168h]
  volatile LONG *SpinLock; // [rsp+28h] [rbp-160h]
  _BYTE v30[48]; // [rsp+30h] [rbp-158h] BYREF
  char v31; // [rsp+60h] [rbp-128h] BYREF
  _BYTE v32[224]; // [rsp+70h] [rbp-118h] BYREF

  if ( !a2 || (++*(_DWORD *)(a1 + 16104), result = *(unsigned int *)(a1 + 16104), (result & 7) == 0) )
  {
    v4 = 0LL;
    v5 = v30;
    v6 = 3LL;
    do
    {
      MiInitializeLargePfnList(v5);
      v5 = (_QWORD *)(v7 + 96);
    }
    while ( v8 != 1 );
    v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16084));
    v9 = (__int64 *)(a1 + 16088);
    while ( 1 )
    {
      v10 = (__int64 *)*v9;
      if ( (__int64 *)*v9 == v9 )
        break;
      v14 = *v10;
      if ( (__int64 *)v10[1] != v9 || *(__int64 **)(v14 + 8) != v10 )
        goto LABEL_31;
      *v9 = v14;
      *(_QWORD *)(v14 + 8) = v9;
      if ( v4 )
      {
        if ( v10 == v4 )
        {
          v22 = (__int64 *)*v9;
          if ( *(__int64 **)(*v9 + 8) != v9 )
LABEL_31:
            __fastfail(3u);
          *v10 = (__int64)v22;
          v10[1] = (__int64)v9;
          v22[1] = (__int64)v10;
          *v9 = (__int64)v10;
          break;
        }
      }
      else
      {
        v4 = v10;
      }
      v15 = v10[2];
      if ( (unsigned int)(*(_DWORD *)(a1 + 16104) - *((_DWORD *)v10 + 6)) >= 8 )
      {
        SpinLock = (volatile LONG *)(v15 + 288);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + 288));
        v16 = 0;
        v17 = v32;
        v18 = &v31;
        do
        {
          v19 = 0;
          for ( i = &v10[2 * v16 * (unsigned __int16)KeNumberNodes + 4 + v16 * (unsigned __int16)KeNumberNodes];
                v19 < (unsigned __int16)KeNumberNodes;
                ++v19 )
          {
            if ( (__int64 *)*i != i )
            {
              MiAppendTailList(v18, i);
              *v17 += i[2];
              i[2] = 0LL;
            }
            i += 3;
          }
          ++v16;
          v18 += 96;
          v17 += 12;
        }
        while ( v16 != 3 );
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      }
      v21 = *(__int64 ***)(a1 + 16096);
      if ( *v21 != v9 )
        goto LABEL_31;
      *v10 = (__int64)v9;
      v10[1] = (__int64)v21;
      *v21 = v10;
      *(_QWORD *)(a1 + 16096) = v10;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16084));
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v11 = v28;
      if ( v28 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << (v28 + 1));
        v27 = (v26 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v26;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v11 = v28;
    }
    result = v11;
    __writecr8(v11);
    v12 = v32;
    v13 = v30;
    do
    {
      if ( *v12 )
        result = MiFreeLargeZeroPages(a1, (__int64)v13, 1u);
      v13 += 96;
      v12 += 12;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
