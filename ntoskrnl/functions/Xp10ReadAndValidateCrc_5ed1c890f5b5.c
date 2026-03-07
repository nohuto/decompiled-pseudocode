__int64 __fastcall Xp10ReadAndValidateCrc(unsigned __int16 *a1, __int64 *a2, __int64 a3)
{
  int v3; // r9d
  int v5; // eax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v11; // eax
  unsigned __int64 v12; // rax
  int v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_DWORD *)(a3 + 16);
  v13 = 0;
  v14 = 0LL;
  v5 = v3 & 7;
  *(_QWORD *)(a3 + 8) >>= v5;
  v7 = *(_QWORD *)a3;
  v8 = *(_QWORD *)a3 - (v3 & 7);
  *(_DWORD *)(a3 + 16) = v3 - v5;
  v9 = 0LL;
  if ( (v3 & 7u) <= v7 )
    v9 = v8;
  *(_QWORD *)a3 = v9;
  if ( ((*a1 >> 14) & 1) != 0 )
  {
    if ( ((*a1 >> 14) & 1) != 1 )
      return 3221225485LL;
    if ( (unsigned int)Xp10ScatteredBitBufferReadBytes(a3, &v13, 4LL) == 4 )
    {
      v11 = Xp10Compute2Crc32(a2);
      if ( v11 == v13 )
        return 0LL;
    }
  }
  else if ( (unsigned int)Xp10ScatteredBitBufferReadBytes(a3, &v14, 8LL) == 8 )
  {
    v12 = Xp10Compute2Crc64(a2);
    return v14 != v12 ? 0xC0000242 : 0;
  }
  return 3221226050LL;
}
