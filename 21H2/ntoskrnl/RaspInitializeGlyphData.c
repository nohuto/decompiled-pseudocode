/*
 * XREFs of RaspInitializeGlyphData @ 0x1403B3230
 * Callers:
 *     RaspLoadGlyphData @ 0x1403B3B0C (RaspLoadGlyphData.c)
 * Callees:
 *     RaspFreeMemory @ 0x1403B2508 (RaspFreeMemory.c)
 *     FioFwReadUshortAtOffset @ 0x1403B31FC (FioFwReadUshortAtOffset.c)
 *     FioFwReadBytesAtOffset @ 0x1403B35FC (FioFwReadBytesAtOffset.c)
 *     RaspAllocateMemory @ 0x1403B3A08 (RaspAllocateMemory.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall RaspInitializeGlyphData(__int64 a1, int a2, __int64 *a3, _QWORD *a4)
{
  int v6; // ecx
  unsigned int v7; // ebx
  __int64 v8; // r12
  unsigned int v9; // ebx
  unsigned int v10; // r15d
  unsigned int v11; // ebx
  unsigned __int16 v12; // r13
  unsigned __int16 v13; // bx
  char *Memory; // rax
  char *v15; // rdi
  __int64 v16; // r14
  int v17; // ecx
  _WORD *v18; // rdi
  int v19; // eax
  int v20; // esi
  unsigned int v21; // esi
  __int64 v22; // rbx
  unsigned int v23; // esi
  _QWORD *v24; // r15
  unsigned int v25; // esi
  char *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r8
  _DWORD *v29; // r9
  __int64 v30; // rbx
  int v31; // r15d
  __int64 v32; // r11
  __int64 v33; // r8
  _DWORD *v34; // r9
  __int64 v35; // r10
  __int64 v36; // rdx
  unsigned int v37; // esi
  char *v38; // rdi
  __int16 v39; // r13
  char *v40; // rbx
  char v41; // dl
  char *v42; // rax
  __int16 v43; // di
  char *v44; // rbx
  char v45; // cl
  _QWORD *v46; // rdx
  __int64 v47; // rcx
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned int v51; // edx
  __int16 v52; // [rsp+20h] [rbp-48h] BYREF
  size_t Size; // [rsp+28h] [rbp-40h]
  __int64 v54; // [rsp+30h] [rbp-38h]
  __int64 v55; // [rsp+38h] [rbp-30h]
  __int64 v56; // [rsp+48h] [rbp-20h] BYREF
  __int16 v57[12]; // [rsp+50h] [rbp-18h] BYREF
  char *v58; // [rsp+B0h] [rbp+48h] BYREF
  int v59; // [rsp+B8h] [rbp+50h]
  __int64 *v60; // [rsp+C0h] [rbp+58h]
  _QWORD *v61; // [rsp+C8h] [rbp+60h]

  v61 = a4;
  v60 = a3;
  v59 = a2;
  v56 = 0LL;
  v57[0] = 0;
  LOWORD(v58) = 0;
  v52 = 0;
  if ( !a1 )
    return 3221225473LL;
  v6 = *(_DWORD *)(a1 + 60);
  if ( !v6 )
    return 3221225473LL;
  v7 = v6 + a2;
  v55 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  v8 = v55;
  FioFwReadUshortAtOffset(v55, (unsigned int)(v6 + a2), &v56);
  FioFwReadUshortAtOffset(v55, v7 + 2, (_WORD *)&v56 + 1);
  v7 += 4;
  FioFwReadUshortAtOffset(v55, v7, (_WORD *)&v56 + 2);
  FioFwReadUshortAtOffset(v55, v7 + 2, (_WORD *)&v56 + 3);
  v9 = v7 + 4;
  FioFwReadUshortAtOffset(v55, v9, v57);
  v10 = (unsigned __int16)v56;
  if ( (v56 & 0x8000u) != 0LL )
    return 3221225485LL;
  if ( (_WORD)v56 )
  {
    v11 = v9 + 2 * (__int16)v56;
    FioFwReadUshortAtOffset(v55, v11, &v52);
    v12 = v52 + 1;
    FioFwReadUshortAtOffset(v8, v11 + 2, &v58);
    v13 = (unsigned __int16)v58;
    v54 = (unsigned __int16)v58;
    Size = v12 + (unsigned __int64)(unsigned __int16)v58 + 8LL * v12 + 2 * ((__int16)v10 + 41LL);
    Memory = (char *)RaspAllocateMemory(Size);
    v15 = Memory;
    if ( Memory )
    {
      memset(Memory, 0, Size);
      v16 = (__int64)v15;
      v17 = SWORD1(v56);
      *(_DWORD *)(v15 + 6) = SWORD2(v56);
      *(_DWORD *)(v15 + 10) = SHIWORD(v56);
      *(_DWORD *)(v15 + 14) = v57[0];
      *(_WORD *)v15 = v10;
      *(_DWORD *)(v15 + 2) = v17;
      *(_DWORD *)(v15 + 18) = v17;
      *((_WORD *)v15 + 11) = v13;
      *((_WORD *)v15 + 12) = v12;
      v18 = v15 + 66;
      v19 = *(_DWORD *)(a1 + 60);
      v20 = v59 + 10;
      *(_QWORD *)(v16 + 26) = v18;
      v21 = v19 + v20;
      if ( (__int16)v10 > 0 )
      {
        v22 = v10;
        do
        {
          FioFwReadUshortAtOffset(v8, v21, v18);
          v21 += 2;
          ++v18;
          --v22;
        }
        while ( v22 );
        v13 = (unsigned __int16)v58;
      }
      v23 = v21 + 2;
      *(_QWORD *)(v16 + 34) = v18;
      FioFwReadBytesAtOffset(v8, v23, v13, v18);
      v24 = v61;
      v25 = v13 + v23;
      v26 = (char *)v18 + v54;
      *(_QWORD *)(v16 + 42) = v26;
      v27 = RaspAllocateMemory(v12);
      v54 = v27;
      v30 = v27;
      if ( v27 )
      {
        v31 = v12;
        FioFwReadBytesAtOffset(v8, v25, v12, v27);
        LODWORD(v32) = 0;
        v33 = 0LL;
        v34 = 0LL;
        if ( v12 )
        {
          do
          {
            v35 = (unsigned int)v33;
            v36 = (__int16)v34;
            LOWORD(v34) = (_WORD)v34 + 1;
            *(_BYTE *)(v36 + *(_QWORD *)(v16 + 42)) = *(_BYTE *)((unsigned int)v33 + v30);
            if ( (*(_BYTE *)((unsigned int)v33 + v30) & 8) != 0 )
            {
              v33 = (unsigned int)(v33 + 1);
              if ( *(_BYTE *)(v33 + v30) )
              {
                v32 = *(unsigned __int8 *)(v33 + v30);
                do
                {
                  v49 = (__int16)v34;
                  LOWORD(v34) = (_WORD)v34 + 1;
                  *(_BYTE *)(v49 + *(_QWORD *)(v16 + 42)) = *(_BYTE *)(v35 + v30);
                  --v32;
                }
                while ( v32 );
                v31 = v12;
              }
            }
            v33 = (unsigned int)(v33 + 1);
          }
          while ( (__int16)v34 < v31 );
          v8 = v55;
        }
        v37 = v33 + v25;
        v38 = &v26[v12];
        v39 = v32;
        *(_QWORD *)(v16 + 50) = v38;
        if ( v31 )
        {
          while ( 1 )
          {
            v40 = &v38[4 * v39];
            *(_DWORD *)v40 = v32;
            v41 = *(_BYTE *)(v39 + *(_QWORD *)(v16 + 42));
            if ( (v41 & 2) != 0 )
            {
              FioFwReadBytesAtOffset(v8, v37++, 1LL, &v38[4 * v39]);
              if ( (*(_BYTE *)(v39 + *(_QWORD *)(v16 + 42)) & 0x10) == 0 )
                *(_DWORD *)v40 = -*(_DWORD *)v40;
            }
            else
            {
              if ( (v41 & 0x10) != 0 )
                goto LABEL_20;
              FioFwReadUshortAtOffset(v8, v37, &v38[4 * v39]);
              v37 += 2;
            }
            LODWORD(v32) = 0;
LABEL_20:
            if ( ++v39 >= v31 )
            {
              v38 = *(char **)(v16 + 50);
              break;
            }
          }
        }
        v42 = &v38[4 * v31 + 8];
        v43 = v32;
        v58 = v42;
        *(_QWORD *)(v16 + 58) = v42;
        if ( v31 )
        {
          do
          {
            v44 = &v42[4 * v43];
            *(_DWORD *)v44 = v32;
            v45 = *(_BYTE *)(*(_QWORD *)(v16 + 42) + v43);
            if ( (v45 & 4) != 0 )
            {
              FioFwReadBytesAtOffset(v8, v37++, 1LL, v44);
              if ( (*(_BYTE *)(*(_QWORD *)(v16 + 42) + v43) & 0x20) == 0 )
                *(_DWORD *)v44 = -*(_DWORD *)v44;
            }
            else
            {
              if ( (v45 & 0x20) != 0 )
                goto LABEL_27;
              FioFwReadUshortAtOffset(v8, v37, v44);
              v37 += 2;
            }
            LODWORD(v32) = 0;
LABEL_27:
            ++v43;
            v42 = v58;
          }
          while ( v43 < v31 );
        }
        v46 = v61;
        v47 = v54;
        *v60 = v16;
        RaspFreeMemory(v47, v46, v33, v34);
        return 0LL;
      }
      RaspFreeMemory(v16, v24, v28, v29);
    }
  }
  else
  {
    v50 = RaspAllocateMemory(66LL);
    if ( v50 )
    {
      v51 = SWORD1(v56);
      *(_DWORD *)(v50 + 6) = SWORD2(v56);
      *(_DWORD *)(v50 + 10) = SHIWORD(v56);
      *(_DWORD *)(v50 + 14) = v57[0];
      *(_WORD *)v50 = 0;
      *(_DWORD *)(v50 + 2) = v51;
      *(_QWORD *)(v50 + 18) = v51;
      *a3 = v50;
      return 0LL;
    }
  }
  return 3221225626LL;
}
