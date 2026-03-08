/*
 * XREFs of RtlNumberOfSetBitsInRangeEx @ 0x1405A6B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlNumberOfSetBitsInRangeEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r10
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r11
  __int64 v7; // rdi
  int v8; // esi
  char *v9; // r9
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  char v13; // dl
  __int64 v14; // rdx
  unsigned __int8 v15; // cl
  unsigned __int64 i; // rbp
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r11
  char v20; // cl

  if ( a2 >= *a1 )
    return -1LL;
  if ( *a1 - a2 < a3 )
    return -1LL;
  v4 = 0LL;
  if ( !a3 )
    return -1LL;
  v5 = a2 >> 3;
  v6 = (a3 + a2 - 1) >> 3;
  v7 = a2 & 7;
  v8 = (a3 + a2 - 1) & 7;
  v9 = (char *)((a2 >> 3) + a1[1]);
  if ( a2 >> 3 == v6 )
    return *((unsigned __int8 *)RtlpBitsClearTotal
           + (unsigned __int8)~(*v9 & byte_1400165E0[v7] & byte_140018DE0[v8 + 1]));
  if ( (((unsigned __int8)a3 | (unsigned __int8)a2) & 0x3F) != 0 )
  {
    if ( (a2 & 7) != 0 )
    {
      v13 = *v9++;
      ++v5;
      v4 = *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~(v13 & byte_1400165E0[v7]));
    }
    v14 = 8 - (v5 & 7);
    if ( (v14 & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
    {
      do
      {
        if ( v5 >= v6 )
          break;
        ++v5;
        v15 = ~*v9++;
        v4 += *((unsigned __int8 *)RtlpBitsClearTotal + v15);
        --v14;
      }
      while ( v14 );
    }
    for ( i = v5 + 8;
          i <= v6;
          v4 += (0x101010101010101LL
               * ((((v17 - ((v18 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v17 - ((v18 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v17 - ((v18 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v17 - ((v18 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56 )
    {
      v17 = *(_QWORD *)v9;
      v5 += 8LL;
      v18 = *(_QWORD *)v9;
      v9 += 8;
      i += 8LL;
    }
    if ( v5 < v6 )
    {
      v19 = v6 - v5;
      do
      {
        v20 = *v9++;
        v4 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v20);
        --v19;
      }
      while ( v19 );
    }
    return v4 + *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~(*v9 & byte_140018DE0[v8 + 1]));
  }
  else
  {
    v11 = ((a3 - 1) >> 6) + 1;
    do
    {
      v12 = *(_QWORD *)v9;
      v9 += 8;
      v4 += (0x101010101010101LL
           * ((((v12 - ((v12 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v12 - ((v12 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v12 - ((v12 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v12 - ((v12 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      --v11;
    }
    while ( v11 );
    return v4;
  }
}
