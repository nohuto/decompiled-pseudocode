/*
 * XREFs of PoSetSystemState @ 0x14058B8D0
 * Callers:
 *     PoRegisterSystemState @ 0x14058B800 (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x14058BA7C (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

void __stdcall PoSetSystemState(EXECUTION_STATE Flags)
{
  char v2; // bl

  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    PopAcquirePolicyLock(Flags);
    v2 = 1;
  }
  PopSetSystemState(Flags, 7LL);
  if ( v2 )
    PopReleasePolicyLock();
}
