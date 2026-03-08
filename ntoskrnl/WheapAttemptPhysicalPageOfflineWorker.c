/*
 * XREFs of WheapAttemptPhysicalPageOfflineWorker @ 0x140A05740
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140A0555C (WheapAttemptPhysicalPageOffline.c)
 */

LONG __fastcall WheapAttemptPhysicalPageOfflineWorker(__int64 a1)
{
  *(_DWORD *)(a1 + 20) = WheapAttemptPhysicalPageOffline(
                           *(LARGE_INTEGER *)a1,
                           *(_QWORD *)(a1 + 8),
                           0LL,
                           *(_BYTE *)(a1 + 16),
                           *(_BYTE *)(a1 + 17),
                           *(_BYTE *)(a1 + 18),
                           *(_BYTE *)(a1 + 19));
  return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
