__int64 __fastcall MiCheckPhysicalAddressRange(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned int v3; // r8d

  if ( a1 + a2 <= a1 )
    return 0LL;
  v2 = a1 + a2 - 1;
  v3 = 0;
  if ( KiMtrrMaskBase )
  {
    if ( (v2 & 0xFFFFFFFFFFFFF000uLL) > KiMtrrMaskBase )
      return 0LL;
  }
  if ( KeGetCurrentPrcb()->CpuVendor != 1 || v2 < 0xFD00000000LL )
    return 1LL;
  LOBYTE(v3) = a1 > 0xFFFFFFFFFFLL;
  return v3;
}
