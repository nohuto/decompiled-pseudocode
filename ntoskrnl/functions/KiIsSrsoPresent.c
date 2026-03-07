_BOOL8 __fastcall KiIsSrsoPresent(__int64 a1)
{
  return *(_BYTE *)(a1 + 141) == 1 && (KeFeatureBits2 & 0x400000000LL) == 0;
}
