/*
 * XREFs of RtlCompressBufferXpressHuffMax @ 0x1405B03C4
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x14036E350 (RtlCompressBufferXpressHuff.c)
 *     RtlCompressBufferProgress @ 0x1405B0208 (RtlCompressBufferProgress.c)
 * Callees:
 *     XpressDoHuffmanPass @ 0x14036EBD0 (XpressDoHuffmanPass.c)
 *     XpressBuildHuffmanEncodings @ 0x14036EEC0 (XpressBuildHuffmanEncodings.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpMakeXpressCallback @ 0x1405B2518 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffMax(
        unsigned __int64 a1,
        unsigned int a2,
        char *a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned __int8 *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v9; // rbp
  unsigned __int8 *v14; // rbx
  char *v15; // r15
  unsigned int v16; // esi
  __int64 v17; // r12
  unsigned __int8 *v18; // rcx
  unsigned __int8 *v19; // r10
  int v20; // esi
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r11
  unsigned __int8 *v23; // rdi
  unsigned __int8 v24; // al
  unsigned __int8 *v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int8 *v29; // r8
  __int64 XpressCallback; // rax
  int v31; // r12d
  unsigned __int8 *v32; // rdx
  int v33; // eax
  unsigned __int64 v34; // rcx
  unsigned __int8 *v35; // rbp
  unsigned __int8 *v36; // r10
  __int64 v37; // r11
  unsigned __int64 v38; // r15
  int v39; // eax
  int v40; // eax
  _DWORD *v41; // rdx
  unsigned __int8 *v42; // rax
  unsigned __int8 *v43; // rbx
  int v44; // eax
  int v45; // ecx
  unsigned __int64 v46; // rbx
  unsigned __int8 *v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // r9
  _BYTE *v52; // r8
  unsigned __int64 v53; // rdx
  char v54; // cl
  unsigned __int8 v55; // cl
  _WORD *v56; // rdi
  __int64 v57; // rax
  int v58; // eax
  int *v59; // rcx
  unsigned __int8 v60; // al
  int v61; // esi
  char *v62; // rax
  bool v63; // zf
  unsigned __int8 *v64; // [rsp+30h] [rbp-98h]
  char *v65; // [rsp+38h] [rbp-90h]
  unsigned __int64 v66; // [rsp+40h] [rbp-88h]
  unsigned __int8 *v67; // [rsp+48h] [rbp-80h]
  __int64 v68; // [rsp+50h] [rbp-78h]
  __int64 v69; // [rsp+58h] [rbp-70h]
  char *v70; // [rsp+60h] [rbp-68h]
  unsigned __int8 *v71; // [rsp+68h] [rbp-60h]
  char *v72; // [rsp+70h] [rbp-58h]
  _QWORD v73[2]; // [rsp+78h] [rbp-50h] BYREF
  unsigned int v74; // [rsp+88h] [rbp-40h]
  int v75; // [rsp+8Ch] [rbp-3Ch]
  unsigned __int64 v76; // [rsp+D0h] [rbp+8h]
  int v77; // [rsp+E0h] [rbp+18h]

  v77 = (int)a3;
  v9 = a1 + a2;
  v75 = 0;
  v76 = v9;
  v72 = &a3[a4];
  if ( a4 >= 0x12C )
  {
    if ( a1 <= 0x10001 )
      return 3221225659LL;
    memset(a6, 0, 0x40000uLL);
    v14 = (unsigned __int8 *)a1;
    v70 = a3;
    v15 = a3;
    *((_QWORD *)a6 + 0x8000) = 0LL;
    if ( !a7 || (v16 = a9, a9 > a2) )
    {
      v16 = a2;
      a9 = a2;
    }
    v73[0] = a7;
    v73[1] = a8;
    v74 = v16;
    v64 = 0LL;
    while ( 1 )
    {
      v68 = 0LL;
      v69 = 0LL;
      memset(a6 + 1339936, 0, 0x800uLL);
      v17 = v16;
      v65 = (char *)(a6 + 1342240);
      v18 = (unsigned __int8 *)v9;
      v19 = a6 + 1342240;
      v20 = 1;
      if ( (unsigned __int64)(v14 + 0x10000) <= v9 )
        v18 = v14 + 0x10000;
      v21 = (unsigned __int64)&v14[v17];
      v71 = v18;
      v22 = (unsigned __int64)(v18 - 5);
      v67 = v18 - 5;
      if ( (unsigned __int64)(v18 - 5) < v21 )
        v21 = (unsigned __int64)(v18 - 5);
      v23 = a6 + 1342244;
      v66 = v21;
      if ( v14 == (unsigned __int8 *)a1 )
      {
        v20 = 2;
        ++*(_DWORD *)&a6[4 * *v14 + 1339936];
        v24 = *v14++;
        *v23 = v24;
        v23 = a6 + 1342245;
      }
      if ( (unsigned __int64)v14 >= v22 )
        goto LABEL_90;
      v25 = v14;
      v26 = (__int64)&v14[-a1] % 0x20000;
      do
      {
        v27 = (unsigned __int16)word_140046290[v25[2]] ^ (unsigned __int16)XpressHashFunction[*v25] ^ (unsigned __int64)(unsigned __int16)word_140046090[v25[1]];
        v28 = *(_QWORD *)&a6[8 * v27];
        *(_QWORD *)&a6[8 * v27] = v25++;
        *(_QWORD *)&a6[8 * v26 + 0x40000] = v28;
        v26 = ((_DWORD)v26 + 1) & 0x1FFFF;
      }
      while ( (unsigned __int64)v25 < v22 );
LABEL_17:
      v29 = v64;
      while ( (unsigned __int64)v14 < v21 )
      {
LABEL_21:
        v31 = *(_DWORD *)v14;
        v32 = *(unsigned __int8 **)&a6[8 * ((__int64)&v14[-a1] % 0x20000) + 0x40000];
        if ( v32 + 0x10000 > v14 )
        {
          v33 = *(_DWORD *)v32 ^ v31;
          if ( !v33 )
            goto LABEL_23;
          if ( (v33 & 0xFFFFFF) == 0 )
            goto LABEL_31;
          v32 = *(unsigned __int8 **)&a6[8 * ((__int64)&v32[-a1] % 0x20000) + 0x40000];
          if ( v32 + 0x10000 > v14 )
          {
            v39 = *(_DWORD *)v32 ^ v31;
            if ( !v39 )
              goto LABEL_23;
            if ( (v39 & 0xFFFFFF) == 0 )
              goto LABEL_31;
            v32 = *(unsigned __int8 **)&a6[8 * ((__int64)&v32[-a1] % 0x20000) + 0x40000];
            if ( v32 + 0x10000 > v14 )
            {
              v40 = *(_DWORD *)v32 ^ v31;
              if ( !v40 )
              {
LABEL_23:
                v34 = v76;
                v35 = v14 - 0x10000;
                v36 = v14;
                v37 = 0LL;
                v38 = 3LL;
                goto LABEL_35;
              }
              if ( (v40 & 0xFFFFFF) == 0 )
              {
LABEL_31:
                v34 = v76;
                v35 = v14 - 0x10000;
                v64 = v32;
                v36 = v14;
                v29 = v32;
                v37 = 0LL;
                v38 = 3LL;
                while ( 1 )
                {
                  v32 = *(unsigned __int8 **)&a6[8 * ((__int64)&v32[-a1] % 0x20000) + 0x40000];
                  if ( v32 <= v35 )
                  {
LABEL_69:
                    v14 = &v36[v38];
                    v48 = v36 - v29;
                    if ( v38 == 3 && v48 > 0x1000 )
                    {
                      v22 = (unsigned __int64)v67;
                      v14 = v36;
                      v19 = (unsigned __int8 *)v65;
                      goto LABEL_72;
                    }
                    if ( v48 < 0x100 )
                      v50 = *((unsigned __int8 *)XpressHighBitIndexTable + v48);
                    else
                      v50 = *((unsigned __int8 *)XpressHighBitIndexTable + (v48 >> 8)) + 8LL;
                    v68 += v50;
                    v51 = v38 - 3;
                    v52 = v23 + 1;
                    v53 = v48 - (1LL << v50);
                    v54 = 16 * v50;
                    if ( v38 - 3 < 0xF )
                    {
                      v55 = v38 - 3 + v54;
                      *v23 = v55;
                      v56 = v23 + 1;
                    }
                    else
                    {
                      v55 = v54 + 15;
                      *v23 = v55;
                      v56 = v23 + 2;
                      if ( v38 - 18 >= 0xFF )
                      {
                        *v52 = -1;
                        if ( v51 >= 0x10000 )
                        {
                          *(_DWORD *)(v52 + 3) = v51;
                          *v56 = 0;
                          v56 = v52 + 7;
                          v57 = 7LL;
                        }
                        else
                        {
                          *v56 = v51;
                          v57 = 3LL;
                          v56 = v52 + 3;
                        }
                      }
                      else
                      {
                        *v52 = v38 - 18;
                        v57 = 1LL;
                      }
                      v69 += v57;
                    }
                    v22 = (unsigned __int64)v67;
                    v21 = v66;
                    ++*(_DWORD *)&a6[4 * v55 + 1340960];
                    v58 = 2 * v20 + 1;
                    *v56 = v53;
                    v23 = (unsigned __int8 *)(v56 + 1);
                    if ( v20 <= 0 )
                    {
                      v59 = (int *)v65;
                      v19 = v23;
                      v65 = (char *)v23;
                      v20 = 1;
                      v23 += 4;
                      *v59 = v58;
                    }
                    else
                    {
                      v19 = (unsigned __int8 *)v65;
                      v20 = 2 * v20 + 1;
                    }
                    goto LABEL_17;
                  }
                  if ( v31 == *(_DWORD *)v32 )
                    break;
LABEL_68:
                  if ( (unsigned __int64)++v37 >= 0xC )
                    goto LABEL_69;
                }
                v14 = v36;
LABEL_35:
                v41 = v32 + 4;
                v42 = v14 + 36;
                v43 = v14 + 4;
                if ( (unsigned __int64)v42 >= v34 )
                {
LABEL_46:
                  while ( (unsigned __int64)v43 < v34 )
                  {
                    if ( *v43 != *(_BYTE *)v41 )
                      break;
                    ++v43;
                    v41 = (_DWORD *)((char *)v41 + 1);
                  }
                }
                else
                {
                  while ( 1 )
                  {
                    v44 = *(_DWORD *)v43;
                    v45 = *v41;
                    if ( *(_DWORD *)v43 != *v41 )
                      goto LABEL_57;
                    v44 = *((_DWORD *)v43 + 1);
                    v45 = v41[1];
                    if ( v44 != v45 )
                      break;
                    v44 = *((_DWORD *)v43 + 2);
                    v45 = v41[2];
                    if ( v44 != v45 )
                    {
                      v43 += 8;
                      v41 += 2;
                      goto LABEL_57;
                    }
                    v44 = *((_DWORD *)v43 + 3);
                    v45 = v41[3];
                    if ( v44 != v45 )
                    {
                      v43 += 12;
                      v41 += 3;
                      goto LABEL_57;
                    }
                    v44 = *((_DWORD *)v43 + 4);
                    v45 = v41[4];
                    if ( v44 != v45 )
                    {
                      v43 += 16;
                      v41 += 4;
                      goto LABEL_57;
                    }
                    v44 = *((_DWORD *)v43 + 5);
                    v45 = v41[5];
                    if ( v44 != v45 )
                    {
                      v43 += 20;
                      v41 += 5;
                      goto LABEL_57;
                    }
                    v44 = *((_DWORD *)v43 + 6);
                    v45 = v41[6];
                    if ( v44 != v45 )
                    {
                      v43 += 24;
                      v41 += 6;
                      goto LABEL_57;
                    }
                    v44 = *((_DWORD *)v43 + 7);
                    v45 = v41[7];
                    if ( v44 != v45 )
                    {
                      v43 += 28;
                      v41 += 7;
                      goto LABEL_57;
                    }
                    v34 = v76;
                    v43 += 32;
                    v41 += 8;
                    if ( (unsigned __int64)(v43 + 32) >= v76 )
                    {
                      v29 = v64;
                      goto LABEL_46;
                    }
                  }
                  v43 += 4;
                  ++v41;
LABEL_57:
                  if ( (_BYTE)v44 == (_BYTE)v45 )
                  {
                    if ( v43[1] != *((_BYTE *)v41 + 1) )
                    {
                      ++v43;
                      v41 = (_DWORD *)((char *)v41 + 1);
                      goto LABEL_60;
                    }
                    v34 = v76;
                    v29 = v64;
                    if ( v43[2] == *((_BYTE *)v41 + 2) )
                    {
                      v43 += 3;
                      v41 = (_DWORD *)((char *)v41 + 3);
                    }
                    else
                    {
                      v43 += 2;
                      v41 = (_DWORD *)((char *)v41 + 2);
                    }
                  }
                  else
                  {
LABEL_60:
                    v29 = v64;
                    v34 = v76;
                  }
                }
                v46 = v43 - v36;
                v47 = (unsigned __int8 *)v41;
                v32 = (unsigned __int8 *)v41 - v46;
                if ( v46 <= v38 )
                {
                  v37 += v46;
                  goto LABEL_68;
                }
                v64 = v32;
                v38 = v46;
                v29 = v32;
                if ( v47 > v36 )
                  goto LABEL_69;
                goto LABEL_68;
              }
            }
          }
        }
LABEL_72:
        v49 = (unsigned __int8)v31;
        ++v14;
        v21 = v66;
        ++*(_DWORD *)&a6[4 * v49 + 1339936];
        *v23++ = v49;
        if ( v20 <= 0 )
        {
          *(_DWORD *)v19 = 2 * v20;
          v20 = 1;
          v19 = v23;
          v65 = (char *)v23;
          v23 += 4;
        }
        else
        {
          v20 *= 2;
        }
      }
      if ( (unsigned __int64)v14 < v22 )
        break;
      v15 = v70;
      v9 = v76;
      v18 = v71;
LABEL_90:
      while ( v14 < v18 )
      {
        ++*(_DWORD *)&a6[4 * *v14 + 1339936];
        v60 = *v14++;
        *v23++ = v60;
        if ( v20 <= 0 )
        {
          *(_DWORD *)v19 = 2 * v20;
          v20 = 1;
          v19 = v23;
          v23 += 4;
        }
        else
        {
          v20 *= 2;
        }
      }
      for ( ; v20 > 0; v20 = 2 * v20 + 1 )
        ;
      *(_DWORD *)v19 = 2 * v20 + 1;
      if ( (unsigned __int64)v14 < v9 )
      {
        v61 = 0;
      }
      else
      {
        ++*((_DWORD *)a6 + 335240);
        v61 = 1;
      }
      if ( &v15[4 * ((unsigned __int64)(XpressBuildHuffmanEncodings((_QWORD *)a6 + 163840) + v68 + 31) >> 5) + 258 + v69] >= v72 )
        return 3221225507LL;
      v62 = XpressDoHuffmanPass((__int64)(a6 + 1310720), a6 + 1342240, (unsigned __int64)v23, v15, v61);
      v9 = v76;
      v63 = v61 == 0;
      v16 = a9;
      v15 = v62;
      v70 = v62;
      if ( !v63 )
      {
        *a5 = (_DWORD)v62 - v77;
        return 0LL;
      }
    }
    XpressCallback = RtlpMakeXpressCallback(v73, v22, v14);
    v19 = (unsigned __int8 *)v65;
    v22 = (unsigned __int64)v67;
    v29 = v64;
    v66 = XpressCallback;
    goto LABEL_21;
  }
  return 3221225507LL;
}
