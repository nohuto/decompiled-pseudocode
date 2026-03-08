/*
 * XREFs of ?vSrcOpaqCopyS1D4@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0296D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcOpaqCopyS1D4(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        unsigned int a10)
{
  char v10; // r10
  int v11; // r13d
  __int64 v13; // r14
  int v14; // edx
  int v15; // ebx
  __int64 v16; // r12
  signed int v17; // r10d
  const unsigned __int8 *v18; // r8
  unsigned int v19; // r11d
  int v20; // r9d
  int v21; // edi
  int v22; // r15d
  unsigned __int8 *v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rdi
  const unsigned __int8 *v26; // r10
  unsigned int v27; // ecx
  unsigned __int8 *v28; // r8
  int v29; // r11d
  __int64 v30; // r10
  char v31; // r14
  const unsigned __int8 *v32; // r10
  int v33; // ebx
  const unsigned __int8 *v34; // r15
  unsigned __int8 v35; // r9
  unsigned __int8 *v36; // rdi
  int v37; // ecx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  const unsigned __int8 *v40; // r10
  int v41; // eax
  char v42; // bl
  __int64 v43; // r15
  const unsigned __int8 *v44; // r14
  unsigned __int8 v45; // r9
  int v46; // edi
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  const unsigned __int8 *v49; // r9
  unsigned __int8 *v50; // r8
  const unsigned __int8 *v51; // rbx
  unsigned __int8 v52; // r10
  unsigned __int64 v53; // rcx
  int v54; // edx
  unsigned __int64 v55; // rax
  __int64 v56; // [rsp+0h] [rbp-10h]
  const unsigned __int8 *v57; // [rsp+8h] [rbp-8h]
  const unsigned __int8 *v58; // [rsp+50h] [rbp+40h]
  int v60; // [rsp+88h] [rbp+78h]
  signed int v61; // [rsp+90h] [rbp+80h]

  v58 = a1;
  v10 = a10;
  v11 = a6;
  LOBYTE(a10) = a10 | (16 * a10);
  BYTE1(a10) = a9 | (16 * a10);
  HIBYTE(a10) = a9 | (16 * BYTE1(a10));
  v13 = a2;
  v14 = a5;
  BYTE2(a10) = v10 | (16 * HIBYTE(a10));
  v15 = v13 & 7;
  v56 = a3;
  v16 = a3 * (__int64)a8;
  v17 = a6 - a5 + v13;
  v18 = &a1[(__int64)((int)v13 + 7) >> 3];
  v60 = 8 - v15;
  v61 = v17;
  v19 = ((_BYTE)a6 - (_BYTE)a5 + (_BYTE)v13) & 7;
  v57 = &v18[v16];
  v20 = v15 != 0 ? 8 - v15 : 0;
  v21 = a6 - a5 - (v20 + v19);
  if ( v21 > 0 )
  {
    v22 = a3 - (v21 >> 3);
    v23 = &a4[(__int64)(v20 + a5) >> 1];
    v24 = (__int64)v21 >> 3;
    v25 = a7 - (v21 >> 1);
    do
    {
      v26 = &v18[v24];
      do
      {
        v27 = *v18++;
        *v23 = *((_BYTE *)&a10 + ((unsigned __int64)v27 >> 6));
        v23[1] = *((_BYTE *)&a10 + ((v27 >> 4) & 3));
        v23[2] = *((_BYTE *)&a10 + ((v27 >> 2) & 3));
        v23[3] = *((_BYTE *)&a10 + (v27 & 3));
        v23 += 4;
      }
      while ( v18 != v26 );
      v23 += v25;
      v18 += v22;
    }
    while ( v18 != v57 );
    a1 = v58;
    v14 = a5;
    v17 = v61;
  }
  if ( (v13 & 7) != 0 )
  {
    v28 = &a4[(__int64)v14 >> 1];
    if ( (((unsigned int)v13 ^ v17) & 0xFFFFFFF8) == 0 )
    {
      v29 = v19 - v15;
      if ( v29 > 0 )
      {
        v30 = v13;
        v31 = v15 & 0xFE;
        v32 = &a1[v30 >> 3];
        v33 = v15 & 1;
        v34 = &v32[v16];
        do
        {
          v35 = *v32 << v31;
          v36 = v28;
          v37 = v29;
          if ( v33 )
          {
            v36 = v28 + 1;
            v37 = v29 - 1;
            *v28 ^= (*v28 ^ *((_BYTE *)&a10 + ((unsigned __int64)v35 >> 6))) & 0xF;
            v35 *= 4;
          }
          if ( v37 >= 2 )
          {
            v38 = (unsigned __int64)(unsigned int)v37 >> 1;
            v37 -= 2 * ((unsigned int)v37 >> 1);
            do
            {
              v39 = (unsigned __int64)v35 >> 6;
              v35 *= 4;
              *v36++ = *((_BYTE *)&a10 + v39);
              --v38;
            }
            while ( v38 );
          }
          if ( v37 )
            *v36 = *((_BYTE *)&a10 + ((unsigned __int64)v35 >> 6)) ^ (*v36 ^ *((_BYTE *)&a10
                                                                             + ((unsigned __int64)v35 >> 6))) & 0xF;
          v32 += v56;
          v28 += a7;
        }
        while ( v32 != v34 );
      }
      return;
    }
    v40 = &a1[v13 >> 3];
    v41 = (9 - v15) >> 1;
    v42 = v13 & 6;
    v43 = a7 - v41;
    v44 = &v40[v16];
    do
    {
      v45 = *v40 << v42;
      v46 = v60;
      if ( (v60 & 1) != 0 )
      {
        v47 = (unsigned __int64)v45 >> 6;
        v45 *= 4;
        *v28 ^= (*v28 ^ *((_BYTE *)&a10 + v47)) & 0xF;
        ++v28;
        v46 = v60 - 1;
      }
      for ( ; v46; v46 -= 2 )
      {
        v48 = (unsigned __int64)v45 >> 6;
        v45 *= 4;
        *v28++ = *((_BYTE *)&a10 + v48);
      }
      v40 += v56;
      v28 += v43;
    }
    while ( v40 != v44 );
    v11 = a6;
  }
  if ( v19 )
  {
    v49 = &v58[(__int64)v61 >> 3];
    v50 = &a4[(__int64)(int)(v11 - v19) >> 1];
    v51 = &v49[v16];
    do
    {
      v52 = *v49;
      if ( v19 < 2 )
        goto LABEL_33;
      v53 = (unsigned __int64)v19 >> 1;
      v54 = v19 - 2 * v53;
      do
      {
        v55 = (unsigned __int64)v52 >> 6;
        v52 *= 4;
        *v50++ = *((_BYTE *)&a10 + v55);
        --v53;
      }
      while ( v53 );
      if ( v54 )
      {
LABEL_33:
        *v50 = *((_BYTE *)&a10 + ((unsigned __int64)v52 >> 6)) ^ (*v50 ^ *((_BYTE *)&a10 + ((unsigned __int64)v52 >> 6))) & 0xF;
        ++v50;
      }
      v49 += v56;
      v50 += (int)(a7 - ((v19 + 1) >> 1));
    }
    while ( v49 != v51 );
  }
}
