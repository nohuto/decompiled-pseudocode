/*
 * XREFs of ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02E7890
 * Callers:
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02E7530 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

void __fastcall vPatCpyRect1_6x6(struct _PATBLTFRAME *a1, int a2)
{
  int v2; // r12d
  int v3; // r11d
  int *v4; // r14
  struct _PATBLTFRAME *v5; // r9
  int v6; // ebx
  int v7; // esi
  int v8; // r13d
  int v9; // edi
  int v10; // r15d
  int v11; // r10d
  int v12; // r8d
  int v13; // esi
  __int64 v14; // r8
  char v15; // r8
  int v16; // eax
  int v17; // edx
  char v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rax
  int v22; // esi
  int *v23; // rbx
  char *v24; // r13
  int v25; // ecx
  int v26; // r14d
  unsigned int v27; // edi
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // r9d
  int v32; // ecx
  int v33; // edx
  int v34; // esi
  int v35; // r8d
  int v36; // edi
  int v37; // r8d
  int v38; // esi
  int *v39; // rsi
  _DWORD *v40; // rdi
  unsigned __int64 j; // rcx
  char *v42; // rdi
  int v43; // r14d
  __int64 v44; // rsi
  int v45; // r12d
  int *v46; // rsi
  _DWORD *v47; // rdi
  unsigned __int64 k; // rcx
  __int64 v49; // rbx
  char *v50; // rdi
  int v51; // r14d
  bool v52; // zf
  int v53; // r12d
  _DWORD *v54; // rsi
  _DWORD *v55; // rdi
  unsigned __int64 i; // rcx
  int *v57; // rdi
  int v58; // r14d
  int v59; // esi
  int v60; // ecx
  __int64 v61; // rdi
  int v62; // r12d
  _DWORD *v63; // rsi
  _DWORD *v64; // rdi
  unsigned __int64 m; // rcx
  int *v66; // rdi
  int n; // r14d
  int v68; // [rsp+28h] [rbp-89h]
  int v69; // [rsp+28h] [rbp-89h]
  int v70; // [rsp+28h] [rbp-89h]
  int v71; // [rsp+2Ch] [rbp-85h]
  int v72; // [rsp+30h] [rbp-81h]
  char v73; // [rsp+34h] [rbp-7Dh]
  int v74; // [rsp+38h] [rbp-79h]
  int v75; // [rsp+48h] [rbp-69h]
  int v76; // [rsp+4Ch] [rbp-65h]
  unsigned int Size; // [rsp+50h] [rbp-61h]
  int Size_4; // [rsp+54h] [rbp-5Dh]
  int v79; // [rsp+58h] [rbp-59h]
  int v80; // [rsp+5Ch] [rbp-55h]
  int v81; // [rsp+60h] [rbp-51h]
  int v83; // [rsp+68h] [rbp-49h]
  unsigned __int8 *v84; // [rsp+70h] [rbp-41h]
  int v85; // [rsp+78h] [rbp-39h]
  char v86; // [rsp+7Ch] [rbp-35h]
  int v87; // [rsp+88h] [rbp-29h]
  __int64 v88; // [rsp+90h] [rbp-21h]
  int *v89; // [rsp+98h] [rbp-19h]
  int *v90; // [rsp+A0h] [rbp-11h]
  __int64 v91; // [rsp+A8h] [rbp-9h]
  unsigned __int8 *v93; // [rsp+C0h] [rbp+Fh]
  __int64 v94; // [rsp+C8h] [rbp+17h]
  _BYTE Src[12]; // [rsp+D0h] [rbp+1Fh] BYREF
  int v96; // [rsp+DCh] [rbp+2Bh]

  v2 = *((_DWORD *)a1 + 4);
  v3 = 0;
  v4 = (int *)*((_QWORD *)a1 + 3);
  v5 = a1;
  v89 = v4;
  v85 = 6 * v2;
  v83 = v2;
  do
  {
    v6 = *v4;
    v7 = v4[2];
    v8 = v4[1];
    v80 = v8;
    v9 = aulMsk[*v4 & 0x1F];
    v74 = v9;
    v10 = ~v9;
    v81 = ~v9;
    v11 = aulMsk[v7 & 0x1F];
    if ( v11 == -1 )
      v11 = 0;
    v12 = ~v11;
    v72 = v11;
    v79 = ~v11;
    v90 = (int *)(*(_QWORD *)v5 + *((_DWORD *)v5 + 4) * v4[1] + 4 * ((__int64)*v4 >> 5));
    v13 = (v7 >> 5) - ((v6 + 31) >> 5);
    if ( v13 == -1 )
      goto LABEL_12;
    if ( v13 )
    {
      if ( v9 == -1 )
        v3 = 3 - (v11 != 0);
      else
        LOBYTE(v3) = v11 == 0;
      goto LABEL_13;
    }
    if ( v9 == -1 || !v11 )
    {
LABEL_12:
      v3 = 9;
      v74 = v12 & v9;
      v10 = ~(v12 & v9);
      v81 = v10;
    }
    else
    {
      v3 = 8;
    }
LABEL_13:
    v14 = *((_QWORD *)v5 + 1);
    Size_4 = v3;
    if ( v8 == *((_DWORD *)v5 + 9) )
    {
      v84 = (unsigned __int8 *)*((_QWORD *)v5 + 1);
    }
    else
    {
      v84 = (unsigned __int8 *)(v14 + 8LL * ((6 - 6 * ((v8 - *((_DWORD *)v5 + 9)) / 6) + v8 - *((_DWORD *)v5 + 9)) % 6));
      v2 = v83;
    }
    v93 = (unsigned __int8 *)(v14 + 48);
    v75 = v13 / 3;
    Size = 4 * v13;
    v15 = *((_BYTE *)v5 + 32);
    v76 = v13 % 3;
    v73 = v15;
    v71 = (v6 >> 5) % 3;
    v16 = v4[3] - v8;
    v17 = 6;
    if ( v16 >= 6 || (v17 = v4[3] - v8, v16) )
    {
      v18 = 6 - v15;
      v19 = v2;
      v20 = v85;
      v88 = v13 % 3;
      v21 = v13;
      v22 = (v6 >> 5) % 3;
      v91 = v21;
      v86 = 6 - v15;
      v94 = v19;
      while ( 1 )
      {
        v23 = v90;
        v24 = (char *)v90;
        v87 = v17 - 1;
        v90 = (int *)((char *)v90 + v19);
        v25 = v4[3] - v80++ + 5;
        v26 = v25 / 6;
        v27 = *v84 >> 2;
        if ( v15 )
          v27 = (((unsigned int)(*v84 >> 2) >> v15) | (unsigned __int8)(v27 << v18)) & 0x3F;
        v28 = v27 | ((v27 | ((v27 | ((v27 | (v27 << 6)) << 6)) << 6)) << 6);
        if ( v3 != 9 )
          break;
        if ( v22 )
        {
          if ( v22 == 1 )
          {
            v29 = 16 * v28;
            v27 >>= 2;
          }
          else
          {
            v29 = v28 << 6;
          }
        }
        else
        {
          v29 = 4 * v28;
          v27 >>= 4;
        }
        v30 = v27 | v29;
        LOBYTE(v68) = HIBYTE(v30);
        BYTE1(v68) = BYTE2(v30);
        BYTE2(v68) = BYTE1(v30);
        HIBYTE(v68) = v30;
        *(_DWORD *)Src = v68;
        do
        {
          *v23 = v74 & v68 | v10 & *v23;
          v23 = (int *)((char *)v23 + v20);
          --v26;
        }
        while ( v26 );
LABEL_67:
        v5 = a1;
        v84 += 8;
        if ( v84 == v93 )
          v84 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
        v17 = v87;
        v3 = Size_4;
        v4 = v89;
        v15 = v73;
        v19 = v94;
        if ( !v87 )
          goto LABEL_70;
        v18 = v86;
      }
      *(_DWORD *)Src = (v27 >> 4) | (4 * v28);
      LOBYTE(v69) = Src[3];
      BYTE1(v69) = Src[2];
      HIBYTE(v69) = (v27 >> 4) | (4 * v28);
      BYTE2(v69) = (unsigned __int16)((v27 >> 4) | (4 * v28)) >> 8;
      v31 = v69;
      v32 = (v27 >> 2) | (16 * v28);
      v33 = v27 | (v28 << 6);
      LOBYTE(v69) = HIBYTE(v32);
      BYTE1(v69) = BYTE2(v32);
      BYTE2(v69) = BYTE1(v32);
      HIBYTE(v69) = v32;
      v34 = v69;
      v35 = v69;
      LOBYTE(v70) = HIBYTE(v33);
      BYTE1(v70) = BYTE2(v33);
      BYTE2(v70) = BYTE1(v33);
      HIBYTE(v70) = v33;
      v36 = v70;
      *(_DWORD *)&Src[8] = v70;
      *(_DWORD *)&Src[4] = v34;
      if ( v71 == 1 )
      {
        v34 = v70;
        *(_DWORD *)&Src[4] = v70;
        v36 = v31;
        *(_DWORD *)&Src[8] = v31;
        goto LABEL_35;
      }
      *(_DWORD *)Src = v31;
      v35 = v31;
      if ( v71 == 2 )
      {
        v35 = v70;
        v36 = v34;
        *(_DWORD *)&Src[8] = v34;
        v34 = v31;
        *(_DWORD *)&Src[4] = v31;
LABEL_35:
        *(_DWORD *)Src = v35;
      }
      v96 = v35;
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          v53 = v74 & v35;
          *v23 = v74 & v35 | v10 & *v23;
          if ( v75 > 0 )
          {
            v54 = v23 + 1;
            *(_QWORD *)(v23 + 1) = *(_QWORD *)&Src[4];
            v55 = v23 + 4;
            v23[3] = v35;
            for ( i = (12 * (unsigned __int64)(unsigned int)v75 - 12) >> 2; i; --i )
              *v55++ = *v54++;
            v23 += 3 * (unsigned int)v75;
          }
          if ( v76 )
          {
            memmove(v23 + 1, &Src[4], (unsigned int)(4 * v76));
            v11 = v72;
          }
          v49 = v85;
          v57 = (int *)&v24[v85];
          v58 = v26 - 1;
          if ( v58 )
          {
            do
            {
              *v57 = v53 | v10 & *v57;
              memmove(v57 + 1, v24 + 4, Size);
              v57 = (int *)((char *)v57 + v85);
              --v58;
            }
            while ( v58 );
            v11 = v72;
          }
        }
        else
        {
          if ( v3 != 2 )
          {
            if ( v3 == 3 )
            {
              if ( v75 > 0 )
              {
                *(_QWORD *)v23 = *(_QWORD *)Src;
                v39 = v23;
                v23[2] = v36;
                v40 = v23 + 3;
                for ( j = (12 * (unsigned __int64)(unsigned int)v75 - 12) >> 2; j; --j )
                  *v40++ = *v39++;
                v23 += 3 * (unsigned int)v75;
              }
              if ( v76 )
              {
                memmove(v23, Src, (unsigned int)(4 * v76));
                v11 = v72;
              }
              v42 = &v24[v20];
              v43 = v26 - 1;
              if ( v43 )
              {
                do
                {
                  memmove(v42, v24, Size);
                  v42 += v20;
                  --v43;
                }
                while ( v43 );
                v11 = v72;
              }
            }
            else
            {
              if ( v3 != 8 )
              {
                v22 = v71;
                goto LABEL_67;
              }
              v37 = v74 & v35;
              v38 = v79 & v34;
              do
              {
                *v23 = v37 | v10 & *v23;
                v23[1] = v38 | v23[1] & v11;
                v23 = (int *)((char *)v23 + v20);
                --v26;
              }
              while ( v26 );
            }
            goto LABEL_66;
          }
          v44 = 4 * v88;
          v45 = v79 & *(_DWORD *)&Src[4 * v88];
          if ( v75 > 0 )
          {
            *(_QWORD *)v23 = *(_QWORD *)Src;
            v46 = v23;
            v23[2] = v36;
            v47 = v23 + 3;
            for ( k = (12 * (unsigned __int64)(unsigned int)v75 - 12) >> 2; k; --k )
              *v47++ = *v46++;
            v44 = 4 * v88;
            v23 += 3 * (unsigned int)v75;
          }
          if ( v76 )
          {
            memmove(v23, Src, (unsigned int)(4 * v76));
            v11 = v72;
            v23 = (int *)((char *)v23 + v44);
          }
          *v23 = v45 | v11 & *v23;
          v49 = v85;
          v50 = &v24[v85];
          v51 = v26 - 1;
          if ( v51 )
          {
            do
            {
              memmove(v50, v24, Size);
              v11 = v72;
              *(_DWORD *)&v50[4 * v91] = v45 | *(_DWORD *)&v50[4 * v91] & v72;
              v50 += v85;
              --v51;
            }
            while ( v51 );
            v10 = v81;
          }
        }
        v20 = v49;
      }
      else
      {
        v59 = v74 & v35;
        v60 = v88;
        *v23 = v74 & v35 | v10 & *v23;
        v61 = 4 * v88;
        v62 = v79 & *(_DWORD *)&Src[4 * v88 + 4];
        if ( v75 > 0 )
        {
          v63 = v23 + 1;
          *(_QWORD *)(v23 + 1) = *(_QWORD *)&Src[4];
          v64 = v23 + 4;
          v23[3] = v35;
          for ( m = (12 * (unsigned __int64)(unsigned int)v75 - 12) >> 2; m; --m )
            *v64++ = *v63++;
          v59 = v74 & v35;
          v23 += 3 * (unsigned int)v75;
          v61 = 4 * v88;
          v60 = v88;
        }
        if ( v76 )
        {
          memmove(v23 + 1, &Src[4], (unsigned int)(4 * v60));
          v11 = v72;
          v23 = (int *)((char *)v23 + v61);
        }
        v66 = (int *)&v24[v85];
        v23[1] = v62 | v23[1] & v11;
        for ( n = v26 - 1; n; --n )
        {
          *v66 = v59 | v10 & *v66;
          memmove(v66 + 1, v24 + 4, Size);
          v11 = v72;
          v66[v91 + 1] = v62 | v72 & v66[v91 + 1];
          v66 = (int *)((char *)v66 + v85);
        }
        v20 = v85;
      }
LABEL_66:
      v22 = v71;
      goto LABEL_67;
    }
LABEL_70:
    v2 = v83;
    v4 += 4;
    v3 = 0;
    v52 = a2-- == 1;
    v89 = v4;
  }
  while ( !v52 );
}
