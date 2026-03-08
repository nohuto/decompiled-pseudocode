/*
 * XREFs of GreAcquireFastMutex @ 0x1C00B6560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreAcquireFastMutex(struct _FAST_MUTEX *a1)
{
  KeAcquireGuardedMutex(a1);
}
