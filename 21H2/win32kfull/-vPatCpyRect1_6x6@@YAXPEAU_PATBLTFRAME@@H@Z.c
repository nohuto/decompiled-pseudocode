/*
 * XREFs of ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02C4F60
 * Callers:
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02C4C24 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
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
  unsigned __int8 v27; // al
  unsigned int v28; // edi
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // r9d
  int v33; // ecx
  int v34; // edx
  int v35; // esi
  int v36; // r8d
  int v37; // edi
  int v38; // edi
  int v39; // esi
  _DWORD *v40; // rdi
  int *v41; // rsi
  unsigned __int64 v42; // rcx
  char *v43; // rdi
  int v44; // r14d
  __int64 v45; // rdi
  int v46; // r12d
  _DWORD *v47; // rdi
  int *v48; // rsi
  unsigned __int64 v49; // rcx
  __int64 v50; // rbx
  char *v51; // rdi
  int v52; // r14d
  bool v53; // zf
  int v54; // r12d
  _DWORD *v55; // rsi
  unsigned __int64 v56; // rcx
  _DWORD *v57; // rdi
  int *v58; // rdi
  int v59; // r14d
  int v60; // esi
  int v61; // r12d
  _DWORD *v62; // rsi
  _DWORD *v63; // rdi
  unsigned __int64 i; // rcx
  int *v65; // rdi
  int j; // r14d
  int v67; // [rsp+28h] [rbp-89h]
  int v68; // [rsp+28h] [rbp-89h]
  int v69; // [rsp+28h] [rbp-89h]
  int v70; // [rsp+2Ch] [rbp-85h]
  int v71; // [rsp+30h] [rbp-81h]
  char v72; // [rsp+34h] [rbp-7Dh]
  int v73; // [rsp+38h] [rbp-79h]
  int v74; // [rsp+48h] [rbp-69h]
  int v75; // [rsp+4Ch] [rbp-65h]
  unsigned int Size; // [rsp+50h] [rbp-61h]
  int Size_4; // [rsp+54h] [rbp-5Dh]
  int v78; // [rsp+58h] [rbp-59h]
  int v79; // [rsp+5Ch] [rbp-55h]
  int v80; // [rsp+60h] [rbp-51h]
  int v82; // [rsp+68h] [rbp-49h]
  _BYTE *v83; // [rsp+70h] [rbp-41h]
  int v84; // [rsp+78h] [rbp-39h]
  char v85; // [rsp+7Ch] [rbp-35h]
  int v86; // [rsp+80h] [rbp-31h]
  int v87; // [rsp+88h] [rbp-29h]
  __int64 v88; // [rsp+90h] [rbp-21h]
  int *v89; // [rsp+98h] [rbp-19h]
  int *v90; // [rsp+A0h] [rbp-11h]
  __int64 v91; // [rsp+A8h] [rbp-9h]
  _BYTE *v93; // [rsp+B8h] [rbp+7h]
  __int64 v94; // [rsp+C0h] [rbp+Fh]
  _BYTE Src[12]; // [rsp+C8h] [rbp+17h] BYREF
  int v96; // [rsp+D4h] [rbp+23h]

  v2 = *((_DWORD *)a1 + 4);
  v3 = 0;
  v4 = (int *)*((_QWORD *)a1 + 3);
  v5 = a1;
  v89 = v4;
  v84 = 6 * v2;
  v82 = v2;
  do
  {
    v6 = *v4;
    v7 = v4[2];
    v8 = v4[1];
    v79 = v8;
    v9 = aulMsk[*v4 & 0x1F];
    v73 = v9;
    v10 = ~v9;
    v80 = ~v9;
    v11 = aulMsk[v7 & 0x1F];
    if ( v11 == -1 )
      v11 = 0;
    v12 = ~v11;
    v71 = v11;
    v78 = ~v11;
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
      v73 = v12 & v9;
      v10 = ~(v12 & v9);
      v80 = v10;
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
      v83 = (_BYTE *)*((_QWORD *)v5 + 1);
    }
    else
    {
      v83 = (_BYTE *)(v14 + 8LL * ((6 - 6 * ((v8 - *((_DWORD *)v5 + 9)) / 6) + v8 - *((_DWORD *)v5 + 9)) % 6));
      v2 = v82;
    }
    v93 = (_BYTE *)(v14 + 48);
    v74 = v13 / 3;
    Size = 4 * v13;
    v15 = *((_BYTE *)v5 + 32);
    v75 = v13 % 3;
    v72 = v15;
    v70 = (v6 >> 5) % 3;
    v16 = v4[3] - v8;
    v17 = 6;
    if ( v16 >= 6 || (v17 = v4[3] - v8, v16) )
    {
      v18 = 6 - v15;
      v19 = v2;
      v20 = v84;
      v88 = v13 % 3;
      v21 = v13;
      v22 = (v6 >> 5) % 3;
      v91 = v21;
      v85 = 6 - v15;
      v94 = v19;
      while ( 1 )
      {
        v23 = v90;
        v24 = (char *)v90;
        v87 = v17 - 1;
        v90 = (int *)((char *)v90 + v19);
        v25 = v4[3] - v79++ + 5;
        v26 = v25 / 6;
        v27 = *v83 >> 2;
        v28 = v15 ? ((unsigned __int8)(v27 << v18) | (v27 >> v15)) & 0x3F : v27;
        v29 = v28 | ((v28 | ((v28 | ((v28 | (v28 << 6)) << 6)) << 6)) << 6);
        if ( v3 != 9 )
          break;
        if ( v22 )
        {
          if ( v22 == 1 )
          {
            v30 = 16 * v29;
            v28 >>= 2;
          }
          else
          {
            v30 = v29 << 6;
          }
        }
        else
        {
          v30 = 4 * v29;
          v28 >>= 4;
        }
        v31 = v28 | v30;
        LOBYTE(v67) = HIBYTE(v31);
        BYTE1(v67) = BYTE2(v31);
        BYTE2(v67) = BYTE1(v31);
        HIBYTE(v67) = v31;
        *(_DWORD *)Src = v67;
        do
        {
          *v23 = v73 & v67 | v10 & *v23;
          v23 = (int *)((char *)v23 + v20);
          --v26;
        }
        while ( v26 );
LABEL_66:
        v5 = a1;
        v83 += 8;
        if ( v83 == v93 )
          v83 = (_BYTE *)*((_QWORD *)a1 + 1);
        v17 = v87;
        v3 = Size_4;
        v4 = v89;
        v15 = v72;
        v19 = v94;
        if ( !v87 )
          goto LABEL_69;
        v18 = v85;
      }
      *(_DWORD *)Src = (v28 >> 4) | (4 * v29);
      LOBYTE(v68) = Src[3];
      BYTE1(v68) = Src[2];
      HIBYTE(v68) = (v28 >> 4) | (4 * v29);
      BYTE2(v68) = (unsigned __int16)((v28 >> 4) | (4 * v29)) >> 8;
      v32 = v68;
      v33 = (v28 >> 2) | (16 * v29);
      v34 = v28 | (v29 << 6);
      LOBYTE(v68) = HIBYTE(v33);
      BYTE1(v68) = BYTE2(v33);
      BYTE2(v68) = BYTE1(v33);
      HIBYTE(v68) = v33;
      v35 = v68;
      LOBYTE(v69) = HIBYTE(v34);
      BYTE1(v69) = BYTE2(v34);
      BYTE2(v69) = BYTE1(v34);
      HIBYTE(v69) = v34;
      v36 = v69;
      *(_DWORD *)&Src[8] = v69;
      *(_DWORD *)&Src[4] = v35;
      if ( v70 == 1 )
      {
        v37 = v35;
        *(_DWORD *)Src = v35;
        v35 = v69;
        *(_DWORD *)&Src[4] = v69;
        v36 = v32;
        *(_DWORD *)&Src[8] = v32;
      }
      else
      {
        *(_DWORD *)Src = v32;
        v37 = v32;
        if ( v70 == 2 )
        {
          v37 = v69;
          v36 = v35;
          *(_DWORD *)&Src[8] = v35;
          v35 = v32;
          *(_DWORD *)Src = v69;
          *(_DWORD *)&Src[4] = v32;
        }
      }
      v96 = v37;
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          v54 = v73 & v37;
          *v23 = v73 & v37 | *v23 & v10;
          if ( v74 > 0 )
          {
            v55 = v23 + 1;
            *(_QWORD *)(v23 + 1) = *(_QWORD *)&Src[4];
            v23[3] = v37;
            v56 = (12 * (unsigned __int64)(unsigned int)v74 - 12) >> 2;
            v57 = v23 + 4;
            while ( v56 )
            {
              *v57++ = *v55++;
              --v56;
            }
            v23 += 3 * (unsigned int)v74;
          }
          if ( v75 )
          {
            memmove(v23 + 1, &Src[4], (unsigned int)(4 * v75));
            v11 = v71;
          }
          v50 = v84;
          v58 = (int *)&v24[v84];
          v59 = v26 - 1;
          if ( v59 )
          {
            do
            {
              *v58 = v54 | v10 & *v58;
              memmove(v58 + 1, v24 + 4, Size);
              v58 = (int *)((char *)v58 + v84);
              --v59;
            }
            while ( v59 );
            v11 = v71;
          }
        }
        else
        {
          if ( v3 != 2 )
          {
            if ( v3 == 3 )
            {
              if ( v74 > 0 )
              {
                *(_QWORD *)v23 = *(_QWORD *)Src;
                v40 = v23 + 3;
                v41 = v23;
                v23[2] = v36;
                v42 = (12 * (unsigned __int64)(unsigned int)v74 - 12) >> 2;
                v23 += 3 * (unsigned int)v74;
                while ( v42 )
                {
                  *v40++ = *v41++;
                  --v42;
                }
              }
              if ( v75 )
              {
                memmove(v23, Src, (unsigned int)(4 * v75));
                v11 = v71;
              }
              v43 = &v24[v20];
              v44 = v26 - 1;
              if ( v44 )
              {
                do
                {
                  memmove(v43, v24, Size);
                  v43 += v20;
                  --v44;
                }
                while ( v44 );
                v11 = v71;
              }
            }
            else
            {
              if ( v3 != 8 )
              {
                v22 = v70;
                goto LABEL_66;
              }
              v38 = v73 & v37;
              v39 = v78 & v35;
              do
              {
                *v23 = v38 | v10 & *v23;
                v23[1] = v39 | v11 & v23[1];
                v23 = (int *)((char *)v23 + v20);
                --v26;
              }
              while ( v26 );
            }
            goto LABEL_65;
          }
          v45 = 4 * v88;
          v46 = v78 & *(_DWORD *)&Src[4 * v88];
          if ( v74 > 0 )
          {
            *(_QWORD *)v23 = *(_QWORD *)Src;
            v47 = v23 + 3;
            v48 = v23;
            v23[2] = v36;
            v49 = (12 * (unsigned __int64)(unsigned int)v74 - 12) >> 2;
            v23 += 3 * (unsigned int)v74;
            while ( v49 )
            {
              *v47++ = *v48++;
              --v49;
            }
            v45 = 4 * v88;
          }
          if ( v75 )
          {
            memmove(v23, Src, (unsigned int)(4 * v75));
            v11 = v71;
            v23 = (int *)((char *)v23 + v45);
          }
          *v23 = v46 | v11 & *v23;
          v50 = v84;
          v51 = &v24[v84];
          v52 = v26 - 1;
          if ( v52 )
          {
            do
            {
              memmove(v51, v24, Size);
              v11 = v71;
              *(_DWORD *)&v51[4 * v91] = v46 | v71 & *(_DWORD *)&v51[4 * v91];
              v51 += v84;
              --v52;
            }
            while ( v52 );
            v10 = v80;
          }
        }
        v20 = v50;
      }
      else
      {
        v60 = v73 & v37;
        v86 = v73 & v37;
        v61 = v78 & *(_DWORD *)&Src[4 * v88 + 4];
        *v23 = v73 & v37 | *v23 & v10;
        if ( v74 > 0 )
        {
          v62 = v23 + 1;
          *(_QWORD *)(v23 + 1) = *(_QWORD *)&Src[4];
          v23[3] = v37;
          v63 = v23 + 4;
          for ( i = (12 * (unsigned __int64)(unsigned int)v74 - 12) >> 2; i; --i )
            *v63++ = *v62++;
          v60 = v86;
          v23 += 3 * (unsigned int)v74;
        }
        if ( v75 )
        {
          memmove(v23 + 1, &Src[4], (unsigned int)(4 * v75));
          v11 = v71;
          v23 += v88;
        }
        v65 = (int *)&v24[v84];
        v23[1] = v61 | v11 & v23[1];
        for ( j = v26 - 1; j; --j )
        {
          *v65 = v60 | v10 & *v65;
          memmove(v65 + 1, v24 + 4, Size);
          v11 = v71;
          v65[v91 + 1] = v61 | v71 & v65[v91 + 1];
          v65 = (int *)((char *)v65 + v84);
        }
        v20 = v84;
      }
LABEL_65:
      v22 = v70;
      goto LABEL_66;
    }
LABEL_69:
    v2 = v82;
    v4 += 4;
    v3 = 0;
    v53 = a2-- == 1;
    v89 = v4;
  }
  while ( !v53 );
}
