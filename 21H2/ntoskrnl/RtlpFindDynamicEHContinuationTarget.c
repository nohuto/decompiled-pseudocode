/*
 * XREFs of RtlpFindDynamicEHContinuationTarget @ 0x14091ACE8
 * Callers:
 *     RtlVerifyUserUnwindTarget @ 0x14091AAF4 (RtlVerifyUserUnwindTarget.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     MiHotPatchImageTreeCompare @ 0x1408CA798 (MiHotPatchImageTreeCompare.c)
 */

bool __fastcall RtlpFindDynamicEHContinuationTarget(unsigned __int64 a1)
{
  _KPROCESS *Process; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v4; // rdi
  _QWORD *v5; // rbx
  int v6; // eax

  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (signed __int64 *)&Process[2].ActiveProcessors.Bitmap[4];
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[4], 0LL);
  v5 = (_QWORD *)Process[2].ActiveProcessors.Bitmap[3];
  while ( v5 )
  {
    v6 = MiHotPatchImageTreeCompare(a1, (__int64)v5);
    if ( v6 >= 0 )
    {
      if ( v6 <= 0 )
        break;
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      v5 = (_QWORD *)*v5;
    }
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegion();
  return v5 != 0LL;
}
