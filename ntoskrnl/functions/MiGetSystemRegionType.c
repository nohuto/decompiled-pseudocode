__int64 __fastcall MiGetSystemRegionType(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return 0LL;
  else
    return byte_140C6A058[((a1 >> 39) & 0x1FF) - 256];
}
