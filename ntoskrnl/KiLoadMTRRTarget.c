/*
 * XREFs of KiLoadMTRRTarget @ 0x140A8C4A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x140A8C4C0 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(ULONG_PTR Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
