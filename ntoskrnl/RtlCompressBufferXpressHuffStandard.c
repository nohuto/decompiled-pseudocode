/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x14036E3C0
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x14036E350 (RtlCompressBufferXpressHuff.c)
 *     RtlCompressBufferProgress @ 0x1405B0208 (RtlCompressBufferProgress.c)
 * Callees:
 *     XpressDoHuffmanPass @ 0x14036EBD0 (XpressDoHuffmanPass.c)
 *     XpressBuildHuffmanEncodings @ 0x14036EEC0 (XpressBuildHuffmanEncodings.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpMakeXpressCallback @ 0x1405B2518 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffStandard(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned __int8 *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v9; // rsi
  unsigned __int8 *v10; // rdi
  unsigned int v11; // ecx
  unsigned __int8 *v12; // rbx
  __int64 v13; // r15
  void *v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r13
  unsigned __int8 *v17; // rcx
  unsigned __int64 XpressCallback; // r15
  unsigned __int8 *v19; // r12
  int v20; // esi
  unsigned __int8 *v21; // rbx
  unsigned __int8 v22; // al
  unsigned __int8 *v23; // r10
  unsigned __int8 *v24; // r11
  unsigned __int8 *v25; // rdx
  __int64 v26; // r8
  unsigned __int8 *v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rbp
  unsigned __int8 *v30; // r13
  __int64 v31; // r15
  __int64 v32; // r8
  unsigned __int8 *v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // r9
  _BYTE *v38; // r8
  unsigned __int64 v39; // rdx
  char v40; // cl
  unsigned __int8 v41; // cl
  _WORD *v42; // rbx
  int v43; // eax
  unsigned __int8 v44; // al
  int v45; // esi
  int v46; // r8d
  __int64 v47; // rax
  int v48; // r15d
  bool v49; // zf
  __int64 v51; // rbp
  int v52; // eax
  int v53; // ecx
  __int64 v54; // r8
  unsigned __int8 *v55; // rdx
  unsigned __int64 v56; // r8
  unsigned __int8 *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  int *v60; // rcx
  __int64 v61; // rax
  unsigned __int8 *v62; // [rsp+30h] [rbp-B8h]
  char *v63; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v64; // [rsp+40h] [rbp-A8h]
  __int64 v65; // [rsp+48h] [rbp-A0h]
  __int64 v66; // [rsp+50h] [rbp-98h]
  unsigned __int64 v67; // [rsp+58h] [rbp-90h]
  unsigned __int64 v68; // [rsp+60h] [rbp-88h]
  unsigned __int8 *v69; // [rsp+68h] [rbp-80h]
  __int64 v70; // [rsp+70h] [rbp-78h]
  __int64 v71; // [rsp+78h] [rbp-70h]
  unsigned __int64 v72; // [rsp+80h] [rbp-68h]
  _QWORD v73[2]; // [rsp+88h] [rbp-60h] BYREF
  unsigned int v74; // [rsp+98h] [rbp-50h]
  int v75; // [rsp+9Ch] [rbp-4Ch]
  unsigned __int8 v77; // [rsp+F8h] [rbp+10h]
  unsigned __int8 v78; // [rsp+F8h] [rbp+10h]
  int v79; // [rsp+100h] [rbp+18h]
  unsigned __int8 v80; // [rsp+108h] [rbp+20h]

  v79 = a3;
  v9 = a1 + a2;
  v67 = v9;
  v72 = a3 + a4;
  v75 = 0;
  if ( a4 < 0x12C )
    return 3221225507LL;
  v70 = a3;
  memset64(a6, a1, 0xAF6uLL);
  memset64(a6 + 22448, a1, 0x12EEuLL);
  v10 = (unsigned __int8 *)a1;
  if ( !a7 || (v11 = a9, a9 > a2) )
    v11 = a2;
  v73[0] = a7;
  v12 = a6 + 92736;
  v13 = v11;
  v73[1] = a8;
  v14 = a6 + 90432;
  v74 = v11;
  v71 = v11;
  while ( 2 )
  {
    v65 = 0LL;
    v66 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    memset(v14, 0, 0x800uLL);
    v17 = v10 + 0x10000;
    v69 = v10 + 0x10000;
    if ( (unsigned __int64)(v10 + 0x10000) > v9 )
    {
      v17 = (unsigned __int8 *)v9;
      v69 = (unsigned __int8 *)v9;
    }
    v62 = v12;
    XpressCallback = (unsigned __int64)&v10[v13];
    v68 = (unsigned __int64)(v17 - 40);
    v19 = v12;
    v20 = 1;
    if ( (unsigned __int64)(v17 - 40) < XpressCallback )
      XpressCallback = (unsigned __int64)(v17 - 40);
    v21 = v12 + 4;
    v64 = XpressCallback;
    if ( v10 == (unsigned __int8 *)a1 )
    {
      v20 = 2;
      ++*(_DWORD *)&a6[4 * *v10 + 90432];
      v22 = *v10++;
      *v21++ = v22;
    }
    if ( v10 >= v17 - 40 )
      goto LABEL_32;
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
            v25 = &a6[8 * *v10];
            v26 = v10[2] + 4LL * v10[1];
            v27 = *(unsigned __int8 **)&v25[16 * v26];
            *(_QWORD *)&v25[16 * v26] = v10;
            v28 = *v10;
            if ( *v27 != (_BYTE)v28 || v27[1] != *v23 || v27[2] != v10[2] || v10 - v27 >= 0x10000 )
              break;
            v29 = v27[3];
            v30 = v10;
            v31 = v10[3];
            if ( (_BYTE)v31 != (_BYTE)v29 )
            {
              v32 = v28 + 2 * v26;
              v33 = *(unsigned __int8 **)&a6[8 * v32 + 22448 + 8 * v31];
              *(_QWORD *)&a6[8 * v32 + 22448 + 8 * v29] = v27;
              if ( v10 - v33 >= 0x10000 )
                goto LABEL_21;
              v34 = *(unsigned int *)v10;
              if ( (_DWORD)v34 != *(_DWORD *)v33 )
                goto LABEL_21;
              v27 = v33;
              *(_QWORD *)&a6[8 * v32 + 22448 + 8 * (v34 >> 24)] = v10;
            }
            v51 = v27[4];
            v63 = (char *)(v10 + 4);
            v77 = v10[4];
            if ( v77 != (_BYTE)v51 )
            {
              v54 = 2
                  * ((unsigned __int8)__ROR1__(*v23 ^ __ROL1__(v10[3] + *v10, 3), 1)
                   + 4LL * (unsigned __int8)__ROL1__(*v10 ^ __ROR1__(v10[2] + *v23 + 97, 1), 3));
              v55 = *(unsigned __int8 **)&a6[8 * v54 + 22448 + 8 * v77];
              *(_QWORD *)&a6[8 * v54 + 22448 + 8 * v51] = v27;
              if ( v10 - v55 >= 0x10000
                || *(_DWORD *)v10 != *(_DWORD *)v55
                || (v59 = (unsigned __int8)*v63, (_BYTE)v59 != v55[4])
                || v10 == v55 )
              {
                v10 += 4;
                v27 += 4;
                goto LABEL_22;
              }
              v27 = v55;
              *(_QWORD *)&a6[8 * v54 + 22448 + 8 * v59] = v10;
            }
            v80 = v27[5];
            v78 = v10[5];
            if ( v78 != v80 )
            {
              v56 = 2
                  * ((v10[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v10, *v63))
                   + 4
                   * ((unsigned __int8)__ROR1__(*v23 ^ __ROL1__(v10[3], 3), 1)
                    + (unsigned __int64)(unsigned __int8)__ROL1__(*v63 ^ (__ROR1__(*v10, 1) + 69), 3)));
              v57 = *(unsigned __int8 **)&a6[8 * v56 + 22448 + 8 * v78];
              *(_QWORD *)&a6[8 * v56 + 22448 + 8 * v80] = v27;
              if ( v10 - v57 >= 0x10000
                || *(_DWORD *)v10 != *(_DWORD *)v57
                || *v63 != v57[4]
                || (v61 = v10[5], (_BYTE)v61 != v57[5])
                || v10 == v57 )
              {
                v10 += 5;
                v27 += 5;
                goto LABEL_22;
              }
              v27 = v57;
              *(_QWORD *)&a6[8 * v56 + 22448 + 8 * v61] = v10;
            }
            v10 += 6;
            v27 += 6;
            if ( (unsigned __int64)v10 >= v67 - 40 )
            {
LABEL_56:
              while ( (unsigned __int64)v10 < v67 )
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
                v52 = *(_DWORD *)v27;
                v53 = *(_DWORD *)v10;
                if ( *(_DWORD *)v10 != *(_DWORD *)v27 )
                  break;
                v52 = *((_DWORD *)v27 + 1);
                v53 = *((_DWORD *)v10 + 1);
                if ( v53 != v52 )
                {
                  v10 += 4;
                  v27 += 4;
                  break;
                }
                v52 = *((_DWORD *)v27 + 2);
                v53 = *((_DWORD *)v10 + 2);
                if ( v53 != v52 )
                {
                  v10 += 8;
                  v27 += 8;
                  break;
                }
                v52 = *((_DWORD *)v27 + 3);
                v53 = *((_DWORD *)v10 + 3);
                if ( v53 != v52 )
                {
                  v10 += 12;
                  v27 += 12;
                  break;
                }
                v52 = *((_DWORD *)v27 + 4);
                v53 = *((_DWORD *)v10 + 4);
                if ( v53 != v52 )
                {
                  v10 += 16;
                  v27 += 16;
                  break;
                }
                v52 = *((_DWORD *)v27 + 5);
                v53 = *((_DWORD *)v10 + 5);
                if ( v53 != v52 )
                {
                  v10 += 20;
                  v27 += 20;
                  break;
                }
                v52 = *((_DWORD *)v27 + 6);
                v53 = *((_DWORD *)v10 + 6);
                if ( v53 != v52 )
                {
                  v10 += 24;
                  v27 += 24;
                  break;
                }
                v52 = *((_DWORD *)v27 + 7);
                v53 = *((_DWORD *)v10 + 7);
                if ( v53 != v52 )
                {
                  v10 += 28;
                  v27 += 28;
                  break;
                }
                v10 += 32;
                v27 += 32;
                if ( (unsigned __int64)v10 >= v67 - 40 )
                  goto LABEL_56;
              }
              if ( (_BYTE)v53 == (_BYTE)v52 )
              {
                if ( v10[1] != v27[1] )
                {
                  ++v10;
                  ++v27;
                  goto LABEL_22;
                }
                if ( v10[2] != v27[2] )
                {
                  v10 += 2;
                  v27 += 2;
                  goto LABEL_22;
                }
LABEL_21:
                v10 += 3;
                v27 += 3;
              }
            }
LABEL_22:
            v35 = v10 - v27;
            if ( v10 - v30 == 3 && v35 > 0x1000 )
            {
              XpressCallback = v64;
              v19 = v62;
              break;
            }
            if ( v35 >= 0x100 )
              v36 = *((unsigned __int8 *)XpressHighBitIndexTable + (v35 >> 8)) + 8LL;
            else
              v36 = *((unsigned __int8 *)XpressHighBitIndexTable + v35);
            v37 = v10 - v30 - 3;
            v15 = v36 + v65;
            v38 = v21 + 1;
            v65 += v36;
            v39 = v35 - (1LL << v36);
            v40 = 16 * v36;
            if ( v37 >= 0xF )
            {
              v41 = v40 + 15;
              *v21 = v41;
              v42 = v21 + 2;
              if ( (unsigned __int64)(v10 - v30 - 18) >= 0xFF )
              {
                *v38 = -1;
                if ( v37 < 0x10000 )
                {
                  *v42 = v37;
                  v66 += 3LL;
                  v42 = v38 + 3;
                  goto LABEL_27;
                }
                *(_DWORD *)(v38 + 3) = v37;
                *v42 = 0;
                v42 = v38 + 7;
                v58 = 7LL;
              }
              else
              {
                *v38 = (_BYTE)v10 - (_BYTE)v30 - 18;
                v58 = 1LL;
              }
              v66 += v58;
            }
            else
            {
              v41 = v37 + v40;
              *v21 = v41;
              v42 = v21 + 1;
            }
LABEL_27:
            ++*(_DWORD *)&a6[4 * v41 + 91456];
            v43 = 2 * v20 + 1;
            *v42 = v39;
            v21 = (unsigned __int8 *)(v42 + 1);
            if ( v20 <= 0 )
            {
              v60 = (int *)v62;
              v20 = 1;
              v62 = v21;
              v21 += 4;
              *v60 = v43;
            }
            else
            {
              v20 = 2 * v20 + 1;
            }
            XpressCallback = v64;
            v19 = v62;
            if ( (unsigned __int64)v10 >= v64 )
            {
              if ( (unsigned __int64)v10 >= v68 )
                goto LABEL_31;
              XpressCallback = RtlpMakeXpressCallback(v73, v68, v10);
              v64 = XpressCallback;
            }
          }
          v10 = v23;
          ++*(_DWORD *)&a6[4 * *v24 + 90432];
          *v21++ = *v24;
          if ( v20 <= 0 )
            break;
          v20 *= 2;
        }
        *(_DWORD *)v19 = 2 * v20;
        v20 = 1;
        v19 = v21;
        v62 = v21;
        v21 += 4;
      }
      while ( (unsigned __int64)v23 < XpressCallback );
      if ( (unsigned __int64)v23 >= v68 )
        break;
      XpressCallback = RtlpMakeXpressCallback(v73, v68, v23);
      v64 = XpressCallback;
    }
    v15 = v65;
LABEL_31:
    v16 = v66;
    v17 = v69;
LABEL_32:
    while ( v10 < v17 )
    {
      ++*(_DWORD *)&a6[4 * *v10 + 90432];
      v44 = *v10++;
      *v21++ = v44;
      if ( v20 <= 0 )
      {
        *(_DWORD *)v19 = 2 * v20;
        v20 = 1;
        v19 = v21;
        v21 += 4;
      }
      else
      {
        v20 *= 2;
      }
    }
    for ( ; v20 > 0; v20 = 2 * v20 + 1 )
      ;
    *(_DWORD *)v19 = 2 * v20 + 1;
    if ( (unsigned __int64)v10 < v67 )
    {
      v45 = 0;
    }
    else
    {
      ++*((_DWORD *)a6 + 22864);
      v45 = 1;
    }
    if ( v16 + 4 * ((unsigned __int64)(v15 + XpressBuildHuffmanEncodings(a6 + 61216) + 31) >> 5) + v70 + 258 >= v72 )
      return 3221225507LL;
    v46 = (int)v21;
    v12 = a6 + 92736;
    v47 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, v46, v70, v45);
    v48 = v47;
    v70 = v47;
    v49 = v45 == 0;
    v14 = a6 + 90432;
    v9 = v67;
    if ( v49 )
    {
      v13 = v71;
      continue;
    }
    break;
  }
  *a5 = v48 - v79;
  return 0LL;
}
