/*
 * XREFs of ?vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C0017F50
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndCopy @ 0x1C00180E8 (vFetchAndCopy.c)
 *     vFetchShiftAndCopy @ 0x1C0305F74 (vFetchShiftAndCopy.c)
 */

void __fastcall vPatCpyRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v1; // r8
  int v2; // r12d
  int v4; // r9d
  int v5; // r12d
  unsigned int v6; // esi
  __int64 v7; // rcx
  int v8; // r10d
  unsigned int v9; // r9d
  unsigned int v10; // r12d
  int v11; // eax
  unsigned int v12; // esi
  int v13; // r14d
  int v14; // eax
  unsigned int v15; // edi
  int v16; // edi
  int v17; // r13d
  int v18; // r15d
  int v19; // eax
  int v20; // r14d
  __int64 v21; // rcx
  int v22; // eax
  int v23; // ecx
  int v24; // r15d
  int *v25; // rdx
  __int64 v26; // r11
  int v27; // ecx
  int v28; // r11d
  int *v29; // r9
  __int64 v30; // r10
  __int64 v31; // rdx
  int v32; // [rsp+24h] [rbp-34h]
  __int128 v33; // [rsp+28h] [rbp-30h] BYREF
  __int128 v34; // [rsp+38h] [rbp-20h]
  __int64 v35; // [rsp+48h] [rbp-10h]
  int v36; // [rsp+A0h] [rbp+48h]
  int v37; // [rsp+B8h] [rbp+60h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 3);
  v2 = *((_DWORD *)a1 + 12);
  v35 = 0LL;
  v4 = *v1 * v2;
  v5 = v1[2] * v2;
  v6 = *((_DWORD *)a1 + 10);
  v33 = 0LL;
  v7 = v4 & 3;
  v34 = 0LL;
  v37 = v5 & 3;
  v8 = dword_1C0318450[v7];
  v32 = dword_1C0318450[v5 & 3];
  v9 = v4 & 0xFFFFFFFC;
  v10 = v5 & 0xFFFFFFFC;
  v11 = v9 - *((_DWORD *)a1 + 8);
  if ( v11 < 0 )
    v12 = v6 - ~v11 % v6 - 1;
  else
    v12 = v11 % v6;
  v13 = v1[1];
  v14 = v13 - *((_DWORD *)a1 + 9);
  v15 = *((_DWORD *)a1 + 11);
  if ( v14 < 0 )
    v16 = v15 - ~v14 % v15 - 1;
  else
    v16 = v14 % v15;
  if ( v9 == v10 )
  {
    v8 &= ~v32;
    v17 = 1;
  }
  else
  {
    v17 = 0;
    if ( !(_DWORD)v7 )
    {
LABEL_7:
      DWORD2(v34) = (v10 - v9) >> 2;
      if ( v10 - v9 >= 4 )
      {
        v18 = v1[1];
        DWORD1(v34) = *((_DWORD *)a1 + 10);
        v19 = *((_DWORD *)a1 + 4) * v18;
        v20 = v16;
        v12 %= DWORD1(v34);
        LODWORD(v34) = v12;
        HIDWORD(v34) = DWORD1(v34);
        v21 = v9 + (__int64)v19;
        v22 = *((_DWORD *)a1 + 5) * v16;
        *(_QWORD *)&v33 = *(_QWORD *)a1 + v21;
        *((_QWORD *)&v33 + 1) = *((_QWORD *)a1 + 1) + v22;
        v23 = v1[3];
        if ( (((unsigned __int8)v12 | BYTE4(v34)) & 3) != 0 )
        {
          if ( v18 < v23 )
          {
            do
            {
              vFetchShiftAndCopy(&v33);
              if ( ++v20 == *((_DWORD *)a1 + 11) )
              {
                v20 = 0;
                *((_QWORD *)&v33 + 1) = *((_QWORD *)a1 + 1);
              }
              else
              {
                *((_QWORD *)&v33 + 1) += *((int *)a1 + 5);
              }
              v1 = (_DWORD *)*((_QWORD *)a1 + 3);
              ++v18;
              *(_QWORD *)&v33 = *((int *)a1 + 4) + (_QWORD)v33;
              LODWORD(v34) = v12;
            }
            while ( v18 < v1[3] );
          }
        }
        else
        {
          HIDWORD(v34) = DWORD1(v34) >> 2;
          if ( v18 < v23 )
          {
            do
            {
              vFetchAndCopy(&v33);
              if ( ++v20 == *((_DWORD *)a1 + 11) )
              {
                v20 = 0;
                *((_QWORD *)&v33 + 1) = *((_QWORD *)a1 + 1);
              }
              else
              {
                *((_QWORD *)&v33 + 1) += *((int *)a1 + 5);
              }
              v1 = (_DWORD *)*((_QWORD *)a1 + 3);
              ++v18;
              *(_QWORD *)&v33 = *((int *)a1 + 4) + (_QWORD)v33;
            }
            while ( v18 < v1[3] );
          }
        }
      }
      if ( v37 )
      {
        v28 = v1[1];
        v29 = (int *)(*(_QWORD *)a1 + v10 + (__int64)(*((_DWORD *)a1 + 4) * v28));
        v30 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v16;
        v31 = (v12 + 4 * DWORD2(v34)) % *((_DWORD *)a1 + 10);
        if ( v28 < v1[3] )
        {
          do
          {
            ++v16;
            *v29 = *v29 & v32 | ~v32 & *(_DWORD *)(v31 + v30);
            if ( v16 == *((_DWORD *)a1 + 11) )
            {
              v30 = *((_QWORD *)a1 + 1);
              v16 = 0;
            }
            else
            {
              v30 += *((int *)a1 + 5);
            }
            ++v28;
            v29 = (int *)((char *)v29 + *((int *)a1 + 4));
          }
          while ( v28 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
        }
      }
      return;
    }
  }
  LODWORD(v34) = v12;
  v24 = v16;
  v25 = (int *)(*(_QWORD *)a1 + v9 + (__int64)(*((_DWORD *)a1 + 4) * v13));
  v26 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v16;
  while ( v13 < v1[3] )
  {
    *v25 = *v25 & ~v8 | v8 & *(_DWORD *)(v12 + v26);
    v27 = v24 + 1;
    v36 = *((_DWORD *)a1 + 11);
    if ( v24 + 1 == v36 )
      v26 = *((_QWORD *)a1 + 1);
    else
      v26 += *((int *)a1 + 5);
    v24 = 0;
    v1 = (_DWORD *)*((_QWORD *)a1 + 3);
    v25 = (int *)((char *)v25 + *((int *)a1 + 4));
    ++v13;
    if ( v27 != v36 )
      v24 = v27;
  }
  if ( !v17 )
  {
    v9 += 4;
    v12 += 4;
    goto LABEL_7;
  }
}
