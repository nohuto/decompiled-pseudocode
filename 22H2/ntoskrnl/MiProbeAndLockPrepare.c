/*
 * XREFs of MiProbeAndLockPrepare @ 0x14020A2B0
 * Callers:
 *     MiProbeAndLockPages @ 0x14020A820 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x14030EB80 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x14030EE40 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021AF40 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14021B260 (MiObtainReferencedVadEx.c)
 *     MiVadPureReserve @ 0x14021B950 (MiVadPureReserve.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemCacheReverseMap @ 0x140292630 (MiGetSystemCacheReverseMap.c)
 *     MiGetSessionVm @ 0x14029281C (MiGetSessionVm.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402F3E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5BA4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x1405F90D0 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiProbeAndLockPrepare(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        int a7)
{
  __int64 v8; // r8
  unsigned __int64 v10; // rdi
  __int64 v11; // r14
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdi
  __int16 v14; // cx
  __int16 v15; // ax
  __int64 v16; // r9
  __int16 v17; // cx
  __int64 v18; // rcx
  unsigned __int64 v19; // r14
  int v20; // r15d
  __int64 v21; // r10
  int *v22; // rsi
  __int64 *v23; // r12
  char *SessionVm; // rdi
  unsigned int v25; // edx
  unsigned __int8 v26; // al
  LONG *v27; // rdi
  unsigned __int8 v28; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *v30; // rcx
  signed __int32 v31; // ett
  unsigned __int8 CurrentIrql; // r9
  int v33; // ecx
  char v34; // al
  __int64 AnyMultiplexedVm; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  unsigned int v39; // edx
  __int64 v40; // rax
  int v41; // edx
  _DWORD *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r15
  __int64 v45; // rax
  int v46; // ecx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  unsigned int v49; // edi
  __int64 v50; // rax
  int v51; // edx
  _DWORD *SchedulerAssist; // r8
  int v53; // eax
  int v54; // eax
  __int64 *v55; // [rsp+60h] [rbp+8h]
  int v56; // [rsp+78h] [rbp+20h] BYREF

  v8 = a6;
  v10 = a3 + a4;
  *(_QWORD *)(a1 + 72) = KeGetCurrentThread();
  v56 = 0;
  *(_QWORD *)(a1 + 56) = a2;
  *(_DWORD *)(a1 + 88) = v8;
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = v10;
  if ( a5 && (v10 > 0x7FFFFFFF0000LL || a3 >= v10) )
  {
    ++dword_140C4E778;
    return 3221225477LL;
  }
  v11 = *(unsigned int *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = a2 + 48;
  v12 = ((a3 & 0xFFF) + v11 + 4095) >> 12;
  v13 = v10 - 1;
  *(_QWORD *)(a1 + 16) = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 24) = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 136) = 0xFFFFFFFFFLL;
  v14 = *(_WORD *)(a2 + 10);
  v15 = v14 | 0x80;
  v16 = 4294967167LL;
  v17 = v14 & 0xFF7F;
  if ( (_DWORD)v8 )
    v17 = v15;
  *(_WORD *)(a2 + 10) = v17 | 2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( *(_QWORD *)a1 >= 0x7FFFFFFF0000uLL )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  else
  {
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 184LL);
    *(_QWORD *)(a1 + 80) = v18;
    *(_QWORD *)(a2 + 16) = v18;
    if ( (_DWORD)v8 == 3 )
    {
      v43 = MiObtainReferencedVadEx(*(_QWORD *)a1, 0LL, &v56);
      v44 = v43;
      if ( !v43 )
        return (unsigned int)v56;
      if ( (unsigned int)MiVadPureReserve(v43)
        || (v45 = *(unsigned int *)(v44 + 52),
            LODWORD(v45) = v45 & 0x7FFFFFFF,
            (v45 | ((unsigned __int64)*(unsigned __int8 *)(v44 + 34) << 31)) >= 0x7FFFFFFFDLL)
        || (v46 = *(_DWORD *)(v44 + 48), (v46 & 0x70) == 0x10)
        || (v46 & 0x100000) == 0 && (v46 & 0x70) != 0x20 )
      {
        MiUnlockAndDereferenceVad((PVOID)v44);
        return 3221225477LL;
      }
      v47 = (*(unsigned int *)(v44 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v44 + 32) << 32)) << 12;
      if ( a3 < v47
        || (v48 = ((*(unsigned int *)(v44 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v44 + 33) << 32)) << 12) | 0xFFF,
            a3 > v48)
        || v13 < v47
        || v13 > v48 )
      {
        MiUnlockAndDereferenceVad((PVOID)v44);
        return 3221225496LL;
      }
      v56 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 80), v12);
      v49 = v56;
      if ( v56 < 0 )
      {
        MiUnlockAndDereferenceVad((PVOID)v44);
        return v49;
      }
      *(_QWORD *)(a1 + 120) = v44;
      *(_QWORD *)(a1 + 112) = v12;
    }
    if ( a7 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 80) + 1280LL), v12);
  }
  v19 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v19 >= 0xFFFF800000000000uLL )
    v20 = (unsigned __int8)byte_140C4F9C8[((v19 >> 39) & 0x1FF) - 256];
  else
    v20 = 0;
  v21 = 1LL;
  if ( v19 >= 0x7FFFFFFF0000LL )
  {
    if ( v20 == 1 )
    {
      v22 = (int *)(a1 + 64);
      *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 8;
      v23 = (__int64 *)(a1 + 96);
      SessionVm = (char *)MiGetSessionVm();
      *(_QWORD *)(a1 + 96) = SessionVm;
      goto LABEL_15;
    }
    if ( v20 == 6 )
    {
      v22 = (int *)(a1 + 64);
      v23 = (__int64 *)(a1 + 96);
      SessionVm = (char *)&unk_140C4F280;
      v25 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 3;
      *(_QWORD *)(a1 + 96) = &unk_140C4F280;
    }
    else
    {
      if ( v20 == 8 )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(0LL);
        v22 = (int *)(a1 + 64);
        v25 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 2;
      }
      else
      {
        if ( v20 != 5 && v20 != 15 )
        {
          v23 = (__int64 *)(a1 + 96);
          v55 = (__int64 *)(a1 + 96);
          v22 = (int *)(a1 + 64);
          if ( v20 == 12 )
          {
            SessionVm = (char *)MiGetAnyMultiplexedVm(1LL);
            v39 = *v22 & 0xFFFFFFF6;
            *v23 = (__int64)SessionVm;
            v25 = v39 | 6;
            *v22 = v25;
            goto LABEL_16;
          }
          v55 = (__int64 *)(a1 + 96);
          if ( v20 == 14 )
          {
            v40 = MiGetAnyMultiplexedVm(4LL);
            *v23 = v40;
            v25 = v41 & 0xFFFFFFF0 | 7;
            SessionVm = (char *)v40;
            *v22 = v25;
            goto LABEL_16;
          }
          v50 = MiGetAnyMultiplexedVm(3LL);
          *v23 = v50;
          v25 = v51 & 0xFFFFFFF0 | 5;
          SessionVm = (char *)v50;
          goto LABEL_14;
        }
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(5LL);
        v22 = (int *)(a1 + 64);
        v25 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 4;
      }
      v23 = (__int64 *)(a1 + 96);
      SessionVm = (char *)AnyMultiplexedVm;
      *(_QWORD *)(a1 + 96) = AnyMultiplexedVm;
    }
  }
  else
  {
    v22 = (int *)(a1 + 64);
    v23 = (__int64 *)(a1 + 96);
    SessionVm = (char *)(*(_QWORD *)(a1 + 80) + 1664LL);
    v25 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 1;
    *(_QWORD *)(a1 + 96) = SessionVm;
  }
LABEL_14:
  *v22 = v25;
LABEL_15:
  v55 = v23;
LABEL_16:
  *v22 = v25 & 0xFFFFFFCF;
  v26 = SessionVm[184] & 7;
  if ( v26 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v21) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int8)(v21 << (CurrentIrql + 1)) - 1) & 4;
    }
  }
  else
  {
    if ( v26 == 2 )
      v27 = &dword_140C4F780;
    else
      v27 = (LONG *)(SessionVm + 192);
    v28 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v21) != 0 && v28 <= 0xFu )
    {
      v16 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
      v8 = (-1 << (v28 + 1)) & 4u | *(_DWORD *)(v16 + 20);
      *(_DWORD *)(v16 + 20) = v8;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v27, v28, v8, v16);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v30 = CurrentPrcb->SchedulerAssist;
      if ( v30 )
      {
        if ( CurrentPrcb->NestingLevel <= (unsigned __int8)v21 )
        {
          v53 = v30[6];
          v30[6] = v21 + v53;
          if ( !((_DWORD)v21 + v53) )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v27);
      v31 = *v27 & 0x7FFFFFFF;
      if ( v31 != _InterlockedCompareExchange(v27, v31 + 1, v31) )
      {
        v42 = CurrentPrcb->SchedulerAssist;
        if ( v42 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v54 = v42[6] - 1;
            v42[6] = v54;
            if ( !v54 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v27, v28);
      }
    }
    if ( v27[1] )
      _InterlockedExchange(v27 + 1, 0);
    CurrentIrql = v28;
    v23 = v55;
  }
  v33 = *v22;
  v34 = *v22 & 0xF;
  *(_BYTE *)(a1 + 68) = CurrentIrql;
  if ( v34 == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1264LL) )
    *v22 = v33 | 0x10;
  if ( v20 == 8 )
  {
    v37 = *(_QWORD *)(MiGetSystemCacheReverseMap(v19) + 24);
    v38 = v37 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v37 & 1) == 0 )
      v38 = v37;
    *v23 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(*(_QWORD *)v38 + 60LL) & 0x3FF)) + 7232LL;
  }
  return 0LL;
}
