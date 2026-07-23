/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x140365FB0
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x140365F40 (RtlCompressBufferXpressHuff.c)
 *     RtlCompressBufferProgress @ 0x140383760 (RtlCompressBufferProgress.c)
 * Callees:
 *     XpressBuildHuffmanEncodings @ 0x1403667D0 (XpressBuildHuffmanEncodings.c)
 *     XpressDoHuffmanPass @ 0x140366B80 (XpressDoHuffmanPass.c)
 *     RtlpMakeXpressCallback @ 0x140389080 (RtlpMakeXpressCallback.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffStandard(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v9; // rbx
  unsigned __int8 *v10; // rdi
  unsigned int v11; // ecx
  unsigned __int8 *v12; // r12
  void *v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // r13
  unsigned __int8 *v17; // rcx
  unsigned __int64 XpressCallback; // r15
  bool v19; // cf
  unsigned __int8 *v20; // rbx
  int v21; // esi
  unsigned __int8 v22; // al
  unsigned __int8 *v23; // r10
  unsigned __int8 *v24; // r11
  _DWORD *v25; // rdx
  __int64 v26; // r8
  unsigned __int8 *v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rbp
  unsigned __int8 *v30; // r13
  __int64 v31; // r15
  __int64 v32; // rbp
  __int64 v33; // r15
  int v34; // eax
  int v35; // ecx
  __int64 v36; // r8
  unsigned __int8 *v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  unsigned __int64 v41; // r8
  char v42; // cl
  unsigned __int64 v43; // rdx
  _BYTE *v44; // rax
  unsigned __int8 v45; // cl
  _WORD *v46; // rbx
  int v47; // eax
  unsigned __int8 v48; // al
  int v49; // esi
  __int64 v50; // rax
  bool v51; // zf
  __int64 v53; // r8
  unsigned __int8 *v54; // rcx
  unsigned __int64 v55; // r8
  unsigned __int8 *v56; // rcx
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  int *v60; // rcx
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  unsigned __int8 *v63; // [rsp+30h] [rbp-C8h]
  char *v64; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v65; // [rsp+40h] [rbp-B8h]
  __int64 v66; // [rsp+48h] [rbp-B0h]
  __int64 v67; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v68; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v69; // [rsp+60h] [rbp-98h]
  unsigned __int8 *v70; // [rsp+68h] [rbp-90h]
  __int64 v71; // [rsp+70h] [rbp-88h]
  unsigned __int64 v72; // [rsp+80h] [rbp-78h]
  __int64 v73; // [rsp+88h] [rbp-70h]
  _QWORD v74[2]; // [rsp+90h] [rbp-68h] BYREF
  unsigned int v75; // [rsp+A0h] [rbp-58h]
  int v76; // [rsp+A4h] [rbp-54h]
  unsigned __int8 v78; // [rsp+108h] [rbp+10h]
  int v79; // [rsp+110h] [rbp+18h]
  unsigned __int8 v80; // [rsp+118h] [rbp+20h]

  v79 = a3;
  v9 = a1 + a2;
  v68 = v9;
  v72 = a3 + a4;
  v76 = 0;
  if ( a4 < 0x12C )
    return 3221225507LL;
  v71 = a3;
  memset64(a6, a1, 0xAF6uLL);
  memset64(a6 + 5612, a1, 0x12EEuLL);
  v10 = (unsigned __int8 *)a1;
  if ( !a7 || (v11 = a9, a9 > a2) )
    v11 = a2;
  v74[0] = a7;
  v12 = (unsigned __int8 *)(a6 + 23184);
  v13 = a6 + 22608;
  v14 = v11;
  v74[1] = a8;
  v75 = v11;
  v73 = v11;
  while ( 2 )
  {
    v66 = 0LL;
    v67 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    memset(v13, 0, 0x800uLL);
    v17 = v10 + 0x10000;
    v70 = v10 + 0x10000;
    if ( (unsigned __int64)(v10 + 0x10000) > v9 )
    {
      v17 = (unsigned __int8 *)v9;
      v70 = (unsigned __int8 *)v9;
    }
    v63 = v12;
    XpressCallback = (unsigned __int64)&v10[v14];
    v69 = (unsigned __int64)(v17 - 40);
    v19 = v17 - 40 < &v10[v14];
    v20 = (unsigned __int8 *)(a6 + 23185);
    v21 = 1;
    if ( v19 )
      XpressCallback = (unsigned __int64)(v17 - 40);
    v65 = XpressCallback;
    if ( v10 == (unsigned __int8 *)a1 )
    {
      v21 = 2;
      ++a6[*v10 + 22608];
      v22 = *v10++;
      *v20 = v22;
      v20 = (unsigned __int8 *)a6 + 92741;
    }
    if ( v10 >= v17 - 40 )
      goto LABEL_40;
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v23 = v10 + 1;
            v24 = v10;
            v25 = &a6[2 * *v10];
            v26 = v10[2] + 4LL * v10[1];
            v27 = *(unsigned __int8 **)&v25[4 * v26];
            *(_QWORD *)&v25[4 * v26] = v10;
            v28 = *v10;
            if ( *v27 != (_BYTE)v28 || v27[1] != *v23 || v27[2] != v10[2] || v10 - v27 >= 0x10000 )
              break;
            v29 = v27[3];
            v30 = v10;
            v31 = v10[3];
            if ( (_BYTE)v31 != (_BYTE)v29 )
            {
              v36 = v28 + 2 * v26;
              v37 = *(unsigned __int8 **)&a6[2 * v36 + 5612 + 2 * v31];
              *(_QWORD *)&a6[2 * v36 + 5612 + 2 * v29] = v27;
              if ( v10 - v37 >= 0x10000 )
                goto LABEL_29;
              v38 = *(unsigned int *)v10;
              if ( (_DWORD)v38 != *(_DWORD *)v37 )
                goto LABEL_29;
              v27 = v37;
              *(_QWORD *)&a6[2 * v36 + 5612 + 2 * (v38 >> 24)] = v10;
            }
            v32 = v27[4];
            v33 = v10[4];
            v64 = (char *)(v10 + 4);
            if ( (_BYTE)v33 != (_BYTE)v32 )
            {
              v53 = 2
                  * ((unsigned __int8)__ROR1__(*v23 ^ __ROL1__(*v10 + v10[3], 3), 1)
                   + 4LL * (unsigned __int8)__ROL1__(*v10 ^ __ROR1__(v10[2] + *v23 + 97, 1), 3));
              v54 = *(unsigned __int8 **)&a6[2 * v53 + 5612 + 2 * v33];
              *(_QWORD *)&a6[2 * v53 + 5612 + 2 * v32] = v27;
              if ( v10 - v54 >= 0x10000
                || *(_DWORD *)v10 != *(_DWORD *)v54
                || (v59 = (unsigned __int8)*v64, (_BYTE)v59 != v54[4])
                || v10 == v54 )
              {
                v27 += 4;
                v10 += 4;
                goto LABEL_30;
              }
              v27 = v54;
              *(_QWORD *)&a6[2 * v53 + 5612 + 2 * v59] = v10;
            }
            v80 = v27[5];
            v78 = v10[5];
            if ( v78 != v80 )
            {
              v55 = 2
                  * ((v10[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v10, *v64))
                   + 4
                   * ((unsigned __int8)__ROR1__(*v23 ^ __ROL1__(v10[3], 3), 1)
                    + (unsigned __int64)(unsigned __int8)__ROL1__(*v64 ^ (__ROR1__(*v10, 1) + 69), 3)));
              v56 = *(unsigned __int8 **)&a6[2 * v55 + 5612 + 2 * v78];
              *(_QWORD *)&a6[2 * v55 + 5612 + 2 * v80] = v27;
              if ( v10 - v56 >= 0x10000
                || *(_DWORD *)v10 != *(_DWORD *)v56
                || *v64 != v56[4]
                || (v61 = v10[5], (_BYTE)v61 != v56[5])
                || v10 == v56 )
              {
                v10 += 5;
                v27 += 5;
                goto LABEL_30;
              }
              v27 = v56;
              *(_QWORD *)&a6[2 * v55 + 5612 + 2 * v61] = v10;
            }
            v10 += 6;
            v27 += 6;
            if ( (unsigned __int64)v10 >= v68 - 40 )
            {
LABEL_65:
              while ( (unsigned __int64)v10 < v68 )
              {
                if ( *v10 != *v27 )
                  break;
                ++v10;
                ++v27;
              }
            }
            else
            {
              while ( 1 )
              {
                v34 = *(_DWORD *)v27;
                v35 = *(_DWORD *)v10;
                if ( *(_DWORD *)v10 != *(_DWORD *)v27 )
                  break;
                v34 = *((_DWORD *)v27 + 1);
                v35 = *((_DWORD *)v10 + 1);
                if ( v35 != v34 )
                {
                  v10 += 4;
                  v27 += 4;
                  break;
                }
                v34 = *((_DWORD *)v27 + 2);
                v35 = *((_DWORD *)v10 + 2);
                if ( v35 != v34 )
                {
                  v10 += 8;
                  v27 += 8;
                  break;
                }
                v34 = *((_DWORD *)v27 + 3);
                v35 = *((_DWORD *)v10 + 3);
                if ( v35 != v34 )
                {
                  v10 += 12;
                  v27 += 12;
                  break;
                }
                v34 = *((_DWORD *)v27 + 4);
                v35 = *((_DWORD *)v10 + 4);
                if ( v35 != v34 )
                {
                  v10 += 16;
                  v27 += 16;
                  break;
                }
                v34 = *((_DWORD *)v27 + 5);
                v35 = *((_DWORD *)v10 + 5);
                if ( v35 != v34 )
                {
                  v10 += 20;
                  v27 += 20;
                  break;
                }
                v34 = *((_DWORD *)v27 + 6);
                v35 = *((_DWORD *)v10 + 6);
                if ( v35 != v34 )
                {
                  v10 += 24;
                  v27 += 24;
                  break;
                }
                v34 = *((_DWORD *)v27 + 7);
                v35 = *((_DWORD *)v10 + 7);
                if ( v35 != v34 )
                {
                  v10 += 28;
                  v27 += 28;
                  break;
                }
                v10 += 32;
                v27 += 32;
                if ( (unsigned __int64)v10 >= v68 - 40 )
                  goto LABEL_65;
              }
              if ( (_BYTE)v35 == (_BYTE)v34 )
              {
                if ( v10[1] != v27[1] )
                {
                  ++v10;
                  ++v27;
                  goto LABEL_30;
                }
                if ( v10[2] == v27[2] )
                {
LABEL_29:
                  v10 += 3;
                  v27 += 3;
                  goto LABEL_30;
                }
                v10 += 2;
                v27 += 2;
              }
            }
LABEL_30:
            v39 = v10 - v27;
            if ( v10 - v30 == 3 && v39 > 0x1000 )
            {
              XpressCallback = v65;
              v12 = v63;
              break;
            }
            if ( v39 >= 0x100 )
              v40 = *((unsigned __int8 *)XpressHighBitIndexTable + (v39 >> 8)) + 8LL;
            else
              v40 = *((unsigned __int8 *)XpressHighBitIndexTable + v39);
            v15 = v40 + v66;
            v41 = v39 - (1LL << v40);
            v42 = 16 * v40;
            v43 = v10 - v30 - 3;
            v66 = v15;
            v44 = v20 + 1;
            if ( v43 >= 0xF )
            {
              v45 = v42 + 15;
              v57 = v10 - v30 - 18;
              *v20 = v45;
              v46 = v20 + 2;
              if ( v57 >= 0xFF )
              {
                v62 = v57 + 15;
                *v44 = -1;
                if ( v62 < 0x10000 )
                {
                  *v46 = v62;
                  v46 = v44 + 3;
                  v67 += 3LL;
                  goto LABEL_35;
                }
                *(_DWORD *)(v44 + 3) = v62;
                *v46 = 0;
                v46 = v44 + 7;
                v58 = 7LL;
              }
              else
              {
                *v44 = v57;
                v58 = 1LL;
              }
              v67 += v58;
            }
            else
            {
              v45 = v43 + v42;
              *v20 = v45;
              v46 = v20 + 1;
            }
LABEL_35:
            ++a6[v45 + 22864];
            v47 = 2 * v21 + 1;
            *v46 = v41;
            v20 = (unsigned __int8 *)(v46 + 1);
            if ( v21 <= 0 )
            {
              v60 = (int *)v63;
              v21 = 1;
              v63 = v20;
              v20 += 4;
              *v60 = v47;
            }
            else
            {
              v21 = 2 * v21 + 1;
            }
            XpressCallback = v65;
            v12 = v63;
            if ( (unsigned __int64)v10 >= v65 )
            {
              if ( (unsigned __int64)v10 >= v69 )
                goto LABEL_39;
              XpressCallback = RtlpMakeXpressCallback(v74, v69, v10);
              v65 = XpressCallback;
            }
          }
          v10 = v23;
          ++a6[*v24 + 22608];
          *v20++ = *v24;
          if ( v21 <= 0 )
            break;
          v21 *= 2;
        }
        *(_DWORD *)v12 = 2 * v21;
        v21 = 1;
        v12 = v20;
        v63 = v20;
        v20 += 4;
      }
      while ( (unsigned __int64)v23 < XpressCallback );
      if ( (unsigned __int64)v23 >= v69 )
        break;
      XpressCallback = RtlpMakeXpressCallback(v74, v69, v23);
      v65 = XpressCallback;
    }
    v15 = v66;
LABEL_39:
    v16 = v67;
    v17 = v70;
LABEL_40:
    while ( v10 < v17 )
    {
      ++a6[*v10 + 22608];
      v48 = *v10++;
      *v20++ = v48;
      if ( v21 <= 0 )
      {
        *(_DWORD *)v12 = 2 * v21;
        v21 = 1;
        v12 = v20;
        v20 += 4;
      }
      else
      {
        v21 *= 2;
      }
    }
    for ( ; v21 > 0; v21 = 2 * v21 + 1 )
      ;
    *(_DWORD *)v12 = 2 * v21 + 1;
    if ( (unsigned __int64)v10 < v68 )
    {
      v49 = 0;
    }
    else
    {
      ++a6[22864];
      v49 = 1;
    }
    if ( v16 + 4 * ((unsigned __int64)(v15 + XpressBuildHuffmanEncodings(a6 + 15304) + 31) >> 5) + v71 + 258 < v72 )
    {
      v12 = (unsigned __int8 *)(a6 + 23184);
      v50 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, (_DWORD)v20, v71, v49);
      v9 = v68;
      v13 = a6 + 22608;
      v51 = v49 == 0;
      v71 = v50;
      v14 = v73;
      if ( !v51 )
      {
        *a5 = v50 - v79;
        return 0LL;
      }
      continue;
    }
    return 3221225507LL;
  }
}
