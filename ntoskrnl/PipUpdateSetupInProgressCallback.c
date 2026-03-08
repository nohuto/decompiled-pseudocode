/*
 * XREFs of PipUpdateSetupInProgressCallback @ 0x14094F140
 * Callers:
 *     <none>
 * Callees:
 *     PipUpdateSetupInProgressNotify @ 0x14094F158 (PipUpdateSetupInProgressNotify.c)
 */

__int64 __fastcall PipUpdateSetupInProgressCallback(void *a1)
{
  return PipUpdateSetupInProgressNotify(a1);
}
