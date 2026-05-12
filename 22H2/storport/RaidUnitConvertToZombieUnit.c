/*
 * XREFs of RaidUnitConvertToZombieUnit @ 0x1C001A9F8
 * Callers:
 *     RaUnitSurpriseRemovalIrp @ 0x1C0074290 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterRemoveUnit @ 0x1C0017B08 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertZombieUnit @ 0x1C001AA30 (RaidAdapterInsertZombieUnit.c)
 */

__int64 __fastcall RaidUnitConvertToZombieUnit(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 448) & 0x20) == 0 )
  {
    RaidAdapterRemoveUnit(*(_QWORD *)(a1 + 24), a1);
    return RaidAdapterInsertZombieUnit(*(_QWORD *)(a1 + 24), a1);
  }
  return result;
}
