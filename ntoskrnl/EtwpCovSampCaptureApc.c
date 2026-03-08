/*
 * XREFs of EtwpCovSampCaptureApc @ 0x140461810
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140461C2A (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x140461D68 (EtwpCovSampSafeForUserAddressCapture.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x1408A3D6C (EtwpCovSampCaptureUserAddresses.c)
 */

struct _KTHREAD *__fastcall EtwpCovSampCaptureApc(_QWORD *a1, _QWORD *a2, __int64 *a3, __int64 *a4)
{
  __int64 v5; // rbp
  __int64 v6; // r14
  KIRQL v7; // al
  unsigned __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // rbx
  __int64 v15; // rdx
  struct _KTHREAD *result; // rax
  signed __int32 v17[14]; // [rsp+0h] [rbp-38h] BYREF
  int v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = 0;
  v5 = *a3;
  v6 = *a4;
  *a2 = 0LL;
  _InterlockedOr(v17, 0);
  if ( *(_DWORD *)(*(a1 - 1) + 40LL) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 632));
    a1[1] = 0LL;
    v8 = v7;
    KxReleaseSpinLock((volatile signed __int64 *)(v5 + 632));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v8);
  }
  v14 = qword_140C31888;
  memset(a1, 0, 0x58uLL);
  v15 = *(a1 - 1);
  *((_DWORD *)a1 + 22) = 0;
  EtwpCovSampCaptureReleaseToLookaside(v14, v15, a1 - 7);
  if ( (int)EtwpCovSampSafeForUserAddressCapture(1LL, &v18) >= 0 && !v18 )
    EtwpCovSampCaptureUserAddresses(v5, v6);
  result = KeGetCurrentThread();
  _InterlockedAnd((volatile signed __int32 *)&result[1].SwapListEntry + 2, 0xFF7FFFFF);
  return result;
}
