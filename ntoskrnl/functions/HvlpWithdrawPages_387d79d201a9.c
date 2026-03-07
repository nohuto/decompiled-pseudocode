char HvlpWithdrawPages()
{
  PHYSICAL_ADDRESS *v0; // rbx
  PHYSICAL_ADDRESS *v1; // r13
  unsigned __int64 QuadPart; // rdi
  int v3; // r15d
  int v4; // eax
  PHYSICAL_ADDRESS *v5; // r12
  __int16 v6; // si
  __int64 v7; // rbx
  ULONG_PTR *v8; // rcx
  __int64 v9; // r8
  __int64 v11; // [rsp+30h] [rbp-D8h]
  PHYSICAL_ADDRESS *v12; // [rsp+38h] [rbp-D0h]
  __m256i v13; // [rsp+48h] [rbp-C0h] BYREF
  __m256i v14; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+88h] [rbp-80h]
  ULONG_PTR BugCheckParameter2[70]; // [rsp+98h] [rbp-70h] BYREF

  LODWORD(v15) = 0;
  memset(&v14.m256i_u64[1], 0, 24);
  v14.m256i_i32[0] = 0;
  memset(&v13.m256i_u64[1], 0, 24);
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v0 = HvlpAcquireHypercallPage((__int64)&v14.m256i_i64[1], 1, 0LL, 0LL);
  v12 = HvlpAcquireHypercallPage((__int64)&v13.m256i_i64[1], 2, 0LL, 0LL);
  v0[1].QuadPart = 0LL;
  v1 = v12;
  v0->QuadPart = -1LL;
  if ( !(unsigned __int16)HvcallInitiateHypercall(74) )
  {
    QuadPart = v12->QuadPart;
    v0[1].QuadPart = 0LL;
    v0->QuadPart = -1LL;
    if ( QuadPart )
    {
      v3 = 0;
      do
      {
        v4 = 512;
        if ( QuadPart < 0x200 )
          v4 = QuadPart;
        v3 ^= (v3 ^ v4) & 0xFFF;
        v11 = HvcallInitiateHypercall(73);
        v5 = v1;
        QuadPart -= WORD2(v11) & 0xFFF;
        if ( (v11 & 0xFFF00000000LL) != 0 )
        {
          v6 = WORD2(v11);
          do
          {
            BugCheckParameter2[0] = 0LL;
            v7 = v6 & 0xFFF;
            WORD1(BugCheckParameter2[1]) = 0;
            BugCheckParameter2[4] = 0LL;
            HIDWORD(BugCheckParameter2[5]) = 0;
            if ( (unsigned int)v7 > 0x40 )
              v7 = 64LL;
            LODWORD(BugCheckParameter2[5]) = (_DWORD)v7 << 12;
            LOWORD(BugCheckParameter2[1]) = 8 * (v7 + 6);
            if ( (_DWORD)v7 )
            {
              v8 = &BugCheckParameter2[6];
              v9 = (unsigned int)v7;
              do
              {
                *v8 = *(ULONG_PTR *)((char *)v8 + (char *)v5 - (char *)&BugCheckParameter2[6]);
                ++v8;
                --v9;
              }
              while ( v9 );
            }
            MiFreePagesFromMdl((ULONG_PTR)BugCheckParameter2, 0);
            v5 += v7;
            v6 ^= (v6 ^ (v6 - v7)) & 0xFFF;
          }
          while ( (v6 & 0xFFF) != 0 );
          v1 = v12;
        }
      }
      while ( !(_WORD)v11 && QuadPart );
    }
  }
  HvlpReleaseHypercallPage((__int64)&v13.m256i_i64[1]);
  return HvlpReleaseHypercallPage((__int64)&v14.m256i_i64[1]);
}
