__int64 __fastcall RaspInitializeGlyphData(__int64 a1, int a2, __int64 *a3, _QWORD *a4)
{
  int v6; // ecx
  unsigned int v7; // ebx
  __int64 v8; // r15
  unsigned int v9; // ebx
  unsigned int v10; // r12d
  unsigned int v11; // ebx
  __int64 v12; // r13
  unsigned __int16 v13; // bx
  __int64 v14; // r14
  char *v15; // rax
  char *v16; // rsi
  __int64 v17; // r14
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  _WORD *v21; // rsi
  unsigned int v22; // edi
  __int64 v23; // rbx
  unsigned int v24; // edi
  char *v25; // rsi
  unsigned int v26; // edi
  _QWORD *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // r11
  __int64 v31; // r8
  __int16 v32; // r9
  __int64 v33; // r10
  __int64 v34; // rdx
  char *v35; // rsi
  unsigned int v36; // edi
  __int16 v37; // r12
  char *v38; // rbx
  char v39; // dl
  __int16 v40; // si
  __int64 v41; // rcx
  __int64 v42; // r12
  _DWORD *v43; // rbx
  char v44; // dl
  _QWORD *v45; // rdx
  __int64 v47; // rdx
  __int64 Memory; // rax
  unsigned int v49; // edx
  __int16 v50[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v51; // [rsp+30h] [rbp-28h]
  __int64 v52; // [rsp+38h] [rbp-20h]
  __int64 v53; // [rsp+40h] [rbp-18h] BYREF
  __int16 v54[8]; // [rsp+48h] [rbp-10h] BYREF
  unsigned __int16 v55; // [rsp+A0h] [rbp+48h] BYREF
  int v56; // [rsp+A8h] [rbp+50h]
  __int64 *v57; // [rsp+B0h] [rbp+58h]
  _QWORD *v58; // [rsp+B8h] [rbp+60h]

  v58 = a4;
  v57 = a3;
  v56 = a2;
  v53 = 0LL;
  v54[0] = 0;
  v55 = 0;
  v50[0] = 0;
  if ( !a1 )
    return 3221225473LL;
  v6 = *(_DWORD *)(a1 + 60);
  if ( !v6 )
    return 3221225473LL;
  v7 = v6 + a2;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  FioFwReadUshortAtOffset(v8, (unsigned int)(v6 + a2), &v53);
  FioFwReadUshortAtOffset(v8, v7 + 2, (_WORD *)&v53 + 1);
  v7 += 4;
  FioFwReadUshortAtOffset(v8, v7, (_WORD *)&v53 + 2);
  FioFwReadUshortAtOffset(v8, v7 + 2, (_WORD *)&v53 + 3);
  v9 = v7 + 4;
  FioFwReadUshortAtOffset(v8, v9, v54);
  v10 = (unsigned __int16)v53;
  if ( (v53 & 0x8000u) != 0LL )
    return 3221225485LL;
  if ( !(_WORD)v53 )
  {
    Memory = RaspAllocateMemory(66LL);
    if ( Memory )
    {
      v49 = SWORD1(v53);
      *(_DWORD *)(Memory + 6) = SWORD2(v53);
      *(_DWORD *)(Memory + 10) = SHIWORD(v53);
      *(_DWORD *)(Memory + 14) = v54[0];
      *(_WORD *)Memory = 0;
      *(_DWORD *)(Memory + 2) = v49;
      *(_QWORD *)(Memory + 18) = v49;
      *a3 = Memory;
      return 0LL;
    }
    return 3221225626LL;
  }
  v11 = v9 + 2 * (__int16)v53;
  FioFwReadUshortAtOffset(v8, v11, v50);
  v12 = (unsigned __int16)(v50[0] + 1);
  FioFwReadUshortAtOffset(v8, v11 + 2, &v55);
  v13 = v55;
  v52 = 4 * v12 + 8;
  v51 = v55;
  v14 = v12 + v55 + 2 * (v52 + (__int16)v10);
  v15 = (char *)RaspAllocateMemory(v14 + 66);
  v16 = v15;
  if ( !v15 )
    return 3221225626LL;
  memset(v15, 0, v14 + 66);
  v17 = (__int64)v16;
  v18 = SWORD1(v53);
  *(_DWORD *)(v16 + 6) = SWORD2(v53);
  *(_DWORD *)(v16 + 10) = SHIWORD(v53);
  v19 = v54[0];
  *(_DWORD *)(v16 + 2) = v18;
  *(_DWORD *)(v16 + 18) = v18;
  v20 = v56;
  *(_DWORD *)(v16 + 14) = v19;
  *(_WORD *)v16 = v10;
  *((_WORD *)v16 + 11) = v13;
  *((_WORD *)v16 + 12) = v12;
  v21 = v16 + 66;
  v22 = v20 + 10 + *(_DWORD *)(a1 + 60);
  *(_QWORD *)(v17 + 26) = v21;
  if ( (__int16)v10 > 0 )
  {
    v23 = v10;
    do
    {
      FioFwReadUshortAtOffset(v8, v22, v21);
      v22 += 2;
      ++v21;
      --v23;
    }
    while ( v23 );
    v13 = v55;
  }
  v24 = v22 + 2;
  *(_QWORD *)(v17 + 34) = v21;
  FioFwReadBytesAtOffset(v8, v24, v13, v21);
  v25 = (char *)v21 + v51;
  v26 = v13 + v24;
  v27 = v58;
  *(_QWORD *)(v17 + 42) = v25;
  v28 = RaspAllocateMemory(v12);
  v51 = v28;
  v29 = v28;
  if ( !v28 )
  {
    RaspFreeMemory(v17, v27);
    return 3221225626LL;
  }
  FioFwReadBytesAtOffset(v8, v26, (unsigned int)v12, v28);
  LODWORD(v30) = 0;
  LODWORD(v31) = 0;
  v32 = 0;
  if ( (_DWORD)v12 )
  {
    do
    {
      v33 = (unsigned int)v31;
      v34 = v32++;
      *(_BYTE *)(v34 + *(_QWORD *)(v17 + 42)) = *(_BYTE *)((unsigned int)v31 + v29);
      if ( (*(_BYTE *)((unsigned int)v31 + v29) & 8) != 0 )
      {
        v31 = (unsigned int)(v31 + 1);
        if ( *(_BYTE *)(v31 + v29) )
        {
          v30 = *(unsigned __int8 *)(v31 + v29);
          do
          {
            v47 = v32++;
            *(_BYTE *)(v47 + *(_QWORD *)(v17 + 42)) = *(_BYTE *)(v33 + v29);
            --v30;
          }
          while ( v30 );
        }
      }
      LODWORD(v31) = v31 + 1;
    }
    while ( v32 < (int)v12 );
  }
  v35 = &v25[v12];
  v36 = v31 + v26;
  *(_QWORD *)(v17 + 50) = v35;
  if ( (_DWORD)v12 )
  {
    v37 = v30;
    while ( 1 )
    {
      v38 = &v35[4 * v37];
      *(_DWORD *)v38 = v30;
      v39 = *(_BYTE *)(v37 + *(_QWORD *)(v17 + 42));
      if ( (v39 & 2) != 0 )
      {
        FioFwReadBytesAtOffset(v8, v36++, 1LL, &v35[4 * v37]);
        if ( (*(_BYTE *)(v37 + *(_QWORD *)(v17 + 42)) & 0x10) == 0 )
          *(_DWORD *)v38 = -*(_DWORD *)v38;
      }
      else
      {
        if ( (v39 & 0x10) != 0 )
          goto LABEL_20;
        FioFwReadUshortAtOffset(v8, v36, &v35[4 * v37]);
        v36 += 2;
      }
      LODWORD(v30) = 0;
LABEL_20:
      if ( ++v37 >= (int)v12 )
      {
        v29 = v51;
        break;
      }
    }
  }
  v40 = v30;
  v41 = *(_QWORD *)(v17 + 50) + v52;
  *(_QWORD *)(v17 + 58) = v41;
  if ( !(_DWORD)v12 )
    goto LABEL_30;
  v42 = v41;
  do
  {
    v43 = (_DWORD *)(v42 + 4LL * v40);
    *v43 = v30;
    v44 = *(_BYTE *)(v40 + *(_QWORD *)(v17 + 42));
    if ( (v44 & 4) != 0 )
    {
      FioFwReadBytesAtOffset(v8, v36++, 1LL, v42 + 4LL * v40);
      if ( (*(_BYTE *)(v40 + *(_QWORD *)(v17 + 42)) & 0x20) == 0 )
        *v43 = -*v43;
      goto LABEL_27;
    }
    if ( (v44 & 0x20) == 0 )
    {
      FioFwReadUshortAtOffset(v8, v36, (_WORD *)(v42 + 4LL * v40));
      v36 += 2;
LABEL_27:
      LODWORD(v30) = 0;
    }
    ++v40;
  }
  while ( v40 < (int)v12 );
  v29 = v51;
LABEL_30:
  v45 = v58;
  *v57 = v17;
  RaspFreeMemory(v29, v45);
  return 0LL;
}
