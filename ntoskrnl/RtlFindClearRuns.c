/*
 * XREFs of RtlFindClearRuns @ 0x14029A680
 * Callers:
 *     RtlFindLongestRunClear @ 0x1405A5BE0 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindClearRuns(
        PRTL_BITMAP BitMapHeader,
        PRTL_BITMAP_RUN RunArray,
        ULONG SizeOfRunArray,
        BOOLEAN LocateLongestRuns)
{
  unsigned int SizeOfBitMap; // r12d
  ULONG v5; // r15d
  unsigned int v6; // r8d
  PRTL_BITMAP_RUN v7; // r14
  ULONG v8; // edx
  BOOL v9; // edi
  BOOLEAN v10; // bp
  unsigned int *Buffer; // r9
  bool v12; // zf
  unsigned int v13; // edi
  unsigned int v14; // eax
  __int64 v15; // r11
  ULONG v16; // r13d
  int v17; // ebx
  unsigned __int8 v18; // r10
  __int64 v19; // rbp
  ULONG v20; // r11d
  unsigned __int8 v21; // r10
  signed int v22; // edx
  __int64 v23; // r8
  RTL_BITMAP_RUN *m; // r9
  __int64 v25; // rax
  signed int v27; // r12d
  __int64 v28; // r15
  RTL_BITMAP_RUN *i; // r14
  unsigned __int8 *v30; // r8
  __int64 v31; // r13
  char v32; // r8
  int j; // r12d
  ULONG v34; // r15d
  signed int v35; // r15d
  __int64 v36; // rbp
  RTL_BITMAP_RUN *k; // r14
  __int64 v38; // rcx
  RTL_BITMAP_RUN *v39; // rdx
  unsigned int v40; // [rsp+0h] [rbp-58h]
  unsigned int v41; // [rsp+8h] [rbp-50h]
  ULONG v42; // [rsp+60h] [rbp+8h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = SizeOfRunArray;
  v41 = BitMapHeader->SizeOfBitMap;
  v6 = BitMapHeader->SizeOfBitMap & 7;
  v7 = RunArray;
  v8 = 0;
  v40 = v6;
  v9 = v6 != 0;
  v42 = 0;
  v10 = LocateLongestRuns;
  Buffer = BitMapHeader->Buffer;
  v12 = (BitMapHeader->SizeOfBitMap >> 3) + v9 == 0;
  v13 = (BitMapHeader->SizeOfBitMap >> 3) + v9;
  v14 = 0;
  LODWORD(v15) = 0;
  v16 = 0;
  if ( v12 )
    return v8;
  v17 = 0;
  while ( 1 )
  {
    v18 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( v14 == v13 - 1 && v6 )
      v18 |= byte_1400165E0[SizeOfBitMap & 7];
    if ( !v18 )
    {
      LODWORD(v15) = v15 + 8;
      goto LABEL_6;
    }
    v19 = *((unsigned __int8 *)RtlpBitsClearLow + v18);
    v20 = v19 + v15;
    if ( v20 )
    {
      if ( v8 >= v5 )
      {
        if ( v7[v8 - 1].NumberOfBits >= v20 )
          goto LABEL_9;
        v8 = v42;
      }
      else
      {
        v42 = ++v8;
      }
      v27 = v8 - 2;
      if ( LocateLongestRuns )
      {
        v28 = v27;
        for ( i = &v7[v27 + 1]; v28 >= 0 && i[-1].NumberOfBits < v20; --i )
        {
          --v27;
          --v28;
          *i = i[-1];
        }
        v8 = v42;
        v7 = RunArray;
        v5 = SizeOfRunArray;
      }
      v7[v27 + 1].NumberOfBits = v20;
      v7[v27 + 1].StartingIndex = v16;
      if ( !LocateLongestRuns && v8 >= v5 )
        return v8;
    }
LABEL_9:
    v15 = *((unsigned __int8 *)RtlpBitsClearHigh + v18);
    v16 = v17 - v15 + 8;
    v21 = *((_BYTE *)&qword_1400165E8 - v15) | byte_140018DE0[v19] | v18;
    v8 = v42;
    if ( v21 == 0xFF )
    {
LABEL_10:
      v10 = LocateLongestRuns;
      v6 = v40;
    }
    else
    {
      do
      {
        v30 = (unsigned __int8 *)RtlpBitsClearAnywhere + v21;
        if ( v8 >= v5 && v7[v8 - 1].NumberOfBits >= *v30 )
        {
          v16 = v17 - v15 + 8;
          v8 = v42;
          goto LABEL_10;
        }
        v31 = *v30;
        v32 = byte_140018DE0[v31];
        for ( j = 0; ((unsigned __int8)v32 & v21) != 0; ++j )
          v32 *= 2;
        v34 = v8 + 1;
        if ( v8 >= SizeOfRunArray )
          v34 = v8;
        v10 = LocateLongestRuns;
        v42 = v34;
        v35 = v34 - 2;
        if ( LocateLongestRuns )
        {
          v36 = v35;
          for ( k = &v7[v35 + 1]; v36 >= 0 && k[-1].NumberOfBits < (unsigned int)v31; --k )
          {
            --v35;
            --v36;
            *k = k[-1];
          }
          v7 = RunArray;
          v10 = LocateLongestRuns;
        }
        v38 = v35;
        v5 = SizeOfRunArray;
        v39 = &v7[v38];
        v39[1].NumberOfBits = v31;
        v39[1].StartingIndex = v17 + j;
        v8 = v42;
        if ( !v10 && v42 >= SizeOfRunArray )
          return v8;
        v21 |= v32;
      }
      while ( v21 != 0xFF );
      v16 = v17 - v15 + 8;
      v6 = v40;
    }
LABEL_6:
    ++v14;
    v17 += 8;
    if ( v14 >= v13 )
      break;
    LOBYTE(SizeOfBitMap) = v41;
  }
  if ( (_DWORD)v15 )
  {
    if ( v8 < v5 )
    {
      v42 = ++v8;
      goto LABEL_16;
    }
    if ( v7[v8 - 1].NumberOfBits < (unsigned int)v15 )
    {
LABEL_16:
      v22 = v8 - 2;
      if ( v10 )
      {
        v23 = v22;
        for ( m = &v7[v22 + 1]; v23 >= 0 && m[-1].NumberOfBits < (unsigned int)v15; --m )
        {
          --v22;
          --v23;
          *m = m[-1];
        }
      }
      v25 = v22;
      v8 = v42;
      v7[v25 + 1].NumberOfBits = v15;
      v7[v25 + 1].StartingIndex = v16;
    }
  }
  return v8;
}
