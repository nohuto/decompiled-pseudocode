/*
 * XREFs of MiIsPageEligibleForProtectedStandby @ 0x140287110
 * Callers:
 *     MiCanBatchHardFaultPages @ 0x140284A30 (MiCanBatchHardFaultPages.c)
 *     MiInsertProtectedStandbyPage @ 0x1402DFCF4 (MiInsertProtectedStandbyPage.c)
 * Callees:
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 */

_BOOL8 __fastcall MiIsPageEligibleForProtectedStandby(__int64 a1, __int64 a2)
{
  char v4; // cl
  _BOOL8 result; // rax

  result = 0;
  if ( !_bittest64((const signed __int64 *)(a2 + 40), 0x35u) && !(unsigned int)MiCheckSlabPfnBitmap(a2, 1LL, 0LL) )
  {
    if ( a1 )
    {
      v4 = *(_BYTE *)(a2 + 35);
      if ( (v4 & 0x50) == 0
        && *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) == *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL))
        && (v4 & 7u) < 5 )
      {
        return 1;
      }
    }
  }
  return result;
}
