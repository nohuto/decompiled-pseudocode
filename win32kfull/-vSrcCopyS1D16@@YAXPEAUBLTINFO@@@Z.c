/*
 * XREFs of ?vSrcCopyS1D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02ED9C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D16(struct BLTINFO *a1)
{
  int v1; // r14d
  struct BLTINFO *v2; // r9
  unsigned int v3; // r11d
  __int16 *v4; // r10
  unsigned int v5; // r8d
  __int64 i; // rcx
  __int16 v7; // ax
  int v8; // r8d
  int v9; // r13d
  unsigned int v10; // r15d
  int v11; // r12d
  char v12; // al
  unsigned int v13; // ebx
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // si
  int v16; // eax
  int v17; // r11d
  __int64 v18; // rdx
  _DWORD *v19; // r10
  int v20; // ecx
  _BYTE *v21; // r8
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r15
  _BYTE *v25; // rdx
  unsigned int v26; // ecx
  char v27; // r9
  __int64 v28; // r15
  _BYTE *v29; // r14
  unsigned __int8 v30; // al
  unsigned __int64 v31; // rdx
  BOOL v32; // ecx
  unsigned __int8 v33; // dl
  int v34; // r10d
  _BYTE *v35; // r8
  _WORD *v36; // rdx
  char v37; // r9
  __int64 v38; // r15
  __int64 v39; // r12
  unsigned __int8 v40; // r11
  _WORD *k; // rcx
  unsigned __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // r13
  unsigned __int8 v45; // r11
  _WORD *m; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // r12
  unsigned __int8 v49; // r11
  _WORD *j; // rcx
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  _WORD *v53; // rdx
  _BYTE *v54; // r8
  int v55; // r10d
  unsigned int v56; // ecx
  unsigned int v57; // eax
  __int64 v58; // r14
  unsigned __int8 v59; // r9
  _WORD *ii; // rcx
  unsigned __int64 v61; // rax
  _WORD *v62; // rcx
  unsigned __int8 n; // r9
  unsigned __int64 v64; // rax
  char v65; // [rsp+0h] [rbp-60h]
  int v66; // [rsp+4h] [rbp-5Ch]
  _WORD v67[2]; // [rsp+8h] [rbp-58h]
  int v68; // [rsp+Ch] [rbp-54h]
  int v69; // [rsp+10h] [rbp-50h]
  int v70; // [rsp+14h] [rbp-4Ch]
  unsigned int v71; // [rsp+18h] [rbp-48h]
  int v72; // [rsp+1Ch] [rbp-44h]
  __int64 v73; // [rsp+20h] [rbp-40h]
  __int64 v74; // [rsp+30h] [rbp-30h]
  struct BLTINFO *v75; // [rsp+38h] [rbp-28h]
  _DWORD v76[4]; // [rsp+40h] [rbp-20h]

  v1 = *((_DWORD *)a1 + 14);
  v2 = a1;
  v3 = *((_DWORD *)a1 + 7);
  v75 = a1;
  v70 = 1;
  v72 = v3 + v1;
  v4 = *(__int16 **)(*(_QWORD *)a1 + 16LL);
  v5 = (*((_DWORD *)v4 + 1) << 16) | *((_DWORD *)v4 + 1);
  v76[0] = (*(_DWORD *)v4 << 16) | *(_DWORD *)v4;
  v76[3] = v5;
  v76[1] = HIWORD(v76[0]) | (v5 << 16);
  v76[2] = (v76[0] << 16) | HIWORD(v5);
  for ( i = 0LL; i < 2; ++i )
  {
    v7 = *v4;
    v4 += 2;
    v67[i] = v7;
  }
  v8 = *((_DWORD *)v2 + 12);
  v9 = *((_DWORD *)v2 + 11);
  v10 = v8 & 7;
  v11 = *((_DWORD *)v2 + 10);
  v12 = *((_BYTE *)v2 + 48) & 7;
  v71 = v10;
  v13 = v1 & 7;
  v68 = v9;
  v66 = v11;
  v14 = v12 - v13;
  v15 = v12 - v13 + 8;
  v16 = 8;
  if ( v10 >= v13 )
    v15 = v14;
  LOBYTE(v16) = 8 - v15;
  v69 = v16;
  if ( v72 >> 3 == v1 >> 3 )
  {
    v33 = 0;
    v65 = 0;
    v32 = (int)(v3 + v10) > 8;
  }
  else
  {
    v17 = *((_DWORD *)v2 + 8);
    v65 = 1;
    LODWORD(v18) = (v72 >> 3) - ((v1 + 7) >> 3);
    v19 = (_DWORD *)(*((_QWORD *)v2 + 2) + (int)(2 * ((v1 + 7) & 0xFFFFFFF8)));
    v20 = v9 - 16 * v18;
    v21 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)(int)(v8 + (-v13 & 7)) >> 3));
    LODWORD(v22) = v11 - v18;
    if ( v17 )
    {
      v18 = (int)v18;
      v22 = (int)v22;
      v74 = (int)v18;
      v73 = (int)v22;
      v23 = v20;
      if ( v15 )
      {
        v27 = v69;
        v28 = (int)v22;
        do
        {
          v29 = &v21[v18];
          --v17;
          v30 = *v21 << v15;
          if ( v21 != &v21[v18] )
          {
            do
            {
              v31 = v30 | ((unsigned __int64)(unsigned __int8)*++v21 >> v27);
              *v19 = v76[v31 >> 6];
              v19[1] = v76[(v31 >> 4) & 3];
              v19[2] = v76[(v31 >> 2) & 3];
              v19[3] = v76[v31 & 3];
              v19 += 4;
              v30 = *v21 << v15;
            }
            while ( v21 != v29 );
            v28 = v73;
            v18 = v74;
          }
          v19 = (_DWORD *)((char *)v19 + v20);
          v21 += v28;
        }
        while ( v17 );
        v2 = v75;
        v9 = v68;
      }
      else
      {
        v24 = (int)v18;
        do
        {
          --v17;
          v25 = &v21[v24];
          if ( v21 != &v21[v24] )
          {
            do
            {
              v26 = (unsigned __int8)*v21++;
              *v19 = v76[(unsigned __int64)v26 >> 6];
              v19[1] = v76[(v26 >> 4) & 3];
              v19[2] = v76[(v26 >> 2) & 3];
              v19[3] = v76[v26 & 3];
              v19 += 4;
            }
            while ( v21 != v25 );
            v22 = v73;
          }
          v19 = (_DWORD *)((char *)v19 + v23);
          v21 += v22;
        }
        while ( v17 );
      }
      v10 = v71;
    }
    v32 = v70;
    v33 = 1;
    v3 = 8 - v13;
  }
  if ( v13 | v33 ^ 1 )
  {
    v34 = *((_DWORD *)v2 + 8);
    v35 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    v36 = (_WORD *)(*((_QWORD *)v2 + 2) + 2 * *((_DWORD *)v2 + 14));
    if ( v34 )
    {
      if ( v10 <= v13 )
      {
        v48 = (int)(2 * v3);
        do
        {
          --v34;
          v49 = *v35 << v10;
          for ( j = v36; j != (_WORD *)((char *)v36 + v48); ++j )
          {
            v51 = v49;
            v49 *= 2;
            *j = v67[v51 >> 7];
          }
          v36 = (_WORD *)((char *)v36 + v9);
          v35 += v66;
        }
        while ( v34 );
      }
      else
      {
        if ( v32 )
        {
          v37 = v69;
          v70 = v15;
          v38 = v11;
          v39 = (int)(2 * v3);
          do
          {
            --v34;
            v40 = ((unsigned __int8)(*v35 << v15) | (unsigned __int8)(v35[1] >> v37)) << v13;
            for ( k = v36; k != (_WORD *)((char *)v36 + v39); ++k )
            {
              v42 = v40;
              v40 *= 2;
              *k = v67[v42 >> 7];
            }
            v36 = (_WORD *)((char *)v36 + v9);
            v35 += v38;
          }
          while ( v34 );
          v2 = v75;
        }
        else
        {
          v43 = v68;
          v44 = (int)(2 * v3);
          do
          {
            --v34;
            v45 = *v35 << v15 << v13;
            for ( m = v36; m != (_WORD *)((char *)v36 + v44); ++m )
            {
              v47 = v45;
              v45 *= 2;
              *m = v67[v47 >> 7];
            }
            v36 = (_WORD *)((char *)v36 + v43);
            v35 += v11;
          }
          while ( v34 );
        }
        v9 = v68;
      }
      v11 = v66;
    }
    v33 = v65;
  }
  if ( (v72 & 7) != 0 )
  {
    if ( v33 )
    {
      v52 = *((int *)v2 + 13);
      v53 = (_WORD *)(*((_QWORD *)v2 + 2) + (int)(2 * (v72 & 0xFFFFFFF8)));
      v54 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((v52 - 1) >> 3));
      v55 = *((_DWORD *)v2 + 8);
      v56 = ((_BYTE)v52 - 1) & 7;
      v57 = ((_BYTE)v72 - 1) & 7;
      if ( v55 )
      {
        v58 = 2 * v57 + 2;
        if ( v56 < v57 )
        {
          do
          {
            --v55;
            v62 = v53;
            for ( n = (*v54 >> v69) | (*(v54 - 1) << v15); v62 != (_WORD *)((char *)v53 + v58); ++v62 )
            {
              v64 = n;
              n *= 2;
              *v62 = v67[v64 >> 7];
            }
            v53 = (_WORD *)((char *)v53 + v9);
            v54 += v11;
          }
          while ( v55 );
        }
        else
        {
          do
          {
            --v55;
            v59 = *v54 << v15;
            for ( ii = v53; ii != (_WORD *)((char *)v53 + v58); ++ii )
            {
              v61 = v59;
              v59 *= 2;
              *ii = v67[v61 >> 7];
            }
            v53 = (_WORD *)((char *)v53 + v9);
            v54 += v11;
          }
          while ( v55 );
        }
      }
    }
  }
}
