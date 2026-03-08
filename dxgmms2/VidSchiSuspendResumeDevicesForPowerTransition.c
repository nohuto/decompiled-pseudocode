/*
 * XREFs of VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C0012994
 * Callers:
 *     VidSchResumeAdapter @ 0x1C00AD540 (VidSchResumeAdapter.c)
 *     VidSchSuspendAdapter @ 0x1C00AE170 (VidSchSuspendAdapter.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C0012D90 (VidSchiDecrementDeviceReference.c)
 *     VidSchSuspendResumeDevice @ 0x1C0012E60 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VidSchiSuspendResumeDevicesForPowerTransition(__int64 a1, char a2)
{
  KSPIN_LOCK *v2; // r15
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  *(_BYTE *)(a1 + 3008) = a2;
  v2 = (KSPIN_LOCK *)(a1 + 1728);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
  v4 = *(_QWORD **)(a1 + 296);
  while ( v4 != (_QWORD *)(a1 + 296) )
  {
    v5 = v4 - 13;
    _InterlockedIncrement64(v4 - 10);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (*(_DWORD *)(v4 - 7) & 0x10) == 0 && *(_QWORD **)(a1 + 240) != v5 )
      VidSchSuspendResumeDevice((struct _VIDSCH_DEVICE *)(v4 - 13));
    KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
    v4 = (_QWORD *)*v4;
    VidSchiDecrementDeviceReference(v5);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
