/*
 * XREFs of RtlCompressBufferXpressLzMax @ 0x1405B0B18
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x1403859C0 (RtlCompressBufferXpressLz.c)
 *     RtlCompressBufferProgress @ 0x1405B0208 (RtlCompressBufferProgress.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpMakeXpressCallback @ 0x1405B2518 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzMax(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r13
  unsigned __int8 *v13; // rbp
  _QWORD *v15; // r12
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  _BYTE *v18; // rbx
  unsigned __int8 *v19; // rdi
  _DWORD *v20; // r9
  int v21; // esi
  __int16 v22; // r11
  unsigned __int8 *v23; // r13
  unsigned __int8 *v24; // r10
  unsigned __int8 *v25; // rax
  __int64 v26; // r11
  char *v27; // r8
  unsigned __int64 v28; // rdx
  char *v29; // r8
  unsigned __int64 v30; // r12
  __int64 XpressCallback; // rax
  int v32; // r13d
  unsigned __int64 v33; // rdx
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  _DWORD *v37; // rax
  unsigned __int8 *v38; // rcx
  __int64 v39; // r10
  unsigned __int64 v40; // r11
  _BYTE *v41; // rax
  _BYTE *v42; // rdi
  int v43; // eax
  int v44; // ecx
  __int64 v45; // rax
  unsigned __int64 v46; // r8
  __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  _BYTE *v49; // rdx
  __int64 v50; // rcx
  unsigned __int64 v51; // rax
  char v52; // cl
  char v53; // al
  unsigned int v54; // ebx
  unsigned __int8 *v55; // [rsp+20h] [rbp-A8h]
  char *v56; // [rsp+28h] [rbp-A0h]
  _BYTE *v57; // [rsp+30h] [rbp-98h]
  _DWORD *v58; // [rsp+38h] [rbp-90h]
  __int64 v59; // [rsp+40h] [rbp-88h]
  unsigned __int64 v60; // [rsp+48h] [rbp-80h]
  unsigned __int8 *v61; // [rsp+50h] [rbp-78h]
  __int16 v62; // [rsp+58h] [rbp-70h]
  unsigned __int8 *v63; // [rsp+60h] [rbp-68h]
  unsigned __int64 v64; // [rsp+68h] [rbp-60h]
  _QWORD v65[2]; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v66; // [rsp+80h] [rbp-48h]
  int v67; // [rsp+84h] [rbp-44h]
  __int16 v68; // [rsp+D0h] [rbp+8h]
  int v69; // [rsp+E0h] [rbp+18h]

  v69 = a3;
  v68 = a1;
  v9 = a1 + a2;
  v10 = a3 + a4;
  v55 = 0LL;
  v67 = 0;
  v13 = (unsigned __int8 *)a1;
  v64 = v10;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( a1 <= 0x2001 )
    return 3221225659LL;
  v15 = a6;
  memset(a6, 0, 0x40000uLL);
  v57 = 0LL;
  v60 = v10 - 41;
  v16 = v9 - 5;
  if ( !a7 || (v17 = a9, a9 > a2) )
  {
    v17 = a2;
    a9 = a2;
  }
  v65[0] = a7;
  v18 = (_BYTE *)(a3 + 5);
  v19 = v13 + 1;
  v65[1] = a8;
  v20 = (_DWORD *)a3;
  v21 = 2;
  *(_BYTE *)(a3 + 4) = *v13;
  v22 = 0;
  v58 = (_DWORD *)a3;
  v23 = v13;
  v66 = v17;
  v63 = v13;
  while ( 2 )
  {
    v24 = (unsigned __int8 *)v16;
    if ( (unsigned __int64)(v23 + 0x2000) <= v16 )
      v24 = v23 + 0x2000;
    v25 = &v19[v17];
    v61 = v24;
    if ( v24 < v25 )
      v25 = v24;
    v26 = v22 & 0x3FFF;
    v59 = (__int64)v25;
    v62 = v26;
    if ( v23 < v24 )
    {
      v27 = (char *)&v15[v26 + 0x8000];
      do
      {
        v27 += 8;
        LOWORD(v26) = v26 + 1;
        v28 = (unsigned __int16)XpressHashFunction[*v23] ^ (unsigned __int16)XpressHashFunction[v23[2] + 512] ^ (unsigned __int64)(unsigned __int16)XpressHashFunction[v23[1] + 256];
        *((_QWORD *)v27 - 1) = v15[v28];
        v15[v28] = v23++;
      }
      while ( v23 < v24 );
      v63 = v23;
      v62 = v26;
    }
    v29 = (char *)(v15 + 0x8000);
    v56 = (char *)(v15 + 0x8000);
LABEL_18:
    v30 = (unsigned __int64)(v19 - 0x2000);
    while ( 1 )
    {
      if ( v19 < v25 )
        goto LABEL_22;
      if ( v19 >= v24 )
        break;
      XpressCallback = RtlpMakeXpressCallback(v65, v24, v19);
      v20 = v58;
      v24 = v61;
      v29 = v56;
      v59 = XpressCallback;
LABEL_22:
      v32 = *(_DWORD *)v19;
      v33 = *(_QWORD *)&v29[8 * ((0x2000 - (_WORD)v13 + (_WORD)v30) & 0x3FFF)];
      if ( v33 >= v30 )
      {
        v34 = *(_DWORD *)v33 ^ v32;
        if ( !v34 )
          goto LABEL_36;
        if ( (v34 & 0xFFFFFF) == 0 )
          goto LABEL_35;
        v33 = *(_QWORD *)&v29[8 * (((_WORD)v33 - (_WORD)v13) & 0x3FFF)];
        if ( v33 >= v30 )
        {
          v35 = *(_DWORD *)v33 ^ v32;
          if ( !v35 )
            goto LABEL_36;
          if ( (v35 & 0xFFFFFF) == 0 )
          {
LABEL_35:
            v30 = (unsigned __int64)(v19 - 0x2000);
            v38 = &v19[-v33];
            v55 = &v19[-v33];
            v39 = 0LL;
            v40 = 3LL;
            goto LABEL_74;
          }
          v33 = *(_QWORD *)&v29[8 * (((_WORD)v33 - (_WORD)v13) & 0x3FFF)];
          if ( v33 >= v30 )
          {
            v36 = *(_DWORD *)v33 ^ v32;
            if ( !v36 )
            {
LABEL_36:
              v38 = v55;
              v39 = 0LL;
              v40 = 3LL;
LABEL_37:
              v13 = v19;
              v41 = v19 + 36;
              v42 = v19 + 4;
              v33 += 4LL;
              if ( (unsigned __int64)v41 >= v9 )
              {
LABEL_48:
                while ( (unsigned __int64)v42 < v9 )
                {
                  if ( *v42 != *(_BYTE *)v33 )
                    break;
                  ++v42;
                  ++v33;
                }
              }
              else
              {
                while ( 1 )
                {
                  v43 = *(_DWORD *)v42;
                  v44 = *(_DWORD *)v33;
                  if ( *(_DWORD *)v42 != *(_DWORD *)v33 )
                    break;
                  v43 = *((_DWORD *)v42 + 1);
                  v44 = *(_DWORD *)(v33 + 4);
                  if ( v43 != v44 )
                  {
                    v42 += 4;
                    v33 += 4LL;
                    break;
                  }
                  v43 = *((_DWORD *)v42 + 2);
                  v44 = *(_DWORD *)(v33 + 8);
                  if ( v43 != v44 )
                  {
                    v42 += 8;
                    v33 += 8LL;
                    break;
                  }
                  v43 = *((_DWORD *)v42 + 3);
                  v44 = *(_DWORD *)(v33 + 12);
                  if ( v43 != v44 )
                  {
                    v42 += 12;
                    v33 += 12LL;
                    break;
                  }
                  v43 = *((_DWORD *)v42 + 4);
                  v44 = *(_DWORD *)(v33 + 16);
                  if ( v43 != v44 )
                  {
                    v42 += 16;
                    v33 += 16LL;
                    break;
                  }
                  v43 = *((_DWORD *)v42 + 5);
                  v44 = *(_DWORD *)(v33 + 20);
                  if ( v43 != v44 )
                  {
                    v42 += 20;
                    v33 += 20LL;
                    break;
                  }
                  v43 = *((_DWORD *)v42 + 6);
                  v44 = *(_DWORD *)(v33 + 24);
                  if ( v43 != v44 )
                  {
                    v42 += 24;
                    v33 += 24LL;
                    break;
                  }
                  v43 = *((_DWORD *)v42 + 7);
                  v44 = *(_DWORD *)(v33 + 28);
                  if ( v43 != v44 )
                  {
                    v42 += 28;
                    v33 += 28LL;
                    break;
                  }
                  v42 += 32;
                  v33 += 32LL;
                  if ( (unsigned __int64)(v42 + 32) >= v9 )
                  {
                    v38 = v55;
                    v29 = v56;
                    goto LABEL_48;
                  }
                }
                if ( (_BYTE)v43 == (_BYTE)v44 )
                {
                  if ( v42[1] != *(_BYTE *)(v33 + 1) )
                  {
                    ++v42;
                    ++v33;
                    goto LABEL_62;
                  }
                  v38 = v55;
                  v29 = v56;
                  if ( v42[2] == *(_BYTE *)(v33 + 2) )
                  {
                    v42 += 3;
                    v33 += 3LL;
                  }
                  else
                  {
                    v42 += 2;
                    v33 += 2LL;
                  }
                }
                else
                {
LABEL_62:
                  v29 = v56;
                  v38 = v55;
                }
              }
              v45 = v42 - v13;
              if ( v42 - v13 <= v40 )
              {
                v39 += v45;
              }
              else
              {
                v40 = v42 - v13;
                v38 = &v42[-v33];
                v55 = &v42[-v33];
                if ( v33 > (unsigned __int64)v13 )
                {
                  v20 = v58;
                  v19 = v13;
                  LOWORD(v13) = v68;
                  goto LABEL_66;
                }
              }
              v20 = v58;
              v19 = v13;
              LOWORD(v13) = v68;
              LOWORD(v33) = v33 - v45;
              while ( (unsigned __int64)++v39 < 0x18 )
              {
LABEL_74:
                v33 = *(_QWORD *)&v29[8 * (((_WORD)v33 - (_WORD)v13) & 0x3FFF)];
                if ( v33 < v30 )
                  break;
                if ( v32 == *(_DWORD *)v33 )
                  goto LABEL_37;
              }
LABEL_66:
              v46 = v40 - 3;
              v19 += v40;
              v47 = 8LL * (_QWORD)v38 - 8;
              if ( v40 - 3 < 7 )
              {
                v48 = v40 - 3 + v47;
                *(_WORD *)v18 = v48;
                v18 += 2;
                v55 = (unsigned __int8 *)v48;
                goto LABEL_89;
              }
              v49 = v57;
              v50 = v47 | 7;
              *(_WORD *)v18 = v50;
              v51 = v40 - 10;
              v18 += 2;
              v55 = (unsigned __int8 *)v50;
              if ( v57 )
              {
                v52 = *v57;
                v57 = 0LL;
                if ( v51 < 0xF )
                {
                  *v49 = v52 | (16 * v51);
LABEL_89:
                  if ( v21 <= 0 )
                  {
                    *v20 = 2 * v21 + 1;
                    v21 = 1;
                    v20 = v18;
                    v58 = v18;
                    v18 += 4;
                  }
                  else
                  {
                    v21 = 2 * v21 + 1;
                  }
                  if ( (unsigned __int64)v18 < v60 )
                  {
                    v24 = v61;
                    v29 = v56;
                    v25 = (unsigned __int8 *)v59;
                    goto LABEL_18;
                  }
                  goto LABEL_95;
                }
                *v49 = v52 | 0xF0;
              }
              else
              {
                v57 = v18;
                if ( v51 < 0xF )
                {
                  *v18++ = v51;
                  goto LABEL_89;
                }
                *v18++ = 15;
              }
              if ( v40 - 25 >= 0xFF )
              {
                *v18 = -1;
                if ( v46 >= 0x10000 )
                {
                  *(_WORD *)(v18 + 1) = 0;
                  *(_DWORD *)(v18 + 3) = v46;
                  v18 += 7;
                }
                else
                {
                  *(_WORD *)(v18 + 1) = v46;
                  v18 += 3;
                }
              }
              else
              {
                *v18++ = v40 - 25;
              }
              goto LABEL_89;
            }
            if ( (v36 & 0xFFFFFF) == 0 )
              goto LABEL_35;
          }
        }
      }
      *v18++ = v32;
      ++v19;
      ++v30;
      v37 = v18;
      if ( v21 <= 0 )
      {
        v18 += 4;
        *v20 = 2 * v21;
        v21 = 1;
        v20 = v37;
        if ( (unsigned __int64)v18 >= v60 )
          goto LABEL_95;
        v58 = v37;
        v25 = (unsigned __int8 *)v59;
      }
      else
      {
        v25 = (unsigned __int8 *)v59;
        v21 *= 2;
      }
    }
    v17 = a9;
    v16 = v9 - 5;
    v15 = a6;
    v22 = v62;
    v23 = v63;
    if ( (unsigned __int64)v19 < v9 - 5 )
      continue;
    break;
  }
LABEL_95:
  if ( (unsigned __int64)v19 >= v9 )
  {
LABEL_101:
    if ( (unsigned __int64)v18 >= v64 )
      return 3221225507LL;
    for ( ; v21 > 0; v21 = 2 * v21 + 1 )
      ;
    v54 = (_DWORD)v18 - v69;
    *v20 = 2 * v21 + 1;
    if ( v54 < 8 )
      v54 = 8;
    *a5 = v54;
    return 0LL;
  }
  else
  {
    while ( (unsigned __int64)v18 < v64 )
    {
      v53 = *v19++;
      *v18++ = v53;
      if ( v21 <= 0 )
      {
        *v20 = 2 * v21;
        v21 = 1;
        v20 = v18;
        v18 += 4;
      }
      else
      {
        v21 *= 2;
      }
      if ( (unsigned __int64)v19 >= v9 )
        goto LABEL_101;
    }
    return 3221225507LL;
  }
}
