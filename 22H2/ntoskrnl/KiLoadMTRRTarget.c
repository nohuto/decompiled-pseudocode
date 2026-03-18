/*
 * XREFs of KiLoadMTRRTarget @ 0x140A8F930
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x140A8F950 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(ULONG_PTR Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
