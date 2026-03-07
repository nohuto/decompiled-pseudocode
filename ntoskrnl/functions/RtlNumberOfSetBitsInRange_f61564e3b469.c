__int64 __fastcall RtlNumberOfSetBitsInRange(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // r10d
  unsigned int v5; // r8d
  char *v6; // r9
  unsigned int v7; // r11d
  __int64 v8; // rdi
  int v9; // esi
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  char v13; // dl
  int v14; // edx
  unsigned __int8 v15; // cl
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  char v19; // cl

  if ( a2 >= *(_DWORD *)a1 )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)a1 - a2 < a3 )
    return 0xFFFFFFFFLL;
  v4 = 0;
  if ( !a3 )
    return 0xFFFFFFFFLL;
  v5 = a2 >> 3;
  v6 = (char *)(*(_QWORD *)(a1 + 8) + (a2 >> 3));
  v7 = (a3 + a2 - 1) >> 3;
  v8 = a2 & 7;
  v9 = (a3 + a2 - 1) & 7;
  if ( a2 >> 3 == v7 )
    return *((unsigned __int8 *)RtlpBitsClearTotal
           + (unsigned __int8)~(*v6 & byte_1400165E0[v8] & byte_140018DE0[v9 + 1]));
  if ( (((unsigned __int8)a3 | (unsigned __int8)a2) & 0x3F) != 0 )
  {
    if ( (a2 & 7) != 0 )
    {
      v13 = *v6++;
      ++v5;
      v4 = *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~(v13 & byte_1400165E0[v8]));
    }
    v14 = 8 - (v5 & 7);
    if ( (v14 & 0xFFFFFFF7) != 0 )
    {
      do
      {
        if ( v5 >= v7 )
          break;
        ++v5;
        v15 = ~*v6++;
        v4 += *((unsigned __int8 *)RtlpBitsClearTotal + v15);
        --v14;
      }
      while ( v14 );
    }
    for ( ;
          (unsigned __int64)v5 + 8 <= v7;
          v4 += (unsigned int)((0x101010101010101LL
                              * ((((v16 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                + (((v16 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                + ((((v16 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                  + (((v16 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
    {
      v16 = *(_QWORD *)v6;
      v5 += 8;
      v17 = *(_QWORD *)v6;
      v6 += 8;
    }
    if ( v5 < v7 )
    {
      v18 = v7 - v5;
      do
      {
        v19 = *v6++;
        v4 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v19);
        --v18;
      }
      while ( v18 );
    }
    return v4 + *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~(*v6 & byte_140018DE0[v9 + 1]));
  }
  else
  {
    v11 = ((a3 - 1) >> 6) + 1;
    do
    {
      v12 = *(_QWORD *)v6;
      v6 += 8;
      v4 += (unsigned int)((0x101010101010101LL
                          * ((((v12 - ((v12 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v12 - ((v12 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v12 - ((v12 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v12 - ((v12 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v11;
    }
    while ( v11 );
    return v4;
  }
}
