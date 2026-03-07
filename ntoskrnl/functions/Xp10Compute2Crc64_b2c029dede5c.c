unsigned __int64 __fastcall Xp10Compute2Crc64(__int64 *a1)
{
  __int64 *v2; // r8
  unsigned __int64 v3; // rbx
  __int64 v4; // rbp
  bool v5; // zf
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int Bytes; // eax
  __int64 v12; // rdx
  unsigned __int8 *v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  char v16; // al
  unsigned __int64 v17; // rcx
  _BYTE v19[256]; // [rsp+20h] [rbp-128h] BYREF

  v2 = (__int64 *)a1[4];
  v3 = -1LL;
  v4 = *a1 - v2[2 * a1[3]];
  v5 = a1[2] + v4 == 0;
  v6 = a1[2] + v4;
  v7 = 0LL;
  a1[3] = 0LL;
  v8 = *v2;
  *a1 = *v2;
  v9 = v2[1];
  a1[2] = 0LL;
  a1[1] = v8 + v9;
  if ( !v5 )
  {
    do
    {
      v10 = v6 - v7;
      if ( v6 - v7 > 0x100 )
        v10 = 256;
      Bytes = Xp10ScatteredReadBytes(a1, v19, v10);
      v12 = Bytes;
      if ( Bytes )
      {
        v13 = v19;
        v14 = Bytes;
        do
        {
          v15 = 8LL;
          v3 ^= *v13;
          do
          {
            v16 = v3;
            v17 = v3 >> 1;
            v3 = (v3 >> 1) ^ 0x9A6C9329AC4BC9B5uLL;
            if ( (v16 & 1) == 0 )
              v3 = v17;
            --v15;
          }
          while ( v15 );
          ++v13;
          --v14;
        }
        while ( v14 );
      }
      v7 += v12;
    }
    while ( v7 < v6 );
  }
  return ~v3;
}
