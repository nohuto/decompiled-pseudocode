/*
 * XREFs of RtlpControlFlowGuardEnforced @ 0x1402D8590
 * Callers:
 *     RtlGuardRestoreContext @ 0x1402D851C (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405AFAC8 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402D85B0 (VslGetNestedPageProtectionFlags.c)
 */

__int64 RtlpControlFlowGuardEnforced()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
