unsigned __int64 __fastcall AstGetHashedBitNumbers(unsigned int *a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r8
  unsigned int v6; // eax
  unsigned __int64 result; // rax

  v4 = (a3 >> 4) ^ ((unsigned __int64)a4 << 32);
  v5 = (unsigned int)AstIoctlBloomFilter;
  v6 = HIBYTE(v4)
     + 37
     * (BYTE6(v4)
      + 37
      * (BYTE5(v4)
       + 37
       * (BYTE4(v4)
        + 37 * (BYTE3(v4) + 37 * (BYTE2(v4) + 37 * (BYTE1(v4) + 37 * ((unsigned __int8)v4 + 37 * dword_140C5D310)))))));
  *a1 = v6 % AstIoctlBloomFilter;
  a1[1] = HIWORD(v6) % (unsigned int)v5;
  result = v4 / v5;
  a1[2] = v4 % v5;
  return result;
}
