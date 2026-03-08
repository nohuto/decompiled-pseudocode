/*
 * XREFs of IopApcHardError @ 0x140941210
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x1409423B0 (IopRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall IopApcHardError(PIRP *P)
{
  IopRaiseHardError(P[4]);
  ExFreePoolWithTag(P, 0);
}
