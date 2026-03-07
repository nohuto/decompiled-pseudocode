void __fastcall vPatXorRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v1; // r8
  int v2; // r15d
  int v4; // r9d
  int v5; // r15d
  int v6; // r9d
  unsigned int v7; // esi
  char v8; // dl
  unsigned int v9; // r15d
  __int64 v10; // rdx
  char v11; // cl
  unsigned int v12; // r9d
  __int64 v13; // rcx
  bool v14; // sf
  unsigned int v15; // eax
  int v16; // r10d
  int v17; // r13d
  unsigned int v18; // esi
  int v19; // r11d
  int v20; // eax
  unsigned int v21; // edi
  int v22; // edi
  int v23; // r12d
  int v24; // r15d
  int v25; // eax
  int v26; // r14d
  __int64 v27; // rcx
  int v28; // eax
  int v29; // ecx
  int v30; // r14d
  _DWORD *v31; // rcx
  __int64 v32; // rdx
  int v33; // r15d
  int v34; // r13d
  int v35; // r10d
  _DWORD *v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rdx
  __int128 v39; // [rsp+20h] [rbp-38h] BYREF
  __int128 v40; // [rsp+30h] [rbp-28h]
  __int64 v41; // [rsp+40h] [rbp-18h]
  unsigned int v42; // [rsp+A0h] [rbp+48h]
  int v43; // [rsp+B0h] [rbp+58h]
  int v44; // [rsp+B8h] [rbp+60h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 3);
  v2 = *((_DWORD *)a1 + 12);
  v41 = 0LL;
  v4 = v2;
  v5 = v1[2] * v2;
  v6 = *v1 * v4;
  v7 = *((_DWORD *)a1 + 10);
  v39 = 0LL;
  v8 = v5;
  v9 = v5 & 0xFFFFFFFC;
  v10 = v8 & 3;
  v42 = v9;
  v11 = v6;
  v44 = v10;
  v12 = v6 & 0xFFFFFFFC;
  v13 = v11 & 3;
  v14 = (int)(v12 - *((_DWORD *)a1 + 8)) < 0;
  v15 = v12 - *((_DWORD *)a1 + 8);
  v16 = dword_1C0318450[v13];
  v17 = ~dword_1C0318450[v10];
  v43 = v17;
  v40 = 0LL;
  if ( v14 )
    v18 = v7 - ~v15 % v7 - 1;
  else
    v18 = v15 % v7;
  v19 = v1[1];
  v20 = v19 - *((_DWORD *)a1 + 9);
  v21 = *((_DWORD *)a1 + 11);
  if ( v20 < 0 )
    v22 = v21 - ~v20 % v21 - 1;
  else
    v22 = v20 % v21;
  if ( v12 == v9 )
  {
    v16 &= v17;
    v23 = 1;
  }
  else
  {
    v23 = 0;
    if ( !(_DWORD)v13 )
    {
LABEL_7:
      DWORD2(v40) = (v9 - v12) >> 2;
      if ( v9 - v12 >= 4 )
      {
        v24 = v1[1];
        DWORD1(v40) = *((_DWORD *)a1 + 10);
        v25 = *((_DWORD *)a1 + 4) * v24;
        v26 = v22;
        v18 %= DWORD1(v40);
        LODWORD(v40) = v18;
        HIDWORD(v40) = DWORD1(v40);
        v27 = v12 + (__int64)v25;
        v28 = *((_DWORD *)a1 + 5) * v22;
        *(_QWORD *)&v39 = *(_QWORD *)a1 + v27;
        *((_QWORD *)&v39 + 1) = *((_QWORD *)a1 + 1) + v28;
        v29 = v1[3];
        if ( (((unsigned __int8)v18 | BYTE4(v40)) & 3) != 0 )
        {
          if ( v24 < v29 )
          {
            do
            {
              vFetchShiftAndMerge(&v39);
              if ( ++v26 == *((_DWORD *)a1 + 11) )
              {
                v26 = 0;
                *((_QWORD *)&v39 + 1) = *((_QWORD *)a1 + 1);
              }
              else
              {
                *((_QWORD *)&v39 + 1) += *((int *)a1 + 5);
              }
              v1 = (_DWORD *)*((_QWORD *)a1 + 3);
              ++v24;
              *(_QWORD *)&v39 = *((int *)a1 + 4) + (_QWORD)v39;
              LODWORD(v40) = v18;
            }
            while ( v24 < v1[3] );
          }
        }
        else
        {
          HIDWORD(v40) = DWORD1(v40) >> 2;
          if ( v24 < v29 )
          {
            do
            {
              vFetchAndMerge(&v39);
              if ( ++v26 == *((_DWORD *)a1 + 11) )
              {
                v26 = 0;
                *((_QWORD *)&v39 + 1) = *((_QWORD *)a1 + 1);
              }
              else
              {
                *((_QWORD *)&v39 + 1) += *((int *)a1 + 5);
              }
              v1 = (_DWORD *)*((_QWORD *)a1 + 3);
              ++v24;
              *(_QWORD *)&v39 = *((int *)a1 + 4) + (_QWORD)v39;
            }
            while ( v24 < v1[3] );
          }
        }
        v9 = v42;
      }
      if ( v44 )
      {
        v35 = v1[1];
        v36 = (_DWORD *)(*(_QWORD *)a1 + v9 + (__int64)(*((_DWORD *)a1 + 4) * v35));
        v37 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v22;
        v38 = (v18 + 4 * DWORD2(v40)) % *((_DWORD *)a1 + 10);
        if ( v35 < v1[3] )
        {
          do
          {
            ++v22;
            *v36 ^= v17 & *(_DWORD *)(v38 + v37);
            if ( v22 == *((_DWORD *)a1 + 11) )
            {
              v37 = *((_QWORD *)a1 + 1);
              v22 = 0;
            }
            else
            {
              v37 += *((int *)a1 + 5);
            }
            ++v35;
            v36 = (_DWORD *)((char *)v36 + *((int *)a1 + 4));
          }
          while ( v35 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
        }
      }
      return;
    }
  }
  LODWORD(v40) = v18;
  v30 = v22;
  v31 = (_DWORD *)(*(_QWORD *)a1 + v12 + (__int64)(*((_DWORD *)a1 + 4) * v19));
  v32 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v22;
  if ( v19 < v1[3] )
  {
    do
    {
      v33 = v30 + 1;
      *v31 ^= v16 & *(_DWORD *)(v18 + v32);
      v34 = *((_DWORD *)a1 + 11);
      if ( v30 + 1 == v34 )
        v32 = *((_QWORD *)a1 + 1);
      else
        v32 += *((int *)a1 + 5);
      v30 = 0;
      v1 = (_DWORD *)*((_QWORD *)a1 + 3);
      v31 = (_DWORD *)((char *)v31 + *((int *)a1 + 4));
      ++v19;
      if ( v33 != v34 )
        v30 = v33;
    }
    while ( v19 < v1[3] );
    v9 = v42;
    v17 = v43;
  }
  if ( !v23 )
  {
    v12 += 4;
    v18 += 4;
    goto LABEL_7;
  }
}
