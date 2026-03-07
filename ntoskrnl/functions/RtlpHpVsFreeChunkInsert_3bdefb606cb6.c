__int64 __fastcall RtlpHpVsFreeChunkInsert(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  __int16 v3; // r14
  unsigned int v4; // r9d
  unsigned int v5; // ebx
  unsigned int v7; // r8d
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int8 v10; // al
  unsigned __int64 v12; // rax

  v3 = ((16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)a3 ^ *a3) >> 16))
       + (unsigned __int64)((unsigned __int16)a3 & 0xFFF)
       + 4095) >> 12)
     - (((unsigned __int64)(16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)a3 ^ *a3) >> 16))) + 4095) >> 12);
  v4 = ((_DWORD)a3 - a2 + 4127) & 0xFFFFF000;
  v5 = ((_DWORD)a3 + 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)a3 ^ *a3) >> 16)) - a2) & 0xFFFFF000;
  if ( v4 >= v5 )
  {
    v7 = 0;
    v8 = 0LL;
  }
  else
  {
    v7 = v5 - v4;
    v8 = *(_QWORD *)(a2 + 16) & (-1LL << (v4 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                - (unsigned __int8)((unsigned __int64)(v5 - 1) >> 12)));
  }
  a1[7] += (unsigned int)((0x101010101010101LL
                         * ((((v8 - ((v8 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v8 - ((v8 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                           + ((((v8 - ((v8 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v8 - ((v8 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
  *(_WORD *)a3 = RtlpHpHeapGlobals ^ (unsigned __int16)a3 ^ (v3
                                                           + (v7 >> 12)
                                                           - ((0x101010101010101LL
                                                             * ((((v8 - ((v8 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                               + (((v8 - ((v8 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                               + ((((v8 - ((v8 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                                 + (((v8 - ((v8 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
  v9 = a1[2];
  if ( (a1[3] & 1) != 0 )
  {
    if ( !v9 )
    {
LABEL_5:
      v10 = 0;
      return RtlRbInsertNodeEx(a1 + 2, v9, v10, a3 + 2);
    }
    v9 ^= (unsigned __int64)(a1 + 2);
  }
  v10 = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      if ( ((unsigned int)RtlpHpHeapGlobals ^ *a3 ^ (unsigned int)a3) >= ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(v9 - 8) ^ ((_DWORD)v9 - 8)) )
      {
        v12 = *(_QWORD *)(v9 + 8);
        if ( (a1[3] & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_19;
          v12 ^= v9;
        }
        if ( !v12 )
        {
LABEL_19:
          v10 = 1;
          return RtlRbInsertNodeEx(a1 + 2, v9, v10, a3 + 2);
        }
      }
      else
      {
        v12 = *(_QWORD *)v9;
        if ( (a1[3] & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_5;
          v12 ^= v9;
        }
        if ( !v12 )
          goto LABEL_5;
      }
      v9 = v12;
    }
  }
  return RtlRbInsertNodeEx(a1 + 2, v9, v10, a3 + 2);
}
