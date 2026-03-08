/*
 * XREFs of ViDeadlockKeInitializeMutex_Exit @ 0x140AD63A0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockInitializeResource @ 0x140AD4738 (VfDeadlockInitializeResource.c)
 */

__int64 __fastcall ViDeadlockKeInitializeMutex_Exit(__int64 a1, __int64 a2)
{
  return VfDeadlockInitializeResource(*(LONG **)(a1 + 16), a2, *(void **)a1);
}
