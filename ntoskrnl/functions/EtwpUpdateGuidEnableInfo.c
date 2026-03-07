__int64 __fastcall EtwpUpdateGuidEnableInfo(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  int v5; // eax
  char v9; // dl
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r11
  char *v17; // r8
  int v18; // r15d
  unsigned __int8 v19; // si
  __int64 v20; // r14
  unsigned __int8 v22; // al
  unsigned int v23; // r15d
  char *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r11
  __int64 v27; // r9
  int v28; // r14d
  __int64 v29; // rsi
  unsigned __int8 v30; // al
  __int128 v31; // [rsp+20h] [rbp-20h]
  __int128 v32; // [rsp+20h] [rbp-20h]
  __int128 v33; // [rsp+30h] [rbp-10h]
  __int128 v34; // [rsp+30h] [rbp-10h]
  unsigned int v35; // [rsp+78h] [rbp+38h] BYREF

  v35 = 0;
  v5 = *(_DWORD *)(a2 + 72);
  if ( v5 == 1 )
  {
    v9 = *(_BYTE *)(BugCheckParameter2 + 91) ^ (*(_BYTE *)(BugCheckParameter2 + 91) ^ *(_BYTE *)(a2 + 112)) & 1;
    *(_BYTE *)(BugCheckParameter2 + 91) = v9;
    *(_BYTE *)(BugCheckParameter2 + 91) = v9 & 1 | (2 * *(_BYTE *)(a2 + 107));
    *(_WORD *)(BugCheckParameter2 + 88) = *(_WORD *)(a2 + 104);
    *(_BYTE *)(BugCheckParameter2 + 90) = *(_BYTE *)(a2 + 106);
    *(_QWORD *)(BugCheckParameter2 + 80) = a3;
  }
  else if ( !v5 && *(_WORD *)(BugCheckParameter2 + 88) == *(_WORD *)(a2 + 104) )
  {
    *(_BYTE *)(BugCheckParameter2 + 91) &= ~1u;
  }
  if ( EtwpGetEnableInfoIndex(BugCheckParameter2, *(unsigned __int16 *)(a2 + 78), &v35) )
  {
    v23 = v35;
    v24 = (char *)(v10 + 132);
    v25 = 32 * (v35 + 4LL);
    v26 = -1LL;
    *(_OWORD *)(v25 + v10) = *(_OWORD *)(a2 + 72);
    v27 = 8LL;
    v32 = 0LL;
    v28 = 0;
    LOBYTE(v11) = 0;
    v29 = 0LL;
    *(_OWORD *)(v25 + v10 + 16) = *(_OWORD *)(a2 + 88);
    *((_QWORD *)&v34 + 1) = -1LL;
    do
    {
      if ( *((_DWORD *)v24 - 1) )
      {
        v30 = v11;
        LODWORD(v32) = v12;
        if ( (unsigned __int8)v11 <= (unsigned __int8)*v24 )
          v30 = *v24;
        v26 &= *(_QWORD *)(v24 + 20);
        v29 |= *(_QWORD *)(v24 + 12);
        LOBYTE(v11) = v30;
        v28 |= *((_DWORD *)v24 + 1);
        *((_QWORD *)&v34 + 1) = v26;
      }
      v24 += 32;
      v27 -= v12;
    }
    while ( v27 );
    BYTE4(v32) = v11;
    DWORD2(v32) = v28;
    *(_QWORD *)&v34 = v29;
    *a5 = (_BYTE)v12 << v23;
    *(_OWORD *)(BugCheckParameter2 + 96) = v32;
    *(_OWORD *)(BugCheckParameter2 + 112) = v34;
    LOBYTE(v11) = *(_DWORD *)(a2 + 72) == 0;
    EtwpUpdateGuidFilterData(BugCheckParameter2, v23, v11, a4);
    if ( !*(_DWORD *)(a2 + 72) )
      EtwpUnreferenceGuidEntry(BugCheckParameter2);
    return 0LL;
  }
  if ( *(_DWORD *)(a2 + 72) )
  {
    v13 = 0LL;
    v14 = 8LL;
    while ( 1 )
    {
      v15 = 32 * ((unsigned int)v13 + 4LL);
      if ( !*(_DWORD *)(v15 + v10) )
        break;
      v13 = (unsigned int)(v12 + v13);
      if ( (unsigned int)v13 >= 8 )
        return 3221225626LL;
    }
    v16 = -1LL;
    v17 = (char *)(v10 + 132);
    *(_OWORD *)(v15 + v10) = *(_OWORD *)(a2 + 72);
    v31 = 0LL;
    v18 = 0;
    v19 = 0;
    v20 = 0LL;
    *(_OWORD *)(v15 + v10 + 16) = *(_OWORD *)(a2 + 88);
    *((_QWORD *)&v33 + 1) = -1LL;
    do
    {
      if ( *((_DWORD *)v17 - 1) )
      {
        v22 = v19;
        LODWORD(v31) = v12;
        if ( v19 <= (unsigned __int8)*v17 )
          v22 = *v17;
        v16 &= *(_QWORD *)(v17 + 20);
        v20 |= *(_QWORD *)(v17 + 12);
        v19 = v22;
        v18 |= *((_DWORD *)v17 + 1);
        *((_QWORD *)&v33 + 1) = v16;
      }
      v17 += 32;
      v14 -= v12;
    }
    while ( v14 );
    BYTE4(v31) = v19;
    DWORD2(v31) = v18;
    *(_QWORD *)&v33 = v20;
    *a5 = (_BYTE)v12 << v13;
    *(_OWORD *)(BugCheckParameter2 + 96) = v31;
    *(_OWORD *)(BugCheckParameter2 + 112) = v33;
    LOBYTE(v17) = *(_DWORD *)(a2 + 72) == 0;
    EtwpUpdateGuidFilterData(BugCheckParameter2, v13, v17, a4);
    EtwpReferenceGuidEntry(BugCheckParameter2);
    return 0LL;
  }
  return 3221226021LL;
}
