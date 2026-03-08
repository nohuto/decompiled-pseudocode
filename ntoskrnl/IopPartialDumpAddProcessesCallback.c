/*
 * XREFs of IopPartialDumpAddProcessesCallback @ 0x14055B470
 * Callers:
 *     <none>
 * Callees:
 *     IoAddProcessThreadsToDump @ 0x14055A100 (IoAddProcessThreadsToDump.c)
 */

__int64 __fastcall IopPartialDumpAddProcessesCallback(__int64 a1, __int64 a2)
{
  return IoAddProcessThreadsToDump(a1, a2);
}
