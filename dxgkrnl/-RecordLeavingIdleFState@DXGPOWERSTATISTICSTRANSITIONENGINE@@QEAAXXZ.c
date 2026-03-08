/*
 * XREFs of ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0054968
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C00125F4 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x1C003E7BC (-CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     ?RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x1C0054B78 (-RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z.c)
 */

void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState(KSPIN_LOCK *this)
{
  int v2; // eax
  unsigned int v3; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this + 3, &LockHandle);
  v2 = *((_DWORD *)this + 23);
  *((_BYTE *)this + 88) = 0;
  switch ( v2 )
  {
    case 1:
      v3 = *((_DWORD *)this + 24);
      if ( v3 != *((_DWORD *)this + 15) )
LABEL_9:
        DXGPOWERSTATISTICSTRANSITIONENGINE::RequestPState((DXGPOWERSTATISTICSTRANSITIONENGINE *)this, v3);
      break;
    case 2:
      v3 = *((_DWORD *)this + 24);
      if ( v3 > *((_DWORD *)this + 15) )
        goto LABEL_9;
      break;
    case 3:
      v3 = *((_DWORD *)this + 24);
      if ( v3 < *((_DWORD *)this + 15) )
        goto LABEL_9;
      break;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
