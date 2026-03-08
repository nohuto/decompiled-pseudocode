/*
 * XREFs of RaspInitializeCompositeGlyphData @ 0x1406711FC
 * Callers:
 *     RaspLoadCompositeGlyphData @ 0x140671560 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     RaspFreeMemory @ 0x140382634 (RaspFreeMemory.c)
 *     FioFwReadBytesAtOffset @ 0x140383778 (FioFwReadBytesAtOffset.c)
 *     RaspAllocateMemory @ 0x140383B7C (RaspAllocateMemory.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall RaspInitializeCompositeGlyphData(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int16 a4,
        __int16 a5,
        unsigned __int16 a6,
        unsigned int a7,
        _WORD *a8,
        _QWORD *a9,
        __int64 *a10)
{
  __int64 *v10; // r12
  __int64 v11; // rsi
  int v12; // ebp
  unsigned __int64 v13; // r15
  char *Memory; // rax
  char *v15; // rbx
  _DWORD *v17; // rcx
  __int64 v18; // r8
  char *v19; // r15
  __int16 *v20; // rdx
  int v21; // eax
  int v22; // eax
  _DWORD *v23; // rdx
  char *v24; // rbx
  char *v25; // r14
  _WORD *v26; // r9
  char *v27; // rsi
  __int16 v28; // r13
  __int16 v29; // r10
  __int16 *v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rax
  unsigned __int16 *v33; // rbp
  unsigned __int16 v34; // r8
  __int64 v35; // rdx
  size_t v36; // r8
  __int64 v37; // r9
  __int16 v38; // cx
  __int16 v39; // dx
  __int16 v40; // ax
  unsigned __int16 v41; // r8
  __int16 v42; // r15
  __int64 v43; // r9
  __int64 v44; // r10
  __int64 v45; // rax
  __int16 v46; // cx
  __int16 v47; // ax
  char *v48; // [rsp+20h] [rbp-58h]
  _WORD *v49; // [rsp+28h] [rbp-50h]
  _DWORD *v50; // [rsp+30h] [rbp-48h]
  __int16 v54; // [rsp+A0h] [rbp+28h]
  __int16 v55; // [rsp+A8h] [rbp+30h]

  v10 = a2;
  v11 = a4;
  v12 = a4;
  v13 = a4 + a6 + 8 * (unsigned int)a4 + 2 * (a5 + 41);
  Memory = (char *)RaspAllocateMemory(v13, a10);
  v15 = Memory;
  if ( !Memory )
    return 3221225626LL;
  memset(Memory, 0, v13);
  v17 = v15 + 2;
  v18 = 4LL;
  v48 = v15;
  v19 = v15;
  *(_WORD *)v15 = a5;
  v20 = (__int16 *)(a3 + 2);
  do
  {
    v21 = *v20++;
    *v17++ = v21;
    --v18;
  }
  while ( v18 );
  v22 = *(_DWORD *)(v15 + 2);
  v23 = v15 + 18;
  *((_WORD *)v15 + 11) = a6;
  *((_WORD *)v15 + 12) = v11;
  v24 = v15 + 66;
  v50 = v23;
  *v23 = v22;
  *(_QWORD *)(v19 + 26) = v24;
  v25 = &v24[2 * a5];
  if ( a6 )
  {
    *(_QWORD *)(v19 + 34) = v25;
    v25 += a6;
    FioFwReadBytesAtOffset(a1, a7, a6, &v24[2 * a5]);
    v23 = v50;
  }
  v26 = *(_WORD **)(v19 + 26);
  v27 = &v25[v11];
  *(_QWORD *)(v19 + 42) = v25;
  *(_QWORD *)(v19 + 50) = v27;
  v28 = 0;
  v54 = 0;
  v29 = 0;
  v49 = v26;
  v30 = (__int16 *)&v27[4 * (v12 + 2)];
  *(_QWORD *)(v19 + 58) = v30;
  while ( 1 )
  {
    v31 = *v10;
    if ( (__int64 *)*v10 == v10 )
      break;
    if ( *(__int64 **)(v31 + 8) != v10 || (v32 = *(_QWORD *)v31, *(_QWORD *)(*(_QWORD *)v31 + 8LL) != v31) )
      __fastfail(3u);
    *v10 = v32;
    *(_QWORD *)(v32 + 8) = v10;
    v33 = *(unsigned __int16 **)(v31 + 16);
    if ( _bittest16((const signed __int16 *)(v31 + 24), 9u) )
    {
      *a8 = *(_WORD *)(v31 + 26);
      *v23 = *(_DWORD *)(v33 + 1);
    }
    v34 = 0;
    if ( (__int16)*v33 > 0 )
    {
      do
      {
        v35 = v34++;
        *v26++ = *(_WORD *)(*(_QWORD *)(v33 + 13) + 2 * v35) + v29;
      }
      while ( v34 < (__int16)*v33 );
      v19 = v48;
      v49 = v26;
    }
    v36 = v33[12];
    v55 = v36 + v29;
    memmove(v25, *(const void **)(v33 + 21), v36);
    v37 = v33[12];
    v38 = 0x4000;
    v39 = *(_WORD *)(v31 + 24);
    v25 += v37;
    v40 = 0x4000;
    if ( (v39 & 8) != 0 )
    {
      v40 = *(_WORD *)(v31 + 32);
      v38 = v40;
    }
    else if ( (v39 & 0x40) != 0 )
    {
      v40 = *(_WORD *)(v31 + 32);
      v38 = *(_WORD *)(v31 + 34);
    }
    v41 = 0;
    if ( (_WORD)v37 )
    {
      v42 = v54;
      v43 = v40;
      v44 = v38;
      do
      {
        *(_WORD *)v27 = *(_WORD *)(*(_QWORD *)(v33 + 25) + 4LL * v41);
        *v30 = *(_WORD *)(*(_QWORD *)(v33 + 29) + 4LL * v41);
        *(_WORD *)v27 = v43 * *(__int16 *)v27 / 0x4000;
        v45 = v44 * *v30 / 0x4000;
        *v30 = v45;
        if ( !v41 )
        {
          *(_WORD *)v27 -= v28;
          *v30 -= v42;
          v46 = *(_WORD *)(v31 + 24);
          LOWORD(v45) = *v30;
          if ( (v46 & 2) != 0 )
          {
            if ( (v46 & 1) != 0 )
            {
              *(_WORD *)v27 += *(_WORD *)(v31 + 28);
              v47 = *(_WORD *)(v31 + 30);
            }
            else
            {
              *(_WORD *)v27 += *(char *)(v31 + 28);
              v47 = *(char *)(v31 + 29);
            }
            *v30 += v47;
            LOWORD(v45) = *v30;
          }
        }
        v28 += *(_WORD *)v27;
        v42 += v45;
        v27 += 4;
        v30 += 2;
        ++v41;
      }
      while ( v41 < v33[12] );
      v10 = a2;
      v54 = v42;
      v19 = v48;
    }
    RaspFreeMemory((__int64)v33, a10);
    RaspFreeMemory(v31, a10);
    v26 = v49;
    v29 = v55;
    v23 = v50;
  }
  *a9 = v19;
  return 0LL;
}
