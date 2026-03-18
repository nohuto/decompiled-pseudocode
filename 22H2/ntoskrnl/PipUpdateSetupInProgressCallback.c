/*
 * XREFs of PipUpdateSetupInProgressCallback @ 0x140952160
 * Callers:
 *     <none>
 * Callees:
 *     PipUpdateSetupInProgressNotify @ 0x140952178 (PipUpdateSetupInProgressNotify.c)
 */

__int64 __fastcall PipUpdateSetupInProgressCallback(void *a1)
{
  return PipUpdateSetupInProgressNotify(a1);
}
