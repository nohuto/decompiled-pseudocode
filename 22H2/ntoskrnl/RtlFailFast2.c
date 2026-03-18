/*
 * XREFs of RtlFailFast2 @ 0x140429B30
 * Callers:
 *     RtlGuardRestoreContext @ 0x14033FD9C (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405B1F78 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
