_BOOL8 __fastcall MiInPageGapPage(__int64 a1)
{
  return (*(_BYTE *)(a1 + 34) & 7) == 7 && *(_QWORD *)(a1 + 8) == -3LL;
}
