/*
 * XREFs of MiTrimWorkingSet @ 0x1402F08AC
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402245D0 (MiTrimOrAgeWorkingSet.c)
 *     MiReduceWs @ 0x1402F0810 (MiReduceWs.c)
 *     MiForcedTrim @ 0x1406324C0 (MiForcedTrim.c)
 * Callees:
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x140224BDC (MiTbFlushType.c)
 *     MiLogTrimWs @ 0x1402F0ADC (MiLogTrimWs.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiTrimWorkingSet(__int64 a1, unsigned __int64 a2, __int8 a3, unsigned int a4, int a5)
{
  __int64 v6; // r14
  int v9; // eax
  int v10; // eax
  __int64 v11; // r11
  bool v12; // zf
  __int64 *v13; // r10
  __int64 *v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rdx
  _QWORD v20[52]; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v21[11]; // [rsp+1D0h] [rbp+D0h] BYREF
  _DWORD v22[68]; // [rsp+280h] [rbp+180h] BYREF

  v6 = a4;
  memset(v20, 0, sizeof(v20));
  memset(v21, 0, sizeof(v21));
  memset(v22, 0, 0x108uLL);
  v9 = v6 & 0xF;
  LODWORD(v20[0]) = v9;
  if ( (a5 & 2) != 0 )
  {
    v9 |= 0x200u;
    LODWORD(v20[0]) = v9;
  }
  if ( (a5 & 4) != 0 )
  {
    v9 |= 0x400u;
    LODWORD(v20[0]) = v9;
  }
  if ( (a5 & 1) != 0 )
  {
    v9 |= 0x800u;
    LODWORD(v20[0]) = v9;
  }
  if ( (a5 & 8) != 0 )
  {
    v9 |= 0x1000u;
    LODWORD(v20[0]) = v9;
  }
  if ( (a5 & 0x10) != 0 )
  {
    LODWORD(v20[0]) = v9 | 0x4000;
    v20[7] = *(_QWORD *)(a1 + 144);
    if ( a2 > v20[7] )
      a2 = v20[7];
    v9 = v20[0];
    if ( (a5 & 0x20) != 0 )
    {
      v9 = LODWORD(v20[0]) | 0x8000;
      LODWORD(v20[0]) |= 0x8000u;
    }
  }
  if ( dword_140C67C68 )
    LODWORD(v20[0]) = v9 | 0x100;
  v20[9] = 20LL;
  v10 = MiTbFlushType(a1);
  v12 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  LODWORD(v20[8]) = v10;
  WORD2(v20[8]) = 4;
  v20[10] = v11;
  v20[11] = v11;
  if ( v12 && *(_QWORD *)(a1 + 624) != v11 )
  {
    v22[1] = 32;
    v20[31] = v22;
  }
  v13 = *(__int64 **)(a1 + 16);
  v20[6] = v11;
  if ( (unsigned int)v6 >= 8 )
    return 0LL;
  v14 = (__int64 *)(a1 + 8 * (v6 + 5));
  v15 = (unsigned int)(8 - v6);
  do
  {
    v16 = *v14++;
    v17 = v20[6] + v16;
    v20[6] = v17;
    --v15;
  }
  while ( v15 );
  if ( !v17 )
    return 0LL;
  v18 = v21[2].m128i_i64[1];
  v21[0].m128i_i8[5] = v20[0] & 0xF;
  v21[10].m128i_i64[1] = (__int64)v20;
  v21[9].m128i_i64[1] = (__int64)MiTrimPte;
  v21[10].m128i_i64[0] = (__int64)MiTrimWorkingSetTail;
  v20[1] = a2;
  v21[0].m128i_i32[0] = 22;
  v21[1].m128i_i64[1] = a1;
  v21[0].m128i_i8[7] = a3;
  v21[3].m128i_i64[1] = *v13;
  if ( !v21[3].m128i_i64[1] )
    v18 = -1LL;
  v21[2].m128i_i64[1] = v18;
  MiWalkPageTables(v21);
  MiLogTrimWs(a1, v20[5], v20[2], v6, a5);
  return v20[2];
}
