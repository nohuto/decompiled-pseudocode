/*
 * XREFs of ?vSrcCopyS1D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02CA230
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D16(struct BLTINFO *a1)
{
  int v1; // ebx
  struct BLTINFO *v2; // r9
  int v3; // r11d
  BOOL v4; // esi
  __int16 *v5; // r10
  unsigned int v6; // r8d
  __int64 i; // rcx
  __int16 v8; // ax
  int v9; // r8d
  int v10; // r13d
  unsigned int v11; // r12d
  char v12; // al
  unsigned int v13; // r15d
  int v14; // ecx
  int v15; // r14d
  int v16; // eax
  int v17; // ecx
  int v18; // r11d
  int v19; // edx
  unsigned int v20; // edi
  _DWORD *v21; // r10
  __int64 v22; // rbx
  __int64 v23; // rcx
  _BYTE *v24; // r8
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rbx
  unsigned int v30; // ecx
  unsigned __int64 v31; // rax
  char v32; // r12
  char v33; // r13
  __int64 v34; // r14
  _BYTE *v35; // rbx
  unsigned __int8 v36; // al
  unsigned __int64 v37; // rdx
  unsigned __int8 v38; // dl
  int v39; // r10d
  _BYTE *v40; // r8
  _WORD *v41; // rdx
  __int64 v42; // r12
  __int64 v43; // r9
  __int64 v44; // rdi
  _WORD *v45; // rbx
  unsigned __int8 v46; // r11
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // r12
  __int64 v50; // r9
  __int64 v51; // rdi
  _WORD *v52; // rbx
  unsigned __int8 v53; // r11
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rax
  __int64 v56; // r15
  __int64 v57; // r9
  __int64 v58; // rdi
  unsigned __int8 v59; // r11
  unsigned __int64 v60; // rcx
  _WORD *v61; // rbx
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  _WORD *v64; // r8
  _BYTE *v65; // rdx
  int v66; // r10d
  unsigned int v67; // ecx
  unsigned int v68; // eax
  __int64 v69; // r15
  bool v70; // cf
  __int64 v71; // rax
  __int64 v72; // rsi
  unsigned __int64 v73; // rdi
  unsigned __int64 v74; // rdi
  unsigned __int8 v75; // r9
  _WORD *v76; // r11
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rdi
  _WORD *v80; // r11
  unsigned __int64 v81; // rcx
  unsigned __int8 v82; // r9
  unsigned __int64 v83; // rax
  char v84; // [rsp+0h] [rbp-60h]
  int v85; // [rsp+4h] [rbp-5Ch]
  _WORD v86[2]; // [rsp+8h] [rbp-58h]
  unsigned int v87; // [rsp+Ch] [rbp-54h]
  int v88; // [rsp+10h] [rbp-50h]
  __int64 v89; // [rsp+18h] [rbp-48h]
  int v90; // [rsp+20h] [rbp-40h]
  int v91; // [rsp+24h] [rbp-3Ch]
  unsigned int v92; // [rsp+28h] [rbp-38h]
  int v93; // [rsp+2Ch] [rbp-34h]
  int v94; // [rsp+30h] [rbp-30h]
  struct BLTINFO *v95; // [rsp+38h] [rbp-28h]
  __int64 v96; // [rsp+40h] [rbp-20h]
  _DWORD v97[4]; // [rsp+48h] [rbp-18h]

  v1 = *((_DWORD *)a1 + 14);
  v2 = a1;
  v3 = *((_DWORD *)a1 + 7);
  v4 = 1;
  v95 = a1;
  v93 = 1;
  v94 = v3 + v1;
  v5 = *(__int16 **)(*(_QWORD *)a1 + 16LL);
  v6 = (*((_DWORD *)v5 + 1) << 16) | *((_DWORD *)v5 + 1);
  v97[0] = (*(_DWORD *)v5 << 16) | *(_DWORD *)v5;
  v97[3] = v6;
  v97[1] = HIWORD(v97[0]) | (v6 << 16);
  v97[2] = (v97[0] << 16) | HIWORD(v6);
  for ( i = 0LL; i < 2; ++i )
  {
    v8 = *v5;
    v5 += 2;
    v86[i] = v8;
  }
  v9 = *((_DWORD *)v2 + 12);
  v10 = *((_DWORD *)v2 + 11);
  v11 = v9 & 7;
  v12 = *((_BYTE *)v2 + 48) & 7;
  v92 = v11;
  v85 = v10;
  v13 = v1 & 7;
  v87 = v13;
  v14 = (unsigned __int8)(v12 - v13);
  v15 = (unsigned __int8)(v14 + 8);
  v16 = 8;
  if ( v11 >= v13 )
    v15 = v14;
  v17 = *((_DWORD *)v2 + 10);
  LOBYTE(v16) = 8 - v15;
  v91 = v16;
  v90 = v15;
  v88 = v17;
  if ( v94 >> 3 == v1 >> 3 )
  {
    v22 = 0LL;
    v84 = 0;
    v38 = 0;
    v4 = (int)(v3 + v11) > 8;
  }
  else
  {
    v18 = *((_DWORD *)v2 + 8);
    v84 = 1;
    v19 = (v94 >> 3) - ((v1 + 7) >> 3);
    v20 = 8 - v13;
    v21 = (_DWORD *)(*((_QWORD *)v2 + 2) + (int)(2 * ((v1 + 7) & 0xFFFFFFF8)));
    v22 = 0LL;
    LODWORD(v23) = v10 - 16 * v19;
    v24 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)(v9 + ((8 - (unsigned __int8)v13) & 7)) >> 3));
    v25 = v88 - v19;
    if ( v18 )
    {
      v23 = (int)v23;
      v89 = (int)v23;
      v96 = v25;
      v26 = v19;
      if ( (_BYTE)v15 )
      {
        v32 = v91;
        v33 = v15;
        v34 = v25;
        do
        {
          v35 = &v24[v26];
          --v18;
          v36 = *v24 << v33;
          if ( v24 != &v24[v26] )
          {
            do
            {
              v37 = v36 | ((unsigned __int64)(unsigned __int8)*++v24 >> v32);
              *v21 = v97[v37 >> 6];
              v21[1] = v97[(v37 >> 4) & 3];
              v21[2] = v97[(v37 >> 2) & 3];
              v21[3] = v97[v37 & 3];
              v21 += 4;
              v36 = *v24 << v33;
            }
            while ( v24 != v35 );
            v34 = v96;
          }
          v21 = (_DWORD *)((char *)v21 + (int)v23);
          v24 += v34;
        }
        while ( v18 );
        v2 = v95;
        LOBYTE(v15) = v90;
        v13 = v87;
      }
      else
      {
        v27 = v25;
        do
        {
          --v18;
          v28 = v26;
          v29 = 0LL;
          if ( v24 > &v24[v26] )
            v28 = 0LL;
          if ( v28 )
          {
            do
            {
              v30 = (unsigned __int8)*v24;
              ++v29;
              v31 = (unsigned __int8)*v24++;
              *v21 = v97[v31 >> 6];
              v21[1] = v97[(v30 >> 4) & 3];
              v21[2] = v97[(v30 >> 2) & 3];
              v21[3] = v97[v30 & 3];
              v21 += 4;
            }
            while ( v29 != v28 );
            v23 = v89;
          }
          v21 = (_DWORD *)((char *)v21 + v23);
          v24 += v27;
        }
        while ( v18 );
      }
      v4 = v93;
      v22 = 0LL;
      v10 = v85;
      v11 = v92;
    }
    v17 = v88;
    v3 = v20;
    v38 = 1;
  }
  if ( v13 | v38 ^ 1 )
  {
    v39 = *((_DWORD *)v2 + 8);
    v40 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    v41 = (_WORD *)(*((_QWORD *)v2 + 2) + 2 * *((_DWORD *)v2 + 14));
    if ( v39 )
    {
      if ( v11 <= v13 )
      {
        v56 = v3;
        v57 = v17;
        do
        {
          v58 = 0LL;
          v59 = *v40 << v11;
          --v39;
          v60 = (unsigned __int64)(v56 * 2 + 1) >> 1;
          v61 = v41;
          if ( v41 > &v41[v56] )
            v60 = 0LL;
          if ( v60 )
          {
            do
            {
              ++v58;
              v62 = (unsigned __int64)v59 >> 7;
              v59 *= 2;
              *v61++ = v86[v62];
            }
            while ( v58 != v60 );
          }
          v41 = (_WORD *)((char *)v41 + v10);
          v40 += v57;
          v22 = 0LL;
        }
        while ( v39 );
      }
      else
      {
        if ( v4 )
        {
          v87 = (unsigned __int8)v15;
          v42 = v3;
          v43 = v17;
          do
          {
            v44 = 0LL;
            --v39;
            v45 = v41;
            v46 = ((unsigned __int8)(*v40 << v15) | (unsigned __int8)(v40[1] >> v91)) << v13;
            v47 = (unsigned __int64)(v42 * 2 + 1) >> 1;
            if ( v41 > &v41[v42] )
              v47 = 0LL;
            if ( v47 )
            {
              do
              {
                ++v44;
                v48 = (unsigned __int64)v46 >> 7;
                v46 *= 2;
                *v45++ = v86[v48];
              }
              while ( v44 != v47 );
            }
            v41 = (_WORD *)((char *)v41 + v10);
            v40 += v43;
            v22 = 0LL;
          }
          while ( v39 );
        }
        else
        {
          v87 = (unsigned __int8)v15;
          v49 = v3;
          v50 = v17;
          do
          {
            v51 = 0LL;
            --v39;
            v52 = v41;
            v53 = *v40 << v15 << v13;
            v54 = (unsigned __int64)(v49 * 2 + 1) >> 1;
            if ( v41 > &v41[v49] )
              v54 = 0LL;
            if ( v54 )
            {
              do
              {
                ++v51;
                v55 = (unsigned __int64)v53 >> 7;
                v53 *= 2;
                *v52++ = v86[v55];
              }
              while ( v51 != v54 );
            }
            v41 = (_WORD *)((char *)v41 + v10);
            v40 += v50;
            v22 = 0LL;
          }
          while ( v39 );
        }
        LOBYTE(v15) = v90;
      }
      v10 = v85;
      v2 = v95;
    }
    v38 = v84;
  }
  if ( (v94 & 7) != 0 )
  {
    if ( v38 )
    {
      v63 = *((int *)v2 + 13);
      v64 = (_WORD *)(*((_QWORD *)v2 + 2) + (int)(2 * (v94 & 0xFFFFFFF8)));
      v65 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((v63 - 1) >> 3));
      v66 = *((_DWORD *)v2 + 8);
      v67 = ((_BYTE)v63 - 1) & 7;
      v68 = ((_BYTE)v94 - 1) & 7;
      if ( v66 )
      {
        v69 = v88;
        v70 = v67 < v68;
        v71 = 2 * v68 + 2;
        v72 = (unsigned int)v71;
        v73 = v71 + 1;
        if ( v70 )
        {
          v79 = v73 >> 1;
          do
          {
            --v66;
            v80 = v64;
            v81 = v79;
            v82 = (*v65 >> v91) | (*(v65 - 1) << v15);
            if ( v64 > (_WORD *)((char *)v64 + v72) )
              v81 = 0LL;
            if ( v81 )
            {
              do
              {
                ++v22;
                v83 = (unsigned __int64)v82 >> 7;
                v82 *= 2;
                *v80++ = v86[v83];
              }
              while ( v22 != v81 );
            }
            v64 = (_WORD *)((char *)v64 + v10);
            v65 += v69;
            v22 = 0LL;
          }
          while ( v66 );
        }
        else
        {
          v74 = v73 >> 1;
          do
          {
            --v66;
            v75 = *v65 << v15;
            v76 = v64;
            v77 = v74;
            if ( v64 > (_WORD *)((char *)v64 + v72) )
              v77 = 0LL;
            if ( v77 )
            {
              do
              {
                ++v22;
                v78 = (unsigned __int64)v75 >> 7;
                v75 *= 2;
                *v76++ = v86[v78];
              }
              while ( v22 != v77 );
            }
            v64 = (_WORD *)((char *)v64 + v10);
            v65 += v69;
            v22 = 0LL;
          }
          while ( v66 );
        }
      }
    }
  }
}
