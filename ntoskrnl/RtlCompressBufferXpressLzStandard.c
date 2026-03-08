/*
 * XREFs of RtlCompressBufferXpressLzStandard @ 0x140385A30
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x1403859C0 (RtlCompressBufferXpressLz.c)
 *     RtlCompressBufferProgress @ 0x1405B0208 (RtlCompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x1405B2518 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzStandard(
        _BYTE *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  _DWORD *v9; // r15
  unsigned __int64 v10; // r8
  unsigned __int8 *v11; // r11
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r12
  unsigned int v15; // ecx
  _BYTE *v16; // r14
  unsigned __int8 *v17; // rbx
  unsigned __int64 v18; // r13
  char v19; // al
  int v20; // esi
  _DWORD *v21; // rbp
  unsigned __int64 v22; // rax
  _DWORD *v23; // r10
  __int64 v24; // rdx
  __int64 v25; // rdi
  unsigned __int8 *v26; // r8
  __int64 v27; // rcx
  _DWORD *v28; // rdi
  __int64 v29; // r9
  unsigned __int8 *v30; // rbp
  __int64 v31; // r10
  __int64 v32; // r12
  __int64 v33; // r13
  __int64 v34; // r13
  int v35; // ecx
  int v36; // eax
  __int64 v37; // rcx
  unsigned __int8 *v38; // rdi
  __int64 v39; // rdx
  unsigned __int8 *v40; // rcx
  unsigned __int64 v41; // rdx
  __int16 v42; // ax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  unsigned __int8 *v46; // rcx
  char v47; // al
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // r14d
  char v52; // al
  __int64 XpressCallback; // rax
  unsigned __int64 v54; // [rsp+20h] [rbp-88h]
  char *v55; // [rsp+28h] [rbp-80h]
  _DWORD *v56; // [rsp+30h] [rbp-78h]
  unsigned __int64 v57; // [rsp+38h] [rbp-70h]
  unsigned __int64 v58; // [rsp+40h] [rbp-68h]
  unsigned __int64 v59; // [rsp+48h] [rbp-60h]
  _QWORD v60[2]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v61; // [rsp+60h] [rbp-48h]
  int v62; // [rsp+64h] [rbp-44h]
  unsigned __int64 v63; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v64; // [rsp+B8h] [rbp+10h]

  v9 = a3;
  v10 = (unsigned __int64)a3 + a4;
  v62 = 0;
  v11 = &a1[a2];
  v59 = v10;
  v58 = (unsigned __int64)v11;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  v13 = (unsigned __int64)(v11 - 38);
  v14 = v10 - 41;
  v54 = v10 - 41;
  v57 = (unsigned __int64)(v11 - 38);
  v55 = 0LL;
  if ( !a7 || (v15 = a9, a9 > a2) )
    v15 = a2;
  v16 = (char *)v9 + 5;
  v17 = a1 + 1;
  v18 = (unsigned __int64)&a1[v15];
  v60[1] = a8;
  v19 = *a1;
  v60[0] = a7;
  v20 = 2;
  if ( v13 < v18 )
    v18 = (unsigned __int64)(v11 - 38);
  v61 = v15;
  v63 = v18;
  v21 = v9;
  *((_BYTE *)v9 + 4) = v19;
  if ( a2 >= 0x40 )
  {
    v22 = (unsigned __int64)a1;
    v23 = a3;
    v56 = a3;
    memset64((void *)a6, v22, 0xAF6uLL);
    memset64((void *)(a6 + 22448), v22, 0x12EEuLL);
    while ( 1 )
    {
      while ( 1 )
      {
        v24 = a6 + 8LL * *v17;
        v25 = v17[2] + 4LL * v17[1];
        v26 = *(unsigned __int8 **)(v24 + 16 * v25);
        *(_QWORD *)(v24 + 16 * v25) = v17;
        v27 = *v17;
        if ( *(_WORD *)v26 == *(_WORD *)v17 && v26[2] == v17[2] && v17 - v26 < 0x2000 )
          break;
        *v16++ = v27;
        ++v17;
        v28 = v16;
        if ( v20 <= 0 )
        {
          v16 += 4;
          *v23 = 2 * v20;
          v20 = 1;
          if ( (unsigned __int64)v17 >= v18 )
          {
            v21 = v28;
            if ( (unsigned __int64)v17 >= v13 )
            {
LABEL_85:
              v11 = (unsigned __int8 *)v58;
              v10 = v59;
              LODWORD(v9) = (_DWORD)a3;
              goto LABEL_86;
            }
            XpressCallback = RtlpMakeXpressCallback(v60, v13, v17);
            v13 = v57;
            v18 = XpressCallback;
            v63 = XpressCallback;
          }
          v21 = v28;
          if ( (unsigned __int64)v16 >= v14 )
            goto LABEL_85;
          v23 = v28;
          v56 = v28;
        }
        else
        {
          v20 *= 2;
        }
      }
      v29 = v26[3];
      v30 = v17;
      v31 = v17[3];
      if ( (_BYTE)v31 != (_BYTE)v29 )
      {
        v37 = v27 + 2 * v25;
        v38 = *(unsigned __int8 **)(a6 + 8 * (v37 + v31) + 22448);
        *(_QWORD *)(a6 + 8 * (v37 + v29) + 22448) = v26;
        if ( v17 - v38 >= 0x2000 || (v43 = *(unsigned int *)v17, (_DWORD)v43 != *(_DWORD *)v38) )
        {
LABEL_33:
          v17 += 3;
          LOWORD(v26) = (_WORD)v26 + 3;
          goto LABEL_37;
        }
        v26 = v38;
        *(_QWORD *)(a6 + 8 * (v37 + (v43 >> 24)) + 22448) = v17;
      }
      v32 = v26[4];
      v33 = v17[4];
      if ( (_BYTE)v33 != (_BYTE)v32 )
      {
        v39 = 2
            * ((unsigned __int8)__ROR1__(v17[1] ^ __ROL1__(v17[3] + *v17, 3), 1)
             + 4LL * (unsigned __int8)__ROL1__(*v17 ^ __ROR1__(v17[2] + v17[1] + 97, 1), 3));
        v40 = *(unsigned __int8 **)(a6 + 8 * (v39 + v33) + 22448);
        *(_QWORD *)(a6 + 8 * (v39 + v32) + 22448) = v26;
        if ( v17 - v40 >= 0x2000
          || *(_DWORD *)v17 != *(_DWORD *)v40
          || (v48 = v17[4], (_BYTE)v48 != v40[4])
          || v17 == v40 )
        {
          v17 += 4;
          LOWORD(v26) = (_WORD)v26 + 4;
LABEL_36:
          v18 = v63;
          v14 = v54;
          goto LABEL_37;
        }
        v26 = v40;
        *(_QWORD *)(a6 + 8 * (v39 + v48) + 22448) = v17;
      }
      v34 = v26[5];
      v64 = v17[5];
      if ( v64 != (_BYTE)v34 )
      {
        v45 = 2
            * ((v17[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v17, v17[4]))
             + 4
             * ((unsigned __int8)__ROR1__(v17[1] ^ __ROL1__(v17[3], 3), 1)
              + (unsigned __int64)(unsigned __int8)__ROL1__(v17[4] ^ (__ROR1__(*v17, 1) + 69), 3)));
        v46 = *(unsigned __int8 **)(a6 + 8 * (v45 + v64) + 22448);
        *(_QWORD *)(a6 + 8 * (v45 + v34) + 22448) = v26;
        if ( v17 - v46 >= 0x2000
          || *(_DWORD *)v17 != *(_DWORD *)v46
          || v17[4] != v46[4]
          || (v49 = v17[5], v17 == v46)
          || (_BYTE)v49 != v46[5] )
        {
          v17 += 5;
          LOWORD(v26) = (_WORD)v26 + 5;
          goto LABEL_36;
        }
        v26 = v46;
        *(_QWORD *)(a6 + 8 * (v45 + v49) + 22448) = v17;
      }
      v17 += 6;
      v26 += 6;
      if ( (unsigned __int64)v17 >= v57 )
      {
LABEL_28:
        while ( (unsigned __int64)v17 < v58 )
        {
          if ( *v17 != *v26 )
            break;
          ++v17;
          ++v26;
        }
        goto LABEL_36;
      }
      while ( 1 )
      {
        v35 = *(_DWORD *)v17;
        v36 = *(_DWORD *)v26;
        if ( *(_DWORD *)v17 != *(_DWORD *)v26 )
          break;
        v36 = *((_DWORD *)v26 + 1);
        v35 = *((_DWORD *)v17 + 1);
        if ( v35 != v36 )
        {
          v17 += 4;
          v26 += 4;
          break;
        }
        v36 = *((_DWORD *)v26 + 2);
        v35 = *((_DWORD *)v17 + 2);
        if ( v35 != v36 )
        {
          v17 += 8;
          v26 += 8;
          break;
        }
        v36 = *((_DWORD *)v26 + 3);
        v35 = *((_DWORD *)v17 + 3);
        if ( v35 != v36 )
        {
          v17 += 12;
          v26 += 12;
          break;
        }
        v36 = *((_DWORD *)v26 + 4);
        v35 = *((_DWORD *)v17 + 4);
        if ( v35 != v36 )
        {
          v17 += 16;
          v26 += 16;
          break;
        }
        v36 = *((_DWORD *)v26 + 5);
        v35 = *((_DWORD *)v17 + 5);
        if ( v35 != v36 )
        {
          v17 += 20;
          v26 += 20;
          break;
        }
        v36 = *((_DWORD *)v26 + 6);
        v35 = *((_DWORD *)v17 + 6);
        if ( v35 != v36 )
        {
          v17 += 24;
          v26 += 24;
          break;
        }
        v36 = *((_DWORD *)v26 + 7);
        v35 = *((_DWORD *)v17 + 7);
        if ( v35 != v36 )
        {
          v17 += 28;
          v26 += 28;
          break;
        }
        v17 += 32;
        v26 += 32;
        if ( (unsigned __int64)v17 >= v57 )
          goto LABEL_28;
      }
      if ( (_BYTE)v35 != (_BYTE)v36 )
        goto LABEL_36;
      if ( v17[1] != v26[1] )
      {
        ++v17;
        LOWORD(v26) = (_WORD)v26 + 1;
        goto LABEL_36;
      }
      v14 = v54;
      v18 = v63;
      if ( v17[2] == v26[2] )
        goto LABEL_33;
      v17 += 2;
      LOWORD(v26) = (_WORD)v26 + 2;
LABEL_37:
      v41 = v17 - v30 - 3;
      v42 = 8 * ((_WORD)v17 - (_WORD)v26) - 8;
      if ( v41 >= 7 )
      {
        *(_WORD *)v16 = v42 | 7;
        v44 = v17 - v30 - 10;
        v16 += 2;
        if ( v55 )
        {
          v47 = *v55;
          if ( v44 >= 0xF )
          {
            *v55 = v47 | 0xF0;
            v55 = 0LL;
LABEL_76:
            if ( (unsigned __int64)(v17 - v30 - 25) >= 0xFF )
            {
              *v16 = -1;
              if ( v41 >= 0x10000 )
              {
                *(_WORD *)(v16 + 1) = 0;
                *(_DWORD *)(v16 + 3) = v41;
                v16 += 7;
              }
              else
              {
                *(_WORD *)(v16 + 1) = v41;
                v16 += 3;
              }
            }
            else
            {
              *v16++ = (_BYTE)v17 - (_BYTE)v30 - 25;
            }
            goto LABEL_39;
          }
          *v55 = v47 | (16 * v44);
          v55 = 0LL;
        }
        else
        {
          v55 = v16;
          if ( v44 >= 0xF )
          {
            *v16++ = 15;
            goto LABEL_76;
          }
          *v16++ = v44;
        }
      }
      else
      {
        *(_WORD *)v16 = v41 + v42;
        v16 += 2;
      }
LABEL_39:
      v21 = v56;
      if ( v20 <= 0 )
      {
        *v56 = 2 * v20 + 1;
        v20 = 1;
        v21 = v16;
        v56 = v16;
        v16 += 4;
      }
      else
      {
        v20 = 2 * v20 + 1;
      }
      if ( (unsigned __int64)v17 >= v18 )
      {
        if ( (unsigned __int64)v17 >= v57 )
          goto LABEL_85;
        v18 = RtlpMakeXpressCallback(v60, v57, v17);
        v63 = v18;
      }
      v13 = v57;
      if ( (unsigned __int64)v16 >= v14 )
        goto LABEL_85;
      v23 = v56;
    }
  }
LABEL_86:
  if ( v17 < v11 )
  {
    while ( (unsigned __int64)v16 < v10 )
    {
      v52 = *v17++;
      *v16++ = v52;
      if ( v20 <= 0 )
      {
        *v21 = 2 * v20;
        v20 = 1;
        v21 = v16;
        v16 += 4;
      }
      else
      {
        v20 *= 2;
      }
      if ( v17 >= v11 )
        goto LABEL_87;
    }
    return 3221225507LL;
  }
LABEL_87:
  if ( (unsigned __int64)v16 >= v10 )
    return 3221225507LL;
  for ( ; v20 > 0; v20 = 2 * v20 + 1 )
    ;
  v50 = (_DWORD)v16 - (_DWORD)v9;
  *v21 = 2 * v20 + 1;
  *a5 = v50;
  if ( v50 < 8 )
    *a5 = 8;
  return 0LL;
}
