/*
 * XREFs of ExIsSafeWorkItem @ 0x1403DDB50
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x1405FB2E0 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_1403DE9F0;
}
