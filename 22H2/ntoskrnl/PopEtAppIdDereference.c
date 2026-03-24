/*
 * XREFs of PopEtAppIdDereference @ 0x14067D864
 * Callers:
 *     PoEnergyContextCleanup @ 0x14061410C (PoEnergyContextCleanup.c)
 *     PopEtGetProcessAppId @ 0x14067C448 (PopEtGetProcessAppId.c)
 *     PopEtAggregateKeyCleanup @ 0x14067D78C (PopEtAggregateKeyCleanup.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x14067D894 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56, a1);
  return result;
}
