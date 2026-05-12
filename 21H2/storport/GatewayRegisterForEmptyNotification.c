/*
 * XREFs of GatewayRegisterForEmptyNotification @ 0x1C00143B8
 * Callers:
 *     RaidAdapterPowerDownDevice @ 0x1C0014320 (RaidAdapterPowerDownDevice.c)
 * Callees:
 *     RaidAdapterStopOnPowerdown @ 0x1C0014A80 (RaidAdapterStopOnPowerdown.c)
 */

char __fastcall GatewayRegisterForEmptyNotification(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1, &LockHandle);
  if ( *(_DWORD *)(a1 + 192) )
  {
    *(_QWORD *)(a1 + 224) = 0LL;
    *(_QWORD *)(a1 + 240) = RaidAdapterStopOnPowerdown;
    *(_BYTE *)(a1 + 208) = 1;
    *(_QWORD *)(a1 + 216) = a3;
    *(_QWORD *)(a1 + 232) = a2;
  }
  else
  {
    v6 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v6 )
    RaidAdapterStopOnPowerdown(a2, a3, 0LL);
  return v6;
}
