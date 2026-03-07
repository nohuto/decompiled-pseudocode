__int64 __fastcall KiFindBiasedSetMember(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  int v3; // r11d
  int i; // edx
  unsigned __int64 v5; // rax

  v2 = a1;
  v3 = 0;
  for ( i = a2
          % ((0x101010101010101LL
            * ((((a1 - ((a1 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
              + (((a1 - ((a1 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
              + ((((a1 - ((a1 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                + (((a1 - ((a1 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56)
          + 1; i; --i )
  {
    _BitScanForward64(&v5, v2);
    v3 += v5 + 1;
    v2 >>= (unsigned __int8)v5 + 1;
  }
  return (unsigned int)(v3 - 1);
}
