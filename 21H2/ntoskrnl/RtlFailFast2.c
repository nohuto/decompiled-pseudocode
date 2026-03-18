/*
 * XREFs of RtlFailFast2 @ 0x14042ABB0
 * Callers:
 *     RtlGuardRestoreContext @ 0x140294C30 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405EEC28 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
