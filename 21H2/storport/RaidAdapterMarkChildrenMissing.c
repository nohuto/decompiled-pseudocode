/*
 * XREFs of RaidAdapterMarkChildrenMissing @ 0x1C002D498
 * Callers:
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0079314 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterRemoveNormalChildren @ 0x1C002DEF8 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterRemoveZombieChildren @ 0x1C002E018 (RaidAdapterRemoveZombieChildren.c)
 */

__int64 __fastcall RaidAdapterMarkChildrenMissing(__int64 a1)
{
  RaidAdapterRemoveNormalChildren(a1, RaUnitAdapterSurpriseRemove);
  return RaidAdapterRemoveZombieChildren(a1, RaUnitAdapterSurpriseRemove);
}
