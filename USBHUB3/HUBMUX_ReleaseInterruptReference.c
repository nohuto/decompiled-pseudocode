/*
 * XREFs of HUBMUX_ReleaseInterruptReference @ 0x1C0010DF8
 * Callers:
 *     HUBPSM30_CancellingResetOnSurpriseRemove @ 0x1C0011AF0 (HUBPSM30_CancellingResetOnSurpriseRemove.c)
 *     HUBPSM20_DetachingDeviceFromPortOnDisconnectWithTimer @ 0x1C0011C60 (HUBPSM20_DetachingDeviceFromPortOnDisconnectWithTimer.c)
 *     HUBPSM20_DetachingDeviceFromPortOnOverCurrentClearWithTimer @ 0x1C0011C90 (HUBPSM20_DetachingDeviceFromPortOnOverCurrentClearWithTimer.c)
 *     HUBPSM20_IssuingResumedToDeviceSM @ 0x1C0012220 (HUBPSM20_IssuingResumedToDeviceSM.c)
 *     HUBPSM20_QueueingPortResumeTimedOut @ 0x1C0012390 (HUBPSM20_QueueingPortResumeTimedOut.c)
 *     HUBPSM20_ReleasingInterruptReferenceAndIssuingPortResetTimedOutToDSM @ 0x1C0012490 (HUBPSM20_ReleasingInterruptReferenceAndIssuingPortResetTimedOutToDSM.c)
 *     HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer @ 0x1C00124D0 (HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer.c)
 *     HUBPSM20_ReleasingInterruptReferenceOnResetTransferFailure @ 0x1C0012520 (HUBPSM20_ReleasingInterruptReferenceOnResetTransferFailure.c)
 *     HUBPSM20_ReleasingInterruptReferenceOnSuccessfulReset @ 0x1C0012560 (HUBPSM20_ReleasingInterruptReferenceOnSuccessfulReset.c)
 *     HUBPSM30_IssuingHubResetOnTimedOut @ 0x1C0013360 (HUBPSM30_IssuingHubResetOnTimedOut.c)
 *     HUBPSM30_QueueingPortResumeTimedOut @ 0x1C0013530 (HUBPSM30_QueueingPortResumeTimedOut.c)
 *     HUBPSM30_ReleasingInterruptReferenceOnTransferFailureInResuming @ 0x1C00135B0 (HUBPSM30_ReleasingInterruptReferenceOnTransferFailureInResuming.c)
 *     HUBPSM30_ReleasingInterruptReferenceOnResetTransferFailure @ 0x1C00135E0 (HUBPSM30_ReleasingInterruptReferenceOnResetTransferFailure.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     HUBMISC_DbgBreak @ 0x1C0032F4C (HUBMISC_DbgBreak.c)
 */

void __fastcall HUBMUX_ReleaseInterruptReference(volatile signed __int32 *a1)
{
  __int64 v1; // rbx
  char v3; // si
  KSPIN_LOCK *v4; // rbp
  KIRQL v5; // al
  __int64 v6; // rdx
  KIRQL v7; // r14
  int v8; // eax

  v1 = *(_QWORD *)a1;
  v3 = 0;
  v4 = (KSPIN_LOCK *)(*(_QWORD *)a1 + 2320LL);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  v6 = *((unsigned int *)a1 + 66);
  v7 = v5;
  if ( (v6 & 2) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*((_QWORD *)a1 + 179), 2u, 4u, 0x10u, (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids);
    HUBMISC_DbgBreak("Port is releasing interrupt reference when it is not holding it", v6);
  }
  _InterlockedAnd(a1 + 66, 0xFFFFFFFD);
  v8 = *(_DWORD *)(v1 + 2340);
  if ( v8 )
  {
    *(_DWORD *)(v1 + 2340) = v8 - 1;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*((_QWORD *)a1 + 179), 2u, 4u, 0x11u, (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids);
    HUBMISC_DbgBreak("Hub interrupt reference is being released too many times", v6);
  }
  if ( !*(_DWORD *)(v1 + 2340) && (*(_DWORD *)(v1 + 2352) & 1) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v1 + 2352), 0xFFFFFFFE);
    v3 = 1;
  }
  KeReleaseSpinLock(v4, v7);
  if ( v3 )
    HUBSM_AddEvent(v1 + 1264, 2050);
}
