/*
 * XREFs of RtlCompressBufferXpressLzMax @ 0x140591A98
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x140206B60 (RtlCompressBufferXpressLz.c)
 *     RtlCompressBufferProgress @ 0x140383760 (RtlCompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140389080 (RtlpMakeXpressCallback.c)
 *     memset @ 0x140414300 (memset.c)
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
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int8 *v13; // r12
  __int64 v14; // r13
  _QWORD *v16; // r15
  unsigned __int64 v17; // rdx
  unsigned int v18; // ecx
  _BYTE *v19; // rbx
  char *v20; // rdi
  _DWORD *v21; // r8
  int v22; // esi
  __int16 v23; // r10
  unsigned __int8 *v24; // r11
  unsigned __int64 v25; // r9
  char *v26; // rax
  __int64 v27; // r10
  char *v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r11
  char *v31; // r10
  unsigned __int64 v32; // r15
  __int16 v33; // r14
  unsigned __int64 XpressCallback; // rax
  int v35; // r12d
  unsigned __int64 v36; // rdx
  int v37; // ecx
  bool v38; // zf
  __int16 v39; // cx
  int v40; // eax
  int v41; // eax
  _DWORD *v42; // rax
  char *v43; // r14
  __int64 v44; // r9
  unsigned __int64 v45; // r10
  char *v46; // r11
  _BYTE *v47; // rax
  _BYTE *v48; // rdi
  int v49; // eax
  int v50; // ecx
  __int64 v51; // rax
  __int64 v52; // r13
  unsigned __int64 v53; // rax
  char v54; // cl
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  char v57; // al
  unsigned int v58; // ebx
  unsigned __int64 v59; // [rsp+20h] [rbp-98h]
  char *v60; // [rsp+28h] [rbp-90h]
  char *v61; // [rsp+30h] [rbp-88h]
  _DWORD *v62; // [rsp+38h] [rbp-80h]
  unsigned __int64 v63; // [rsp+40h] [rbp-78h]
  unsigned __int64 v64; // [rsp+48h] [rbp-70h]
  __int16 v65; // [rsp+50h] [rbp-68h]
  unsigned __int8 *v66; // [rsp+58h] [rbp-60h]
  unsigned __int64 v67; // [rsp+60h] [rbp-58h]
  _QWORD v68[2]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v69; // [rsp+78h] [rbp-40h]
  int v70; // [rsp+7Ch] [rbp-3Ch]
  __int16 v71; // [rsp+C0h] [rbp+8h]
  int v72; // [rsp+D0h] [rbp+18h]

  v72 = a3;
  v71 = a1;
  v9 = a1 + a2;
  v10 = a3 + a4;
  v70 = 0;
  v67 = v10;
  v13 = (unsigned __int8 *)a1;
  v14 = 0LL;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( a1 <= 0x2001 )
    return 3221225659LL;
  v16 = a6;
  memset(a6, 0, 0x40000uLL);
  v61 = 0LL;
  v59 = v10 - 41;
  v17 = v9 - 5;
  if ( !a7 || (v18 = a9, a9 > a2) )
  {
    v18 = a2;
    a9 = a2;
  }
  v68[0] = a7;
  v19 = (_BYTE *)(a3 + 5);
  v20 = (char *)(v13 + 1);
  v68[1] = a8;
  v21 = (_DWORD *)a3;
  v22 = 2;
  *(_BYTE *)(a3 + 4) = *v13;
  v23 = 0;
  v62 = (_DWORD *)a3;
  v24 = v13;
  v69 = v18;
  v66 = v13;
  while ( 2 )
  {
    v25 = v17;
    if ( (unsigned __int64)(v24 + 0x2000) <= v17 )
      v25 = (unsigned __int64)(v24 + 0x2000);
    v26 = &v20[v18];
    v64 = v25;
    if ( v25 < (unsigned __int64)v26 )
      v26 = (char *)v25;
    v27 = v23 & 0x3FFF;
    v63 = (unsigned __int64)v26;
    v65 = v27;
    if ( (unsigned __int64)v24 < v25 )
    {
      v28 = (char *)&v16[v27 + 0x8000];
      do
      {
        v28 += 8;
        LOWORD(v27) = v27 + 1;
        v29 = (unsigned __int16)XpressHashFunction[v24[2] + 512] ^ (unsigned __int16)XpressHashFunction[*v24] ^ (unsigned __int64)(unsigned __int16)XpressHashFunction[v24[1] + 256];
        *((_QWORD *)v28 - 1) = v16[v29];
        v16[v29] = v24++;
      }
      while ( (unsigned __int64)v24 < v25 );
      v66 = v24;
      v65 = v27;
    }
    v30 = v59;
    v31 = (char *)(v16 + 0x8000);
    v60 = (char *)(v16 + 0x8000);
LABEL_18:
    v32 = (unsigned __int64)(v20 - 0x2000);
    v33 = 0x2000 - (_WORD)v13;
    while ( 1 )
    {
      if ( v20 < v26 )
        goto LABEL_22;
      if ( (unsigned __int64)v20 >= v25 )
        break;
      XpressCallback = RtlpMakeXpressCallback((__int64)v68, v25, (__int64)v20);
      v21 = v62;
      v25 = v64;
      v31 = v60;
      v30 = v59;
      v63 = XpressCallback;
LABEL_22:
      v35 = *(_DWORD *)v20;
      v36 = *(_QWORD *)&v31[8 * ((v33 + (_WORD)v32) & 0x3FFF)];
      if ( v36 >= v32 )
      {
        v37 = *(_DWORD *)v36 ^ v35;
        if ( !v37 )
        {
          v39 = v71;
LABEL_37:
          v43 = v60;
          v44 = 0LL;
          v45 = 3LL;
LABEL_38:
          v46 = v20;
          v47 = v20 + 36;
          v48 = v20 + 4;
          v36 += 4LL;
          if ( (unsigned __int64)v47 >= v9 )
          {
LABEL_49:
            while ( (unsigned __int64)v48 < v9 )
            {
              if ( *v48 != *(_BYTE *)v36 )
                break;
              ++v48;
              ++v36;
            }
          }
          else
          {
            while ( 1 )
            {
              v49 = *(_DWORD *)v48;
              v50 = *(_DWORD *)v36;
              if ( *(_DWORD *)v48 != *(_DWORD *)v36 )
                break;
              v49 = *((_DWORD *)v48 + 1);
              v50 = *(_DWORD *)(v36 + 4);
              if ( v49 != v50 )
              {
                v48 += 4;
                v36 += 4LL;
                break;
              }
              v49 = *((_DWORD *)v48 + 2);
              v50 = *(_DWORD *)(v36 + 8);
              if ( v49 != v50 )
              {
                v48 += 8;
                v36 += 8LL;
                break;
              }
              v49 = *((_DWORD *)v48 + 3);
              v50 = *(_DWORD *)(v36 + 12);
              if ( v49 != v50 )
              {
                v48 += 12;
                v36 += 12LL;
                break;
              }
              v49 = *((_DWORD *)v48 + 4);
              v50 = *(_DWORD *)(v36 + 16);
              if ( v49 != v50 )
              {
                v48 += 16;
                v36 += 16LL;
                break;
              }
              v49 = *((_DWORD *)v48 + 5);
              v50 = *(_DWORD *)(v36 + 20);
              if ( v49 != v50 )
              {
                v48 += 20;
                v36 += 20LL;
                break;
              }
              v49 = *((_DWORD *)v48 + 6);
              v50 = *(_DWORD *)(v36 + 24);
              if ( v49 != v50 )
              {
                v48 += 24;
                v36 += 24LL;
                break;
              }
              v49 = *((_DWORD *)v48 + 7);
              v50 = *(_DWORD *)(v36 + 28);
              if ( v49 != v50 )
              {
                v48 += 28;
                v36 += 28LL;
                break;
              }
              v48 += 32;
              v36 += 32LL;
              if ( (unsigned __int64)(v48 + 32) >= v9 )
              {
                v39 = v71;
                goto LABEL_49;
              }
            }
            if ( (_BYTE)v49 == (_BYTE)v50 )
            {
              if ( v48[1] != *(_BYTE *)(v36 + 1) )
              {
                ++v48;
                ++v36;
                goto LABEL_63;
              }
              v39 = v71;
              if ( v48[2] == *(_BYTE *)(v36 + 2) )
              {
                v48 += 3;
                v36 += 3LL;
              }
              else
              {
                v48 += 2;
                v36 += 2LL;
              }
            }
            else
            {
LABEL_63:
              v39 = v71;
            }
          }
          v51 = v48 - v46;
          if ( v48 - v46 <= v45 )
          {
            v44 += v51;
          }
          else
          {
            v45 = v48 - v46;
            v14 = (__int64)&v48[-v36];
            if ( v36 > (unsigned __int64)v46 )
            {
              v21 = v62;
              v20 = v46;
              v30 = v59;
              goto LABEL_67;
            }
          }
          v21 = v62;
          v20 = v46;
          v30 = v59;
          LOWORD(v36) = v36 - v51;
          while ( (unsigned __int64)++v44 < 0x18 )
          {
LABEL_75:
            v36 = *(_QWORD *)&v43[8 * (((_WORD)v36 - v39) & 0x3FFF)];
            if ( v36 < v32 )
              break;
            if ( v35 == *(_DWORD *)v36 )
              goto LABEL_38;
          }
LABEL_67:
          v20 += v45;
          v52 = 8 * v14 - 8;
          if ( v45 - 3 < 7 )
          {
            v14 = v45 - 3 + v52;
            *(_WORD *)v19 = v14;
            v19 += 2;
            goto LABEL_91;
          }
          v14 = v52 | 7;
          *(_WORD *)v19 = v14;
          v53 = v45 - 10;
          v19 += 2;
          if ( v61 )
          {
            v54 = *v61;
            if ( v53 < 0xF )
            {
              *v61 = v54 | (16 * v53);
              v61 = 0LL;
              goto LABEL_90;
            }
            *v61 = v54 | 0xF0;
            v61 = 0LL;
          }
          else
          {
            v61 = v19;
            if ( v53 < 0xF )
            {
              *v19++ = v53;
LABEL_90:
              v30 = v59;
LABEL_91:
              if ( v22 <= 0 )
              {
                *v21 = 2 * v22 + 1;
                v22 = 1;
                v21 = v19;
                v62 = v19;
                v19 += 4;
              }
              else
              {
                v22 = 2 * v22 + 1;
              }
              if ( (unsigned __int64)v19 < v30 )
              {
                LOWORD(v13) = v71;
                v25 = v64;
                v31 = v60;
                v26 = (char *)v63;
                goto LABEL_18;
              }
              goto LABEL_97;
            }
            *v19++ = 15;
          }
          v55 = v45 - 25;
          if ( v45 - 25 >= 0xFF )
          {
            v56 = v55 + 22;
            *v19 = -1;
            if ( v56 >= 0x10000 )
            {
              *(_WORD *)(v19 + 1) = 0;
              *(_DWORD *)(v19 + 3) = v56;
              v19 += 7;
            }
            else
            {
              *(_WORD *)(v19 + 1) = v56;
              v19 += 3;
            }
          }
          else
          {
            *v19++ = v55;
          }
          goto LABEL_90;
        }
        v38 = (v37 & 0xFFFFFF) == 0;
        v39 = v71;
        if ( v38 )
          goto LABEL_35;
        v36 = *(_QWORD *)&v31[8 * (((_WORD)v36 - v71) & 0x3FFF)];
        if ( v36 >= v32 )
        {
          v40 = *(_DWORD *)v36 ^ v35;
          if ( !v40 )
            goto LABEL_37;
          if ( (v40 & 0xFFFFFF) == 0 )
            goto LABEL_35;
          v36 = *(_QWORD *)&v31[8 * (((_WORD)v36 - v71) & 0x3FFF)];
          if ( v36 >= v32 )
          {
            v41 = *(_DWORD *)v36 ^ v35;
            if ( !v41 )
              goto LABEL_37;
            if ( (v41 & 0xFFFFFF) == 0 )
            {
LABEL_35:
              v43 = v60;
              v32 = (unsigned __int64)(v20 - 0x2000);
              v14 = (__int64)&v20[-v36];
              v44 = 0LL;
              v45 = 3LL;
              goto LABEL_75;
            }
          }
        }
      }
      *v19++ = v35;
      ++v20;
      ++v32;
      v42 = v19;
      if ( v22 <= 0 )
      {
        v19 += 4;
        *v21 = 2 * v22;
        v22 = 1;
        v21 = v42;
        if ( (unsigned __int64)v19 >= v30 )
          goto LABEL_97;
        v62 = v42;
        v26 = (char *)v63;
      }
      else
      {
        v26 = (char *)v63;
        v22 *= 2;
      }
    }
    LOWORD(v13) = v71;
    v17 = v9 - 5;
    v18 = a9;
    v16 = a6;
    v23 = v65;
    v24 = v66;
    if ( (unsigned __int64)v20 < v9 - 5 )
      continue;
    break;
  }
LABEL_97:
  if ( (unsigned __int64)v20 >= v9 )
  {
LABEL_103:
    if ( (unsigned __int64)v19 >= v67 )
      return 3221225507LL;
    for ( ; v22 > 0; v22 = 2 * v22 + 1 )
      ;
    v58 = (_DWORD)v19 - v72;
    *v21 = 2 * v22 + 1;
    if ( v58 < 8 )
      v58 = 8;
    *a5 = v58;
    return 0LL;
  }
  else
  {
    while ( (unsigned __int64)v19 < v67 )
    {
      v57 = *v20++;
      *v19++ = v57;
      if ( v22 <= 0 )
      {
        *v21 = 2 * v22;
        v22 = 1;
        v21 = v19;
        v19 += 4;
      }
      else
      {
        v22 *= 2;
      }
      if ( (unsigned __int64)v20 >= v9 )
        goto LABEL_103;
    }
    return 3221225507LL;
  }
}
