/*
 * XREFs of ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02C67C4
 * Callers:
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02C64B8 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 */

void __fastcall vPatCpyRect1_6x6(struct _PATBLTFRAME *a1, int a2)
{
  int *v2; // r15
  struct _PATBLTFRAME *v3; // rbx
  int v4; // r14d
  int v5; // esi
  int v6; // r12d
  int v7; // edi
  int v8; // r13d
  int v9; // r9d
  int v10; // r8d
  int v11; // esi
  int v12; // r10d
  __int64 v13; // r8
  _BYTE *v14; // rdi
  int v15; // r11d
  int v16; // r8d
  int v17; // edx
  int v18; // r14d
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rsi
  int *v23; // rbx
  int *v24; // r12
  char *v25; // rax
  int v26; // ecx
  int v27; // r15d
  unsigned __int8 v28; // al
  unsigned int v29; // edi
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // r14d
  int v35; // edi
  int v36; // esi
  int v37; // ecx
  int v38; // edx
  int v39; // ecx
  int v40; // r14d
  int v41; // ecx
  int v42; // ecx
  _DWORD *v43; // rdi
  int *v44; // rsi
  __int64 v45; // rax
  unsigned __int64 m; // rcx
  char *v47; // rdi
  int v48; // r15d
  int *v49; // r13
  __int64 v50; // r12
  __int64 v51; // r12
  int v52; // r14d
  int v53; // ecx
  _DWORD *v54; // rdi
  int *v55; // rsi
  __int64 v56; // rax
  unsigned __int64 k; // rcx
  char *v58; // rdi
  int v59; // r15d
  int v60; // r14d
  _DWORD *v61; // rsi
  _DWORD *v62; // rdi
  __int64 v63; // rax
  unsigned __int64 j; // rcx
  int *v65; // rdi
  int v66; // r15d
  const void *v67; // rbx
  int v68; // r14d
  __int64 v69; // rdi
  int v70; // r12d
  int v71; // ecx
  _DWORD *v72; // rsi
  _DWORD *v73; // rdi
  __int64 v74; // rax
  unsigned __int64 i; // rcx
  int *v76; // rdi
  int v77; // r15d
  bool v78; // zf
  int v79; // [rsp+28h] [rbp-79h]
  int v80; // [rsp+28h] [rbp-79h]
  int v81; // [rsp+28h] [rbp-79h]
  int v82; // [rsp+2Ch] [rbp-75h]
  char v83; // [rsp+30h] [rbp-71h]
  unsigned int Size; // [rsp+40h] [rbp-61h]
  int Size_4; // [rsp+44h] [rbp-5Dh]
  int v86; // [rsp+48h] [rbp-59h]
  int v87; // [rsp+4Ch] [rbp-55h]
  int v88; // [rsp+50h] [rbp-51h]
  int v89; // [rsp+54h] [rbp-4Dh]
  int v90; // [rsp+58h] [rbp-49h]
  int v91; // [rsp+5Ch] [rbp-45h]
  char *v93; // [rsp+68h] [rbp-39h]
  _BYTE *v94; // [rsp+70h] [rbp-31h]
  int v95; // [rsp+78h] [rbp-29h]
  char v96; // [rsp+7Ch] [rbp-25h]
  int v97; // [rsp+80h] [rbp-21h]
  int v98; // [rsp+84h] [rbp-1Dh]
  int v99; // [rsp+88h] [rbp-19h]
  int *v100; // [rsp+90h] [rbp-11h]
  int *v101; // [rsp+98h] [rbp-9h]
  __int64 v102; // [rsp+A0h] [rbp-1h]
  _BYTE *v104; // [rsp+B8h] [rbp+17h]
  _BYTE Src[12]; // [rsp+C0h] [rbp+1Fh] BYREF
  int v106; // [rsp+CCh] [rbp+2Bh]

  v2 = (int *)*((_QWORD *)a1 + 3);
  v3 = a1;
  v91 = *((_DWORD *)a1 + 4);
  v95 = 6 * v91;
  v100 = v2;
  do
  {
    v4 = *v2;
    v5 = v2[2];
    v6 = v2[1];
    v86 = v6;
    v7 = aulMsk[*v2 & 0x1F];
    v87 = v7;
    v8 = ~v7;
    v88 = ~v7;
    v9 = aulMsk[v5 & 0x1F];
    if ( v9 == -1 )
      v9 = 0;
    v10 = ~v9;
    v82 = v9;
    v89 = ~v9;
    v101 = (int *)(*(_QWORD *)v3 + *((_DWORD *)v3 + 4) * v2[1] + 4 * ((__int64)*v2 >> 5));
    v11 = (v5 >> 5) - ((v4 + 31) >> 5);
    if ( v11 == -1 )
      goto LABEL_12;
    if ( v11 )
    {
      if ( v7 == -1 )
        v12 = 3 - (v9 != 0);
      else
        v12 = v9 == 0;
      goto LABEL_13;
    }
    if ( v7 == -1 || !v9 )
    {
LABEL_12:
      v12 = 9;
      v87 = v10 & v7;
      v8 = ~(v10 & v7);
      v88 = v8;
    }
    else
    {
      v12 = 8;
    }
LABEL_13:
    v13 = *((_QWORD *)v3 + 1);
    Size_4 = v12;
    if ( v6 == *((_DWORD *)v3 + 9) )
      v14 = (_BYTE *)*((_QWORD *)v3 + 1);
    else
      v14 = (_BYTE *)(v13 + 8LL * ((6 - 6 * ((v6 - *((_DWORD *)v3 + 9)) / 6) + v6 - *((_DWORD *)v3 + 9)) % 6));
    v104 = (_BYTE *)(v13 + 48);
    v94 = v14;
    v15 = v11 / 3;
    v99 = v11 / 3;
    v16 = v11 % 3;
    Size = 4 * v11;
    v98 = v11 % 3;
    v17 = 6;
    v18 = (v4 >> 5) % 3;
    v83 = *((_BYTE *)v3 + 32);
    v19 = v2[3] - v6;
    v90 = v18;
    if ( v19 >= 6 || (v17 = v2[3] - v6, v19) )
    {
      v20 = v91;
      v96 = 6 - *((_BYTE *)v3 + 32);
      v21 = v11;
      v22 = v95;
      v102 = v21;
      do
      {
        v23 = v101;
        v93 = (char *)v101;
        v24 = v101;
        v97 = v17 - 1;
        v25 = (char *)v101 + v20;
        v26 = v2[3] - v86++;
        v101 = (int *)v25;
        v27 = (v26 + 5) / 6;
        v28 = *v14 >> 2;
        if ( v83 )
          v29 = ((unsigned __int8)(v28 << v96) | (v28 >> v83)) & 0x3F;
        else
          v29 = v28;
        v30 = v29 | ((v29 | ((v29 | ((v29 | (v29 << 6)) << 6)) << 6)) << 6);
        if ( v12 == 9 )
        {
          if ( v18 )
          {
            if ( v18 == 1 )
            {
              v31 = 16 * v30;
              v29 >>= 2;
            }
            else
            {
              v31 = v30 << 6;
            }
          }
          else
          {
            v31 = 4 * v30;
            v29 >>= 4;
          }
          v32 = v29 | v31;
          Src[0] = v32;
          LOBYTE(v79) = HIBYTE(v32);
          BYTE1(v79) = BYTE2(v32);
          BYTE2(v79) = BYTE1(v32);
          v33 = v87;
          HIBYTE(v79) = Src[0];
          v34 = v79;
          *(_DWORD *)Src = v79;
          do
          {
            *v23 = v87 & v79 | v8 & *v23;
            v23 = (int *)((char *)v23 + v22);
            --v27;
          }
          while ( v27 );
          v35 = v106;
        }
        else
        {
          *(_DWORD *)Src = (v29 >> 4) | (4 * v30);
          LOBYTE(v80) = Src[3];
          BYTE1(v80) = Src[2];
          HIBYTE(v80) = (v29 >> 4) | (4 * v30);
          BYTE2(v80) = (unsigned __int16)((v29 >> 4) | (4 * v30)) >> 8;
          v36 = v80;
          v34 = v80;
          v37 = (v29 >> 2) | (16 * v30);
          v38 = v29 | (v30 << 6);
          LOBYTE(v80) = HIBYTE(v37);
          BYTE1(v80) = BYTE2(v37);
          BYTE2(v80) = BYTE1(v37);
          HIBYTE(v80) = v37;
          v39 = v80;
          LOBYTE(v81) = HIBYTE(v38);
          BYTE1(v81) = BYTE2(v38);
          BYTE2(v81) = BYTE1(v38);
          HIBYTE(v81) = v38;
          *(_DWORD *)&Src[4] = v39;
          *(_DWORD *)&Src[8] = v81;
          if ( v90 == 1 )
          {
            v34 = v39;
            *(_DWORD *)Src = v39;
            *(_DWORD *)&Src[4] = v81;
            *(_DWORD *)&Src[8] = v36;
          }
          else
          {
            *(_DWORD *)Src = v36;
            if ( v90 == 2 )
            {
              v34 = v81;
              *(_DWORD *)Src = v81;
              *(_DWORD *)&Src[8] = v39;
              *(_DWORD *)&Src[4] = v36;
            }
          }
          v22 = v95;
          v35 = v34;
          v33 = v87;
          v106 = v34;
        }
        if ( !v12 )
        {
          v68 = v33 & v34;
          v69 = 4LL * v16;
          *v23 = v68 | v8 & *v23;
          v70 = v89 & *(_DWORD *)&Src[v69 + 4];
          if ( v15 > 0 )
          {
            v71 = v106;
            v72 = v23 + 1;
            v73 = v23 + 4;
            *(_QWORD *)(v23 + 1) = *(_QWORD *)&Src[4];
            v23[3] = v71;
            v74 = 12LL * (unsigned int)v15;
            for ( i = (unsigned __int64)(v74 - 12) >> 2; i; --i )
              *v73++ = *v72++;
            v69 = 4LL * v16;
            v23 = (int *)((char *)v23 + v74);
          }
          if ( v16 )
          {
            memmove(v23 + 1, &Src[4], (unsigned int)(4 * v16));
            v9 = v82;
            v23 = (int *)((char *)v23 + v69);
          }
          v22 = v95;
          v23[1] = v70 | v9 & v23[1];
          v76 = (int *)&v93[v95];
          v77 = v27 - 1;
          if ( v77 )
          {
            do
            {
              *v76 = v68 | v8 & *v76;
              memmove(v76 + 1, v93 + 4, Size);
              v9 = v82;
              v76[v102 + 1] = v70 | v82 & v76[v102 + 1];
              v76 = (int *)((char *)v76 + v95);
              --v77;
            }
            while ( v77 );
            v22 = v95;
          }
          goto LABEL_88;
        }
        if ( v12 == 1 )
        {
          v60 = v33 & v34;
          *v23 = v60 | v8 & *v23;
          if ( v15 > 0 )
          {
            v61 = v23 + 1;
            *(_QWORD *)(v23 + 1) = *(_QWORD *)&Src[4];
            v23[3] = v35;
            v62 = v23 + 4;
            v63 = 12LL * (unsigned int)v15;
            for ( j = (unsigned __int64)(v63 - 12) >> 2; j; --j )
              *v62++ = *v61++;
            v23 = (int *)((char *)v23 + v63);
          }
          if ( v16 )
          {
            memmove(v23 + 1, &Src[4], (unsigned int)(4 * v16));
            v9 = v82;
          }
          v22 = v95;
          v65 = (int *)((char *)v24 + v95);
          v66 = v27 - 1;
          if ( !v66 )
            goto LABEL_88;
          v67 = v24 + 1;
          v50 = v95;
          do
          {
            *v65 = v60 | v8 & *v65;
            memmove(v65 + 1, v67, Size);
            v65 = (int *)((char *)v65 + v95);
            --v66;
          }
          while ( v66 );
          v9 = v82;
        }
        else
        {
          if ( v12 == 2 )
          {
            v51 = 4LL * v16;
            v52 = v89 & *(_DWORD *)&Src[v51];
            if ( v15 > 0 )
            {
              v53 = *(_DWORD *)&Src[8];
              v54 = v23 + 3;
              v55 = v23;
              *(_QWORD *)v23 = *(_QWORD *)Src;
              v23[2] = v53;
              v56 = 12LL * (unsigned int)v15;
              for ( k = (unsigned __int64)(v56 - 12) >> 2; k; --k )
                *v54++ = *v55++;
              v23 = (int *)((char *)v23 + v56);
            }
            if ( v16 )
            {
              memmove(v23, Src, (unsigned int)(4 * v16));
              v9 = v82;
              v23 = (int *)((char *)v23 + v51);
            }
            v22 = v95;
            *v23 = v52 | v9 & *v23;
            v58 = &v93[v95];
            v59 = v27 - 1;
            if ( !v59 )
              goto LABEL_88;
            v50 = v95;
            do
            {
              memmove(v58, v93, Size);
              v9 = v82;
              *(_DWORD *)&v58[4 * v102] = v52 | v82 & *(_DWORD *)&v58[4 * v102];
              v58 += v95;
              --v59;
            }
            while ( v59 );
          }
          else
          {
            if ( v12 != 3 )
            {
              if ( v12 == 8 )
              {
                v40 = v33 & v34;
                v41 = v89 & *(_DWORD *)&Src[4];
                do
                {
                  *v23 = v40 | v8 & *v23;
                  v23[1] = v41 | v9 & v23[1];
                  v23 = (int *)((char *)v23 + v22);
                  --v27;
                }
                while ( v27 );
              }
              goto LABEL_88;
            }
            if ( v15 > 0 )
            {
              v42 = *(_DWORD *)&Src[8];
              v43 = v23 + 3;
              v44 = v23;
              *(_QWORD *)v23 = *(_QWORD *)Src;
              v23[2] = v42;
              v45 = 12LL * (unsigned int)v15;
              for ( m = (unsigned __int64)(v45 - 12) >> 2; m; --m )
                *v43++ = *v44++;
              v23 = (int *)((char *)v23 + v45);
            }
            if ( v16 )
            {
              memmove(v23, Src, (unsigned int)(4 * v16));
              v9 = v82;
            }
            v22 = v95;
            v47 = (char *)v24 + v95;
            v48 = v27 - 1;
            if ( !v48 )
              goto LABEL_88;
            v49 = v24;
            v50 = v95;
            do
            {
              memmove(v47, v49, Size);
              v47 += v95;
              --v48;
            }
            while ( v48 );
            v9 = v82;
          }
          v8 = v88;
        }
        v22 = v50;
LABEL_88:
        v3 = a1;
        v14 = v94 + 8;
        v94 = v14;
        if ( v14 == v104 )
        {
          v14 = (_BYTE *)*((_QWORD *)a1 + 1);
          v94 = v14;
        }
        v17 = v97;
        v12 = Size_4;
        v16 = v98;
        v15 = v99;
        v18 = v90;
        v2 = v100;
        v20 = v91;
      }
      while ( v97 );
    }
    v2 += 4;
    v78 = a2-- == 1;
    v100 = v2;
  }
  while ( !v78 );
}
