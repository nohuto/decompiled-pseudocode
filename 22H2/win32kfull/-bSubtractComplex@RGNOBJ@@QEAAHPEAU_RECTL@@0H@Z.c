/*
 * XREFs of ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C00B9534
 * Callers:
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C00B8E14 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memcmp @ 0x1C0165600 (memcmp.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall RGNOBJ::bSubtractComplex(RGNOBJ *this, struct _RECTL *a2, struct _RECTL *a3, int a4)
{
  __int64 v4; // rbp
  struct _RECTL *v6; // r12
  RGNOBJ *v7; // rdi
  _BYTE *v8; // rbx
  int v9; // r9d
  __int64 v10; // rdx
  LONG *p_top; // r8
  __int64 i; // rcx
  __int64 v13; // r11
  __int64 v14; // rax
  int v15; // r9d
  unsigned int *v16; // r14
  unsigned int *v17; // rsi
  LONG top; // r11d
  __int64 v19; // r15
  __int64 v20; // r13
  int v21; // r8d
  const void *v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rax
  LONG v25; // r12d
  __int64 v26; // rdx
  LONG v27; // r8d
  LONG v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r10
  __int64 v31; // rcx
  int v32; // edi
  int *v33; // rax
  __int64 v34; // r10
  int v35; // r9d
  int v36; // r11d
  int v37; // ebx
  int v38; // r14d
  _DWORD *v39; // rbp
  _DWORD *v40; // r8
  int v41; // r13d
  _DWORD *v42; // r12
  int v43; // r15d
  __int64 v44; // rax
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  LONG bottom; // ebp
  __int64 v49; // rax
  signed int v50; // ecx
  signed int v51; // ecx
  int v52; // ecx
  __int64 v53; // rdx
  unsigned int v54; // eax
  unsigned __int64 v56; // rax
  _BYTE *v57; // rcx
  int v58; // [rsp+20h] [rbp-3F8h]
  unsigned int v59; // [rsp+24h] [rbp-3F4h]
  __int64 v60; // [rsp+28h] [rbp-3F0h]
  LONG v61; // [rsp+30h] [rbp-3E8h]
  int v62; // [rsp+34h] [rbp-3E4h]
  int v63; // [rsp+38h] [rbp-3E0h]
  LONG v64; // [rsp+48h] [rbp-3D0h]
  __int64 v66; // [rsp+50h] [rbp-3C8h]
  _DWORD *v67; // [rsp+58h] [rbp-3C0h]
  unsigned int *v68; // [rsp+60h] [rbp-3B8h]
  __int64 v69; // [rsp+68h] [rbp-3B0h]
  _BYTE *v70; // [rsp+70h] [rbp-3A8h]
  __int64 v71; // [rsp+78h] [rbp-3A0h]
  __int64 v72; // [rsp+80h] [rbp-398h]
  _DWORD v75[4]; // [rsp+A0h] [rbp-378h] BYREF
  _BYTE v76[800]; // [rsp+B0h] [rbp-368h] BYREF

  v4 = a4;
  v6 = a2;
  v7 = this;
  memset(v76, 0, sizeof(v76));
  if ( (int)v4 < 100 )
  {
    v8 = v76;
    v70 = v76;
LABEL_3:
    v9 = 0;
    if ( (int)v4 > 0 )
    {
      v10 = 0LL;
      p_top = &a3->top;
      do
      {
        for ( i = v10; i; *(_QWORD *)&v8[8 * i--] = v13 )
        {
          v13 = *(_QWORD *)&v8[8 * i - 8];
          if ( *p_top >= *(_DWORD *)(v13 + 4) )
            break;
        }
        ++v10;
        v14 = v9++;
        p_top += 4;
        *(_QWORD *)&v8[8 * i] = &a3[v14];
      }
      while ( v10 < v4 );
    }
    v75[1] = v6->bottom;
    v75[0] = 0;
    v75[2] = 0;
    v15 = 0;
    v75[3] = 0x7FFFFFFF;
    *(_QWORD *)&v8[8 * v4] = v75;
    v58 = 0;
    v16 = *(unsigned int **)(*(_QWORD *)v7 + 88LL);
    v68 = v16;
    *v16 = 0;
    v17 = v16 + 4;
    v16[1] = 0x80000000;
    *((_QWORD *)v16 + 1) = 0x7FFFFFFFLL;
    *(_DWORD *)(*(_QWORD *)v7 + 80LL) = 16;
    *(_DWORD *)(*(_QWORD *)v7 + 84LL) = 1;
    *(_DWORD *)(*(_QWORD *)v7 + 96LL) = 0x7FFFFFFF;
    *(_DWORD *)(*(_QWORD *)v7 + 104LL) = 0x80000000;
    top = v6->top;
    v61 = top;
    if ( *(_DWORD *)(*(_QWORD *)v8 + 12LL) <= top )
    {
      v57 = v8;
      do
      {
        v57 += 8;
        ++v15;
      }
      while ( *(_DWORD *)(*(_QWORD *)v57 + 12LL) <= top );
      v58 = v15;
    }
    v19 = v15;
    v69 = v15;
    v20 = v15;
    v71 = v15;
    while ( 1 )
    {
      v21 = *(_DWORD *)(*(_QWORD *)v7 + 80LL) + 8 * (v4 - v15 + 5);
      if ( v21 > *(_DWORD *)(*(_QWORD *)v7 + 24LL) )
      {
        *(_QWORD *)(*(_QWORD *)v7 + 40LL) = v17;
        if ( !RGNOBJ::bExpand(v7, v21 + 4 * (v4 - v15) * (v4 - v15 + 4)) )
        {
          if ( v8 != v76 )
            Win32FreePool(v8);
          return 0LL;
        }
        v15 = v58;
        top = v61;
        v17 = *(unsigned int **)(*(_QWORD *)v7 + 40LL);
        v16 = &v17[-*(v17 - 1) - 4];
        v68 = v16;
      }
      v22 = v17 + 3;
      v17[3] = v6->left;
      v23 = 2LL;
      v17[4] = v6->right;
      v24 = *(_QWORD *)&v8[8 * v19];
      v59 = 2;
      v60 = 2LL;
      v25 = *(_DWORD *)(v24 + 4);
      if ( v25 <= top )
      {
        v26 = *(_QWORD *)&v8[8 * v20];
        v27 = *(_DWORD *)(v24 + 12);
        if ( *(_DWORD *)(v26 + 4) <= top )
        {
          do
          {
            v28 = *(_DWORD *)(v26 + 12);
            v29 = v20;
            if ( v28 >= v27 )
              v28 = v27;
            v27 = v28;
            if ( v20 > v19 )
            {
              do
              {
                v30 = *(_QWORD *)&v8[8 * v29 - 8];
                if ( *(_DWORD *)(v26 + 12) >= *(_DWORD *)(v30 + 12) )
                  break;
                *(_QWORD *)&v8[8 * v29--] = v30;
              }
              while ( v29 > v19 );
            }
            if ( *(_DWORD *)(*(_QWORD *)&v8[8 * v29] + 12LL) <= top )
            {
              ++v15;
              ++v19;
            }
            else
            {
              *(_QWORD *)&v8[8 * v29] = v26;
            }
            ++v20;
            v26 = *(_QWORD *)&v8[8 * v20];
          }
          while ( *(_DWORD *)(v26 + 4) <= top );
          v58 = v15;
          v71 = v20;
          v69 = v19;
        }
        v31 = v19;
        v72 = v19;
        v25 = *(_DWORD *)(*(_QWORD *)&v8[8 * v20] + 4LL);
        if ( v25 >= v27 )
          v25 = v27;
        v64 = v25;
        if ( v19 < v20 )
        {
          v32 = 2;
          while ( 1 )
          {
            v33 = *(int **)&v8[8 * v31];
            v34 = 0LL;
            v66 = 0LL;
            v35 = *v33;
            v36 = v33[2];
            v62 = *v33;
            v63 = v36;
            if ( v23 <= 0 )
              goto LABEL_38;
            v37 = 0;
            v38 = 3;
            v39 = v17 + 4;
            v40 = v17 + 3;
            v41 = 1;
            v42 = v17 + 5;
            v43 = 2;
            v67 = v17 + 3;
            v44 = v60;
            do
            {
              if ( v35 >= *v39 )
                goto LABEL_36;
              if ( v36 <= *v40 )
                break;
              v45 = v35 <= *v40;
              if ( v36 >= *v39 )
                v45 += 2;
              if ( v45 )
              {
                v46 = v45 - 1;
                if ( !v46 )
                {
                  *v40 = v36;
                  goto LABEL_35;
                }
                v47 = v46 - 1;
                if ( v47 )
                {
                  if ( v47 == 1 )
                  {
                    memmove(&v17[v37 + 3], &v17[v43 + 3], 4LL * (v32 - v37 - 2));
                    v32 -= 2;
                    v34 = v66 - 2;
                    v60 -= 2LL;
                    v40 = v67 - 2;
                    v35 = v62;
                    v37 -= 2;
                    v36 = v63;
                    v43 -= 2;
                    v41 -= 2;
                    v38 -= 2;
                    v39 -= 2;
                    v42 -= 2;
                  }
                  goto LABEL_35;
                }
              }
              else
              {
                memmove(&v17[v38 + 3], &v17[v41 + 3], 4LL * (v32 - v37 - 1));
                v36 = v63;
                v32 += 2;
                v60 += 2LL;
                v35 = v62;
                v40 = v67;
                v34 = v66;
                *v42 = v63;
              }
              *v39 = v35;
LABEL_35:
              v44 = v60;
LABEL_36:
              v34 += 2LL;
              v40 += 2;
              v37 += 2;
              v66 = v34;
              v43 += 2;
              v67 = v40;
              v41 += 2;
              v38 += 2;
              v39 += 2;
              v42 += 2;
            }
            while ( v34 < v44 );
            v8 = v70;
            v20 = v71;
            v31 = v72;
            v23 = v60;
            v59 = v32;
LABEL_38:
            v72 = ++v31;
            if ( v31 >= v20 )
            {
              v7 = this;
              v16 = v68;
              v19 = v69;
              v25 = v64;
              break;
            }
          }
        }
        v22 = v17 + 3;
      }
      bottom = a2->bottom;
      if ( v25 <= bottom )
        bottom = v25;
      if ( *v16 == v59 && !memcmp(v16 + 3, v22, 4LL * v59) )
      {
        v16[2] = bottom;
      }
      else
      {
        if ( v59 )
        {
          v49 = *(_QWORD *)v7;
          v50 = v17[3];
          if ( v50 < *(_DWORD *)(*(_QWORD *)v7 + 96LL) )
          {
            *(_DWORD *)(v49 + 96) = v50;
            v49 = *(_QWORD *)v7;
          }
          v51 = v17[v60 + 2];
          if ( v51 > *(_DWORD *)(v49 + 104) )
            *(_DWORD *)(v49 + 104) = v51;
        }
        v16 = v17;
        v68 = v17;
        ++*(_DWORD *)(*(_QWORD *)v7 + 84LL);
        *v17 = v59;
        *(_DWORD *)(*(_QWORD *)v7 + 80LL) += 4 * v59 + 16;
        v17[1] = v61;
        v17[2] = bottom;
        v17[v60 + 3] = v59;
        v17 += *v17 + 4;
      }
      v61 = bottom;
      top = bottom;
      if ( v19 < v20 )
      {
        v52 = v58;
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)&v8[8 * v19] + 12LL) > bottom )
            break;
          ++v52;
          ++v19;
        }
        while ( v19 < v20 );
        v58 = v52;
        v69 = v19;
      }
      v6 = a2;
      if ( bottom >= a2->bottom )
      {
        v53 = *(_QWORD *)v7;
        if ( *(_DWORD *)(*(_QWORD *)v7 + 84LL) == 1 )
        {
          *(_DWORD *)(v53 + 100) = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 108LL) = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 96LL) = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 104LL) = 0;
          v16[2] = 0x7FFFFFFF;
          *(_QWORD *)(*(_QWORD *)v7 + 40LL) = v17;
        }
        else
        {
          if ( *v16 )
          {
            v17[1] = v16[2];
            ++*(_DWORD *)(*(_QWORD *)v7 + 84LL);
            *v17 = 0;
            v17[3] = 0;
            *(_DWORD *)(*(_QWORD *)v7 + 80LL) += 16;
            v53 = *(_QWORD *)v7;
          }
          else
          {
            v17 = v16;
          }
          *(_DWORD *)(*(_QWORD *)(v53 + 88) + 8LL) = *(_DWORD *)((unsigned int)(4 * **(_DWORD **)(v53 + 88) + 16)
                                                               + *(_QWORD *)(v53 + 88)
                                                               + 4LL);
          *(_DWORD *)(*(_QWORD *)v7 + 100LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 88LL) + 8LL);
          *(_DWORD *)(*(_QWORD *)v7 + 108LL) = v17[1];
          v54 = *v17;
          v17[2] = 0x7FFFFFFF;
          *(_QWORD *)(*(_QWORD *)v7 + 40LL) = &v17[v54 + 4];
        }
        if ( v8 != v76 )
          Win32FreePool(v8);
        return 1LL;
      }
      v15 = v58;
      LODWORD(v4) = a4;
    }
  }
  v56 = 8LL * (unsigned int)(v4 + 1);
  if ( v56 <= 0xFFFFFFFF )
  {
    v70 = PALLOCMEM2((unsigned int)v56, 1852273223LL, 0);
    v8 = v70;
    if ( v70 )
      goto LABEL_3;
  }
  return 0LL;
}
