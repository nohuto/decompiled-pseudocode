/*
 * XREFs of PopEtAppIdDereference @ 0x140702A60
 * Callers:
 *     PopEtGetProcessAppId @ 0x14070116C (PopEtGetProcessAppId.c)
 *     PopEtAggregateKeyCleanup @ 0x140702A18 (PopEtAggregateKeyCleanup.c)
 *     PoEnergyContextCleanup @ 0x1407046AC (PoEnergyContextCleanup.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x140702B20 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56, a1);
  return result;
}
