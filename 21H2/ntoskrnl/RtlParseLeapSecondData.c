/*
 * XREFs of RtlParseLeapSecondData @ 0x140980D0C
 * Callers:
 *     ExpParseAndUpdateLeapSecondData @ 0x1407AAB88 (ExpParseAndUpdateLeapSecondData.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140233BE4 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     RtlLongLongAdd @ 0x14056F6F8 (RtlLongLongAdd.c)
 */

__int64 __fastcall RtlParseLeapSecondData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  signed __int64 v7; // rbx
  unsigned int v8; // r15d
  unsigned __int64 *v9; // r12
  __int64 v10; // r14
  int v11; // r10d
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  signed __int64 v15; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+28h] [rbp-28h]
  __int64 v17; // [rsp+30h] [rbp-20h]
  __int16 v18[4]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  int v21; // [rsp+A8h] [rbp+58h]

  v4 = 0;
  v15 = 0LL;
  *(_DWORD *)(a4 + 4) = 0;
  v7 = 0LL;
  v21 = 0;
  v8 = 0;
  if ( a2 )
  {
    v9 = (unsigned __int64 *)(a4 + 8);
    v10 = a1 + 4;
    v16 = a3 - a4;
    while ( 1 )
    {
      v18[0] = *(_WORD *)(v10 - 4);
      v18[1] = *(_WORD *)(v10 - 2);
      v18[2] = *(_WORD *)v10;
      v18[3] = *(_WORD *)(v10 + 2);
      v17 = v10;
      v19 = 3866683LL;
      if ( !RtlpTimeFieldsToTimeNoLeapSeconds(v18, &v15) )
        break;
      if ( v15 <= v7 )
        return 5;
      v7 = v15;
      if ( (int)RtlLongLongAdd(v15, 10000000LL * v21, (unsigned __int64 *)&v15) < 0 )
        return 7;
      v12 = v15;
      if ( (*(_BYTE *)(v10 + 4) & 1) != 0 )
      {
        v12 = v15 | 0x8000000000000000uLL;
        v15 |= 0x8000000000000000uLL;
      }
      if ( a3 && v8 < *(_DWORD *)(a3 + 4) && v12 != *(unsigned __int64 *)((char *)v9 + v16) )
        return 6;
      *v9 = v12;
      ++v8;
      v13 = v17;
      ++v9;
      ++*(_DWORD *)(a4 + 4);
      v10 += 12LL;
      v21 = v11 + 2 * ((*(_WORD *)(v13 + 4) & 1) == 0) - 1;
      if ( v8 >= a2 )
        return v4;
    }
    return 4;
  }
  return v4;
}
