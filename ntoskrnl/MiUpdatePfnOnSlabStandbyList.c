signed __int64 __fastcall MiUpdatePfnOnSlabStandbyList(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = (8 * (*(_DWORD *)(a1 + 36) & 0xFFE00000 | 0x1000000000LL)) | (((*(_QWORD *)a1 >> 20) | *(_QWORD *)(a1 + 40) & 0x780000000000000uLL) >> 20);
  }
  else
  {
    MiSetPfnNodeBlinkLow(a1, 0LL);
    *(_DWORD *)(a1 + 36) &= 0xFFE00000;
  }
  return MiSetNextStandbyPageSameNodeNoLockAsserts(a1, v2);
}
