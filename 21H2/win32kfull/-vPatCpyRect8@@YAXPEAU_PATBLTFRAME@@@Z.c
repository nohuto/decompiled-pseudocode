/*
 * XREFs of ?vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C00E0720
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyPattern@@YAXPEAKJJJ@Z @ 0x1C02DA208 (-CopyPattern@@YAXPEAKJJJ@Z.c)
 *     vFetchShiftAndCopy @ 0x1C02DA3A4 (vFetchShiftAndCopy.c)
 */

void __fastcall vPatCpyRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v2; // rcx
  int v3; // r8d
  unsigned int v4; // edi
  int v5; // r13d
  __int64 v6; // r9
  int v7; // r11d
  unsigned int v8; // r13d
  unsigned int v9; // r8d
  int v10; // eax
  __int64 v11; // rdi
  int v12; // r10d
  int v13; // eax
  unsigned int v14; // esi
  int v15; // esi
  __int64 v16; // r11
  unsigned int v17; // r9d
  int v18; // r15d
  int v19; // r14d
  int v20; // eax
  int v21; // edx
  unsigned int *v22; // r13
  int v23; // eax
  int *v24; // r12
  __int64 v25; // rax
  unsigned int *v26; // rdx
  int *v27; // rcx
  int *v28; // rax
  int v29; // r15d
  int v30; // r11d
  int *v31; // rdx
  __int64 i; // r9
  int *v33; // rax
  int v34; // r10d
  int *v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r9
  int v38; // [rsp+24h] [rbp-34h]
  __int128 v39; // [rsp+28h] [rbp-30h] BYREF
  __int128 v40; // [rsp+38h] [rbp-20h]
  __int64 v41; // [rsp+48h] [rbp-10h]
  unsigned int v42; // [rsp+A0h] [rbp+48h]
  unsigned int v43; // [rsp+B0h] [rbp+58h]
  int v44; // [rsp+B8h] [rbp+60h]

  v41 = 0LL;
  v2 = (_DWORD *)*((_QWORD *)a1 + 3);
  v39 = 0LL;
  v3 = *v2 * *((_DWORD *)a1 + 12);
  v4 = *((_DWORD *)a1 + 10);
  v5 = *((_DWORD *)a1 + 12) * v2[2];
  v40 = 0LL;
  v6 = v3 & 3;
  v7 = aulLeftMask[v6];
  v44 = v5 & 3;
  v38 = aulLeftMask[v5 & 3];
  v8 = v5 & 0xFFFFFFFC;
  v9 = v3 & 0xFFFFFFFC;
  v42 = v8;
  v10 = v9 - *((_DWORD *)a1 + 8);
  if ( v10 < 0 )
    LODWORD(v11) = v4 - ~v10 % v4 - 1;
  else
    LODWORD(v11) = v10 % v4;
  v12 = v2[1];
  v13 = v12 - *((_DWORD *)a1 + 9);
  v14 = *((_DWORD *)a1 + 11);
  if ( v13 < 0 )
    v15 = v14 - ~v13 % v14 - 1;
  else
    v15 = v13 % v14;
  if ( v9 != v8 && !(_DWORD)v6 )
    goto LABEL_7;
  LODWORD(v40) = v11;
  v29 = v7 & ~v38;
  if ( v9 != v8 )
    v29 = v7;
  v30 = v15;
  v31 = (int *)(*(_QWORD *)a1 + v9 + (__int64)(*((_DWORD *)a1 + 4) * v12));
  for ( i = *((_QWORD *)a1 + 1) + v15 * *((_DWORD *)a1 + 5); v12 < v2[3]; v31 = (int *)((char *)v31 + *((int *)a1 + 4)) )
  {
    ++v30;
    *v31 = *v31 & ~v29 | v29 & *(_DWORD *)((unsigned int)v11 + i);
    if ( v30 == *((_DWORD *)a1 + 11) )
    {
      i = *((_QWORD *)a1 + 1);
      v30 = 0;
    }
    else
    {
      i += *((int *)a1 + 5);
    }
    v2 = (_DWORD *)*((_QWORD *)a1 + 3);
    ++v12;
  }
  if ( v9 != v8 )
  {
    v9 += 4;
    LODWORD(v11) = v11 + 4;
LABEL_7:
    v16 = (v8 - v9) >> 2;
    DWORD2(v40) = v16;
    if ( (_DWORD)v16 )
    {
      v17 = *((_DWORD *)a1 + 10);
      v18 = v2[1];
      v19 = v15;
      v20 = v18 * *((_DWORD *)a1 + 4);
      v11 = (unsigned int)v11 % v17;
      v21 = v2[3];
      v43 = v17;
      *(_QWORD *)&v40 = __PAIR64__(v17, v11);
      v22 = (unsigned int *)(*(_QWORD *)a1 + v9 + (__int64)v20);
      v23 = v15 * *((_DWORD *)a1 + 5);
      *(_QWORD *)&v39 = v22;
      HIDWORD(v40) = v17;
      v24 = (int *)(*((_QWORD *)a1 + 1) + v23);
      *((_QWORD *)&v39 + 1) = v24;
      if ( (((unsigned __int8)v11 | (unsigned __int8)v17) & 3) != 0 )
      {
        if ( v18 < v21 )
        {
          do
          {
            vFetchShiftAndCopy(&v39);
            if ( ++v19 == *((_DWORD *)a1 + 11) )
            {
              v19 = 0;
              *((_QWORD *)&v39 + 1) = *((_QWORD *)a1 + 1);
            }
            else
            {
              *((_QWORD *)&v39 + 1) += *((int *)a1 + 5);
            }
            v2 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v18;
            *(_QWORD *)&v39 = *((int *)a1 + 4) + (_QWORD)v39;
            LODWORD(v40) = v11;
          }
          while ( v18 < v2[3] );
          LODWORD(v16) = DWORD2(v40);
        }
      }
      else if ( v18 < v21 )
      {
        v25 = (unsigned int)v11;
        do
        {
          v26 = v22;
          v27 = (int *)((char *)v24 + v25);
          if ( v17 == 8 )
          {
            v33 = v27 + 1;
            if ( (_DWORD)v11 )
              v33 = v24;
            CopyPattern(v22, v16, *v33, *v27);
            v17 = v43;
          }
          else
          {
            while ( v26 < &v22[v16] )
            {
              *v26 = *v27;
              v28 = v27 + 1;
              ++v26;
              v27 = v24;
              if ( v28 != (int *)((char *)v24 + v17) )
                v27 = v28;
            }
          }
          if ( ++v19 == *((_DWORD *)a1 + 11) )
          {
            v24 = (int *)*((_QWORD *)a1 + 1);
            v19 = 0;
          }
          else
          {
            v24 = (int *)((char *)v24 + *((int *)a1 + 5));
          }
          ++v18;
          v2 = (_DWORD *)*((_QWORD *)a1 + 3);
          v22 = (unsigned int *)((char *)v22 + *((int *)a1 + 4));
          v25 = v11;
        }
        while ( v18 < v2[3] );
      }
      v8 = v42;
    }
    if ( v44 )
    {
      v34 = v2[1];
      v35 = (int *)(*(_QWORD *)a1 + v8 + (__int64)(v34 * *((_DWORD *)a1 + 4)));
      v36 = (unsigned int)(v11 + 4 * v16) % *((_DWORD *)a1 + 10);
      v37 = *((_QWORD *)a1 + 1) + v15 * *((_DWORD *)a1 + 5);
      if ( v34 < v2[3] )
      {
        do
        {
          ++v15;
          *v35 = *v35 & v38 | ~v38 & *(_DWORD *)(v36 + v37);
          if ( v15 == *((_DWORD *)a1 + 11) )
          {
            v37 = *((_QWORD *)a1 + 1);
            v15 = 0;
          }
          else
          {
            v37 += *((int *)a1 + 5);
          }
          ++v34;
          v35 = (int *)((char *)v35 + *((int *)a1 + 4));
        }
        while ( v34 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
