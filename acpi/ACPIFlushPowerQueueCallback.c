/*
 * XREFs of ACPIFlushPowerQueueCallback @ 0x1C0014540
 * Callers:
 *     <none>
 * Callees:
 *     AMLIRestartContext @ 0x1C0048D0C (AMLIRestartContext.c)
 */

__int64 __fastcall ACPIFlushPowerQueueCallback(__int64 a1, __int64 a2)
{
  return AMLIRestartContext(a2);
}
