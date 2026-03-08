/*
 * XREFs of Xp10ExecuteLz77PassMinMatchLen4 @ 0x1409C40D4
 * Callers:
 *     Xp10CompressBuffer @ 0x1409C2808 (Xp10CompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10ExecuteLz77PassMinMatchLen4(
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
  unsigned int v12; // ebp
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  _DWORD *v15; // r9
  unsigned int *v16; // rbx
  unsigned int v17; // r9d
  unsigned __int8 *v18; // r13
  _BYTE *v19; // r15
  __int64 v20; // rdx
  unsigned __int8 *v21; // r11
  int v22; // edi
  int v23; // esi
  int v24; // eax
  unsigned __int8 *v25; // rcx
  int v26; // edi
  int v27; // esi
  int v28; // ebp
  int v29; // edi
  unsigned __int8 *v30; // rcx
  int v31; // edx
  unsigned int v32; // ebp
  unsigned int v33; // ecx
  unsigned int *v34; // r14
  unsigned int v35; // ebx
  unsigned int j; // ebp
  unsigned __int8 *v37; // rdx
  unsigned __int8 *v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rax
  _DWORD *v41; // rsi
  unsigned int v42; // ebp
  _DWORD *v43; // rdx
  signed __int64 v44; // rdi
  __int64 v45; // rax
  unsigned __int8 *i; // rdx
  __int64 v47; // rdi
  int v48; // edx
  unsigned __int8 *v49; // r12
  unsigned int v50; // esi
  _WORD *v51; // r9
  unsigned __int16 *v52; // rcx
  unsigned __int16 *v53; // r11
  int v54; // r8d
  unsigned int v55; // edx
  _DWORD *v56; // rcx
  int v57; // ebp
  unsigned __int16 v58; // ax
  unsigned int v59; // edx
  unsigned __int8 *v60; // rdi
  int v61; // ecx
  unsigned __int8 v62; // al
  __int64 v63; // rax
  unsigned __int16 *v64; // rcx
  unsigned int v66; // [rsp+0h] [rbp-98h]
  unsigned int v67; // [rsp+4h] [rbp-94h]
  int v68; // [rsp+8h] [rbp-90h]
  _WORD *v69; // [rsp+10h] [rbp-88h]
  unsigned __int8 *v70; // [rsp+18h] [rbp-80h]
  unsigned int v71; // [rsp+20h] [rbp-78h]
  unsigned __int8 *v72; // [rsp+28h] [rbp-70h]
  unsigned __int8 *v73; // [rsp+30h] [rbp-68h]
  unsigned __int64 v74; // [rsp+38h] [rbp-60h]
  int v76; // [rsp+A8h] [rbp+10h]
  int v78; // [rsp+B8h] [rbp+20h]

  v78 = (int)a4;
  v6 = a1;
  v7 = a3;
  v8 = (int)a4;
  v67 = 0;
  v9 = a2 + 1;
  v10 = a1 + 1416;
  v11 = **(_WORD **)a1 & 0x1F;
  v6[6] = 0;
  v12 = 1 << v11;
  memset64(v10, (unsigned __int64)a2, 0xEF2uLL);
  v66 = 1 << v11;
  memset64(v6 + 9068, (unsigned __int64)a2, 0x12EEuLL);
  v13 = *a2;
  *a4 = v13;
  v14 = a5 - 15;
  v15 = a4 + 1;
  ++v6[v13 + 7];
  v69 = v15;
  v74 = v7 - 40;
  if ( (unsigned __int64)(a2 + 1) < v7 - 40 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v15 >= v14 )
        goto LABEL_102;
      v68 = 0;
      v70 = v9;
      v16 = v6 + 2;
      v73 = v9;
      v17 = 0;
      v71 = 0;
      v18 = v9;
      do
      {
        v19 = v9 + 1;
        v72 = v9 + 1;
        v20 = *v9 + 8 * v9[1] + 4 * v9[3] + 2 * (unsigned int)v9[2];
        v21 = *(unsigned __int8 **)&v6[2 * v20 + 1416];
        *(_QWORD *)&v6[2 * v20 + 1416] = v9;
        if ( *v21 != *v9
          || v21[1] != *v19
          || v21[2] != v9[2]
          || v21[3] != v9[3]
          || (int)v9 - (int)v21 >= v12
          || v9 == v21 )
        {
          v23 = 0;
          v76 = 0;
          v33 = 1;
          goto LABEL_26;
        }
        v22 = v21[4];
        v23 = 1;
        v24 = v9[4];
        v76 = 1;
        if ( (_BYTE)v22 == (_BYTE)v24 )
          goto LABEL_16;
        v25 = *(unsigned __int8 **)&v6[2 * (unsigned int)(v20 + v24) + 9068];
        *(_QWORD *)&v6[2 * (unsigned int)(v20 + v22) + 9068] = v21;
        if ( *(_DWORD *)v25 == *(_DWORD *)v9 )
        {
          v26 = v9[4];
          if ( v25[4] == (_BYTE)v26 && (int)v9 - (int)v25 < v12 && v9 != v25 )
          {
            v21 = v25;
            *(_QWORD *)&v6[2 * (unsigned int)(v20 + v26) + 9068] = v9;
LABEL_16:
            v27 = v9[5];
            v28 = v21[5];
            if ( (_BYTE)v27 == (_BYTE)v28 )
            {
              v32 = v66;
LABEL_39:
              v41 = v9 + 6;
              v33 = 6;
              if ( (unsigned __int64)(v9 + 6) < v7 - 40 )
              {
                v42 = v32 - 32;
                v43 = v21 + 14;
                v44 = v9 - v21;
                while ( v33 < v42 && *v41 == *(v43 - 2) )
                {
                  if ( *(_DWORD *)((char *)v43 + v44 - 4) != *(v43 - 1) )
                  {
                    v33 += 4;
                    break;
                  }
                  if ( *(_DWORD *)((char *)v43 + v44) != *v43 )
                  {
                    v33 += 8;
                    break;
                  }
                  if ( *(_DWORD *)((char *)v43 + v44 + 4) != v43[1] )
                  {
                    v33 += 12;
                    break;
                  }
                  if ( *(_DWORD *)((char *)v43 + v44 + 8) != v43[2] )
                  {
                    v33 += 16;
                    break;
                  }
                  if ( *(_DWORD *)((char *)v43 + v44 + 12) != v43[3] )
                  {
                    v33 += 20;
                    break;
                  }
                  if ( *(_DWORD *)((char *)v43 + v44 + 16) != v43[4] )
                  {
                    v33 += 24;
                    break;
                  }
                  if ( *(_DWORD *)((char *)v43 + v44 + 20) != v43[5] )
                  {
                    v33 += 28;
                    break;
                  }
                  v33 += 32;
                  v41 += 8;
                  v43 += 8;
                  if ( (unsigned __int64)v41 >= v7 - 40 )
                    break;
                }
              }
              v45 = v33;
              for ( i = &v9[v33]; (unsigned __int64)i < v7 && *i == v21[v45]; i = &v9[v33] )
                v45 = ++v33;
            }
            else
            {
              v29 = 2
                  * ((v9[2] ^ (unsigned __int8)__ROL1__(*v9, v9[4]))
                   + 4
                   * ((unsigned __int8)__ROR1__(*v19 ^ __ROL1__(v9[3], 3), 1)
                    + (unsigned __int8)__ROL1__(v9[4] ^ (__ROR1__(*v9, 1) + 69), 3)));
              v30 = *(unsigned __int8 **)&v6[2 * (v29 + v27) + 9068];
              *(_QWORD *)&v6[2 * (v29 + v28) + 9068] = v21;
              if ( *(_DWORD *)v9 == *(_DWORD *)v30 && v9[4] == v30[4] )
              {
                v31 = v9[5];
                if ( (_BYTE)v31 == v30[5] )
                {
                  v32 = v66;
                  if ( (int)v9 - (int)v30 < v66 && v9 != v30 )
                  {
                    v21 = v30;
                    *(_QWORD *)&v6[2 * (v29 + v31) + 9068] = v9;
                    goto LABEL_39;
                  }
                }
              }
              v33 = 5;
            }
            v23 = 1;
            goto LABEL_26;
          }
        }
        v33 = 4;
LABEL_26:
        v34 = v16;
        v35 = v67;
        for ( j = 0; j < 4; ++j )
        {
          v37 = &v9[-*v34];
          if ( *v37 == *v9 && v37[1] == *v72 && v37[2] == v9[2] && v37[3] == v9[3] && v37 != v9 )
          {
            v38 = v9 + 4;
            LODWORD(v39) = 4;
            if ( (unsigned __int64)(v9 + 4) < a3 )
            {
              v40 = 4LL;
              do
              {
                if ( *v38 != v37[v40] )
                  break;
                v39 = (unsigned int)(v39 + 1);
                v40 = (unsigned int)v39;
                v38 = &v9[v39];
              }
              while ( (unsigned __int64)&v9[v39] < a3 );
            }
            if ( (unsigned int)v39 < v33 )
            {
              v23 = v76;
            }
            else
            {
              v23 = 2;
              v21 = &v9[-*v34];
              v76 = 2;
              v35 = j;
              v33 = v39;
            }
          }
          ++v34;
        }
        v6 = a1;
        v7 = a3;
        v47 = v35;
        if ( v33 < v17 )
        {
          v23 = v68;
          v9 = v18;
          v47 = v71;
        }
        v48 = v23;
        if ( v33 < v17 )
          v21 = v70;
        v18 = v9;
        v12 = v66;
        v9 = v72;
        v49 = v73;
        v50 = v33;
        if ( v33 < v17 )
          v50 = v17;
        v67 = v35;
        v71 = v47;
        v68 = v48;
        v70 = v21;
        v17 = v50;
        v16 = a1 + 2;
      }
      while ( v72 - v73 <= 2 );
      v51 = v69;
      v67 = v47;
      while ( v49 < v18 )
      {
        v52 = v51;
        *v51++ = *v49;
        ++a1[*v52 + 7];
        ++v49;
      }
      v53 = v51;
      v54 = 0;
      if ( v48 )
      {
        if ( v48 == 1 )
        {
          v57 = (int)v70;
          _BitScanReverse((unsigned int *)&v54, (_DWORD)v18 - (_DWORD)v70);
          *v51 = 16 * (v54 + 20);
          a1[5] = a1[4];
          a1[4] = a1[3];
          a1[3] = *v16;
          *v16 = (_DWORD)v18 - (_DWORD)v70;
        }
        else
        {
          if ( v48 == 2 )
          {
            *v51 = 16 * (v47 + 16);
            v55 = a1[v47 + 2];
            if ( (_DWORD)v47 )
            {
              v56 = a1 + 4;
              if ( (unsigned int)v47 >= 3 )
              {
                a1[5] = *v56;
                goto LABEL_84;
              }
              if ( (unsigned int)v47 >= 2 )
LABEL_84:
                *v56 = a1[3];
              a1[3] = *v16;
              *v16 = v55;
            }
          }
          v57 = (int)v70;
        }
        v58 = *v51;
        v59 = v50 - 4;
        if ( v50 - 4 < 0xF )
        {
          *v51 = v58 + v59;
          v15 = v51 + 1;
          v69 = v15;
        }
        else
        {
          v60 = (unsigned __int8 *)(v51 + 1);
          *v51 = v58 + 15;
          v15 = (_DWORD *)((char *)v51 + 3);
          v69 = v15;
          if ( v59 <= 0xF6 )
          {
            v62 = v50 - 19;
            *v60 = v50 - 19;
LABEL_93:
            v69 = v15;
          }
          else
          {
            _BitScanReverse((unsigned int *)&v61, v50 - 250);
            v62 = v61 - 24;
            *v60 = v61 - 24;
            if ( v50 - 250 > 1 )
            {
              a1[6] += v61;
              *v15++ = v50 - 250 - (1 << v61);
              v62 = *v60;
              goto LABEL_93;
            }
          }
          ++a1[v62 + 711];
        }
        ++a1[*v53 + 7];
        if ( v68 == 1 && v54 )
        {
          a1[6] += v54;
          *v15++ = (_DWORD)v18 - (1 << v54) - v57;
          v69 = v15;
        }
        v63 = v50;
      }
      else
      {
        *v51 = *v18;
        v15 = v51 + 1;
        v69 = v15;
        ++a1[*v53 + 7];
        v63 = 1LL;
      }
      v7 = a3;
      v9 = &v18[v63];
      v12 = v66;
      v14 = a5 - 15;
      if ( (unsigned __int64)&v18[v63] >= v74 )
      {
LABEL_102:
        v8 = v78;
        break;
      }
    }
  }
  if ( (unsigned __int64)v9 < v7 )
  {
    do
    {
      if ( (unsigned __int64)v15 >= a5 )
        break;
      v64 = (unsigned __int16 *)v15;
      *(_WORD *)v15 = *v9++;
      v15 = (_DWORD *)((char *)v15 + 2);
      ++v6[*v64 + 7];
    }
    while ( (unsigned __int64)v9 < v7 );
    v8 = v78;
  }
  *a6 = (_DWORD)v15 - v8;
  return 0LL;
}
