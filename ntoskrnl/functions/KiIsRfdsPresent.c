_BOOL8 __fastcall KiIsRfdsPresent(__int64 a1)
{
  return *(_BYTE *)(a1 + 141) == 2 && (KeFeatureBits2 & 0x800000000LL) == 0;
}
