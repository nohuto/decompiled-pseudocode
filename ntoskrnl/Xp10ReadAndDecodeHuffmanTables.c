/*
 * XREFs of Xp10ReadAndDecodeHuffmanTables @ 0x1409C4774
 * Callers:
 *     Xp10ExecuteHuffmanDecode @ 0x1409C2EF0 (Xp10ExecuteHuffmanDecode.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     Xp10BuildHuffmanDecodeTable @ 0x1409C2118 (Xp10BuildHuffmanDecodeTable.c)
 *     Xp10ScatteredReadBytes @ 0x1409C5568 (Xp10ScatteredReadBytes.c)
 *     Xp10SortHuffmanSymbols @ 0x1409C55EC (Xp10SortHuffmanSymbols.c)
 */

__int64 __fastcall Xp10ReadAndDecodeHuffmanTables(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 *a8)
{
  __int64 v8; // rbx
  unsigned int v10; // esi
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // edi
  __int64 v15; // r14
  int v16; // r9d
  int v17; // edi
  unsigned int v18; // r14d
  unsigned int v19; // esi
  unsigned int v20; // r15d
  unsigned int v21; // r12d
  unsigned __int64 v22; // rax
  unsigned int v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  int v28; // edx
  unsigned __int64 v29; // rcx
  unsigned int v30; // edi
  int v31; // eax
  int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // r9d
  _WORD *v35; // r12
  int v36; // eax
  int v37; // esi
  unsigned int v38; // r15d
  __int64 v39; // rdi
  unsigned __int64 v40; // rcx
  unsigned int v41; // esi
  __int64 v42; // r8
  __int64 v43; // r12
  int v44; // eax
  int v45; // ecx
  unsigned int v46; // eax
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  __int16 i; // r14
  unsigned int v50; // esi
  int v51; // eax
  int v52; // ecx
  unsigned int v53; // edx
  unsigned int v54; // edx
  __int64 v55; // rax
  unsigned int v56; // esi
  unsigned int v57; // eax
  int v58; // eax
  int v59; // ecx
  unsigned int v60; // edx
  int v61; // eax
  unsigned int v62; // eax
  bool v63; // cc
  unsigned __int8 v64; // dl
  int v65; // eax
  unsigned int v66; // esi
  unsigned int v67; // eax
  int v68; // eax
  int v69; // ecx
  int v70; // edx
  unsigned __int64 v71; // rcx
  int v72; // esi
  unsigned int v73; // r14d
  unsigned int v74; // eax
  int v75; // eax
  int v76; // ecx
  int v77; // edx
  __int64 v78; // rax
  __int64 v79; // rax
  unsigned int v80; // edi
  __int64 v81; // r13
  unsigned int v83; // edx
  unsigned int v84; // ebx
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rax
  int v88; // [rsp+38h] [rbp-38h]
  int v90; // [rsp+C0h] [rbp+50h]
  unsigned int v91; // [rsp+C8h] [rbp+58h] BYREF

  v8 = a5;
  v10 = 2;
  v91 = 0;
  if ( !*(_QWORD *)a5 )
    return 3221226050LL;
  if ( *(_QWORD *)a5 < 2uLL )
    v10 = *(_QWORD *)a5;
  v11 = *(_DWORD *)(a5 + 16);
  if ( v11 < v10 )
  {
    v12 = Xp10ScatteredReadBytes(a5 + 24, &v91, 4LL);
    v13 = *(_DWORD *)(v8 + 16);
    *(_QWORD *)(v8 + 8) |= (unsigned __int64)v91 << v13;
    v11 = v13 + 8 * v12;
    if ( v11 < v10 )
      v10 = v11;
  }
  v14 = *(_DWORD *)(v8 + 8) & ((1LL << v10) - 1);
  *(_QWORD *)(v8 + 8) >>= v10;
  *(_QWORD *)v8 -= v10;
  *(_DWORD *)(v8 + 16) = v11 - v10;
  if ( v10 < 2 )
    return 3221226050LL;
  v15 = a1 + 24;
  memset((void *)(a1 + 24), 0, 0x2C0uLL);
  if ( !v14 )
  {
    v80 = a2;
    _BitScanReverse(&v38, a2);
    v83 = 0;
    v37 = v38 + 1;
    v84 = (1 << (v38 + 1)) - a2;
    if ( v84 )
    {
      LOBYTE(v83) = v38;
      memset((void *)(a1 + 24), v83, v84);
      v83 = (1 << (v38 + 1)) - a2;
    }
    LOBYTE(v16) = v38;
    if ( v83 < a2 )
      memset((void *)(v83 + a1 + 24), v16 + 1, a2 - v83);
    v35 = (_WORD *)(a1 + 728);
    v81 = a1 + 37464;
    goto LABEL_124;
  }
  v17 = v14 - 1;
  if ( !v17 )
    return 3221225474LL;
  if ( v17 != 1 )
    return 3221226050LL;
  v18 = 4;
  v19 = 0;
  v20 = 4;
  v21 = 4;
  do
  {
    v22 = *(_QWORD *)v8;
    v23 = 1;
    v91 = 0;
    if ( !v22 )
      return 3221226050LL;
    v24 = *(_DWORD *)(v8 + 16);
    if ( !v24 )
    {
      v25 = Xp10ScatteredReadBytes(v8 + 24, &v91, 4LL);
      v26 = *(_DWORD *)(v8 + 16);
      *(_QWORD *)(v8 + 8) |= (unsigned __int64)v91 << v26;
      v24 = v26 + 8 * v25;
      v23 = v24 != 0;
    }
    v27 = v24 - v23;
    *(_DWORD *)(v8 + 16) = v27;
    v28 = *(_DWORD *)(v8 + 8) & ((1LL << v23) - 1);
    *(_QWORD *)(v8 + 8) >>= v23;
    *(_QWORD *)v8 -= v23;
    v29 = *(_QWORD *)v8;
    if ( !v23 )
      return 3221226050LL;
    if ( v28 )
    {
      if ( v28 != 1 )
        return 3221226050LL;
      v91 = 0;
      v30 = 3;
      if ( !v29 )
        return 3221226050LL;
      if ( v29 < 3 )
        v30 = v29;
      if ( v27 < v30 )
      {
        v31 = Xp10ScatteredReadBytes(v8 + 24, &v91, 4LL);
        v32 = *(_DWORD *)(v8 + 16);
        *(_QWORD *)(v8 + 8) |= (unsigned __int64)v91 << v32;
        v27 = v32 + 8 * v31;
        *(_DWORD *)(v8 + 16) = v27;
        if ( v27 < v30 )
          v30 = v27;
      }
      *(_DWORD *)(v8 + 16) = v27 - v30;
      v33 = *(_DWORD *)(v8 + 8) & ((1LL << v30) - 1);
      *(_QWORD *)(v8 + 8) >>= v30;
      *(_QWORD *)v8 -= v30;
      if ( v30 < 3 )
        return 3221226050LL;
      if ( v33 >= v21 && ++v33 > 8 )
        return 3221226050LL;
      v21 = v33;
      *(_BYTE *)(v19 + a1 + 24) = v33;
      if ( v33 && v33 < v18 )
        v18 = v33;
      if ( v33 <= v20 )
        v33 = v20;
      v20 = v33;
    }
    else
    {
      *(_BYTE *)(v19 + a1 + 24) = v21;
    }
    ++v19;
  }
  while ( v19 < 0x21 );
  v34 = v18;
  v35 = (_WORD *)(a1 + 728);
  v15 = a1 + 24;
  v36 = Xp10SortHuffmanSymbols((int)a1 + 24, (int)a1 + 728, 33, v34, v20);
  if ( !v36 )
    return 3221226050LL;
  a5 = Xp10BuildHuffmanDecodeTable(a1 + 24, a1 + 37464, (_WORD *)(a1 + 728), v36, 8u, 4, a1 + 37464, v88, a1 + 2136);
  memset((void *)(a1 + 24), 0, 0x2C0uLL);
  v37 = 8;
  v38 = 8;
  v91 = 8;
  LODWORD(v39) = 0;
  v90 = 8;
  if ( !a2 )
  {
LABEL_117:
    v80 = a2;
    v81 = a1 + 37464;
LABEL_124:
    v85 = Xp10SortHuffmanSymbols(v15, (_DWORD)v35, v80, v38, v37);
    if ( !v85 )
      return 3221226050LL;
    v87 = Xp10BuildHuffmanDecodeTable(v15, v86, v35, v85, 0xCu, 6, v81, v88, a6);
    *a8 = v87;
    return 0LL;
  }
  while ( 1 )
  {
    v40 = *(_QWORD *)v8;
    v41 = 8;
    v42 = a5;
    a7 = 0;
    v43 = a5;
    if ( v40 )
    {
      if ( v40 < 8 )
        v41 = v40;
      if ( *(_DWORD *)(v8 + 16) < v41 )
      {
        v44 = Xp10ScatteredReadBytes(v8 + 24, &a7, 4LL);
        v45 = *(_DWORD *)(v8 + 16);
        v42 = v43;
        *(_QWORD *)(v8 + 8) |= (unsigned __int64)a7 << v45;
        v46 = v45 + 8 * v44;
        *(_DWORD *)(v8 + 16) = v46;
        if ( v46 < v41 )
          LOBYTE(v41) = v46;
      }
      v47 = *(_QWORD *)v8;
      v40 = *(_QWORD *)v8;
      v48 = *(_DWORD *)(v8 + 8) & ((unsigned int)(1LL << v41) - 1);
    }
    else
    {
      v48 = 0LL;
      v47 = 0LL;
    }
    for ( i = *(_WORD *)(v42 + 2 * v48); ; i = *(_WORD *)(v43 + 2 * v55) )
    {
      a7 = 0;
      v56 = i & 0xF;
      if ( v47 && (i & 0xF) != 0 )
      {
        if ( (i & 0xFu) > v47 )
          v56 = *(_DWORD *)v8;
        v57 = *(_DWORD *)(v8 + 16);
        if ( v57 < v56 )
        {
          v58 = Xp10ScatteredReadBytes(v8 + 24, &a7, 4LL);
          v59 = *(_DWORD *)(v8 + 16);
          *(_QWORD *)(v8 + 8) |= (unsigned __int64)a7 << v59;
          v57 = v59 + 8 * v58;
          *(_DWORD *)(v8 + 16) = v57;
          if ( v57 < v56 )
            v56 = v57;
        }
        *(_QWORD *)(v8 + 8) >>= v56;
        *(_QWORD *)v8 -= v56;
        v40 = *(_QWORD *)v8;
        *(_DWORD *)(v8 + 16) = v57 - v56;
      }
      if ( i >= 0 )
        break;
      a7 = 0;
      v50 = 4;
      if ( v40 )
      {
        if ( v40 < 4 )
          v50 = *(_DWORD *)v8;
        if ( *(_DWORD *)(v8 + 16) < v50 )
        {
          v51 = Xp10ScatteredReadBytes(v8 + 24, &a7, 4LL);
          v52 = *(_DWORD *)(v8 + 16);
          *(_QWORD *)(v8 + 8) |= (unsigned __int64)a7 << v52;
          v53 = v52 + 8 * v51;
          *(_DWORD *)(v8 + 16) = v53;
          if ( v53 < v50 )
            LOBYTE(v50) = v52 + 8 * v51;
        }
        v54 = *(_DWORD *)(v8 + 8) & ((1LL << v50) - 1);
      }
      else
      {
        v54 = 0;
      }
      v43 += 2 * (i & 0xFFFFFFFFFFFFFFF0uLL);
      v55 = v54;
      v47 = *(_QWORD *)v8;
      v40 = *(_QWORD *)v8;
    }
    v60 = (unsigned __int16)i >> 4;
    if ( v60 == 28 )
    {
      v79 = (unsigned int)v39;
      v39 = (unsigned int)(v39 + 1);
      *(_BYTE *)(v79 + a1 + 24) = 0;
      if ( (v39 & 0xF) != 0 )
      {
        while ( (unsigned int)v39 < a2 )
        {
          *(_BYTE *)(v39 + a1 + 24) = 0;
          v39 = (unsigned int)(v39 + 1);
          if ( (v39 & 0xF) == 0 )
            goto LABEL_112;
        }
        v37 = v91;
LABEL_116:
        v15 = a1 + 24;
        v35 = (_WORD *)(a1 + 728);
        goto LABEL_117;
      }
      goto LABEL_112;
    }
    if ( v60 == 29 )
      break;
    if ( v60 == 30 )
    {
      *(_BYTE *)((unsigned int)v39 + a1 + 24) = v90;
    }
    else
    {
      if ( v60 != 31 )
      {
        if ( v60 == 32 )
        {
          if ( (unsigned int)v39 < 0x10 )
            return 3221226050LL;
          v64 = *(_BYTE *)((unsigned int)(v39 - 16) + a1 + 24) + 1;
          *(_BYTE *)((unsigned int)v39 + a1 + 24) = v64;
          if ( (unsigned __int8)(v64 - 1) > 0x1Au )
            return 3221226050LL;
          v90 = v64;
          v62 = v64;
          if ( v64 < v38 )
            v38 = v64;
          LODWORD(v39) = v39 + 1;
          v63 = v64 <= v91;
        }
        else
        {
          if ( v60 > 0x1B )
            return 3221226050LL;
          *(_BYTE *)((unsigned int)v39 + a1 + 24) = v60;
          v61 = (unsigned __int16)i >> 4;
          if ( !(_WORD)v60 )
            v61 = v90;
          v90 = v61;
          if ( (_BYTE)v60 && (unsigned __int8)v60 < v38 )
            v38 = (unsigned __int8)v60;
          v62 = (unsigned __int8)v60;
          LODWORD(v39) = v39 + 1;
          v63 = (unsigned __int8)v60 <= v91;
        }
        if ( v63 )
          v62 = v91;
        v37 = v62;
        v91 = v62;
        goto LABEL_113;
      }
      if ( (unsigned int)v39 < 0x10 )
        return 3221226050LL;
      v65 = *(unsigned __int8 *)((unsigned int)(v39 - 16) + a1 + 24);
      *(_BYTE *)((unsigned int)v39 + a1 + 24) = v65;
      if ( !(_BYTE)v65 )
        return 3221226050LL;
      v90 = v65;
    }
    LODWORD(v39) = v39 + 1;
LABEL_112:
    v37 = v91;
LABEL_113:
    if ( (unsigned int)v39 >= a2 )
      goto LABEL_116;
  }
  a7 = 0;
  v66 = 2;
  if ( !v40 )
    return 3221226050LL;
  if ( v40 < 2 )
    v66 = *(_DWORD *)v8;
  v67 = *(_DWORD *)(v8 + 16);
  if ( v67 < v66 )
  {
    v68 = Xp10ScatteredReadBytes(v8 + 24, &a7, 4LL);
    v69 = *(_DWORD *)(v8 + 16);
    *(_QWORD *)(v8 + 8) |= (unsigned __int64)a7 << v69;
    v67 = v69 + 8 * v68;
    *(_DWORD *)(v8 + 16) = v67;
    if ( v67 < v66 )
      v66 = v67;
  }
  *(_DWORD *)(v8 + 16) = v67 - v66;
  v70 = *(_DWORD *)(v8 + 8) & ((1LL << v66) - 1);
  *(_QWORD *)(v8 + 8) >>= v66;
  *(_QWORD *)v8 -= v66;
  v71 = *(_QWORD *)v8;
  if ( v66 < 2 )
    return 3221226050LL;
  v72 = v70 + 5;
  if ( v70 != 3 )
  {
LABEL_105:
    if ( v72 + (int)v39 > a2 )
      return 3221226050LL;
    for ( ; v72; --v72 )
    {
      v78 = (unsigned int)v39;
      LODWORD(v39) = v39 + 1;
      *(_BYTE *)(v78 + a1 + 24) = 0;
    }
    goto LABEL_112;
  }
  while ( 1 )
  {
    a7 = 0;
    v73 = 3;
    if ( !v71 )
      return 3221226050LL;
    if ( v71 < 3 )
      v73 = *(_DWORD *)v8;
    v74 = *(_DWORD *)(v8 + 16);
    if ( v74 < v73 )
    {
      v75 = Xp10ScatteredReadBytes(v8 + 24, &a7, 4LL);
      v76 = *(_DWORD *)(v8 + 16);
      *(_QWORD *)(v8 + 8) |= (unsigned __int64)a7 << v76;
      v74 = v76 + 8 * v75;
      *(_DWORD *)(v8 + 16) = v74;
      if ( v74 < v73 )
        v73 = v74;
    }
    *(_DWORD *)(v8 + 16) = v74 - v73;
    v77 = *(_DWORD *)(v8 + 8) & ((1LL << v73) - 1);
    *(_QWORD *)(v8 + 8) >>= v73;
    *(_QWORD *)v8 -= v73;
    v71 = *(_QWORD *)v8;
    if ( v73 < 3 )
      return 3221226050LL;
    v72 += v77;
    if ( v77 != 7 )
      goto LABEL_105;
  }
}
