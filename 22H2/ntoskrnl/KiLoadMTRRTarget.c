/*
 * XREFs of KiLoadMTRRTarget @ 0x1409A16C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x140999750 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(__int64 Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
