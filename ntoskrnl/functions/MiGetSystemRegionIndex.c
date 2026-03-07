unsigned __int64 __fastcall MiGetSystemRegionIndex(unsigned __int64 a1)
{
  return ((a1 >> 39) & 0x1FF) - 256;
}
