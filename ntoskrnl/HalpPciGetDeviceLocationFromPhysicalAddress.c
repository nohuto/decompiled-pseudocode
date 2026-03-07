char __fastcall HalpPciGetDeviceLocationFromPhysicalAddress(
        unsigned __int64 a1,
        _WORD *a2,
        _BYTE *a3,
        _BYTE *a4,
        _BYTE *a5)
{
  char result; // al
  unsigned int v7; // ecx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  result = HalpPciIsAddressWithinMcfg(a1, a2, a3, &v8);
  if ( result )
  {
    v7 = v8 >> 5;
    *a4 = v8 & 0x1F;
    *a5 = v7 & 7;
  }
  return result;
}
