/*
 * XREFs of MiSimpleAging @ 0x1402F0B90
 * Callers:
 *     MiReduceWs @ 0x1402F0810 (MiReduceWs.c)
 * Callees:
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x140224BDC (MiTbFlushType.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiSimpleAging(__int64 a1, __int8 a2)
{
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int64 v8; // r9
  __int64 v9; // r11
  bool v10; // zf
  __int64 v11; // rax
  __m128i v13[11]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v14[32]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v15[24]; // [rsp+1D0h] [rbp+D0h] BYREF
  _DWORD v16[68]; // [rsp+290h] [rbp+190h] BYREF

  memset(v14, 0, sizeof(v14));
  memset(v15, 0, 0xB8uLL);
  memset(v13, 0, sizeof(v13));
  *(_QWORD *)&v4 = memset(v16, 0, 0x108uLL);
  if ( (*(_BYTE *)(a1 + 184) & 0x40) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 144);
    v4 = *(unsigned __int64 *)(a1 + 120) * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
    if ( v5 >= (*((_QWORD *)&v4 + 1) & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      v6 = *(_QWORD *)(a1 + 40);
      v4 = v5 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( v7 + v6 >= (*((_QWORD *)&v4 + 1) & 0xFFFFFFFFFFFFFFFCuLL) && v5 - v7 - v6 < 0x400 )
      {
        v8 = v6 >> 5;
        if ( v8 < 8 )
          v8 = 8LL;
        v14[6] = v8;
        LODWORD(v15[0]) = MiTbFlushType(a1);
        v10 = (*(_BYTE *)(a1 + 184) & 7) == 0;
        v14[7] = v15;
        WORD2(v15[0]) = 0;
        v15[2] = 0LL;
        LODWORD(v15[1]) = 20;
        v15[3] = 0LL;
        if ( v10 && *(_QWORD *)(a1 + 624) )
        {
          v16[1] = 32;
          v14[31] = v16;
        }
        v13[1].m128i_i64[1] = a1;
        v13[10].m128i_i64[1] = (__int64)v14;
        v13[0].m128i_i8[7] = a2;
        v11 = *(_QWORD *)(v9 + 8);
        v13[2].m128i_i64[1] = -1LL;
        v13[3].m128i_i64[1] = v11;
        v13[9].m128i_i64[1] = (__int64)MiSimpleAgePte;
        v13[10].m128i_i64[0] = (__int64)MiSimpleAgeWorkingSetTail;
        v13[0].m128i_i32[0] = 6;
        *(_QWORD *)&v4 = MiWalkPageTables(v13);
      }
    }
  }
  return v4;
}
