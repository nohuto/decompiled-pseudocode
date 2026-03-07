__int64 __fastcall CmpLightWeightPrepareRecreateKeyUoW(__int64 a1)
{
  return HvpMarkCellDirty(
           *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
           *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL));
}
