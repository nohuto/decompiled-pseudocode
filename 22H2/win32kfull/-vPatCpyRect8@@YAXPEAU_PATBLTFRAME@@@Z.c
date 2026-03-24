/*
 * XREFs of ?vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C00F88F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyPattern@@YAXPEAKJJJ@Z @ 0x1C02DB138 (-CopyPattern@@YAXPEAKJJJ@Z.c)
 *     vFetchShiftAndCopy @ 0x1C02DB2D4 (vFetchShiftAndCopy.c)
 */

void __fastcall vPatCpyRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v2; // rcx
  int v3; // r8d
  unsigned int v4; // edi
  int v5; // r13d
  char v6; // r9
  unsigned int v7; // r8d
  __int64 v8; // r9
  char v9; // dl
  unsigned int v10; // r13d
  __int64 v11; // rdx
  int v12; // r11d
  int v13; // eax
  int v14; // r14d
  __int64 v15; // rdi
  int v16; // r10d
  int v17; // eax
  unsigned int v18; // esi
  int v19; // esi
  __int64 v20; // r12
  unsigned int v21; // r9d
  int v22; // r15d
  int v23; // r14d
  int v24; // eax
  int v25; // edx
  unsigned int *v26; // r13
  int v27; // eax
  int *v28; // r11
  __int64 v29; // rax
  unsigned int *v30; // rcx
  int *v31; // rdx
  int *v32; // rax
  int v33; // r15d
  int v34; // r11d
  int *v35; // rdx
  __int64 i; // r9
  int *v37; // rax
  int v38; // r10d
  int *v39; // r8
  unsigned int v40; // edx
  __int64 v41; // r9
  int v42; // [rsp+20h] [rbp-38h]
  __int128 v43; // [rsp+28h] [rbp-30h] BYREF
  __int128 v44; // [rsp+38h] [rbp-20h]
  __int64 v45; // [rsp+48h] [rbp-10h]
  unsigned int v46; // [rsp+A0h] [rbp+48h]
  unsigned int v47; // [rsp+B0h] [rbp+58h]
  int v48; // [rsp+B8h] [rbp+60h]

  v45 = 0LL;
  v2 = (_DWORD *)*((_QWORD *)a1 + 3);
  v43 = 0LL;
  v3 = *v2 * *((_DWORD *)a1 + 12);
  v4 = *((_DWORD *)a1 + 10);
  v5 = *((_DWORD *)a1 + 12) * v2[2];
  v44 = 0LL;
  v6 = v3;
  v7 = v3 & 0xFFFFFFFC;
  v8 = v6 & 3;
  v9 = v5;
  v10 = v5 & 0xFFFFFFFC;
  v11 = v9 & 3;
  v46 = v10;
  v12 = aulLeftMask[v8];
  v13 = v7 - *((_DWORD *)a1 + 8);
  v48 = v11;
  v14 = ~aulLeftMask[v11];
  v42 = v14;
  if ( v13 < 0 )
    LODWORD(v15) = v4 - ~v13 % v4 - 1;
  else
    LODWORD(v15) = v13 % v4;
  v16 = v2[1];
  v17 = v16 - *((_DWORD *)a1 + 9);
  v18 = *((_DWORD *)a1 + 11);
  if ( v17 < 0 )
    v19 = v18 - ~v17 % v18 - 1;
  else
    v19 = v17 % v18;
  if ( v7 != v10 && !(_DWORD)v8 )
    goto LABEL_7;
  LODWORD(v44) = v15;
  v33 = v12 & v14;
  if ( v7 != v10 )
    v33 = v12;
  v34 = v19;
  v35 = (int *)(*(_QWORD *)a1 + v7 + (__int64)(*((_DWORD *)a1 + 4) * v16));
  for ( i = *((_QWORD *)a1 + 1) + v19 * *((_DWORD *)a1 + 5); v16 < v2[3]; v35 = (int *)((char *)v35 + *((int *)a1 + 4)) )
  {
    ++v34;
    *v35 = *v35 & ~v33 | v33 & *(_DWORD *)((unsigned int)v15 + i);
    if ( v34 == *((_DWORD *)a1 + 11) )
    {
      i = *((_QWORD *)a1 + 1);
      v34 = 0;
    }
    else
    {
      i += *((int *)a1 + 5);
    }
    v2 = (_DWORD *)*((_QWORD *)a1 + 3);
    ++v16;
  }
  if ( v7 != v10 )
  {
    v7 += 4;
    LODWORD(v15) = v15 + 4;
LABEL_7:
    v20 = (v10 - v7) >> 2;
    DWORD2(v44) = (v10 - v7) >> 2;
    if ( v10 - v7 >= 4 )
    {
      v21 = *((_DWORD *)a1 + 10);
      v22 = v2[1];
      v23 = v19;
      v24 = v22 * *((_DWORD *)a1 + 4);
      v15 = (unsigned int)v15 % v21;
      v25 = v2[3];
      v47 = v21;
      *(_QWORD *)&v44 = __PAIR64__(v21, v15);
      v26 = (unsigned int *)(*(_QWORD *)a1 + v7 + (__int64)v24);
      v27 = v19 * *((_DWORD *)a1 + 5);
      *(_QWORD *)&v43 = v26;
      HIDWORD(v44) = v21;
      v28 = (int *)(*((_QWORD *)a1 + 1) + v27);
      *((_QWORD *)&v43 + 1) = v28;
      if ( (((unsigned __int8)v15 | (unsigned __int8)v21) & 3) != 0 )
      {
        if ( v22 < v25 )
        {
          do
          {
            vFetchShiftAndCopy(&v43);
            if ( ++v23 == *((_DWORD *)a1 + 11) )
            {
              v23 = 0;
              *((_QWORD *)&v43 + 1) = *((_QWORD *)a1 + 1);
            }
            else
            {
              *((_QWORD *)&v43 + 1) += *((int *)a1 + 5);
            }
            v2 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v22;
            *(_QWORD *)&v43 = *((int *)a1 + 4) + (_QWORD)v43;
            LODWORD(v44) = v15;
          }
          while ( v22 < v2[3] );
          LODWORD(v20) = DWORD2(v44);
        }
      }
      else if ( v22 < v25 )
      {
        v29 = (unsigned int)v15;
        do
        {
          v30 = v26;
          v31 = (int *)((char *)v28 + v29);
          if ( v21 == 8 )
          {
            v37 = v31 + 1;
            if ( (_DWORD)v15 )
              v37 = v28;
            CopyPattern(v26, v20, *v37, *v31);
            v21 = v47;
          }
          else
          {
            while ( v30 < &v26[v20] )
            {
              *v30 = *v31;
              v32 = v31 + 1;
              ++v30;
              v31 = v28;
              if ( v32 != (int *)((char *)v28 + v21) )
                v31 = v32;
            }
          }
          if ( ++v23 == *((_DWORD *)a1 + 11) )
          {
            v28 = (int *)*((_QWORD *)a1 + 1);
            v23 = 0;
          }
          else
          {
            v28 = (int *)((char *)v28 + *((int *)a1 + 5));
          }
          ++v22;
          v2 = (_DWORD *)*((_QWORD *)a1 + 3);
          v26 = (unsigned int *)((char *)v26 + *((int *)a1 + 4));
          v29 = v15;
        }
        while ( v22 < v2[3] );
      }
      v10 = v46;
    }
    if ( v48 )
    {
      v38 = v2[1];
      v39 = (int *)(*(_QWORD *)a1 + v10 + (__int64)(v38 * *((_DWORD *)a1 + 4)));
      v40 = (unsigned int)(v15 + 4 * v20) % *((_DWORD *)a1 + 10);
      v41 = *((_QWORD *)a1 + 1) + v19 * *((_DWORD *)a1 + 5);
      if ( v38 < v2[3] )
      {
        do
        {
          ++v19;
          *v39 = *v39 & ~v42 | v42 & *(_DWORD *)(v40 + v41);
          if ( v19 == *((_DWORD *)a1 + 11) )
          {
            v41 = *((_QWORD *)a1 + 1);
            v19 = 0;
          }
          else
          {
            v41 += *((int *)a1 + 5);
          }
          ++v38;
          v39 = (int *)((char *)v39 + *((int *)a1 + 4));
        }
        while ( v38 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
