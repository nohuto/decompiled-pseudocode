char __fastcall IrqArbFindSuitableRange(__int64 a1, _QWORD *a2)
{
  __int64 v5; // rcx
  bool v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  if ( (unsigned __int8)ArbFindSuitableRange() )
  {
    if ( (unsigned __int64)(*a2 - 4293918720LL) <= 0xFFFFE )
      return IrqArbpFindSuitableRangeMsi(a1, a2);
    if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40LL) + 4LL) & 0x20) != 0 )
      return IrqArbpFindSuitableRangeIsa(a1, a2);
    if ( (int)PcisuppIsPciDevice(*(_QWORD *)(a2[4] + 32LL), &v6) >= 0 )
    {
      if ( v6 )
        return IrqArbpFindSuitableRangePci(v5, a2);
      return IrqArbpFindSuitableRangeIsa(a1, a2);
    }
  }
  return 0;
}
