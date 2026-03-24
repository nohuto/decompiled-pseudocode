/*
 * XREFs of ?vPatNotRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C02C7ED0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchNotAndCopy @ 0x1C02DBE9C (vFetchNotAndCopy.c)
 *     vFetchShiftNotAndCopy @ 0x1C02DBFFC (vFetchShiftNotAndCopy.c)
 */

void __fastcall vPatNotRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v1; // r8
  int v3; // r9d
  unsigned int v4; // edi
  int v5; // r13d
  char v6; // cl
  unsigned int v7; // r9d
  __int64 v8; // rcx
  char v9; // dl
  unsigned int v10; // r13d
  __int64 v11; // rdx
  int v12; // r10d
  int v13; // eax
  int v14; // r12d
  unsigned int v15; // edi
  int v16; // r11d
  int v17; // eax
  unsigned int v18; // esi
  int v19; // esi
  int v20; // r12d
  int v21; // r14d
  int *v22; // rdx
  __int64 i; // r10
  int v24; // r14d
  int v25; // eax
  int v26; // r15d
  __int64 v27; // rcx
  int v28; // eax
  int v29; // ecx
  int v30; // r11d
  int *v31; // r9
  __int64 v32; // r10
  __int64 v33; // r8
  __int128 v34; // [rsp+20h] [rbp-30h] BYREF
  __int128 v35; // [rsp+30h] [rbp-20h]
  __int64 v36; // [rsp+40h] [rbp-10h]
  int v37; // [rsp+98h] [rbp+48h]
  int v38; // [rsp+A0h] [rbp+50h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 3);
  v36 = 0LL;
  v3 = *v1 * *((_DWORD *)a1 + 12);
  v4 = *((_DWORD *)a1 + 10);
  v5 = *((_DWORD *)a1 + 12) * v1[2];
  v34 = 0LL;
  v6 = v3;
  v7 = v3 & 0xFFFFFFFC;
  v8 = v6 & 3;
  v35 = 0LL;
  v9 = v5;
  v10 = v5 & 0xFFFFFFFC;
  v11 = v9 & 3;
  v12 = aulLeftMask[v8];
  v13 = v7 - *((_DWORD *)a1 + 8);
  v38 = v11;
  v14 = ~aulLeftMask[v11];
  v37 = v14;
  if ( v13 >= 0 )
    v15 = v13 % v4;
  else
    v15 = v4 - ~v13 % v4 - 1;
  v16 = v1[1];
  v17 = v16 - *((_DWORD *)a1 + 9);
  v18 = *((_DWORD *)a1 + 11);
  if ( v17 >= 0 )
    v19 = v17 % v18;
  else
    v19 = v18 - ~v17 % v18 - 1;
  if ( v7 != v10 && !(_DWORD)v8 )
    goto LABEL_18;
  v20 = v12 & v14;
  LODWORD(v35) = v15;
  v21 = v19;
  if ( v7 != v10 )
    v20 = v12;
  v22 = (int *)(*(_QWORD *)a1 + v7 + (__int64)(*((_DWORD *)a1 + 4) * v16));
  for ( i = *((_QWORD *)a1 + 1) + v19 * *((_DWORD *)a1 + 5); v16 < v1[3]; v22 = (int *)((char *)v22 + *((int *)a1 + 4)) )
  {
    ++v21;
    *v22 = *v22 & ~v20 | v20 & ~*(_DWORD *)(i + v15);
    if ( v21 == *((_DWORD *)a1 + 11) )
    {
      i = *((_QWORD *)a1 + 1);
      v21 = 0;
    }
    else
    {
      i += *((int *)a1 + 5);
    }
    v1 = (_DWORD *)*((_QWORD *)a1 + 3);
    ++v16;
  }
  if ( v7 != v10 )
  {
    v14 = v37;
    v7 += 4;
    v15 += 4;
LABEL_18:
    DWORD2(v35) = (v10 - v7) >> 2;
    if ( v10 - v7 >= 4 )
    {
      v24 = v1[1];
      DWORD1(v35) = *((_DWORD *)a1 + 10);
      v25 = *((_DWORD *)a1 + 4) * v24;
      v26 = v19;
      v15 %= DWORD1(v35);
      LODWORD(v35) = v15;
      HIDWORD(v35) = DWORD1(v35);
      v27 = v7 + (__int64)v25;
      v28 = v19 * *((_DWORD *)a1 + 5);
      *(_QWORD *)&v34 = *(_QWORD *)a1 + v27;
      *((_QWORD *)&v34 + 1) = *((_QWORD *)a1 + 1) + v28;
      v29 = v1[3];
      if ( (((unsigned __int8)v15 | BYTE4(v35)) & 3) != 0 )
      {
        if ( v24 < v29 )
        {
          do
          {
            vFetchShiftNotAndCopy(&v34);
            if ( ++v26 == *((_DWORD *)a1 + 11) )
            {
              v26 = 0;
              *((_QWORD *)&v34 + 1) = *((_QWORD *)a1 + 1);
            }
            else
            {
              *((_QWORD *)&v34 + 1) += *((int *)a1 + 5);
            }
            v1 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v24;
            *(_QWORD *)&v34 = *((int *)a1 + 4) + (_QWORD)v34;
            LODWORD(v35) = v15;
          }
          while ( v24 < v1[3] );
        }
      }
      else
      {
        HIDWORD(v35) = DWORD1(v35) >> 2;
        if ( v24 < v29 )
        {
          do
          {
            vFetchNotAndCopy(&v34);
            if ( ++v26 == *((_DWORD *)a1 + 11) )
            {
              v26 = 0;
              *((_QWORD *)&v34 + 1) = *((_QWORD *)a1 + 1);
            }
            else
            {
              *((_QWORD *)&v34 + 1) += *((int *)a1 + 5);
            }
            v1 = (_DWORD *)*((_QWORD *)a1 + 3);
            ++v24;
            *(_QWORD *)&v34 = *((int *)a1 + 4) + (_QWORD)v34;
          }
          while ( v24 < v1[3] );
        }
      }
    }
    if ( v38 )
    {
      v30 = v1[1];
      v31 = (int *)(*(_QWORD *)a1 + v10 + (__int64)(v30 * *((_DWORD *)a1 + 4)));
      v32 = *((_QWORD *)a1 + 1) + v19 * *((_DWORD *)a1 + 5);
      if ( v30 < v1[3] )
      {
        v33 = (v15 + 4 * DWORD2(v35)) % *((_DWORD *)a1 + 10);
        do
        {
          ++v19;
          *v31 = *v31 & ~v14 | v14 & ~*(_DWORD *)(v33 + v32);
          if ( v19 == *((_DWORD *)a1 + 11) )
          {
            v32 = *((_QWORD *)a1 + 1);
            v19 = 0;
          }
          else
          {
            v32 += *((int *)a1 + 5);
          }
          ++v30;
          v31 = (int *)((char *)v31 + *((int *)a1 + 4));
        }
        while ( v30 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
  }
}
