/*
 * XREFs of RtlFailFast2 @ 0x1404217A0
 * Callers:
 *     RtlGuardRestoreContext @ 0x1402D851C (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405AFAC8 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
