/*
 * XREFs of MiInsertChildVads @ 0x1408D97D0
 * Callers:
 *     MiAllocateChildVads @ 0x1408D8AE0 (MiAllocateChildVads.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetWsAndInsertVad @ 0x140296700 (MiGetWsAndInsertVad.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MiUpControlAreaRefs @ 0x14052AAB0 (MiUpControlAreaRefs.c)
 *     MiCommitPageTableRangesForVad @ 0x1405451CC (MiCommitPageTableRangesForVad.c)
 *     MiInsertVadCharges @ 0x14063A390 (MiInsertVadCharges.c)
 *     MiDeletePartialCloneVads @ 0x1408D9578 (MiDeletePartialCloneVads.c)
 */

__int64 __fastcall MiInsertChildVads(_KPROCESS *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v6; // edi
  __int64 v7; // rbp
  int *v8; // rsi
  __int64 v9; // r8
  _DWORD *v10; // r9
  int inserted; // eax
  int v12; // ecx
  unsigned __int64 v13; // rax
  int v14; // eax
  void *v15; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v17; // rcx
  bool v18; // zf
  _OWORD v20[3]; // [rsp+20h] [rbp-68h] BYREF

  v6 = 0;
  memset(v20, 0, sizeof(v20));
  KiStackAttachProcess(a1, 0LL, (__int64)v20, a4);
  v7 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      v8 = (int *)(a2 + 48);
      if ( (*(_DWORD *)(a2 + 48) & 0x100000) == 0 )
      {
        v6 = MiUpControlAreaRefs(a2, 1);
        if ( v6 < 0 )
          break;
      }
      v6 = MiCommitPageTableRangesForVad(a2);
      if ( v6 < 0 )
      {
        v18 = (*v8 & 0x100000) == 0;
LABEL_22:
        if ( v18 )
          MiUpControlAreaRefs(a2, 0);
        break;
      }
      inserted = MiInsertVadCharges(a2, a1);
      v12 = *v8;
      v6 = inserted;
      if ( inserted < 0 )
      {
        v18 = (v12 & 0x100000) == 0;
        goto LABEL_22;
      }
      a2 = *(_QWORD *)a2;
      if ( (v12 & 0xC0000) == 0x40000 )
      {
        v13 = a1[1].ActiveProcessorsPadding[8];
        if ( (v12 & 0x100000) != 0 )
          ++*(_QWORD *)(v13 + 424);
        else
          ++*(_QWORD *)(v13 + 432);
      }
      v14 = *v8;
      if ( (*v8 & 0x100000) == 0 )
      {
        v15 = *(void **)(v7 + 128);
        if ( v15 )
        {
          ObfReferenceObject(v15);
          v14 = *v8;
        }
        if ( (v14 & 0x100000) == 0 && *(__int64 *)(v7 + 120) < 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4C990, 0LL);
          v17 = *(_QWORD *)(***(_QWORD ***)(v7 + 72) + 32LL);
          ++*(_DWORD *)(v17 + 8);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C990, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4C990);
          KeAbPostRelease((ULONG_PTR)&qword_140C4C990);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
      }
      *(_QWORD *)(v7 + 16) = -2LL;
      MiGetWsAndInsertVad(v7);
      v7 = a2;
      if ( !a2 )
        goto LABEL_25;
    }
    MiDeletePartialCloneVads((_QWORD *)a2, 1, v9, v10);
  }
LABEL_25:
  KiUnstackDetachProcess((__int64)v20, 0);
  return (unsigned int)v6;
}
