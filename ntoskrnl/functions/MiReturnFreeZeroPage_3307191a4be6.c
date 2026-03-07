__int64 __fastcall MiReturnFreeZeroPage(__int64 a1)
{
  char v1; // al
  int IsFreeZeroPfnCold; // eax
  __int16 v3; // r8
  ULONG_PTR v4; // r9
  __int16 v5; // r10
  __int16 v6; // dx

  if ( (*(_BYTE *)(a1 + 34) & 7) == 6 )
    *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  v1 = *(_BYTE *)(a1 + 34) & 0xC7;
  *(_WORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 34) = v1;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_BYTE *)(a1 + 35) &= ~0x10u;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(a1);
  v6 = v3 | 0x400;
  if ( !IsFreeZeroPfnCold )
    v6 = v3;
  return MiInsertPageInFreeOrZeroedList(v4, v5 | v6);
}
