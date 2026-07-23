/*
 * XREFs of RtlFailFast2 @ 0x140408D10
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x1402652A4 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14058F678 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
