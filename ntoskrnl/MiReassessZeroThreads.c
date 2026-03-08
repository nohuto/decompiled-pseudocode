/*
 * XREFs of MiReassessZeroThreads @ 0x1402E477C
 * Callers:
 *     MiZeroLocalPages @ 0x140273BB0 (MiZeroLocalPages.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiAddZeroingThreads @ 0x1402A7F38 (MiAddZeroingThreads.c)
 *     MiReduceZeroingThreads @ 0x1402A81E4 (MiReduceZeroingThreads.c)
 *     MiGetDesiredZeroTime @ 0x1402E4A88 (MiGetDesiredZeroTime.c)
 *     MiLogZeroPageDecision @ 0x1402E4AD4 (MiLogZeroPageDecision.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReplenishUltraPageTables @ 0x14065F59C (MiReplenishUltraPageTables.c)
 */

void __fastcall MiReassessZeroThreads(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v5; // ebp
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  unsigned int v8; // r13d
  unsigned int v9; // eax
  LARGE_INTEGER v10; // rax
  unsigned __int64 v11; // r12
  __int64 v12; // rbx
  _DWORD *v13; // r15
  int *v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  int v17; // r12d
  int v18; // r15d
  volatile __int32 *i; // rcx
  char v20; // cl
  __int64 v21; // rax
  int v22; // eax
  char v23; // al
  int v24; // eax
  unsigned __int8 v25; // al
  __m128i si128; // xmm0
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v29; // eax
  _DWORD *SchedulerAssist; // r8
  bool v31; // zf
  unsigned __int64 DesiredZeroTime; // [rsp+30h] [rbp-48h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v34; // [rsp+90h] [rbp+18h]
  PEX_SPIN_LOCK SpinLock; // [rsp+98h] [rbp+20h]

  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    v5 = *(_DWORD *)v3;
    v6 = *(unsigned int *)(*(_QWORD *)(v3 + 168) + 56LL);
    if ( byte_140C65769 )
      MiReplenishUltraPageTables(*(unsigned int *)(v3 + 104));
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v3 + 200) + 23160LL));
    if ( (unsigned __int64)*(int *)(a1 + 140) < 0x1000 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v3 + 200) + 23160LL));
      v20 = KiIrqlFlags;
      if ( KiIrqlFlags )
        goto LABEL_42;
    }
    else
    {
      *(_QWORD *)(v3 + 88) += a2;
      v8 = *(_DWORD *)(v3 + 12);
      v9 = *(_DWORD *)(v3 + 16) + 1;
      *(_DWORD *)(v3 + 16) = v9;
      if ( !v8 )
        v8 = 1;
      if ( v9 >= v8 )
      {
        PerformanceFrequency.QuadPart = 0LL;
        v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( PerformanceFrequency.QuadPart != 10000000 )
          v10.QuadPart = 10000000 * v10.QuadPart / PerformanceFrequency.QuadPart;
        *(LARGE_INTEGER *)(v3 + 96) = v10;
        v11 = *(_QWORD *)(v3 + 88) / ((8LL * v8) & 0x7FFFFFFFFFFFFFuLL);
        v34 = v11;
        v12 = *(_QWORD *)(qword_140C65720 + 376 * v6 + 368);
        SpinLock = (PEX_SPIN_LOCK)(v12 + 48);
        ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v12 + 48));
        DesiredZeroTime = MiGetDesiredZeroTime(v12, v5, v8);
        if ( v8 > *(_DWORD *)(v3 + 8) )
        {
          si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
          v13 = (_DWORD *)(v3 + 32);
          *(_DWORD *)(v3 + 32) = 1;
          v14 = (int *)(v3 + 36);
          *(_DWORD *)(v3 + 36) = 2;
          v17 = 5;
          *(__m128i *)(v3 + 40) = si128;
          *(__m128i *)(v3 + 56) = si128;
          *(__m128i *)(v3 + 72) = si128;
        }
        else if ( v11 <= DesiredZeroTime + DesiredZeroTime / 0xA || DesiredZeroTime == -1LL )
        {
          ++dword_140C12F50;
          v13 = (_DWORD *)(v3 + 32);
          v14 = (int *)(v3 + 36);
          if ( *(_DWORD *)(v3 + 32) )
          {
            *v14 = 0;
            *v13 = 0;
          }
          v15 = (unsigned int)*v14;
          if ( (unsigned int)v15 < 6 )
            *(_QWORD *)(v3 + 8 * v15 + 40) = v11;
          v16 = *v14 + 1;
          *v14 = v16;
          if ( v16 == 6 )
          {
            ++*(_DWORD *)(v3 + 280);
            v24 = MiAddZeroingThreads(v3);
            *v14 = 0;
            v17 = v24;
          }
          else
          {
            v17 = 1;
          }
        }
        else
        {
          v17 = 5;
          v13 = (_DWORD *)(v3 + 32);
          v14 = (int *)(v3 + 36);
        }
        ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
        if ( v17 == 5 )
        {
          ++dword_140C12F54;
          if ( *v13 != 1 )
          {
            *v14 = 0;
            *v13 = 1;
          }
          v21 = (unsigned int)*v14;
          v18 = v34;
          if ( (unsigned int)v21 < 6 )
            *(_QWORD *)(v3 + 8 * v21 + 40) = v34;
          v22 = *v14 + 1;
          *v14 = v22;
          if ( v22 == 3 || v8 > *(_DWORD *)(v3 + 8) )
          {
            ++*(_DWORD *)(v3 + 284);
            v23 = MiReduceZeroingThreads((int *)v3, 0);
            *v14 = 0;
            LOBYTE(v17) = v23;
          }
          else
          {
            LOBYTE(v17) = 6;
          }
        }
        else
        {
          v18 = v34;
        }
        MiLogZeroPageDecision(v3, v18, DesiredZeroTime, v8, v17);
        if ( *(_DWORD *)(v3 + 12) != v8 )
          *v14 = 0;
        *(_DWORD *)(v3 + 16) = 0;
        *(_QWORD *)(v3 + 88) = 0LL;
        for ( i = *(volatile __int32 **)(v3 + 184); i != (volatile __int32 *)(v3 + 184); i = *(volatile __int32 **)i )
          _InterlockedExchange(i - 7, 0);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v3 + 200) + 23160LL));
        if ( !KiIrqlFlags )
          goto LABEL_26;
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) == 0 || CurrentIrql > 0xFu || (unsigned __int8)v7 > 0xFu || CurrentIrql < 2u )
          goto LABEL_26;
LABEL_52:
        CurrentPrcb = KeGetCurrentPrcb();
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v31 = (v29 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v29;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        goto LABEL_26;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v3 + 200) + 23160LL));
      v20 = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
LABEL_42:
        v25 = KeGetCurrentIrql();
        if ( (v20 & 1) == 0 || v25 > 0xFu || (unsigned __int8)v7 > 0xFu || v25 < 2u )
          goto LABEL_26;
        goto LABEL_52;
      }
    }
LABEL_26:
    __writecr8(v7);
  }
}
