__int64 __fastcall GetD3dFormatFromGdiBitsPerPixel(unsigned int a1)
{
  switch ( a1 )
  {
    case 8u:
      return 41LL;
    case 0x10u:
      return 23LL;
    case 0x18u:
      return 20LL;
    case 0x20u:
      return 21LL;
  }
  WdLogSingleEntry1(2LL, a1);
  return 0LL;
}
