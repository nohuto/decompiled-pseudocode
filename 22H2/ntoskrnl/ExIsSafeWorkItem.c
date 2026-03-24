/*
 * XREFs of ExIsSafeWorkItem @ 0x1403DB620
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x1405A8300 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_1403DC4C0;
}
