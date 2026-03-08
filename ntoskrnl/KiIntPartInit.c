/*
 * XREFs of KiIntPartInit @ 0x140B437B4
 * Callers:
 *     KiIntSteerInit @ 0x140B43678 (KiIntSteerInit.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     IntPartCreate @ 0x140B43808 (IntPartCreate.c)
 *     IntPartGetClassAffinityGroup @ 0x140B43A84 (IntPartGetClassAffinityGroup.c)
 */

__int64 KiIntPartInit()
{
  ULONG ActiveProcessorCount; // eax
  __int64 v1; // rcx
  __int64 result; // rax

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
  KiInterruptEfficiencyClassGroup = IntPartGetClassAffinityGroup(v1, ActiveProcessorCount);
  if ( !KiInterruptEfficiencyClassGroup )
    return 3221225626LL;
  result = IntPartCreate((KiInterruptSteeringFlags & 4) != 0, (KiInterruptSteeringFlags & 4) != 0);
  KiIntPartInitialized = 1;
  return result;
}
