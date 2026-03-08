/*
 * XREFs of VidSchiForceTdr @ 0x1C00473F4
 * Callers:
 *     VidSchEscape @ 0x1C003F6B0 (VidSchEscape.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C003A0D4 (VidSchDdiNotifyDpcWorker.c)
 */

void __fastcall VidSchiForceTdr(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rcx
  _QWORD v5[2]; // [rsp+30h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-19h] BYREF
  _DWORD v7[20]; // [rsp+60h] [rbp+7h] BYREF
  char v8; // [rsp+C0h] [rbp+67h] BYREF

  memset(v7, 0, sizeof(v7));
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned int *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  v7[15] = v7[15] & 1;
  v5[0] = v2;
  v5[1] = v7;
  v7[0] = 9;
  v7[8] = 6;
  v8 = 0;
  DpSynchronizeExecution(v4, VidSchiCallNotifyInterruptAtISR, v5, v3, &v8);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1752), &LockHandle);
  VidSchDdiNotifyDpcWorker(*(_QWORD *)(a1 + 8), 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
