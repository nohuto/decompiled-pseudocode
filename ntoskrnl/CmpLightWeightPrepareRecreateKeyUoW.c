/*
 * XREFs of CmpLightWeightPrepareRecreateKeyUoW @ 0x14067DBDC
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A19C0C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpLightWeightPrepareRecreateKeyUoW(__int64 a1)
{
  return HvpMarkCellDirty(
           *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
           *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL));
}
