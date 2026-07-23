/*
 * XREFs of MiSessionCreateInternal @ 0x140786B10
 * Callers:
 *     MiSessionCreate @ 0x14078610C (MiSessionCreate.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     RtlFindClearBitsAndSet @ 0x1402509C0 (RtlFindClearBitsAndSet.c)
 *     PsGetServerSiloGlobals @ 0x140252678 (PsGetServerSiloGlobals.c)
 *     MiChargeResident @ 0x140259EB8 (MiChargeResident.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     PsGetCurrentServerSilo @ 0x14025C220 (PsGetCurrentServerSilo.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetPteAddress @ 0x140298780 (MiGetPteAddress.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     KeQueryInterruptTimePrecise @ 0x140318820 (KeQueryInterruptTimePrecise.c)
 *     EtwTraceKernelEvent @ 0x14035C1F0 (EtwTraceKernelEvent.c)
 *     RtlClearAllBits @ 0x140361940 (RtlClearAllBits.c)
 *     MiMarkSessionMasterProcess @ 0x14039D75C (MiMarkSessionMasterProcess.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     MiMapNewSession @ 0x140786F8C (MiMapNewSession.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSessionCreateInternal(ULONG_PTR *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rax
  ULONG ClearBitsAndSet; // r14d
  unsigned int v5; // edi
  _RTL_BITMAP *Pool; // rax
  _RTL_BITMAP *v7; // r14
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  ULONG_PTR v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // r15
  __int64 v13; // rdi
  unsigned __int16 v14; // ax
  int v15; // ecx
  unsigned __int16 v16; // si
  LARGE_INTEGER v17; // rax
  __int64 v18; // r15
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  void *CurrentServerSilo; // rax
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+38h] [rbp-48h]
  __int64 v25; // [rsp+40h] [rbp-40h]
  LARGE_INTEGER v26; // [rsp+48h] [rbp-38h] BYREF
  __int64 v27; // [rsp+50h] [rbp-30h] BYREF
  ULONG v28; // [rsp+58h] [rbp-28h]
  int v29; // [rsp+5Ch] [rbp-24h]
  _QWORD v30[2]; // [rsp+60h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v24 = qword_140C4DDE0;
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v25 = Process;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DDB8, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C4EF10, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v5 = qword_140C4EF10->SizeOfBitMap + 128;
    if ( v5 > 0x7FFFF )
      v5 = 0x7FFFF;
    Pool = (_RTL_BITMAP *)MiAllocatePool(256, 8 * ((v5 >> 6) + ((v5 & 0x3F) != 0) + 2), 0x20206D4Du);
    v7 = Pool;
    if ( !Pool )
      goto LABEL_21;
    Pool->SizeOfBitMap = v5;
    Pool->Buffer = &Pool[1].SizeOfBitMap;
    RtlClearAllBits(Pool);
    memmove(
      v7->Buffer,
      qword_140C4EF10->Buffer,
      8 * (((unsigned __int64)qword_140C4EF10->SizeOfBitMap >> 6) + ((qword_140C4EF10->SizeOfBitMap & 0x3F) != 0)));
    ExFreePoolWithTag(qword_140C4EF10, 0);
    qword_140C4EF10 = v7;
    ClearBitsAndSet = RtlFindClearBitsAndSet(v7, 1u, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DDB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4DDB8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DDB8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( (unsigned int)MiChargeCommit((__int64)a1, 8uLL, 0) )
  {
    v10 = MiReservePtes((__int64)&qword_140C4EF40, 1u, v8, v9);
    v12 = (_QWORD *)v10;
    if ( v10 )
    {
      v13 = (__int64)(v10 << 25) >> 16;
      if ( (unsigned int)MiChargeResident(a1, ClearBitsAndSet != 0 ? 1032LL : 28LL, 0LL, v11) )
      {
        v14 = MiMapNewSession(v13, *(unsigned __int16 *)a1);
        v15 = PsDefaultSystemLocaleId;
        v16 = v14;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)(v13 + 96) = v15;
        *(_DWORD *)v13 = 1;
        *(_DWORD *)(v13 + 8) = ClearBitsAndSet;
        v17 = KeQueryInterruptTimePrecise(&v26);
        v18 = v24;
        v19 = v24;
        *(LARGE_INTEGER *)(v13 + 1056) = v17;
        v23 = MI_READ_PTE_LOCK_FREE(8 * ((v19 >> 39) & 0x1FF) - 0x90482413000LL);
        *(_QWORD *)(v13 + 32) = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v23) >> 12) & 0xFFFFFFFFFLL;
        *(_WORD *)(v13 + 430) = *(_WORD *)a1;
        v20 = _InterlockedIncrement64((volatile signed __int64 *)(a1[22] + 24));
        if ( v20 <= 1 )
          __fastfail(0xEu);
        *(_QWORD *)(v13 + 368) = ClearBitsAndSet != 0 ? 1024LL : 20LL;
        *(_DWORD *)(v13 + 256) = v16;
        *(_QWORD *)(v13 + 40) = 8LL;
        *(_QWORD *)(v13 + 48) = 8LL;
        *(_QWORD *)(v13 + 816) = v23;
        *(_QWORD *)(v13 + 24) = v13 + 16;
        *(_QWORD *)(v13 + 16) = v13 + 16;
        *(_QWORD *)(v13 + 824) = 0LL;
        *(_QWORD *)(v13 + 88) = 0LL;
        *(_QWORD *)(v13 + 856) = 0LL;
        *(_DWORD *)(v13 + 12) = 1;
        *(_QWORD *)(v13 + 224) = _InterlockedIncrement64(&PsNextSecurityDomain);
        CurrentServerSilo = (void *)PsGetCurrentServerSilo(v20, 1LL);
        *(_QWORD *)(v13 + 1048) = CurrentServerSilo;
        if ( CurrentServerSilo )
        {
          ObfReferenceObjectWithTag(CurrentServerSilo, 0x73536D4Du);
          _InterlockedCompareExchange(
            *((volatile signed __int32 **)PsGetServerSiloGlobals(*(_QWORD *)(v13 + 1048)) + 141),
            ClearBitsAndSet,
            -1);
        }
        MiMarkSessionMasterProcess(v25, v13);
        *(_DWORD *)(v13 + 904) = 4;
        *(_QWORD *)(v13 + 896) = MiGetPteAddress(qword_140C4CDA0);
        *(_QWORD *)(v13 + 912) = v18 + 220;
        *(_DWORD *)(v13 + 908) = 1;
        *(_QWORD *)(v13 + 928) = v13 + 856;
        *(_BYTE *)(v13 + 440) = *(_BYTE *)(v13 + 440) & 0xF8 | 1;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
        {
          v29 = 0;
          v30[0] = &v27;
          v28 = ClearBitsAndSet;
          v27 = v13;
          v30[1] = 12LL;
          EtwTraceKernelEvent((__int64)v30, 1u, 0x20400000u, 0x24Bu, 0x401803u);
        }
        return 0LL;
      }
    }
    MiReturnCommit((__int64)a1, 8LL);
    if ( v12 )
      MiReleasePtes((__int64)&qword_140C4EF40, v12, 1u);
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DDB8, 0LL);
  _bittestandreset((signed __int32 *)qword_140C4EF10->Buffer, ClearBitsAndSet);
LABEL_21:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DDB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4DDB8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DDB8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 3221225495LL;
}
