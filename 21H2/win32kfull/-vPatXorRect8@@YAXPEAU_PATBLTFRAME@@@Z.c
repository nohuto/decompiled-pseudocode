/*
 * XREFs of ?vPatXorRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C0142BA0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndMerge @ 0x1C0142D3C (vFetchAndMerge.c)
 *     vFetchShiftAndMerge @ 0x1C02DA418 (vFetchShiftAndMerge.c)
 */

void __fastcall vPatXorRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v1; // r8
  int v3; // r9d
  unsigned int v4; // edi
  int v5; // r12d
  char v6; // cl
  unsigned int v7; // r9d
  __int64 v8; // rcx
  char v9; // r13
  unsigned int v10; // r12d
  __int64 v11; // r13
  int v12; // eax
  int v13; // r11d
  unsigned int v14; // edi
  int v15; // r10d
  int v16; // eax
  unsigned int v17; // esi
  int v18; // esi
  int v19; // r14d
  int v20; // eax
  int v21; // r15d
  __int64 v22; // rcx
  int v23; // eax
  int v24; // ecx
  int v25; // r14d
  int v26; // r11d
  _DWORD *v27; // rcx
  __int64 i; // rdx
  int v29; // r10d
  _DWORD *v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rdx
  __int128 v33; // [rsp+20h] [rbp-30h] BYREF
  __int128 v34; // [rsp+30h] [rbp-20h]
  __int64 v35; // [rsp+40h] [rbp-10h]
  int v36; // [rsp+80h] [rbp+30h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 3);
  v35 = 0LL;
  v3 = *v1 * *((_DWORD *)a1 + 12);
  v4 = *((_DWORD *)a1 + 10);
  v5 = *((_DWORD *)a1 + 12) * v1[2];
  v33 = 0LL;
  v6 = v3;
  v7 = v3 & 0xFFFFFFFC;
  v8 = v6 & 3;
  v34 = 0LL;
  v9 = v5;
  v10 = v5 & 0xFFFFFFFC;
  v11 = v9 & 3;
  v12 = v7 - *((_DWORD *)a1 + 8);
  v13 = aulLeftMask[v8];
  v36 = ~aulLeftMask[v11];
  if ( v12 < 0 )
    v14 = v4 - ~v12 % v4 - 1;
  else
    v14 = v12 % v4;
  v15 = v1[1];
  v16 = v15 - *((_DWORD *)a1 + 9);
  v17 = *((_DWORD *)a1 + 11);
  if ( v16 < 0 )
    v18 = v17 - ~v16 % v17 - 1;
  else
    v18 = v16 % v17;
  if ( v7 != v10 && !(_DWORD)v8 )
    goto LABEL_7;
  v25 = v13 & ~aulLeftMask[v11];
  LODWORD(v34) = v14;
  if ( v7 != v10 )
    v25 = v13;
  v26 = v18;
  v27 = (_DWORD *)(*(_QWORD *)a1 + v7 + (__int64)(*((_DWORD *)a1 + 4) * v15));
  for ( i = *((_QWORD *)a1 + 1) + v18 * *((_DWORD *)a1 + 5); v15 < v1[3]; v27 = (_DWORD *)((char *)v27 + *((int *)a1 + 4)) )
  {
    ++v26;
    *v27 ^= v25 & *(_DWORD *)(v14 + i);
    if ( v26 == *((_DWORD *)a1 + 11) )
    {
      i = *((_QWORD *)a1 + 1);
      v26 = 0;
    }
    else
    {
      i += *((int *)a1 + 5);
    }
    v1 = (_DWORD *)*((_QWORD *)a1 + 3);
    ++v15;
  }
  if ( v7 != v10 )
  {
    v7 += 4;
    v14 += 4;
LABEL_7:
    DWORD2(v34) = (v10 - v7) >> 2;
    if ( v10 - v7 >= 4 )
    {
      v19 = v1[1];
      DWORD1(v34) = *((_DWORD *)a1 + 10);
      v20 = *((_DWORD *)a1 + 4) * v19;
      v21 = v18;
      v14 %= DWORD1(v34);
      LODWORD(v34) = v14;
      HIDWORD(v34) = DWORD1(v34);
      v22 = v7 + (__int64)v20;
      v23 = v18 * *((_DWORD *)a1 + 5);
      *(_QWORD *)&v33 = *(_QWORD *)a1 + v22;
      *((_QWORD *)&v33 + 1) = *((_QWORD *)a1 + 1) + v23;
      v24 = v1[3];
      if ( (((unsigned __int8)v14 | BYTE4(v34)) & 3) != 0 )
      {
        if ( v19 < v24 )
        {
          do
          {
            vFetchShiftAndMerge(&v33);
            if ( ++v21 == *((_DWORD *)a1 + 11) )
            {
              v21 = 0;
              *((_QWORD *)&v33 + 1) = *((_QWORD *)a1 + 1);
            }
            else
            {
              *((_QWORD *)&v33 + 1) += *((int *)a1 + 5);
            }
            v1 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v19;
            *(_QWORD *)&v33 = *((int *)a1 + 4) + (_QWORD)v33;
            LODWORD(v34) = v14;
          }
          while ( v19 < v1[3] );
        }
      }
      else
      {
        HIDWORD(v34) = DWORD1(v34) >> 2;
        if ( v19 < v24 )
        {
          do
          {
            vFetchAndMerge(&v33);
            if ( ++v21 == *((_DWORD *)a1 + 11) )
            {
              v21 = 0;
              *((_QWORD *)&v33 + 1) = *((_QWORD *)a1 + 1);
            }
            else
            {
              *((_QWORD *)&v33 + 1) += *((int *)a1 + 5);
            }
            v1 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v19;
            *(_QWORD *)&v33 = *((int *)a1 + 4) + (_QWORD)v33;
          }
          while ( v19 < v1[3] );
        }
      }
    }
    if ( (_DWORD)v11 )
    {
      v29 = v1[1];
      v30 = (_DWORD *)(*(_QWORD *)a1 + v10 + (__int64)(*((_DWORD *)a1 + 4) * v29));
      v31 = *((_QWORD *)a1 + 1) + v18 * *((_DWORD *)a1 + 5);
      v32 = (v14 + 4 * DWORD2(v34)) % *((_DWORD *)a1 + 10);
      if ( v29 < v1[3] )
      {
        do
        {
          ++v18;
          *v30 ^= v36 & *(_DWORD *)(v32 + v31);
          if ( v18 == *((_DWORD *)a1 + 11) )
          {
            v31 = *((_QWORD *)a1 + 1);
            v18 = 0;
          }
          else
          {
            v31 += *((int *)a1 + 5);
          }
          ++v29;
          v30 = (_DWORD *)((char *)v30 + *((int *)a1 + 4));
        }
        while ( v29 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
