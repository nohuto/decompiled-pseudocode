/*
 * XREFs of IopApcHardError @ 0x140890EE0
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x140891C50 (IopRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall IopApcHardError(PIRP *P)
{
  IopRaiseHardError(P[4]);
  ExFreePoolWithTag(P, 0);
}
