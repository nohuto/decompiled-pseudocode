/*
 * XREFs of VidSchiReadCommandFromContextQueue @ 0x1C003B4EC
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C003A850 (VidSchiDrainContextFromWorkerThread.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0006E50 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C0008230 (VidSchiUpdateContextStatus.c)
 *     VidSchiSetNextRunPacket @ 0x1C0010A40 (VidSchiSetNextRunPacket.c)
 */

__int64 __fastcall VidSchiReadCommandFromContextQueue(__int64 a1, int a2, _BYTE *a3)
{
  __int64 v3; // r14
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 96);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = *(_QWORD *)(v3 + 24);
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 1728), &LockHandle);
  *a3 = *(_DWORD *)(a1 + 184) & 1;
  v8 = *(_QWORD *)(a1 + 648);
  if ( v8 )
  {
    --*(_DWORD *)(a1 + 780);
    --*(_DWORD *)(v3 + 2880);
    --*(_DWORD *)(v7 + 720);
    v9 = *(_QWORD *)(v8 + 32);
    if ( v9 == a1 + 664 )
    {
      VidSchiSetNextRunPacket(a1, 0LL);
      VidSchiUpdateContextStatus(a1, 1LL, 18640);
    }
    else
    {
      VidSchiSetNextRunPacket(a1, v9 - 32);
    }
    VidSchiProfilePerformanceTick(5LL, v7, 0LL, 0LL, 0LL, v8, 0LL, 0LL);
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v8;
}
