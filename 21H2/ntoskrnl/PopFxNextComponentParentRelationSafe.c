/*
 * XREFs of PopFxNextComponentParentRelationSafe @ 0x1404199A4
 * Callers:
 *     PopFxActivateComponentDependencies @ 0x1403551C8 (PopFxActivateComponentDependencies.c)
 *     PopFxDeactivateComponentDependencies @ 0x140355D70 (PopFxDeactivateComponentDependencies.c)
 *     PopFxComponentRelationsCleanup @ 0x1403B9594 (PopFxComponentRelationsCleanup.c)
 *     PoFxRemoveComponentRelation @ 0x1405CA8F0 (PoFxRemoveComponentRelation.c)
 * Callees:
 *     PopFxNextParentRelationSafe @ 0x1404199DC (PopFxNextParentRelationSafe.c)
 */

__int64 __fastcall PopFxNextComponentParentRelationSafe(__int64 a1, __int64 a2, __int64 a3)
{
  return PopFxNextParentRelationSafe(a1 + 456, a2, a3);
}
