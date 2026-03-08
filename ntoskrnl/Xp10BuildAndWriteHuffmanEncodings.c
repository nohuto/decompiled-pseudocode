/*
 * XREFs of Xp10BuildAndWriteHuffmanEncodings @ 0x1409C1308
 * Callers:
 *     Xp10ExecuteHuffmanEncode @ 0x1409C34F4 (Xp10ExecuteHuffmanEncode.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     Xp10BuildAndWriteHuffmanTables @ 0x1409C16E0 (Xp10BuildAndWriteHuffmanTables.c)
 *     Xp10BuildHuffmanEncodings @ 0x1409C23AC (Xp10BuildHuffmanEncodings.c)
 */

__int64 __fastcall Xp10BuildAndWriteHuffmanEncodings(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        unsigned int *a7)
{
  unsigned int v8; // r9d
  int v10; // edx
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  _DWORD *v14; // rax
  __int64 v15; // r8
  int v16; // r8d
  int v17; // ebp
  _DWORD *v18; // rdx
  __int64 v19; // rcx
  int v20; // ebp
  __int64 v21; // r12
  int v22; // r14d
  unsigned int v23; // edi
  unsigned int v24; // r9d
  unsigned int v25; // r15d
  _BYTE *v26; // r8
  unsigned int v27; // eax
  unsigned int v28; // r10d
  __int64 v29; // rax
  __int64 v30; // rax
  _BYTE *v31; // r8
  unsigned int v32; // edx
  unsigned __int64 v33; // rcx
  __int64 result; // rax
  unsigned int v35; // r13d
  unsigned int v36; // r14d
  __int64 v37; // r9
  unsigned int *v38; // r14
  unsigned int v39; // r8d
  unsigned int v40; // r10d
  unsigned int v41; // edx
  __int64 v42; // r12
  __int64 v43; // rcx
  unsigned int *v44; // r11
  unsigned int v45; // r8d
  unsigned int v46; // edx
  unsigned int v47; // r10d
  __int64 v48; // r14
  __int64 v49; // rcx
  _BYTE *v50; // rbx
  void *v51; // rcx
  unsigned int v52; // eax
  unsigned int v53; // ecx
  unsigned int v54; // edx
  __int64 v55; // rax
  _BYTE *v56; // rbx
  unsigned __int64 v57; // rcx
  unsigned int v58; // [rsp+30h] [rbp-58h]
  unsigned int v59; // [rsp+34h] [rbp-54h]
  unsigned int v60; // [rsp+A0h] [rbp+18h]

  _BitScanReverse(&v8, a3);
  v10 = 0;
  v60 = v8;
  v58 = v8 + 1;
  v12 = 0;
  v13 = (1 << (v8 + 1)) - a3;
  if ( v13 )
  {
    v14 = a2;
    v15 = v13;
    v12 = v13;
    do
    {
      v10 += *v14++;
      --v15;
    }
    while ( v15 );
  }
  v16 = 0;
  v17 = v10 * v8;
  if ( v12 < a3 )
  {
    v18 = &a2[v12];
    v19 = a3 - v12;
    do
    {
      v16 += *v18++;
      --v19;
    }
    while ( v19 );
  }
  v20 = v16 * (v8 + 1) + v17;
  v21 = a6;
  v22 = Xp10BuildHuffmanEncodings(a1, (_DWORD)a2, a3, 27, (__int64)a5);
  v23 = 2;
  v24 = 2;
  v25 = *(_DWORD *)(a6 + 8);
  v26 = (_BYTE *)(((unsigned __int64)v25 >> 3) + *(_QWORD *)a6);
  v27 = *(_DWORD *)(a6 + 12);
  v28 = 8 - (v25 & 7);
  if ( v25 + 2 <= v27 || (v24 = v27 - v25, v27 != v25) )
  {
    v29 = v28;
    if ( v28 >= v24 )
      v29 = v24;
    *v26 |= (byte_14001BC30[4 * v29] & 2) << (v25 & 7);
    v30 = v24 - (unsigned int)v29;
    v31 = v26 + 1;
    v32 = 2u >> v28;
    if ( (unsigned int)v30 >= 8 )
    {
      v33 = (unsigned __int64)(unsigned int)v30 >> 3;
      do
      {
        *v31 = v32;
        v30 = (unsigned int)(v30 - 8);
        v32 >>= 8;
        ++v31;
        --v33;
      }
      while ( v33 );
    }
    if ( (_DWORD)v30 )
      *v31 |= (unsigned __int8)v32 & byte_14001BC30[4 * v30];
    *(_DWORD *)(a6 + 8) = v25 + v24;
  }
  result = Xp10BuildAndWriteHuffmanTables(a1, a5, a3, a6);
  if ( (int)result >= 0 )
  {
    v35 = v20 + 2;
    v36 = *(_DWORD *)(a6 + 8) - v25 + v22;
    v59 = *(_DWORD *)(a6 + 8) - v25;
    if ( v20 + 2 > v36 )
    {
      v35 = v36;
    }
    else
    {
      v37 = 0LL;
      if ( v13 )
      {
        v38 = a5;
        do
        {
          v39 = 0;
          v40 = v60;
          v41 = v37;
          if ( v60 > 8 )
          {
            v42 = ((v60 - 9) >> 3) + 1;
            do
            {
              v43 = (unsigned __int8)v41;
              v40 -= 8;
              v41 >>= 8;
              v39 = *((unsigned __int8 *)qword_14001BB30 + v43) | (v39 << 8);
              --v42;
            }
            while ( v42 );
          }
          if ( v40 )
            v39 = (*((unsigned __int8 *)qword_14001BB30 + (unsigned __int8)v41) | (v39 << 8)) >> (8 - v40);
          v37 = (unsigned int)(v37 + 1);
          *v38++ = v60 & 0x1F | (32 * v39);
        }
        while ( (unsigned int)v37 < v13 );
        v21 = a6;
        v35 = v20 + 2;
      }
      if ( (unsigned int)v37 < a3 )
      {
        v44 = &a5[v37];
        do
        {
          v45 = 0;
          v46 = v37 + v13;
          v47 = v58;
          if ( v58 > 8 )
          {
            v48 = ((v58 - 9) >> 3) + 1;
            do
            {
              v49 = (unsigned __int8)v46;
              v47 -= 8;
              v46 >>= 8;
              v45 = *((unsigned __int8 *)qword_14001BB30 + v49) | (v45 << 8);
              --v48;
            }
            while ( v48 );
          }
          if ( v47 )
            v45 = (*((unsigned __int8 *)qword_14001BB30 + (unsigned __int8)v46) | (v45 << 8)) >> (8 - v47);
          LODWORD(v37) = v37 + 1;
          *v44++ = v58 & 0x1F | (32 * v45);
        }
        while ( (unsigned int)v37 < a3 );
        v21 = a6;
        v35 = v20 + 2;
      }
      v50 = (_BYTE *)(*(_QWORD *)v21 + ((unsigned __int64)v25 >> 3));
      v51 = (void *)(*(_QWORD *)v21 + ((unsigned __int64)(v25 + 7) >> 3));
      *v50 &= byte_14001BC30[4 * (v25 & 7)];
      memset(v51, 0, (unsigned __int64)(v59 + 7) >> 3);
      v52 = *(_DWORD *)(v21 + 12);
      *(_DWORD *)(v21 + 8) = v25;
      if ( v25 + 2 <= v52 || (v23 = v52 - v25, v52 != v25) )
      {
        v53 = 8 - (v25 & 7);
        if ( v53 >= v23 )
          v53 = v23;
        v54 = 0;
        v55 = v23 - v53;
        v56 = v50 + 1;
        if ( (unsigned int)v55 >= 8 )
        {
          v57 = (unsigned __int64)(unsigned int)v55 >> 3;
          do
          {
            *v56 = v54;
            v55 = (unsigned int)(v55 - 8);
            v54 >>= 8;
            ++v56;
            --v57;
          }
          while ( v57 );
        }
        if ( (_DWORD)v55 )
          *v56 |= (unsigned __int8)v54 & byte_14001BC30[4 * v55];
        *(_DWORD *)(v21 + 8) = v23 + v25;
      }
    }
    *a7 = v35;
    return 0LL;
  }
  return result;
}
