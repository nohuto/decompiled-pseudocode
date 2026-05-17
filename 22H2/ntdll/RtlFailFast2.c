/*
 * XREFs of RtlFailFast2 @ 0x1800A2860
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x18006EEC0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x18006EFF0 (RtlGuardCheckExceptionHandler.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800FD7D0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
