unsigned __int64 __fastcall CitpProgramIdCalculateHash(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // r10
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r9
  unsigned __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int8 *v10; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // r9d
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d
  int v20; // r9d
  int v21; // r9d
  int v22; // r8d
  int v23; // r8d
  int v24; // r8d
  int v25; // r8d
  int v26; // r8d
  int v27; // r8d

  v1 = *a1;
  v2 = -1LL;
  v4 = 314159LL;
  if ( *a1 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)&v1[2 * v5] );
    v6 = 2 * v5;
    if ( v6 >= 8 )
    {
      v7 = (unsigned __int64)v6 >> 3;
      v6 -= 8 * ((unsigned __int64)v6 >> 3);
      do
      {
        v8 = v1[6] + 37 * (v1[5] + 37 * (v1[4] + 37 * (v1[3] + 37 * (v1[2] + 37 * (v1[1] + 37 * (*v1 + 37 * v4))))));
        v9 = v1[7];
        v1 += 8;
        v4 = v9 + 37 * v8;
        --v7;
      }
      while ( v7 );
    }
    if ( v6 >= 1 && v6 <= 7 )
    {
      v16 = v6 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                v21 = v20 - 1;
                if ( v21 )
                {
                  if ( v21 != 1 )
                    goto LABEL_12;
                  v4 = *v1++ + 37 * v4;
                }
                v4 = *v1++ + 37 * v4;
              }
              v4 = *v1++ + 37 * v4;
            }
            v4 = *v1++ + 37 * v4;
          }
          v4 = *v1++ + 37 * v4;
        }
        v4 = *v1++ + 37 * v4;
      }
      v4 = *v1 + 37 * v4;
    }
  }
LABEL_12:
  v10 = a1[1];
  if ( v10 )
  {
    do
      ++v2;
    while ( *(_WORD *)&v10[2 * v2] );
    v12 = 2 * v2;
    if ( v12 >= 8 )
    {
      v13 = (unsigned __int64)v12 >> 3;
      v12 -= 8 * ((unsigned __int64)v12 >> 3);
      do
      {
        v14 = v10[6]
            + 37 * (v10[5] + 37 * (v10[4] + 37 * (v10[3] + 37 * (v10[2] + 37 * (v10[1] + 37 * (*v10 + 37 * v4))))));
        v15 = v10[7];
        v10 += 8;
        v4 = v15 + 37 * v14;
        --v13;
      }
      while ( v13 );
    }
    if ( v12 >= 1 && v12 <= 7 )
    {
      v22 = v12 - 1;
      if ( !v22 )
      {
LABEL_46:
        v4 = *v10 + 37 * v4;
        return v4 ^ *((unsigned int *)a1 + 6) ^ *((unsigned int *)a1 + 7) ^ (unsigned __int64)*((unsigned int *)a1 + 8);
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
LABEL_45:
        v4 = *v10++ + 37 * v4;
        goto LABEL_46;
      }
      v24 = v23 - 1;
      if ( !v24 )
      {
LABEL_44:
        v4 = *v10++ + 37 * v4;
        goto LABEL_45;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
LABEL_43:
        v4 = *v10++ + 37 * v4;
        goto LABEL_44;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
LABEL_42:
        v4 = *v10++ + 37 * v4;
        goto LABEL_43;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
LABEL_41:
        v4 = *v10++ + 37 * v4;
        goto LABEL_42;
      }
      if ( v27 == 1 )
      {
        v4 = *v10++ + 37 * v4;
        goto LABEL_41;
      }
    }
  }
  return v4 ^ *((unsigned int *)a1 + 6) ^ *((unsigned int *)a1 + 7) ^ (unsigned __int64)*((unsigned int *)a1 + 8);
}
