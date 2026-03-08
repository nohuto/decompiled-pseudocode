/*
 * XREFs of PiUEventReferenceEventEntry @ 0x140680474
 * Callers:
 *     PiUEventNotifyClient @ 0x14068032C (PiUEventNotifyClient.c)
 *     PiUEventNotifyUserMode @ 0x14068C2D0 (PiUEventNotifyUserMode.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 */

__int64 __fastcall PiUEventReferenceEventEntry(__int64 a1)
{
  struct _FAST_MUTEX *v2; // rcx
  unsigned int v3; // ebx

  ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 16));
  v2 = *(struct _FAST_MUTEX **)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 56) + 1;
  *(_DWORD *)(a1 + 56) = v3;
  ExReleaseFastMutex(v2);
  return v3;
}
