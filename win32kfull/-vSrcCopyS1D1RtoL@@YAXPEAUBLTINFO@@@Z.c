void __fastcall vSrcCopyS1D1RtoL(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r13
  int v2; // r9d
  _BYTE *v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // r15
  unsigned int v6; // edi
  __int64 v7; // r12
  BOOL v8; // r14d
  int v9; // r8d
  char v10; // dl
  char v11; // r10
  char v12; // r11
  int v13; // r8d
  int v14; // r10d
  unsigned __int8 *v15; // r9
  _BYTE *v16; // r8
  char v17; // cl
  unsigned __int8 v18; // dl
  char v19; // di
  char v20; // si
  char v21; // dl
  unsigned __int8 v22; // al
  char v23; // dl
  char v24; // cl
  int v25; // eax
  int v26; // r9d
  char v27; // r11
  __int64 v28; // rcx
  int v29; // r14d
  _BYTE *v30; // rsi
  unsigned __int8 *v31; // rdi
  int v32; // eax
  int v33; // ecx
  int v34; // edx
  size_t v35; // r15
  __int64 v36; // rbp
  unsigned int v37; // edx
  char v38; // bp
  __int64 v39; // rax
  int v40; // r9d
  unsigned __int8 *v41; // r8
  unsigned int v42; // eax
  unsigned __int8 v43; // dl
  unsigned __int8 v44; // al
  __int64 v45; // r15
  __int64 v46; // rax
  char v47; // r8
  unsigned __int8 *v48; // r9
  char v49; // al
  unsigned __int8 v50; // r8
  unsigned __int8 v51; // dl
  char v52; // al
  int v53; // [rsp+20h] [rbp-78h]
  int v54; // [rsp+28h] [rbp-70h]
  __int64 v55; // [rsp+28h] [rbp-70h]
  int v56; // [rsp+34h] [rbp-64h]
  int v57; // [rsp+38h] [rbp-60h]
  int v58; // [rsp+40h] [rbp-58h]
  char v60; // [rsp+A8h] [rbp+10h]
  char v61; // [rsp+B0h] [rbp+18h]
  int v62; // [rsp+B8h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 14);
  v57 = *((_DWORD *)a1 + 12);
  v3 = 0LL;
  v4 = v57 & 7;
  v5 = *((int *)a1 + 11);
  v6 = v2 & 7;
  v7 = *((int *)a1 + 10);
  v58 = *((_DWORD *)a1 + 11);
  v8 = 1;
  v9 = *((_DWORD *)a1 + 7);
  v10 = (v57 & 7) - (v2 & 7) + 8;
  if ( v4 >= v6 )
    v10 = (v57 & 7) - v6;
  v62 = v2 >> 3;
  v11 = 8 - v10;
  v61 = v10;
  v60 = 8 - v10;
  v56 = v2 - v9;
  v53 = (v2 - v9) >> 3;
  v12 = -1 << (7 - v6);
  if ( v53 == v2 >> 3 )
  {
    v12 &= 255 >> ((v56 + 1) & 7);
    if ( v4 < v6 )
      v8 = (int)(v4 - v9) < -1;
  }
  v13 = ((_BYTE)v6 + 1) & 7;
  v54 = v13;
  if ( v13 | (v53 == v62) )
  {
    v14 = *((_DWORD *)a1 + 8);
    v15 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((__int64)v57 >> 3));
    v16 = (_BYTE *)(*((_QWORD *)a1 + 2) + ((__int64)*((int *)a1 + 14) >> 3));
    if ( v14 )
    {
      if ( v4 <= v6 )
      {
        if ( v4 >= v6 )
        {
          do
          {
            v24 = *v16 & ~v12 | v12 & *v15;
            v15 += v7;
            *v16 = v24;
            v16 += v5;
            --v14;
          }
          while ( v14 );
        }
        else
        {
          v19 = ~v12;
          if ( v8 )
          {
            v20 = v10;
            do
            {
              v21 = *(v15 - 1);
              v22 = *v15;
              v15 += v7;
              *v16 = *v16 & v19 | v12 & ((v22 >> v60) | (v21 << v20));
              v16 += v5;
              --v14;
            }
            while ( v14 );
          }
          else
          {
            do
            {
              v23 = *v16 & v19 | v12 & (*v15 >> v60);
              v15 += v7;
              *v16 = v23;
              v16 += v5;
              --v14;
            }
            while ( v14 );
          }
          v1 = a1;
        }
      }
      else
      {
        v17 = v10;
        do
        {
          v18 = *v15;
          v15 += v7;
          *v16 = *v16 & ~v12 | v12 & (v18 << v17);
          v16 += v5;
          --v14;
        }
        while ( v14 );
      }
    }
    v11 = v60;
    v13 = v54;
  }
  v25 = v62;
  v26 = v53;
  v27 = v61;
  if ( v53 != v62 )
  {
    v28 = *((_QWORD *)v1 + 2);
    v29 = *((_DWORD *)v1 + 8);
    v30 = (_BYTE *)(v28 + ((__int64)(*((_DWORD *)v1 + 14) - 7) >> 3));
    v3 = (_BYTE *)(v28 + ((__int64)v56 >> 3));
    v31 = (unsigned __int8 *)(*((_QWORD *)v1 + 1) + ((__int64)(*((_DWORD *)v1 + 12) - v13) >> 3));
    v32 = ((*((_DWORD *)v1 + 14) - 7) >> 3) - (v56 >> 3);
    v33 = v5 + v32;
    v34 = v7 + v32;
    if ( v29 )
    {
      if ( v61 )
      {
        v45 = v32;
        v46 = v33;
        do
        {
          v47 = *v31 >> v11;
          v48 = &v31[-v45];
          --v29;
          if ( v31 != &v31[-v45] )
          {
            do
            {
              v49 = v47 | (*--v31 << v61);
              v50 = *v31;
              *v30-- = v49;
              v47 = v50 >> v11;
            }
            while ( v31 != v48 );
            v46 = v33;
          }
          v30 += v46;
          v31 += v34;
        }
        while ( v29 );
        LODWORD(v5) = v58;
      }
      else
      {
        v55 = v5;
        v35 = v32;
        v36 = v32 - 1;
        do
        {
          memmove(&v30[-v36], &v31[-v36], v35);
          v30 += v55;
          v31 += (int)v7;
          --v29;
        }
        while ( v29 );
        v1 = a1;
        LODWORD(v5) = v55;
      }
      v27 = v61;
      v26 = v53;
    }
    v25 = v62;
  }
  v37 = ((_BYTE)v56 + 1) & 7;
  v38 = -1 << (8 - v37);
  if ( (((_BYTE)v56 + 1) & 7) != 0 && v26 != v25 )
  {
    v39 = *((int *)v1 + 13);
    v40 = *((_DWORD *)v1 + 8);
    v41 = (unsigned __int8 *)(*((_QWORD *)v1 + 1) + ((v39 + 1) >> 3));
    v42 = ((_BYTE)v39 + 1) & 7;
    if ( v40 )
    {
      if ( v42 <= v37 )
      {
        if ( v42 >= v37 )
        {
          do
          {
            v52 = ~v38 & *v41;
            v41 += (int)v7;
            *v3 = v52 | v38 & *v3;
            v3 += (int)v5;
            --v40;
          }
          while ( v40 );
        }
        else
        {
          do
          {
            v51 = *v41;
            v41 += (int)v7;
            *v3 = v38 & *v3 | ~v38 & (v51 >> v60);
            v3 += (int)v5;
            --v40;
          }
          while ( v40 );
        }
      }
      else
      {
        do
        {
          v43 = v41[1];
          v44 = *v41;
          v41 += (int)v7;
          *v3 = v38 & *v3 | ~v38 & ((v44 << v27) | (v43 >> v60));
          v3 += (int)v5;
          --v40;
        }
        while ( v40 );
      }
    }
  }
}
