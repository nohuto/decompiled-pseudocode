/*
 * XREFs of VidSchiIsMmIoFlipPending @ 0x1C0017B4C
 * Callers:
 *     VidSchWaitForEvents @ 0x1C0014E64 (VidSchWaitForEvents.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C00B5A88 (VidSchiWaitForDrainFlipQueue.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiIsMmIoFlipPending(__int64 a1, unsigned int *a2)
{
  char v4; // bl
  unsigned int v5; // esi
  unsigned int v6; // r8d
  unsigned int v7; // eax
  __int64 v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  v5 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
  v6 = *(_DWORD *)(a1 + 40);
  v7 = 0;
  if ( v6 )
  {
    v8 = a1 + 3200;
    while ( !*(_QWORD *)v8 || !*(_DWORD *)(*(_QWORD *)v8 + 3088LL) )
    {
      ++v7;
      v8 += 8LL;
      if ( v7 >= v6 )
        goto LABEL_6;
    }
    v4 = 1;
    v5 = v7;
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 && a2 )
    *a2 = v5;
  return v4;
}
