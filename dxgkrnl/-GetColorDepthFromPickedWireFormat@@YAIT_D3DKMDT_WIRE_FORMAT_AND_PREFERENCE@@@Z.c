__int64 __fastcall GetColorDepthFromPickedWireFormat(union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE a1)
{
  __int64 Value; // rbx

  switch ( ((a1.Value | ((a1.Value | ((a1.Value | (a1.Value >> 6)) >> 6)) >> 6)) >> 2) & 0x3F )
  {
    case 1u:
      return 6LL;
    case 2u:
      return 8LL;
    case 4u:
      return 10LL;
    case 8u:
      return 12LL;
    case 0x10u:
      return 14LL;
    case 0x20u:
      return 16LL;
  }
  Value = a1.Value;
  WdLogSingleEntry1(2LL, a1.Value);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Wrong value set in PickedWireFormat: 0x%I64x, returning 0 bits per pixel",
    Value,
    0LL,
    0LL,
    0LL,
    0LL);
  return 0LL;
}
