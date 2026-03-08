/*
 * XREFs of ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C00C9C44
 * Callers:
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C00C972C (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memcmp @ 0x1C012BEF0 (memcmp.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall RGNOBJ::bSubtractComplex(RGNOBJ *this, struct _RECTL *a2, struct _RECTL *a3, int a4)
{
  __int64 v4; // rbp
  struct _RECTL *v6; // r12
  RGNOBJ *v7; // r14
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE *v10; // rbx
  unsigned int v11; // r9d
  __int64 v12; // rcx
  LONG *p_top; // r8
  __int64 i; // rdx
  __int64 v15; // r11
  __int64 v16; // rax
  __m128i si128; // xmm0
  int v18; // r10d
  unsigned int *v19; // rsi
  unsigned int *v20; // rdi
  LONG top; // r11d
  __int64 v22; // r15
  __int64 v23; // r13
  int v24; // r8d
  const void *v25; // rdx
  __int64 v26; // rbp
  __int64 v27; // rax
  LONG v28; // r12d
  __int64 v29; // rdx
  LONG v30; // r8d
  LONG v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rcx
  int v35; // r14d
  int *v36; // rax
  __int64 v37; // r9
  int v38; // r10d
  int v39; // r11d
  int v40; // ebx
  int v41; // esi
  _DWORD *v42; // rbp
  _DWORD *v43; // r8
  int v44; // r13d
  _DWORD *v45; // r12
  int v46; // r15d
  __int64 v47; // rax
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  LONG bottom; // ebp
  int v52; // eax
  unsigned int v53; // eax
  int v54; // ecx
  unsigned int v55; // eax
  unsigned __int64 v57; // rax
  _BYTE *v58; // rcx
  int v59; // [rsp+20h] [rbp-408h]
  unsigned int v60; // [rsp+24h] [rbp-404h]
  __int64 v61; // [rsp+28h] [rbp-400h]
  LONG v62; // [rsp+30h] [rbp-3F8h]
  int v63; // [rsp+34h] [rbp-3F4h]
  int v64; // [rsp+38h] [rbp-3F0h]
  LONG v65; // [rsp+48h] [rbp-3E0h]
  __int64 v67; // [rsp+50h] [rbp-3D8h]
  _DWORD *v68; // [rsp+58h] [rbp-3D0h]
  unsigned int *v69; // [rsp+60h] [rbp-3C8h]
  __int64 v70; // [rsp+68h] [rbp-3C0h]
  __int128 v71; // [rsp+70h] [rbp-3B8h]
  _BYTE *v72; // [rsp+80h] [rbp-3A8h]
  __int64 v73; // [rsp+88h] [rbp-3A0h]
  __int64 v74; // [rsp+90h] [rbp-398h]
  __int128 v77; // [rsp+A0h] [rbp-388h]
  _DWORD v78[4]; // [rsp+B0h] [rbp-378h] BYREF
  _BYTE v79[800]; // [rsp+C0h] [rbp-368h] BYREF

  v4 = a4;
  v6 = a2;
  v7 = this;
  memset_0(v79, 0, sizeof(v79));
  if ( (int)v4 < 100 )
  {
    v10 = v79;
    v72 = v79;
LABEL_3:
    v11 = 0;
    if ( (int)v4 > 0 )
    {
      v12 = 0LL;
      p_top = &a3->top;
      do
      {
        for ( i = v12; i; *(_QWORD *)&v10[8 * i--] = v15 )
        {
          v15 = *(_QWORD *)&v10[8 * i - 8];
          if ( *p_top >= *(_DWORD *)(v15 + 4) )
            break;
        }
        ++v12;
        v16 = v11++;
        p_top += 4;
        *(_QWORD *)&v10[8 * i] = &a3[v16];
      }
      while ( v12 < v4 );
    }
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v18 = 0;
    v78[1] = v6->bottom;
    v78[0] = 0;
    v78[2] = 0;
    v78[3] = 0x7FFFFFFF;
    *(_QWORD *)&v10[8 * v4] = v78;
    v59 = 0;
    v19 = *(unsigned int **)(*(_QWORD *)v7 + 32LL);
    v69 = v19;
    *v19 = 0;
    v20 = v19 + 4;
    v19[1] = 0x80000000;
    *((_QWORD *)v19 + 1) = 0x7FFFFFFFLL;
    *(_DWORD *)(*(_QWORD *)v7 + 48LL) = 16;
    *(_DWORD *)(*(_QWORD *)v7 + 52LL) = 1;
    *(__m128i *)(*(_QWORD *)v7 + 56LL) = si128;
    top = v6->top;
    v62 = top;
    if ( *(_DWORD *)(*(_QWORD *)v10 + 12LL) <= top )
    {
      v58 = v10;
      do
      {
        v58 += 8;
        ++v18;
      }
      while ( *(_DWORD *)(*(_QWORD *)v58 + 12LL) <= top );
      v59 = v18;
    }
    v22 = v18;
    v70 = v18;
    v23 = v18;
    v73 = v18;
    while ( 1 )
    {
      v24 = *(_DWORD *)(*(_QWORD *)v7 + 48LL) + 8 * (v4 - v18 + 5);
      if ( v24 > *(_DWORD *)(*(_QWORD *)v7 + 24LL) )
      {
        *(_QWORD *)(*(_QWORD *)v7 + 40LL) = v20;
        if ( !RGNOBJ::bExpand(v7, v24 + 4 * (v4 - v18) * (v4 - v18 + 4)) )
        {
          if ( v10 != v79 )
            Win32FreePool(v10);
          return 0LL;
        }
        v18 = v59;
        top = v62;
        v20 = *(unsigned int **)(*(_QWORD *)v7 + 40LL);
        v19 = &v20[-*(v20 - 1) - 4];
        v69 = v19;
      }
      v25 = v20 + 3;
      v20[3] = v6->left;
      v26 = 2LL;
      v20[4] = v6->right;
      v27 = *(_QWORD *)&v10[8 * v22];
      v60 = 2;
      v61 = 2LL;
      v28 = *(_DWORD *)(v27 + 4);
      if ( v28 <= top )
      {
        v29 = *(_QWORD *)&v10[8 * v23];
        v30 = *(_DWORD *)(v27 + 12);
        if ( *(_DWORD *)(v29 + 4) <= top )
        {
          do
          {
            v31 = *(_DWORD *)(v29 + 12);
            v32 = v23;
            if ( v31 >= v30 )
              v31 = v30;
            v30 = v31;
            if ( v23 > v22 )
            {
              do
              {
                v33 = *(_QWORD *)&v10[8 * v32 - 8];
                if ( *(_DWORD *)(v29 + 12) >= *(_DWORD *)(v33 + 12) )
                  break;
                *(_QWORD *)&v10[8 * v32--] = v33;
              }
              while ( v32 > v22 );
            }
            if ( *(_DWORD *)(*(_QWORD *)&v10[8 * v32] + 12LL) <= top )
            {
              ++v18;
              ++v22;
            }
            else
            {
              *(_QWORD *)&v10[8 * v32] = v29;
            }
            ++v23;
            v29 = *(_QWORD *)&v10[8 * v23];
          }
          while ( *(_DWORD *)(v29 + 4) <= top );
          v59 = v18;
          v73 = v23;
          v70 = v22;
        }
        v34 = v22;
        v74 = v22;
        v28 = *(_DWORD *)(*(_QWORD *)&v10[8 * v23] + 4LL);
        if ( v28 >= v30 )
          v28 = v30;
        v65 = v28;
        if ( v22 < v23 )
        {
          v35 = 2;
          while ( 1 )
          {
            v36 = *(int **)&v10[8 * v34];
            v37 = 0LL;
            v67 = 0LL;
            v38 = *v36;
            v39 = v36[2];
            v63 = *v36;
            v64 = v39;
            if ( v26 <= 0 )
              goto LABEL_42;
            v40 = 0;
            v41 = 3;
            v42 = v20 + 4;
            v43 = v20 + 3;
            v44 = 1;
            v45 = v20 + 5;
            v46 = 2;
            v68 = v20 + 3;
            v47 = v61;
            do
            {
              if ( v38 >= *v42 )
                goto LABEL_40;
              if ( v39 <= *v43 )
                break;
              v48 = v38 <= *v43;
              if ( v39 >= *v42 )
                v48 += 2;
              if ( v48 )
              {
                v49 = v48 - 1;
                if ( !v49 )
                {
                  *v43 = v39;
                  goto LABEL_39;
                }
                v50 = v49 - 1;
                if ( v50 )
                {
                  if ( v50 == 1 )
                  {
                    memmove(&v20[v40 + 3], &v20[v46 + 3], 4LL * (v35 - v40 - 2));
                    v35 -= 2;
                    v37 = v67 - 2;
                    v61 -= 2LL;
                    v43 = v68 - 2;
                    v38 = v63;
                    v40 -= 2;
                    v39 = v64;
                    v46 -= 2;
                    v44 -= 2;
                    v41 -= 2;
                    v42 -= 2;
                    v45 -= 2;
                  }
                  goto LABEL_39;
                }
              }
              else
              {
                memmove(&v20[v41 + 3], &v20[v44 + 3], 4LL * (v35 - v40 - 1));
                v39 = v64;
                v35 += 2;
                v61 += 2LL;
                v38 = v63;
                v43 = v68;
                v37 = v67;
                *v45 = v64;
              }
              *v42 = v38;
LABEL_39:
              v47 = v61;
LABEL_40:
              v37 += 2LL;
              v43 += 2;
              v40 += 2;
              v67 = v37;
              v46 += 2;
              v68 = v43;
              v44 += 2;
              v41 += 2;
              v42 += 2;
              v45 += 2;
            }
            while ( v37 < v47 );
            v10 = v72;
            v23 = v73;
            v34 = v74;
            v26 = v61;
            v60 = v35;
LABEL_42:
            v74 = ++v34;
            if ( v34 >= v23 )
            {
              v19 = v69;
              v7 = this;
              v22 = v70;
              v28 = v65;
              break;
            }
          }
        }
        v25 = v20 + 3;
      }
      bottom = a2->bottom;
      if ( v28 <= bottom )
        bottom = v28;
      if ( *v19 == v60 && !memcmp(v19 + 3, v25, 4LL * v60) )
      {
        v19[2] = bottom;
      }
      else
      {
        if ( v60 )
        {
          v52 = _mm_cvtsi128_si32(*(__m128i *)(*(_QWORD *)v7 + 56LL));
          v71 = *(_OWORD *)(*(_QWORD *)v7 + 56LL);
          if ( (int)v20[3] < v52 )
            v52 = v20[3];
          LODWORD(v71) = v52;
          v53 = *(_QWORD *)(*(_QWORD *)v7 + 64LL);
          if ( (int)v20[v61 + 2] > SDWORD2(v71) )
            v53 = v20[v61 + 2];
          DWORD2(v71) = v53;
          *(_OWORD *)(*(_QWORD *)v7 + 56LL) = v71;
        }
        v19 = v20;
        v69 = v20;
        ++*(_DWORD *)(*(_QWORD *)v7 + 52LL);
        *v20 = v60;
        *(_DWORD *)(*(_QWORD *)v7 + 48LL) += 4 * v60 + 16;
        v20[1] = v62;
        v20[2] = bottom;
        v20[v61 + 3] = v60;
        v20 += *v20 + 4;
      }
      v62 = bottom;
      top = bottom;
      if ( v22 < v23 )
      {
        v54 = v59;
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)&v10[8 * v22] + 12LL) > bottom )
            break;
          ++v54;
          ++v22;
        }
        while ( v22 < v23 );
        v59 = v54;
        v70 = v22;
      }
      v6 = a2;
      if ( bottom >= a2->bottom )
      {
        if ( *(_DWORD *)(*(_QWORD *)v7 + 52LL) == 1 )
        {
          *(_OWORD *)(*(_QWORD *)v7 + 56LL) = 0LL;
          v19[2] = 0x7FFFFFFF;
          *(_QWORD *)(*(_QWORD *)v7 + 40LL) = v20;
        }
        else
        {
          if ( *v19 )
          {
            v20[1] = v19[2];
            ++*(_DWORD *)(*(_QWORD *)v7 + 52LL);
            *v20 = 0;
            v20[3] = 0;
            *(_DWORD *)(*(_QWORD *)v7 + 48LL) += 16;
          }
          else
          {
            v20 = v19;
          }
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 32LL) + 8LL) = *(_DWORD *)((unsigned int)(4
                                                                                          * **(_DWORD **)(*(_QWORD *)v7 + 32LL)
                                                                                          + 16)
                                                                           + *(_QWORD *)(*(_QWORD *)v7 + 32LL)
                                                                           + 4LL);
          v77 = *(_OWORD *)(*(_QWORD *)v7 + 56LL);
          HIDWORD(v77) = v20[1];
          DWORD1(v77) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 32LL) + 8LL);
          *(_OWORD *)(*(_QWORD *)v7 + 56LL) = v77;
          v55 = *v20;
          v20[2] = 0x7FFFFFFF;
          *(_QWORD *)(*(_QWORD *)v7 + 40LL) = &v20[v55 + 4];
        }
        if ( v10 != v79 )
          Win32FreePool(v10);
        return 1LL;
      }
      v18 = v59;
      LODWORD(v4) = a4;
    }
  }
  v57 = 8LL * (unsigned int)(v4 + 1);
  if ( v57 <= 0xFFFFFFFF )
  {
    if ( (_DWORD)v57 )
    {
      v72 = (_BYTE *)Win32AllocPool((unsigned int)v57, 1852273223LL, v8, v9);
      v10 = v72;
      if ( v72 )
        goto LABEL_3;
    }
  }
  return 0LL;
}
