/*
 * XREFs of ?vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02C8CD0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

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
  __int64 v27; // rcx
  int v28; // r14d
  _BYTE *v29; // rsi
  unsigned __int8 *v30; // rdi
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  size_t v34; // r15
  __int64 v35; // rbp
  __int64 v36; // r12
  __int64 v37; // rax
  char v38; // r8
  unsigned __int8 *v39; // r9
  char v40; // al
  unsigned __int8 v41; // r8
  unsigned int v42; // edx
  char v43; // bp
  __int64 v44; // rax
  int v45; // r9d
  unsigned __int8 *v46; // r8
  unsigned int v47; // eax
  unsigned __int8 v48; // dl
  unsigned __int8 v49; // al
  unsigned __int8 v50; // dl
  char v51; // al
  int v52; // [rsp+20h] [rbp-78h]
  char v53; // [rsp+24h] [rbp-74h]
  int v54; // [rsp+28h] [rbp-70h]
  int v55; // [rsp+2Ch] [rbp-6Ch]
  int v56; // [rsp+30h] [rbp-68h]
  int v57; // [rsp+38h] [rbp-60h]
  __int64 v58; // [rsp+38h] [rbp-60h]
  char v60; // [rsp+A8h] [rbp+10h]
  int v61; // [rsp+B0h] [rbp+18h]
  int v62; // [rsp+B8h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 14);
  v57 = *((_DWORD *)a1 + 12);
  v3 = 0LL;
  v4 = v57 & 7;
  v5 = *((int *)a1 + 11);
  v6 = v2 & 7;
  v7 = *((int *)a1 + 10);
  v56 = *((_DWORD *)a1 + 11);
  v54 = *((_DWORD *)a1 + 10);
  v8 = 1;
  v9 = *((_DWORD *)a1 + 7);
  v10 = (v57 & 7) - (v2 & 7) + 8;
  if ( v4 >= v6 )
    v10 = (v57 & 7) - v6;
  v61 = v2 >> 3;
  v11 = 8 - v10;
  v53 = v10;
  v60 = 8 - v10;
  v55 = v2 - v9;
  v52 = (v2 - v9) >> 3;
  v12 = -1 << (7 - v6);
  if ( v52 == v2 >> 3 )
  {
    v12 &= 255 >> ((v55 + 1) & 7);
    if ( v4 < v6 )
      v8 = (int)(v4 - v9) < -1;
  }
  v13 = ((_BYTE)v6 + 1) & 7;
  v62 = v13;
  if ( v13 | (v52 == v61) )
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
    v13 = v62;
  }
  v25 = v61;
  v26 = v52;
  if ( v52 != v61 )
  {
    v27 = *((_QWORD *)v1 + 2);
    v28 = *((_DWORD *)v1 + 8);
    v29 = (_BYTE *)(v27 + ((__int64)(*((_DWORD *)v1 + 14) - 7) >> 3));
    v3 = (_BYTE *)(v27 + ((__int64)v55 >> 3));
    v30 = (unsigned __int8 *)(*((_QWORD *)v1 + 1) + ((__int64)(*((_DWORD *)v1 + 12) - v13) >> 3));
    v31 = ((*((_DWORD *)v1 + 14) - 7) >> 3) - (v55 >> 3);
    v32 = v5 + v31;
    v33 = v7 + v31;
    if ( v28 )
    {
      if ( v53 )
      {
        v36 = v31;
        v37 = v33;
        do
        {
          v38 = *v30 >> v11;
          v39 = &v30[-v36];
          --v28;
          if ( v30 != &v30[-v36] )
          {
            do
            {
              v40 = v38 | (*--v30 << v53);
              v41 = *v30;
              *v29-- = v40;
              v38 = v41 >> v11;
            }
            while ( v30 != v39 );
            v37 = v33;
          }
          v29 += v32;
          v30 += v37;
        }
        while ( v28 );
        LODWORD(v5) = v56;
      }
      else
      {
        v58 = v5;
        v34 = v31;
        v35 = v31 - 1;
        do
        {
          memmove(&v29[-v35], &v30[-v35], v34);
          v29 += v58;
          v30 += (int)v7;
          --v28;
        }
        while ( v28 );
        v1 = a1;
        LODWORD(v5) = v58;
      }
      v26 = v52;
      LODWORD(v7) = v54;
    }
    v25 = v61;
  }
  v42 = ((_BYTE)v55 + 1) & 7;
  v43 = -1 << (8 - v42);
  if ( (((_BYTE)v55 + 1) & 7) != 0 && v26 != v25 )
  {
    v44 = *((int *)v1 + 13);
    v45 = *((_DWORD *)v1 + 8);
    v46 = (unsigned __int8 *)(*((_QWORD *)v1 + 1) + ((v44 + 1) >> 3));
    v47 = ((_BYTE)v44 + 1) & 7;
    if ( v45 )
    {
      if ( v47 <= v42 )
      {
        if ( v47 >= v42 )
        {
          do
          {
            v51 = ~v43 & *v46;
            v46 += (int)v7;
            *v3 = v51 | v43 & *v3;
            v3 += (int)v5;
            --v45;
          }
          while ( v45 );
        }
        else
        {
          do
          {
            v50 = *v46;
            v46 += (int)v7;
            *v3 = v43 & *v3 | ~v43 & (v50 >> v60);
            v3 += (int)v5;
            --v45;
          }
          while ( v45 );
        }
      }
      else
      {
        do
        {
          v48 = v46[1];
          v49 = *v46;
          v46 += (int)v7;
          *v3 = v43 & *v3 | ~v43 & ((v49 << v53) | (v48 >> v60));
          v3 += (int)v5;
          --v45;
        }
        while ( v45 );
      }
    }
  }
}
