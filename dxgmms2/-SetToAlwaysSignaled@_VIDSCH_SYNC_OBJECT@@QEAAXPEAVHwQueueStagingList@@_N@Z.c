/*
 * XREFs of ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0014D1C
 * Callers:
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0014C54 (VidSchiSignalRegisteredSyncObjects.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C003AC40 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C003EF80 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchTimeoutSyncObject @ 0x1C0040B90 (VidSchTimeoutSyncObject.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C00037C0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C003B454 (VidSchiPropagateCrossAdapterSignal.c)
 */

void __fastcall _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled(
        _VIDSCH_SYNC_OBJECT *this,
        struct HwQueueStagingList *a2,
        char a3)
{
  bool v5; // zf
  __int64 v6; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_BYTE *)this + 28) )
  {
    v5 = *((_BYTE *)this + 27) == 0;
    *((_BYTE *)this + 28) = 1;
    if ( v5 || a3 )
    {
      if ( *((_BYTE *)this + 29) )
        **((_QWORD **)this + 8) = -1LL;
      else
        _InterlockedExchangeAdd(*((volatile signed __int32 **)this + 8), 0x3FFFFFFFu);
    }
    VidSchiUnwaitMonitoredFences((__int64)a2, *((_QWORD *)this + 1), 0LL);
    if ( *((_BYTE *)this + 27) )
    {
      if ( a3 )
      {
        v6 = *((_QWORD *)this + 26);
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 8), &LockHandle);
        *(_BYTE *)(v6 + 48) = 1;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        VidSchiPropagateCrossAdapterSignal(this);
      }
    }
  }
}
