unsigned __int64 __fastcall VmpConvertPortionVpnRangeToGpnRange(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        char a6)
{
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rsi
  unsigned __int64 v11; // r9
  _QWORD *v12; // r8
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  bool v15; // zf
  unsigned __int64 v16; // rcx
  int v17; // r10d
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r11
  __int64 *v22; // rdx
  __int64 *v23; // rcx
  __int64 Next; // rax
  __int64 v25; // r9
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  int v28; // r10d
  unsigned __int64 v29; // rax
  __int64 v30; // rbx
  _QWORD *v31; // rcx
  _QWORD *v32; // rdx
  _QWORD *v33; // rsi
  __int128 v35; // [rsp+20h] [rbp-38h]
  __int64 v36; // [rsp+60h] [rbp+8h]

  v36 = a1;
  v35 = 0uLL;
  while ( 1 )
  {
    v9 = *a2;
    v10 = 0LL;
    v11 = *a2;
    v12 = (_QWORD *)*a4;
    v13 = *a2 + a2[1] - 1;
    a5[1] = 0LL;
    if ( !v12 )
      goto LABEL_7;
    if ( a4[1] )
    {
      v11 = a4[2];
      v10 = (_QWORD *)a4[1];
      a4[2] = 0LL;
      a4[1] = 0LL;
      goto LABEL_37;
    }
    if ( v9 < v12[3] || v9 > v12[4] )
    {
LABEL_7:
      v14 = a1 + 24;
      v15 = (*(_BYTE *)(a1 + 32) & 1) == 0;
      v16 = *(_QWORD *)(a1 + 24);
      if ( !v15 )
      {
        if ( v16 )
          v16 ^= v14;
        else
          v16 = 0LL;
      }
      v12 = 0LL;
      v17 = *(_BYTE *)(v14 + 8) & 1;
      while ( v16 )
      {
        if ( v9 <= *(_QWORD *)(v16 + 32) )
        {
          v12 = (_QWORD *)v16;
          v18 = *(_QWORD *)v16;
          if ( v9 >= *(_QWORD *)(v16 + 24) )
          {
            if ( (*(_BYTE *)(v14 + 8) & 1) != 0 && v18 )
              v18 ^= v16;
            v19 = 0LL;
            if ( v18 )
            {
              do
              {
                if ( v9 <= *(_QWORD *)(v18 + 32) )
                {
                  v20 = *(_QWORD *)v18;
                  if ( v9 >= *(_QWORD *)(v18 + 24) )
                    v19 = (_QWORD *)v18;
                }
                else
                {
                  v20 = *(_QWORD *)(v18 + 8);
                }
                if ( v17 && v20 )
                  v18 ^= v20;
                else
                  v18 = v20;
              }
              while ( v18 );
              if ( v19 )
                v12 = v19;
            }
            break;
          }
        }
        else
        {
          v18 = *(_QWORD *)(v16 + 8);
        }
        if ( (*(_BYTE *)(v14 + 8) & 1) != 0 && v18 )
          v16 ^= v18;
        else
          v16 = v18;
      }
      if ( !v12 )
        goto LABEL_64;
    }
LABEL_37:
    v21 = v12[3];
    if ( v11 < v21 )
    {
      if ( v13 < v21 )
        goto LABEL_64;
      v11 = v12[3];
    }
    *a4 = (__int64)v12;
    if ( v10 )
      goto LABEL_48;
    v22 = v12 + 5;
    v23 = (__int64 *)v12[5];
    if ( v23 != v12 + 5 )
      break;
LABEL_46:
    v11 = v12[4] + 1LL;
    if ( v11 > v13 )
      goto LABEL_64;
    Next = VmpVaMemoryRangeGetNext(v36, v12);
    a1 = v36;
    *a4 = Next;
    a2[1] = v13 - v25 + 1;
    *a2 = v25;
  }
  while ( 1 )
  {
    v10 = v23;
    if ( (a6 & 2) != 0 )
      break;
    if ( (v23[8] & 1) != 0 )
    {
      v23 = (__int64 *)*v23;
      if ( v23 != v22 )
        continue;
    }
    if ( v23 != v22 )
      break;
    goto LABEL_46;
  }
LABEL_48:
  *a5 = v11 + v10[6] - v21;
  if ( v13 - v11 + 1 <= a3 )
    v26 = v13;
  else
    v26 = v11 + a3 - 1;
  v27 = v12[4];
  v28 = 0;
  if ( v26 >= v27 )
  {
    a5[1] = v27 - v11 + 1;
    v29 = v27 + 1;
    *(_QWORD *)&v35 = v27 + 1;
    goto LABEL_54;
  }
  a5[1] = v26 - v11 + 1;
  v29 = v26 + 1;
  *(_QWORD *)&v35 = v26 + 1;
  if ( v26 == v13 )
  {
LABEL_54:
    v28 = 1;
  }
  else
  {
    a4[1] = (__int64)v10;
    a4[2] = v29;
  }
  v30 = v13 - v29 + 1;
  *((_QWORD *)&v35 + 1) = v30;
  if ( !v28 )
    return v11;
  v31 = (_QWORD *)*v10;
  v32 = v12 + 5;
  if ( (_QWORD *)*v10 == v12 + 5 )
  {
LABEL_62:
    if ( v30 )
      *a4 = VmpVaMemoryRangeGetNext(v36, v12);
LABEL_64:
    *(_OWORD *)a2 = v35;
    return v11;
  }
  while ( 1 )
  {
    v33 = v31;
    if ( (a6 & 2) != 0 )
      break;
    if ( (v31[8] & 1) != 0 )
    {
      v31 = (_QWORD *)*v31;
      if ( v31 != v32 )
        continue;
    }
    if ( v31 == v32 )
      goto LABEL_62;
    break;
  }
  a4[1] = (__int64)v33;
  if ( v9 <= v21 )
    v9 = v21;
  a4[2] = v9;
  return v11;
}
