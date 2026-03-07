__int64 __fastcall MiCaptureAndResetWorkingSetAccessBits(__int64 a1, __int8 a2, char a3)
{
  bool v6; // zf
  __int64 v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD *v10; // [rsp+30h] [rbp-D0h]
  __m128i v11[11]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v12[24]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v13[68]; // [rsp+1B0h] [rbp+B0h] BYREF

  memset(v12, 0, 0xB8uLL);
  v10 = 0LL;
  v9 = 0LL;
  memset(v11, 0, sizeof(v11));
  memset(v13, 0, 0x108uLL);
  v11[2].m128i_i64[1] = -1LL;
  v11[9].m128i_i64[1] = (__int64)MiResetAccessBitPte;
  v6 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v11[10].m128i_i64[0] = (__int64)MiResetAccessBitsTail;
  v11[0].m128i_i32[0] = 6;
  v11[1].m128i_i64[1] = a1;
  v11[0].m128i_i8[7] = a2;
  if ( v6 && *(_QWORD *)(a1 + 624) )
  {
    v13[1] = 32;
    v10 = v13;
  }
  if ( (a3 & 0x10) != 0 )
  {
    *((_QWORD *)&v9 + 1) = v12;
    LODWORD(v12[0]) = MiTbFlushType(a1);
    WORD2(v12[0]) = v7;
    v12[2] = v7;
    LODWORD(v12[1]) = 20;
    v12[3] = v7;
  }
  LODWORD(v9) = dword_140C67C68;
  v11[10].m128i_i64[1] = (__int64)&v9;
  MiWalkPageTables(v11);
  return MiDrainSystemAccessLog(a1);
}
