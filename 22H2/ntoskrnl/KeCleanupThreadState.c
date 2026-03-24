/*
 * XREFs of KeCleanupThreadState @ 0x140253F28
 * Callers:
 *     PspThreadDelete @ 0x140619D80 (PspThreadDelete.c)
 * Callees:
 *     KiAbCleanupThreadState @ 0x140253F88 (KiAbCleanupThreadState.c)
 *     KeFlushQueuedDpcs @ 0x14035DC40 (KeFlushQueuedDpcs.c)
 */

void __fastcall KeCleanupThreadState(ULONG_PTR a1)
{
  KiAbCleanupThreadState(a1);
  if ( *(_WORD *)(a1 + 868) )
    KeFlushQueuedDpcs();
}
