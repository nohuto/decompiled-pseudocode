int __fastcall AstAddBloomFilter(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ecx
  _BYTE *v4; // rdx
  int result; // eax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+28h] [rbp-10h]

  v6 = 0LL;
  v7 = 0;
  AstGetHashedBitNumbers(&v6, a2, a2, a3);
  *(_BYTE *)(qword_140C5D308 + ((unsigned __int64)(unsigned int)v6 >> 3)) |= 1 << (v6 & 7);
  v3 = v7;
  *(_BYTE *)(qword_140C5D308 + ((unsigned __int64)HIDWORD(v6) >> 3)) |= 1 << (BYTE4(v6) & 7);
  v4 = (_BYTE *)(qword_140C5D308 + ((unsigned __int64)v3 >> 3));
  result = (char)*v4 | (1 << (v3 & 7));
  *v4 = result;
  return result;
}
