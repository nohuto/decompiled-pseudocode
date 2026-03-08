/*
 * XREFs of Xp10ExecuteLz77PassMinMatchLen3 @ 0x1409C3990
 * Callers:
 *     Xp10CompressBuffer @ 0x1409C2808 (Xp10CompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10ExecuteLz77PassMinMatchLen3(
        _DWORD *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        _DWORD *a6)
{
  _DWORD *v6; // r10
  unsigned __int64 v7; // r14
  int v8; // r11d
  unsigned __int8 *v9; // r8
  void *v10; // rdi
  char v11; // cl
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  _DWORD *v14; // r9
  unsigned __int64 v15; // rax
  unsigned int *v16; // rsi
  unsigned __int8 *v17; // r12
  unsigned __int8 *v18; // r13
  __int64 v19; // rdx
  unsigned __int8 *v20; // r11
  int v21; // edi
  int v22; // ebx
  int v23; // eax
  unsigned __int8 *v24; // rcx
  int v25; // edi
  int v26; // ebx
  int v27; // ebp
  int v28; // edi
  unsigned __int8 *v29; // rcx
  int v30; // edx
  int v31; // ebx
  int v32; // ebp
  int v33; // edi
  unsigned __int8 *v34; // rcx
  int v35; // edx
  _DWORD *v36; // rbx
  unsigned int v37; // ecx
  _DWORD *v38; // rdx
  signed __int64 v39; // rdi
  unsigned int *v40; // r14
  unsigned int v41; // esi
  unsigned int j; // ebp
  unsigned __int8 *v43; // rdx
  __int64 v44; // rax
  unsigned __int8 *v45; // rbx
  unsigned int v46; // edi
  __int64 v47; // rax
  unsigned __int8 *i; // rdx
  __int64 v49; // rbp
  int v50; // r15d
  unsigned __int8 *v51; // rdi
  unsigned int v52; // ebx
  _WORD *v53; // r9
  unsigned __int16 *v54; // rcx
  unsigned __int16 *v55; // r11
  int v56; // r8d
  unsigned int v57; // edx
  _DWORD *v58; // rcx
  int v59; // ebp
  unsigned __int16 v60; // ax
  unsigned int v61; // edx
  unsigned __int8 *v62; // rdi
  int v63; // ecx
  unsigned __int8 v64; // al
  __int64 v65; // rax
  unsigned __int16 *v66; // rcx
  unsigned int v68; // [rsp+0h] [rbp-88h]
  _WORD *v69; // [rsp+8h] [rbp-80h]
  unsigned __int8 *v70; // [rsp+10h] [rbp-78h]
  unsigned int v71; // [rsp+18h] [rbp-70h]
  int v72; // [rsp+1Ch] [rbp-6Ch]
  unsigned int v73; // [rsp+20h] [rbp-68h]
  unsigned int v74; // [rsp+24h] [rbp-64h]
  unsigned __int8 *v75; // [rsp+28h] [rbp-60h]
  unsigned __int64 v76; // [rsp+30h] [rbp-58h]
  int v78; // [rsp+98h] [rbp+10h]
  int v80; // [rsp+A8h] [rbp+20h]

  v80 = (int)a4;
  v6 = a1;
  v7 = a3;
  v8 = (int)a4;
  v68 = 0;
  v9 = a2 + 1;
  v10 = a1 + 1416;
  v11 = **(_WORD **)a1 & 0x1F;
  v6[6] = 0;
  v12 = v7 - 40;
  v74 = 1 << v11;
  v76 = v7 - 40;
  memset64(v10, (unsigned __int64)a2, 0xEF2uLL);
  memset64(v6 + 9068, (unsigned __int64)a2, 0x12EEuLL);
  v13 = *a2;
  *a4 = v13;
  v14 = a4 + 1;
  v69 = v14;
  ++v6[v13 + 7];
  v15 = a5 - 15;
  if ( (unsigned __int64)(a2 + 1) < v7 - 40 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v14 >= v15 )
        goto LABEL_109;
      v16 = v6 + 2;
      v72 = 0;
      v73 = 0;
      v71 = 0;
      v17 = v9;
      v70 = v9;
      v75 = v9;
      while ( 1 )
      {
        v18 = v9 + 1;
        v19 = *v9 + 8 * v9[1] + 2 * (unsigned int)v9[2];
        v20 = *(unsigned __int8 **)&v6[2 * v19 + 1416];
        *(_QWORD *)&v6[2 * v19 + 1416] = v9;
        if ( *v20 != *v9 || v20[1] != *v18 || v20[2] != v9[2] || (int)v9 - (int)v20 >= v74 || v9 == v20 )
        {
          v22 = 0;
          v78 = 0;
          v37 = 1;
          goto LABEL_45;
        }
        v21 = v20[3];
        v22 = 1;
        v23 = v9[3];
        v78 = 1;
        if ( (_BYTE)v21 == (_BYTE)v23 )
          goto LABEL_16;
        v24 = *(unsigned __int8 **)&v6[2 * (unsigned int)(v19 + v23) + 9068];
        *(_QWORD *)&v6[2 * (unsigned int)(v19 + v21) + 9068] = v20;
        if ( *(_DWORD *)v24 == *(_DWORD *)v9 )
        {
          v25 = v9[3];
          if ( v24[3] == (_BYTE)v25 && (int)v9 - (int)v24 < v74 && v9 != v24 )
          {
            v20 = v24;
            *(_QWORD *)&v6[2 * (unsigned int)(v19 + v25) + 9068] = v9;
LABEL_16:
            v26 = v20[4];
            v27 = v9[4];
            if ( (_BYTE)v26 != (_BYTE)v27 )
            {
              v28 = 2
                  * ((unsigned __int8)__ROR1__(*v18 ^ __ROL1__(v9[3] + *v9, 3), 1)
                   + 4 * (unsigned __int8)__ROL1__(*v9 ^ __ROR1__(v9[2] + *v18 + 97, 1), 3));
              v29 = *(unsigned __int8 **)&v6[2 * (v28 + v27) + 9068];
              *(_QWORD *)&v6[2 * (v28 + v26) + 9068] = v20;
              if ( *(_DWORD *)v9 == *(_DWORD *)v29 )
              {
                v30 = v9[4];
                if ( (_BYTE)v30 == v29[4] && (int)v9 - (int)v29 < v74 && v9 != v29 )
                {
                  v20 = v29;
                  *(_QWORD *)&v6[2 * (v28 + v30) + 9068] = v9;
                  goto LABEL_22;
                }
              }
              v37 = 4;
LABEL_44:
              v22 = 1;
              goto LABEL_45;
            }
LABEL_22:
            v31 = v9[5];
            v32 = v20[5];
            if ( (_BYTE)v31 != (_BYTE)v32 )
            {
              v33 = 2
                  * ((v9[2] ^ (unsigned __int8)__ROL1__(*v9, v9[4]))
                   + 4
                   * ((unsigned __int8)__ROR1__(*v18 ^ __ROL1__(v9[3], 3), 1)
                    + (unsigned __int8)__ROL1__(v9[4] ^ (__ROR1__(*v9, 1) + 69), 3)));
              v34 = *(unsigned __int8 **)&v6[2 * (v33 + v31) + 9068];
              *(_QWORD *)&v6[2 * (v33 + v32) + 9068] = v20;
              if ( *(_DWORD *)v9 != *(_DWORD *)v34
                || v9[4] != v34[4]
                || (v35 = v9[5], (_BYTE)v35 != v34[5])
                || (int)v9 - (int)v34 >= v74
                || v9 == v34 )
              {
                v37 = 5;
                goto LABEL_44;
              }
              v20 = v34;
              *(_QWORD *)&v6[2 * (v33 + v35) + 9068] = v9;
            }
            v36 = v9 + 6;
            v37 = 6;
            if ( (unsigned __int64)(v9 + 6) < v12 )
            {
              v38 = v20 + 14;
              v39 = v9 - v20;
              while ( v37 < v74 - 32 && *v36 == *(v38 - 2) )
              {
                if ( *(_DWORD *)((char *)v38 + v39 - 4) != *(v38 - 1) )
                {
                  v37 += 4;
                  break;
                }
                if ( *(_DWORD *)((char *)v38 + v39) != *v38 )
                {
                  v37 += 8;
                  break;
                }
                if ( *(_DWORD *)((char *)v38 + v39 + 4) != v38[1] )
                {
                  v37 += 12;
                  break;
                }
                if ( *(_DWORD *)((char *)v38 + v39 + 8) != v38[2] )
                {
                  v37 += 16;
                  break;
                }
                if ( *(_DWORD *)((char *)v38 + v39 + 12) != v38[3] )
                {
                  v37 += 20;
                  break;
                }
                if ( *(_DWORD *)((char *)v38 + v39 + 16) != v38[4] )
                {
                  v37 += 24;
                  break;
                }
                if ( *(_DWORD *)((char *)v38 + v39 + 20) != v38[5] )
                {
                  v37 += 28;
                  break;
                }
                v37 += 32;
                v36 += 8;
                v38 += 8;
                if ( (unsigned __int64)v36 >= v12 )
                  break;
              }
            }
            v47 = v37;
            for ( i = &v9[v37]; (unsigned __int64)i < v7 && *i == v20[v47]; i = &v9[v37] )
              v47 = ++v37;
            goto LABEL_44;
          }
        }
        v37 = 3;
LABEL_45:
        v40 = v16;
        v41 = v68;
        for ( j = 0; j < 4; ++j )
        {
          v43 = &v9[-*v40];
          if ( *v43 == *v9 && v43[1] == *v18 && v43[2] == v9[2] && v43 != v9 )
          {
            v44 = 3LL;
            v45 = v9 + 3;
            v46 = 3;
            while ( (unsigned __int64)v45 < a3 && *v45 == v43[v44] )
            {
              v44 = ++v46;
              v45 = &v9[v46];
            }
            if ( v46 < v37 )
            {
              v22 = v78;
            }
            else
            {
              v22 = 2;
              v20 = &v9[-*v40];
              v78 = 2;
              v41 = j;
              v37 = v46;
            }
          }
          ++v40;
        }
        v49 = v41;
        v6 = a1;
        if ( v37 < v73 )
        {
          v22 = v72;
          v9 = v75;
        }
        v50 = v22;
        if ( v37 < v73 )
          v49 = v71;
        v51 = v9;
        if ( v37 < v73 )
          v20 = v70;
        v7 = a3;
        v72 = v22;
        v52 = v37;
        if ( v37 < v73 )
          v52 = v73;
        v75 = v9;
        v9 = v18;
        v68 = v41;
        v71 = v49;
        v16 = a1 + 2;
        v70 = v20;
        v73 = v52;
        if ( v18 - v17 > 2 )
          break;
        v12 = a3 - 40;
      }
      v53 = v69;
      v68 = v49;
      while ( v17 < v51 )
      {
        v54 = v53;
        *v53++ = *v17;
        ++a1[*v54 + 7];
        ++v17;
      }
      v55 = v53;
      v56 = 0;
      if ( v50 )
      {
        if ( v50 == 1 )
        {
          v59 = (int)v70;
          _BitScanReverse((unsigned int *)&v56, (_DWORD)v51 - (_DWORD)v70);
          *v53 = 16 * (v56 + 20);
          a1[5] = a1[4];
          a1[4] = a1[3];
          a1[3] = *v16;
          *v16 = (_DWORD)v51 - (_DWORD)v70;
        }
        else
        {
          if ( v50 == 2 )
          {
            *v53 = 16 * (v49 + 16);
            v57 = a1[v49 + 2];
            if ( (_DWORD)v49 )
            {
              v58 = a1 + 4;
              if ( (unsigned int)v49 >= 3 )
              {
                a1[5] = *v58;
                goto LABEL_91;
              }
              if ( (unsigned int)v49 >= 2 )
LABEL_91:
                *v58 = a1[3];
              a1[3] = *v16;
              *v16 = v57;
            }
          }
          v59 = (int)v70;
        }
        v60 = *v53;
        v61 = v52 - 3;
        if ( v52 - 3 < 0xF )
        {
          *v53 = v60 + v61;
          v14 = v53 + 1;
          v69 = v14;
        }
        else
        {
          v62 = (unsigned __int8 *)(v53 + 1);
          *v53 = v60 + 15;
          v14 = (_DWORD *)((char *)v53 + 3);
          v69 = v14;
          if ( v61 <= 0xF6 )
          {
            v64 = v52 - 18;
            *v62 = v52 - 18;
LABEL_100:
            v69 = v14;
          }
          else
          {
            _BitScanReverse((unsigned int *)&v63, v52 - 249);
            v64 = v63 - 24;
            *v62 = v63 - 24;
            if ( v52 - 249 > 1 )
            {
              a1[6] += v63;
              *v14++ = v52 - 249 - (1 << v63);
              v64 = *v62;
              goto LABEL_100;
            }
          }
          v51 = v75;
          ++a1[v64 + 711];
        }
        ++a1[*v55 + 7];
        if ( v50 == 1 && v56 )
        {
          a1[6] += v56;
          *v14++ = (_DWORD)v51 - (1 << v56) - v59;
          v69 = v14;
        }
        v65 = v52;
      }
      else
      {
        *v53 = *v51;
        v14 = v53 + 1;
        v69 = v14;
        ++a1[*v55 + 7];
        v65 = 1LL;
      }
      v12 = v76;
      v9 = &v51[v65];
      v7 = a3;
      v15 = a5 - 15;
      if ( (unsigned __int64)v9 >= v76 )
      {
LABEL_109:
        v8 = v80;
        break;
      }
    }
  }
  if ( (unsigned __int64)v9 < v7 )
  {
    do
    {
      if ( (unsigned __int64)v14 >= a5 )
        break;
      v66 = (unsigned __int16 *)v14;
      *(_WORD *)v14 = *v9++;
      v14 = (_DWORD *)((char *)v14 + 2);
      ++v6[*v66 + 7];
    }
    while ( (unsigned __int64)v9 < v7 );
    v8 = v80;
  }
  *a6 = (_DWORD)v14 - v8;
  return 0LL;
}
