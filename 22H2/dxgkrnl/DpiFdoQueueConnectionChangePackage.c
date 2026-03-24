/*
 * XREFs of DpiFdoQueueConnectionChangePackage @ 0x1C0020FA8
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C00203C8 (DpiFdoHandleDisplayDetectControl.c)
 *     DpIndicateChildStatus @ 0x1C0050C10 (DpIndicateChildStatus.c)
 * Callees:
 *     DpIndicateConnectorChange @ 0x1C0050ED0 (DpIndicateConnectorChange.c)
 */

__int64 __fastcall DpiFdoQueueConnectionChangePackage(__int64 a1, _QWORD *a2, char a3)
{
  unsigned int v3; // esi
  char v4; // bp
  KSPIN_LOCK *v7; // rcx
  _QWORD *v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  v4 = 0;
  v7 = (KSPIN_LOCK *)(a1 + 3488);
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v7, &LockHandle);
  }
  else
  {
    v4 = 1;
    KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
  }
  if ( a2 )
  {
    v9 = *(_QWORD **)(a1 + 3504);
    if ( *v9 != a1 + 3496 )
      __fastfail(3u);
    *a2 = a1 + 3496;
    a2[1] = v9;
    *v9 = a2;
    *(_QWORD *)(a1 + 3504) = a2;
  }
  if ( a3 && *(_BYTE *)(a1 + 3512) )
    v3 = DpIndicateConnectorChange(*(PDEVICE_OBJECT *)(a1 + 24));
  if ( v4 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  return v3;
}
