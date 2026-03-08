/*
 * XREFs of ?vSrcCopyS1D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02EC9A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D8(struct BLTINFO *a1)
{
  __int64 v1; // rax
  struct BLTINFO *v2; // r10
  BOOL v3; // r12d
  __int64 v4; // rdx
  char *v5; // rcx
  int v6; // r8d
  int v7; // r9d
  char v8; // al
  int v9; // r14d
  int v10; // r15d
  int v11; // eax
  unsigned int v12; // r11d
  int v13; // ecx
  int v14; // r8d
  unsigned int v15; // edi
  int v16; // esi
  int v17; // eax
  signed int v18; // ecx
  int v19; // edx
  int v20; // r11d
  __int64 v21; // rdx
  _DWORD *v22; // r9
  unsigned __int8 v23; // r13
  int v24; // ecx
  _BYTE *v25; // r8
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // r12
  _BYTE *v29; // rdx
  unsigned int v30; // ecx
  char v31; // r12
  char v32; // si
  __int64 v33; // r15
  _BYTE *v34; // r13
  unsigned __int8 v35; // al
  unsigned __int64 v36; // rax
  _BYTE *v37; // rdx
  int v38; // r9d
  _BYTE *v39; // r8
  char v40; // r13
  char v41; // si
  __int64 v42; // r10
  unsigned __int8 v43; // r11
  _BYTE *i; // rcx
  unsigned __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // rax
  unsigned __int8 v48; // r11
  _BYTE *v49; // rcx
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdi
  char v53; // r14
  _BYTE *v54; // rbx
  unsigned __int8 v55; // r11
  _BYTE *v56; // rcx
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  int v59; // r11d
  unsigned __int64 v60; // rdx
  _BYTE *v61; // r8
  unsigned int v62; // ecx
  unsigned int v63; // eax
  __int64 v64; // r12
  unsigned __int8 v65; // r9
  _BYTE *v66; // rcx
  unsigned __int64 v67; // rax
  _BYTE *v68; // rcx
  unsigned __int8 v69; // r9
  unsigned __int64 v70; // rax
  char v71; // [rsp+8h] [rbp-69h]
  _BYTE v72[4]; // [rsp+Ch] [rbp-65h]
  int v73; // [rsp+10h] [rbp-61h]
  int v74; // [rsp+14h] [rbp-5Dh]
  int v75; // [rsp+18h] [rbp-59h]
  int v76; // [rsp+1Ch] [rbp-55h]
  int v77; // [rsp+20h] [rbp-51h]
  unsigned int v78; // [rsp+24h] [rbp-4Dh]
  __int64 v79; // [rsp+28h] [rbp-49h]
  int v80; // [rsp+30h] [rbp-41h]
  __int64 v81; // [rsp+38h] [rbp-39h]
  __int64 v82; // [rsp+40h] [rbp-31h]
  struct BLTINFO *v83; // [rsp+48h] [rbp-29h]
  _DWORD v84[2]; // [rsp+58h] [rbp-19h]
  int v85; // [rsp+60h] [rbp-11h]
  int v86; // [rsp+64h] [rbp-Dh]
  int v87; // [rsp+68h] [rbp-9h]
  int v88; // [rsp+6Ch] [rbp-5h]
  int v89; // [rsp+70h] [rbp-1h]
  int v90; // [rsp+74h] [rbp+3h]
  int v91; // [rsp+78h] [rbp+7h]
  int v92; // [rsp+7Ch] [rbp+Bh]
  int v93; // [rsp+80h] [rbp+Fh]
  int v94; // [rsp+84h] [rbp+13h]
  int v95; // [rsp+88h] [rbp+17h]
  int v96; // [rsp+8Ch] [rbp+1Bh]
  int v97; // [rsp+90h] [rbp+1Fh]
  int v98; // [rsp+94h] [rbp+23h]

  v1 = *(_QWORD *)a1;
  v2 = a1;
  v83 = a1;
  v3 = 1;
  v76 = 1;
  v4 = 0LL;
  v5 = *(char **)(v1 + 16);
  v6 = *(_DWORD *)v5;
  v7 = *((_DWORD *)v5 + 1);
  do
  {
    v8 = *v5;
    v5 += 4;
    v72[v4++] = v8;
  }
  while ( v4 < 2 );
  v9 = *((_DWORD *)v2 + 11);
  v10 = *((_DWORD *)v2 + 10);
  v73 = v9;
  v75 = v10;
  v11 = *((_DWORD *)v2 + 12);
  v84[0] = ((v6 | (v6 << 8)) << 16) | v6 | (v6 << 8);
  v12 = v11 & 7;
  LODWORD(v79) = v11;
  v91 = v7 | (v84[0] << 8);
  v78 = v12;
  v87 = v6 | (v91 << 8);
  v93 = v7 | (v87 << 8);
  v88 = v6 | (v93 << 8);
  v85 = v6 | (v88 << 8);
  v92 = v7 | (v85 << 8);
  v95 = v7 | (v92 << 8);
  v97 = v7 | (v95 << 8);
  v98 = v7 | (v97 << 8);
  v90 = v6 | (v98 << 8);
  v94 = v7 | (v90 << 8);
  v96 = v7 | (v94 << 8);
  v89 = v6 | (v96 << 8);
  v86 = v6 | (v89 << 8);
  v13 = v6 | (v86 << 8);
  v14 = *((_DWORD *)v2 + 14);
  v84[1] = v13;
  v15 = v14 & 7;
  v16 = (unsigned __int8)(v12 - v15 + 8);
  v17 = 8;
  if ( v12 >= v15 )
    v16 = (unsigned __int8)(v12 - v15);
  v18 = *((_DWORD *)v2 + 7);
  LOBYTE(v17) = 8 - v16;
  v77 = v16;
  v74 = v17;
  v80 = v14 + v18;
  v19 = (v14 + v18) >> 3;
  if ( v19 == v14 >> 3 )
  {
    v23 = 0;
    v71 = 0;
    v3 = (int)(v18 + v12) > 8;
  }
  else
  {
    v20 = *((_DWORD *)v2 + 8);
    LODWORD(v21) = v19 - ((v14 + 7) >> 3);
    v71 = 1;
    v22 = (_DWORD *)(*((_QWORD *)v2 + 2) + ((v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL));
    v23 = 1;
    v24 = v9 - 8 * v21;
    v25 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)(int)(v79 + (-v15 & 7)) >> 3));
    LODWORD(v26) = v10 - v21;
    if ( v20 )
    {
      v21 = (int)v21;
      v26 = (int)v26;
      v82 = (int)v21;
      v79 = (int)v26;
      v27 = v24;
      if ( (_BYTE)v16 )
      {
        v31 = v16;
        v32 = v74;
        v33 = (int)v26;
        do
        {
          v34 = &v25[v21];
          --v20;
          v35 = *v25 << v31;
          if ( v25 != &v25[v21] )
          {
            do
            {
              v36 = v35 | ((unsigned __int64)(unsigned __int8)*++v25 >> v32);
              *v22 = v84[v36 >> 4];
              v22[1] = v84[v36 & 0xF];
              v22 += 2;
              v35 = *v25 << v31;
            }
            while ( v25 != v34 );
            v21 = v82;
          }
          v22 = (_DWORD *)((char *)v22 + v24);
          v25 += v33;
        }
        while ( v20 );
        v2 = v83;
        LOBYTE(v16) = v77;
        v9 = v73;
        v10 = v75;
      }
      else
      {
        v28 = (int)v21;
        do
        {
          --v20;
          v29 = &v25[v28];
          if ( v25 != &v25[v28] )
          {
            do
            {
              v30 = (unsigned __int8)*v25++;
              *v22 = v84[(unsigned __int64)v30 >> 4];
              v22[1] = v84[v30 & 0xF];
              v22 += 2;
            }
            while ( v25 != v29 );
            v26 = v79;
          }
          v22 = (_DWORD *)((char *)v22 + v27);
          v25 += v26;
        }
        while ( v20 );
      }
      v23 = 1;
      v3 = v76;
    }
    v12 = v78;
    v18 = 8 - v15;
  }
  if ( v15 | v23 ^ 1 )
  {
    v37 = (_BYTE *)(*((_QWORD *)v2 + 2) + *((int *)v2 + 14));
    v38 = *((_DWORD *)v2 + 8);
    v39 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    if ( v38 )
    {
      if ( v12 <= v15 )
      {
        v51 = v18;
        v52 = v9;
        v53 = v78;
        v81 = v18;
        do
        {
          v54 = &v37[v51];
          --v38;
          v55 = *v39 << v53;
          v56 = v37;
          if ( v37 != &v37[v51] )
          {
            do
            {
              v57 = v55;
              v55 *= 2;
              *v56++ = v72[v57 >> 7];
            }
            while ( v56 != v54 );
            v51 = v81;
          }
          v37 += v52;
          v39 += v10;
        }
        while ( v38 );
      }
      else
      {
        if ( v3 )
        {
          v40 = v16;
          v41 = v74;
          v42 = v18;
          do
          {
            --v38;
            v43 = ((unsigned __int8)(*v39 << v40) | (unsigned __int8)(v39[1] >> v41)) << v15;
            for ( i = v37; i != &v37[v42]; ++i )
            {
              v45 = v43;
              v43 *= 2;
              *i = v72[v45 >> 7];
            }
            v37 += v9;
            v39 += v10;
          }
          while ( v38 );
          v2 = v83;
          LOBYTE(v16) = v77;
        }
        else
        {
          v75 = (unsigned __int8)v16;
          v46 = v18;
          v47 = v10;
          do
          {
            --v38;
            v48 = *v39 << v16 << v15;
            v49 = v37;
            if ( v37 != &v37[v46] )
            {
              do
              {
                v50 = v48;
                v48 *= 2;
                *v49++ = v72[v50 >> 7];
              }
              while ( v49 != &v37[v46] );
              v47 = v10;
            }
            v37 += v9;
            v39 += v47;
          }
          while ( v38 );
        }
        v23 = v71;
      }
      v9 = v73;
    }
  }
  if ( (v80 & 7) != 0 )
  {
    if ( v23 )
    {
      v58 = *((int *)v2 + 13);
      v59 = *((_DWORD *)v2 + 8);
      v60 = *((_QWORD *)v2 + 2) + (v80 & 0xFFFFFFFFFFFFFFF8uLL);
      v61 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((v58 - 1) >> 3));
      v62 = ((_BYTE)v80 - 1) & 7;
      v63 = ((_BYTE)v58 - 1) & 7;
      if ( v59 )
      {
        v64 = v62 + 1;
        if ( v63 < v62 )
        {
          do
          {
            --v59;
            v68 = (_BYTE *)v60;
            v69 = (*v61 >> v74) | (*(v61 - 1) << v16);
            if ( v60 != v64 + v60 )
            {
              do
              {
                v70 = v69;
                v69 *= 2;
                *v68++ = v72[v70 >> 7];
              }
              while ( v68 != (_BYTE *)(v64 + v60) );
            }
            v60 += v9;
            v61 += v10;
          }
          while ( v59 );
        }
        else
        {
          do
          {
            --v59;
            v65 = *v61 << v16;
            v66 = (_BYTE *)v60;
            if ( v60 != v64 + v60 )
            {
              do
              {
                v67 = v65;
                v65 *= 2;
                *v66++ = v72[v67 >> 7];
              }
              while ( v66 != (_BYTE *)(v64 + v60) );
            }
            v60 += v9;
            v61 += v10;
          }
          while ( v59 );
        }
      }
    }
  }
}
