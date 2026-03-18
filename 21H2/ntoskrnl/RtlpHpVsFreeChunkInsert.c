/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x14034F9E0
 * Callers:
 *     RtlpHpVsContextAddSubsegment @ 0x1402406C8 (RtlpHpVsContextAddSubsegment.c)
 *     RtlpHpVsContextFree @ 0x14034CEB0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkFree @ 0x14036E290 (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 */

char __fastcall RtlpHpVsFreeChunkInsert(unsigned __int64 *a1, __int64 a2, _WORD *a3)
{
  __int64 v4; // r9
  unsigned int v6; // r11d
  __int16 v7; // di
  unsigned int v8; // r8d
  unsigned __int64 v9; // rdx
  unsigned int v11; // r10d
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  bool v15; // al
  int v17; // r10d
  unsigned __int64 v18; // rax

  v4 = 16 * (WORD1(RtlpHpHeapGlobals) ^ ((unsigned int)a3 >> 16) ^ (unsigned __int16)a3[1]);
  v6 = ((_DWORD)a3 + v4 - a2) & 0xFFFFF000;
  v7 = (((unsigned int)v4 + (unsigned __int64)((unsigned __int16)a3 & 0xFFF) + 4095) >> 12)
     - ((unsigned __int64)(v4 + 4095) >> 12);
  v8 = ((_DWORD)a3 - a2 + 4127) & 0xFFFFF000;
  v9 = 0LL;
  if ( v8 >= v6 )
  {
    v11 = 0;
    v12 = 0LL;
  }
  else
  {
    v11 = v6 - v8;
    v12 = *(_QWORD *)(a2 + 16) & (-1LL << (v8 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                 - (unsigned __int8)((unsigned __int64)(v6 - 1) >> 12)));
  }
  a1[7] += (unsigned int)((0x101010101010101LL
                         * ((((v12 - ((v12 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v12 - ((v12 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                           + ((((v12 - ((v12 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v12 - ((v12 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
  *a3 = RtlpHpHeapGlobals ^ (unsigned __int16)a3 ^ (v7
                                                  + (v11 >> 12)
                                                  - ((0x101010101010101LL
                                                    * ((((v12 - ((v12 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + (((v12 - ((v12 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                      + ((((v12 - ((v12 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                        + (((v12 - ((v12 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
  v13 = a1[3];
  v14 = a1[2];
  if ( (v13 & 1) != 0 )
  {
    if ( !v14 )
    {
LABEL_5:
      v15 = 0;
      return RtlRbInsertNodeEx(a1 + 2, v9, v15, (unsigned __int64)(a3 + 4));
    }
    v14 ^= (unsigned __int64)(a1 + 2);
  }
  v9 = v14;
  v17 = v13 & 1;
  v15 = 0;
  if ( v14 )
  {
    while ( 1 )
    {
      if ( ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)a3 ^ *(_DWORD *)a3) >= ((unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)v9 - 8) ^ *(_DWORD *)(v9 - 8)) )
      {
        v18 = *(_QWORD *)(v9 + 8);
        if ( v17 )
        {
          if ( !v18 )
            goto LABEL_19;
          v18 ^= v9;
        }
        if ( !v18 )
        {
LABEL_19:
          v15 = 1;
          return RtlRbInsertNodeEx(a1 + 2, v9, v15, (unsigned __int64)(a3 + 4));
        }
      }
      else
      {
        v18 = *(_QWORD *)v9;
        if ( v17 )
        {
          if ( !v18 )
            goto LABEL_5;
          v18 ^= v9;
        }
        if ( !v18 )
          goto LABEL_5;
      }
      v9 = v18;
    }
  }
  return RtlRbInsertNodeEx(a1 + 2, v9, v15, (unsigned __int64)(a3 + 4));
}
