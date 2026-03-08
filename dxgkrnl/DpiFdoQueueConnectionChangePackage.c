/*
 * XREFs of DpiFdoQueueConnectionChangePackage @ 0x1C005EB78
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001BDEC (DpiFdoHandleDisplayDetectControl.c)
 *     DpIndicateChildStatus @ 0x1C005D370 (DpIndicateChildStatus.c)
 * Callees:
 *     DpIndicateConnectorChange @ 0x1C001C790 (DpIndicateConnectorChange.c)
 */

__int64 __fastcall DpiFdoQueueConnectionChangePackage(__int64 a1, _QWORD *a2, char a3)
{
  KSPIN_LOCK *v3; // rbp
  unsigned int v7; // esi
  char v8; // r14
  _QWORD *v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = (KSPIN_LOCK *)(a1 + 3504);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 0;
  v8 = 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v3, &LockHandle);
  }
  else
  {
    v8 = 1;
    KeAcquireInStackQueuedSpinLock(v3, &LockHandle);
  }
  if ( a2 )
  {
    v9 = *(_QWORD **)(a1 + 3520);
    if ( *v9 != a1 + 3512 )
      __fastfail(3u);
    *a2 = a1 + 3512;
    a2[1] = v9;
    *v9 = a2;
    *(_QWORD *)(a1 + 3520) = a2;
  }
  if ( a3 && *(_BYTE *)(a1 + 3528) )
    v7 = DpIndicateConnectorChange(*(PDEVICE_OBJECT *)(a1 + 24));
  if ( v8 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  return v7;
}
