/*
 * XREFs of MiInsertSlabEntry @ 0x140349C90
 * Callers:
 *     MiReplenishSlabAllocator @ 0x1403496D8 (MiReplenishSlabAllocator.c)
 *     MiCreateBootSlabEntries @ 0x140B3B858 (MiCreateBootSlabEntries.c)
 *     MmUpdateSlabRangeType @ 0x140B9732C (MmUpdateSlabRangeType.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x14024D3A0 (RtlRbInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlInterlockedSetClearRunEx @ 0x1403293B0 (RtlInterlockedSetClearRunEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInsertSlabEntry(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v5; // r13
  unsigned int v9; // r15d
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  bool v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  _DWORD *v16; // rbx
  __int64 UnbiasedInterruptTime; // rax
  __int64 v18; // rax
  int v20; // r9d
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  _DWORD *v23; // rax
  unsigned __int64 v24; // rbx
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // edx
  bool v32; // zf

  v5 = *(_QWORD *)(a3 + 24) >> 9;
  v9 = 0;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 16));
  if ( (!a4 || !qword_140C66F80) && !qword_140C66F98 )
    goto LABEL_4;
  v24 = 48LL * *(_QWORD *)(a3 + 24) - 0x220000000000LL;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140C66F90);
  v25 = (_QWORD *)qword_140C66F80;
  v26 = 0LL;
  if ( qword_140C66F80 )
  {
    do
    {
      if ( v24 <= v25[3] )
      {
        if ( v24 >= v25[3] )
          goto LABEL_47;
        v26 = v25;
        v25 = (_QWORD *)*v25;
      }
      else
      {
        v25 = (_QWORD *)v25[1];
      }
    }
    while ( v25 );
  }
  v25 = v26;
LABEL_47:
  if ( v25 && v25[3] <= (unsigned __int64)(48LL * *(_QWORD *)(a3 + 32) - 0x220000000000LL) )
  {
    v9 = 1;
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C66F90);
    goto LABEL_17;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C66F90);
  if ( !qword_140C66F98 || (v27 = 48LL * *(_QWORD *)(a3 + 32) - 0x220000000000LL, v24 > v27) )
  {
LABEL_4:
    v11 = *(_QWORD *)(a2 + 8);
    v12 = *(_QWORD *)a2;
    if ( (v11 & 1) != 0 )
    {
      if ( !v12 )
      {
        v13 = 0;
        goto LABEL_7;
      }
      v12 ^= a2;
    }
    v13 = 0;
    v20 = v11 & 1;
    if ( v12 )
    {
      v21 = *(_QWORD *)(a3 + 24);
      while ( 1 )
      {
        if ( v21 <= *(_QWORD *)(v12 + 32) && v21 < *(_QWORD *)(v12 + 24) )
        {
          v22 = *(_QWORD *)v12;
          if ( v20 )
          {
            if ( !v22 )
              break;
            v22 ^= v12;
          }
          if ( !v22 )
            break;
        }
        else
        {
          v22 = *(_QWORD *)(v12 + 8);
          if ( v20 )
          {
            if ( !v22 )
              goto LABEL_28;
            v22 ^= v12;
          }
          if ( !v22 )
          {
LABEL_28:
            v13 = 1;
            break;
          }
        }
        v12 = v22;
      }
    }
LABEL_7:
    RtlRbInsertNodeEx((unsigned __int64 *)a2, v12, v13, a3);
    v15 = *(_QWORD *)(a2 + 32);
    if ( v15 )
    {
      v16 = (_DWORD *)(a3 + 132);
      v14 = *(unsigned int *)(a3 + 132);
      if ( *(_DWORD *)(v15 + 132) <= (unsigned int)v14 || (v23 = (_DWORD *)(a3 + 132), !(_DWORD)v14) )
      {
LABEL_9:
        *(_QWORD *)(a2 + 48) += (unsigned int)*v16;
        ++*(_QWORD *)(a2 + 72);
        if ( (*(_DWORD *)(a3 + 140) & 2) != 0 )
        {
          *(_QWORD *)(a2 + 64) += 512LL;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17856), 0x200uLL);
          RtlInterlockedSetClearRunEx((__int64)&unk_140C6EFF8, v5, 1uLL);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17864), 0x200uLL);
        }
        if ( *v16 == 512 )
        {
          LOBYTE(v14) = 1;
          UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v14);
          if ( !UnbiasedInterruptTime )
            UnbiasedInterruptTime = 1LL;
          *(_QWORD *)(a2 + 200) = UnbiasedInterruptTime;
          *(_DWORD *)(a2 + 88) |= 1u;
        }
        v18 = *(int *)(a2 + 80);
        if ( (unsigned int)v18 > 3 && *(_BYTE *)(v18 + a1 + 16200) && *(_QWORD *)(a2 + 112) + *(_QWORD *)(a2 + 48) )
          *(_BYTE *)(*(int *)(a2 + 80) + a1 + 16200) = 0;
        goto LABEL_17;
      }
    }
    else
    {
      v23 = (_DWORD *)(a3 + 132);
    }
    *(_QWORD *)(a2 + 32) = a3;
    v16 = v23;
    goto LABEL_9;
  }
  while ( (*(_BYTE *)(v24 + 35) & 0x40) == 0 )
  {
    v24 += 48LL;
    if ( v24 > v27 )
      goto LABEL_4;
  }
  v9 = 1;
LABEL_17:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v32 = (v31 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v31;
      if ( v32 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v10);
  return v9;
}
