CCHAR __fastcall MiStoreGraphicsProtectionInVad(__int64 a1, unsigned int a2)
{
  _DWORD *v2; // rbx
  CCHAR result; // al

  v2 = (_DWORD *)(a1 + 48);
  if ( (a2 & 0x20000) != 0 )
  {
    *v2 |= 0x4000000u;
    a2 &= ~0x20000u;
  }
  if ( (a2 & 0x40000) != 0 )
  {
    *v2 |= 0x8000000u;
    a2 &= ~0x40000u;
  }
  result = RtlFindMostSignificantBit((unsigned __int64)a2 >> 11);
  *v2 ^= (*v2 ^ (result << 28)) & 0x70000000;
  return result;
}
