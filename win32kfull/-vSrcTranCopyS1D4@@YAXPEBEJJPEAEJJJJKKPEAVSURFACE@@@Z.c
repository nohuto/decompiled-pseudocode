/*
 * XREFs of ?vSrcTranCopyS1D4@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0297CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcTranCopyS1D4(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        signed int a9)
{
  const unsigned __int8 *v9; // r13
  int v10; // r10d
  int v11; // edi
  __int64 v12; // r14
  int v14; // esi
  char v15; // r11
  __int64 v16; // r15
  unsigned int v17; // r9d
  const unsigned __int8 *v18; // r8
  int v19; // edx
  int v20; // ebx
  unsigned __int8 *v21; // r10
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rbx
  const unsigned __int8 *v25; // rdi
  unsigned int v26; // edx
  char v27; // al
  char v28; // cl
  unsigned __int8 *v29; // rdx
  int v30; // r9d
  const unsigned __int8 *v31; // r10
  __int64 v32; // r13
  const unsigned __int8 *v33; // r12
  unsigned __int8 v34; // r8
  unsigned __int8 *v35; // rbx
  int v36; // edi
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // rax
  __int64 v39; // r12
  int v40; // eax
  int v41; // edi
  const unsigned __int8 *v42; // r8
  __int64 v43; // rax
  const unsigned __int8 *v44; // r14
  char v45; // r10
  int v46; // ebx
  unsigned __int64 v47; // rax
  char *v48; // r8
  unsigned __int8 *v49; // rdx
  __int64 v50; // r14
  char *v51; // rsi
  char v52; // r10
  unsigned __int64 v53; // rbx
  int v54; // edi
  unsigned __int64 v55; // rax
  __int64 v56; // [rsp+0h] [rbp-20h]
  const unsigned __int8 *v57; // [rsp+10h] [rbp-10h]
  __int64 v58; // [rsp+18h] [rbp-8h]
  __int64 v60; // [rsp+60h] [rbp+40h]
  int v61; // [rsp+68h] [rbp+48h]
  unsigned __int8 *v62; // [rsp+78h] [rbp+58h]

  v62 = a4;
  v9 = a1;
  v10 = a5;
  v11 = a7;
  v12 = a2;
  v14 = a2 & 7;
  v15 = a9 | (16 * a9);
  v61 = -1044736;
  a9 = a6 - a5 + a2;
  v16 = a3 * (__int64)a8;
  v17 = ((_BYTE)a6 - (_BYTE)a5 + (_BYTE)a2) & 7;
  v56 = a3;
  v18 = &a1[(__int64)(a2 + 7) >> 3];
  a8 = 8 - v14;
  v57 = &v18[v16];
  v19 = v14 != 0 ? 8 - v14 : 0;
  v20 = a6 - a5 - (v19 + v17);
  if ( v20 > 0 )
  {
    v21 = &v62[(__int64)(v19 + a5) >> 1];
    v22 = a3 - (v20 >> 3);
    v23 = a7 - (v20 >> 1);
    v24 = (__int64)v20 >> 3;
    v58 = v22;
    do
    {
      v25 = &v18[v24];
      do
      {
        v26 = *v18++;
        *v21 = v15 & *((_BYTE *)&v61 + ((unsigned __int64)v26 >> 6)) | *v21 & ~*((_BYTE *)&v61
                                                                               + ((unsigned __int64)v26 >> 6));
        v27 = *((_BYTE *)&v61 + ((v26 >> 4) & 3));
        v21[1] = v15 & v27 | v21[1] & ~v27;
        v28 = *((_BYTE *)&v61 + (v26 & 3));
        v21[2] = v15 & *((_BYTE *)&v61 + ((v26 >> 2) & 3)) | v21[2] & ~*((_BYTE *)&v61 + ((v26 >> 2) & 3));
        v21[3] = v15 & v28 | v21[3] & ~v28;
        v21 += 4;
      }
      while ( v18 != v25 );
      v18 += v58;
      v21 += v23;
    }
    while ( v18 != v57 );
    v11 = a7;
    v9 = a1;
    v10 = a5;
  }
  if ( v14 )
  {
    v29 = &v62[(__int64)v10 >> 1];
    if ( (((unsigned int)v12 ^ a9) & 0xFFFFFFF8) == 0 )
    {
      v30 = v17 - v14;
      if ( v30 > 0 )
      {
        v31 = &v9[v12 >> 3];
        v32 = v11;
        v33 = &v31[v16];
        do
        {
          v34 = *v31 << v14;
          v35 = v29;
          v36 = v30;
          if ( (v14 & 1) != 0 )
          {
            if ( (v34 & 0x80u) != 0 )
              *v29 ^= (*v29 ^ v15) & 0xF;
            v34 *= 2;
            v35 = v29 + 1;
            v36 = v30 - 1;
          }
          if ( v36 >= 2 )
          {
            v37 = (unsigned __int64)(unsigned int)v36 >> 1;
            v36 -= 2 * ((unsigned int)v36 >> 1);
            do
            {
              v38 = (unsigned __int64)v34 >> 6;
              v34 *= 4;
              *v35 = v15 & *((_BYTE *)&v61 + v38) | *v35 & ~*((_BYTE *)&v61 + v38);
              ++v35;
              --v37;
            }
            while ( v37 );
          }
          if ( (((v36 & 1) != 0) & (v34 >> 7)) != 0 )
            *v35 = v15 ^ (*v35 ^ v15) & 0xF;
          v31 += v56;
          v29 += v32;
        }
        while ( v31 != v33 );
      }
      return;
    }
    v39 = v56;
    v40 = v11;
    v41 = a8;
    v42 = &v9[v12 >> 3];
    v43 = v40 - ((9 - v14) >> 1);
    v60 = (int)v43;
    v44 = &v42[v16];
    do
    {
      v45 = *v42 << v14;
      v46 = v41;
      if ( (v41 & 1) != 0 )
      {
        if ( v45 < 0 )
        {
          *v29 ^= (*v29 ^ v15) & 0xF;
          v43 = v60;
        }
        v45 *= 2;
        ++v29;
        v46 = v41 - 1;
      }
      if ( v46 )
      {
        do
        {
          v47 = (unsigned __int64)(unsigned __int8)v45 >> 6;
          v45 *= 4;
          *v29 = v15 & *((_BYTE *)&v61 + v47) | *v29 & ~*((_BYTE *)&v61 + v47);
          ++v29;
          v46 -= 2;
        }
        while ( v46 );
        v43 = v60;
      }
      v42 += v56;
      v29 += v43;
    }
    while ( v42 != v44 );
    v11 = a7;
  }
  else
  {
    v39 = v56;
  }
  if ( v17 )
  {
    v48 = (char *)&v9[(__int64)a9 >> 3];
    v49 = &v62[(__int64)(int)(a6 - v17) >> 1];
    v50 = (int)(v11 - ((v17 + 1) >> 1));
    v51 = &v48[v16];
    do
    {
      v52 = *v48;
      if ( v17 < 2 )
        goto LABEL_39;
      v53 = (unsigned __int64)v17 >> 1;
      v54 = v17 - 2 * v53;
      do
      {
        v55 = (unsigned __int64)(unsigned __int8)v52 >> 6;
        v52 *= 4;
        *v49 = v15 & *((_BYTE *)&v61 + v55) | *v49 & ~*((_BYTE *)&v61 + v55);
        ++v49;
        --v53;
      }
      while ( v53 );
      if ( v54 )
      {
LABEL_39:
        if ( v52 < 0 )
          *v49 = v15 ^ (*v49 ^ v15) & 0xF;
        ++v49;
      }
      v48 += v39;
      v49 += v50;
    }
    while ( v48 != v51 );
  }
}
