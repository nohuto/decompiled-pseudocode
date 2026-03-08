/*
 * XREFs of MiCaptureRetpolineImportInfo @ 0x14076CDAC
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14076CCAC (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlCaptureRetpolineImportRvas @ 0x1402E1A7C (RtlCaptureRetpolineImportRvas.c)
 *     MiIsRetpolineEnabled @ 0x14036905C (MiIsRetpolineEnabled.c)
 */

__int64 __fastcall MiCaptureRetpolineImportInfo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  _DWORD *Pool; // rbp
  __int64 v4; // rax
  __int64 v6; // r14
  __int64 v7; // rcx
  unsigned int (*v8)(void); // rsi
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  Pool = 0LL;
  v4 = *(_QWORD *)(a2 + 96);
  v13 = 0;
  v6 = *(_QWORD *)(v4 + 32);
  v8 = (unsigned int (*)(void))((unsigned __int64)MiIsTargetFullyRetpolined & -(__int64)MiIsRetpolineEnabled());
  result = RtlCaptureRetpolineImportRvas(
             *(_QWORD *)(v7 + 48),
             *(_QWORD *)(v7 + 48),
             *(unsigned int *)(a1 + 64),
             v8,
             0LL,
             &v13);
  if ( (int)result >= 0 )
    goto LABEL_5;
  if ( (_DWORD)result == -1073741789 )
  {
    Pool = MiAllocatePool(256, v13, 0x69526D4Du);
    if ( !Pool )
      return 3221225495LL;
    result = RtlCaptureRetpolineImportRvas(
               *(_QWORD *)(a1 + 48),
               *(_QWORD *)(a1 + 48),
               *(unsigned int *)(a1 + 64),
               v8,
               Pool,
               &v13);
    if ( (int)result >= 0 )
    {
LABEL_5:
      --CurrentThread->SpecialApcDisable;
      v10 = KeAbPreAcquire(v6 + 24, 0LL);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 24), v10, v6 + 24);
      if ( v11 )
        *(_BYTE *)(v11 + 18) = 1;
      *(_QWORD *)(*(_QWORD *)(v6 + 88) + 16LL) = Pool;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 24));
      KeAbPostRelease(v6 + 24);
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      return 0LL;
    }
  }
  return result;
}
