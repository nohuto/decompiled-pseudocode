/*
 * XREFs of RtlpControlFlowGuardEnforced @ 0x14033FE10
 * Callers:
 *     RtlGuardRestoreContext @ 0x14033FD9C (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405B1F78 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14033FE30 (VslGetNestedPageProtectionFlags.c)
 */

__int64 RtlpControlFlowGuardEnforced()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
