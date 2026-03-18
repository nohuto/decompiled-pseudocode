/*
 * XREFs of IopApcHardError @ 0x140944230
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x1409453D0 (IopRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall IopApcHardError(PIRP *P)
{
  IopRaiseHardError(P[4]);
  ExFreePoolWithTag(P, 0);
}
