__int64 __fastcall GetPhysicalAdapterCapsSizeFromDdiVersion(unsigned int a1)
{
  if ( a1 < 0xC003 )
    return a1 < 0x6000 ? 20 : 24;
  else
    return 32LL;
}
