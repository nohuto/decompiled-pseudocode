/*
 * XREFs of ?vPatternCopyLoopRow@@YAXJPEAKPEAU_PATBLTFRAME@@HKKKKJPEBK@Z @ 0x1C02E9D1C
 * Callers:
 *     ?vPatCpyRow4_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02E8914 (-vPatCpyRow4_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vPatternCopyLoopRow(
        int a1,
        unsigned int *a2,
        struct _PATBLTFRAME *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        const unsigned int *a10)
{
  int v11; // edx
  __int64 v12; // r8
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  unsigned int v16; // eax
  unsigned int *v17; // rbx
  unsigned __int64 v18; // r9
  unsigned int v19; // eax
  unsigned __int64 v20; // r9
  unsigned int *v21; // r9
  unsigned __int64 v22; // rbx
  int v23; // r9d
  int v24; // r9d
  int v25; // r9d
  unsigned int v26; // eax

  v11 = 4 * a9;
  v12 = a10[(a1 - *((_DWORD *)a3 + 9)) & 7];
  if ( a4 > 5 )
  {
    v23 = a4 - 6;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          if ( v25 == 1 )
            *a2 = a6 & v12 | a8 & *a2;
        }
        else
        {
          v26 = a5 & v12 | a7 & a2[1];
          *a2 = a6 & v12 | a8 & *a2;
          a2[1] = v26;
        }
      }
      else
      {
        if ( a9 != 1 )
        {
          if ( a9 != 2 )
          {
            if ( a9 != 3 )
            {
              if ( a9 != 4 )
              {
                if ( a9 != 5 )
                {
                  if ( a9 != 6 )
                  {
                    if ( a9 != 7 )
                    {
                      if ( a9 != 8 )
                      {
                        if ( a9 != 9 )
                          return;
                        a2[8] = v12;
                      }
                      a2[7] = v12;
                    }
                    a2[6] = v12;
                  }
                  a2[5] = v12;
                }
                a2[4] = v12;
              }
              a2[3] = v12;
            }
            a2[2] = v12;
          }
          a2[1] = v12;
        }
        *a2 = v12;
      }
      return;
    }
    if ( a9 != 1 )
    {
      if ( a9 != 2 )
      {
        if ( a9 != 3 )
        {
          if ( a9 != 4 )
          {
            if ( a9 != 5 )
            {
              if ( a9 != 6 )
              {
                if ( a9 != 7 )
                {
                  if ( a9 != 8 )
                  {
                    if ( a9 != 9 )
                    {
LABEL_109:
                      v19 = a5 & v12 | a7 & a2[a9];
                      goto LABEL_110;
                    }
                    a2[8] = v12;
                  }
                  a2[7] = v12;
                }
                a2[6] = v12;
              }
              a2[5] = v12;
            }
            a2[4] = v12;
          }
          a2[3] = v12;
        }
        a2[2] = v12;
      }
      a2[1] = v12;
    }
    *a2 = v12;
    goto LABEL_109;
  }
  if ( a4 != 5 )
  {
    if ( a4 )
    {
      v13 = a4 - 1;
      if ( !v13 )
      {
        *a2 = a6 & v12 | a8 & *a2;
        ++a2;
LABEL_35:
        v20 = (unsigned __int64)v11 >> 2;
        if ( !v20 )
          return;
        if ( ((unsigned __int8)a2 & 4) != 0 )
        {
          *a2 = v12;
          if ( !--v20 )
            return;
          ++a2;
        }
        memset64(a2, v12 | (v12 << 32), v20 >> 1);
        if ( (v20 & 1) != 0 )
          a2[v20 - 1] = v12;
        return;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 != 1 )
            return;
          *a2 = a6 & v12 | a8 & *a2;
          if ( a9 != 1 )
          {
            if ( a9 != 2 )
            {
              if ( a9 != 3 )
              {
                if ( a9 != 4 )
                {
                  if ( a9 != 5 )
                  {
                    if ( a9 != 6 )
                    {
                      if ( a9 != 7 )
                      {
                        if ( a9 != 8 )
                        {
                          if ( a9 != 9 )
                          {
LABEL_26:
                            v16 = a5 & v12 | a7 & a2[a9 + 1];
LABEL_48:
                            a2[a9 + 1] = v16;
                            return;
                          }
                          a2[9] = v12;
                        }
                        a2[8] = v12;
                      }
                      a2[7] = v12;
                    }
                    a2[6] = v12;
                  }
                  a2[5] = v12;
                }
                a2[4] = v12;
              }
              a2[3] = v12;
            }
            a2[2] = v12;
          }
          a2[1] = v12;
          goto LABEL_26;
        }
        goto LABEL_35;
      }
      v17 = a2;
      v18 = (unsigned __int64)v11 >> 2;
      if ( !v18 )
        goto LABEL_33;
      if ( ((unsigned __int8)a2 & 4) != 0 )
      {
        *a2 = v12;
        if ( !--v18 )
        {
LABEL_33:
          v19 = a5 & v12 | a7 & a2[a9];
LABEL_110:
          a2[a9] = v19;
          return;
        }
        v17 = a2 + 1;
      }
      memset64(v17, v12 | (v12 << 32), v18 >> 1);
      if ( (v18 & 1) != 0 )
        v17[v18 - 1] = v12;
      goto LABEL_33;
    }
    v21 = a2 + 1;
    v22 = (unsigned __int64)v11 >> 2;
    *a2 = a6 & v12 | a8 & *a2;
    if ( v22 )
    {
      if ( ((unsigned __int8)v21 & 4) == 0 )
        goto LABEL_45;
      *v21 = v12;
      if ( --v22 )
      {
        v21 = a2 + 2;
LABEL_45:
        memset64(v21, v12 | (v12 << 32), v22 >> 1);
        if ( (v22 & 1) != 0 )
          v21[v22 - 1] = v12;
      }
    }
    v16 = a5 & v12 | a7 & a2[a9 + 1];
    goto LABEL_48;
  }
  *a2 = a6 & v12 | a8 & *a2;
  if ( a9 != 1 )
  {
    if ( a9 != 2 )
    {
      if ( a9 != 3 )
      {
        if ( a9 != 4 )
        {
          if ( a9 != 5 )
          {
            if ( a9 != 6 )
            {
              if ( a9 != 7 )
              {
                if ( a9 != 8 )
                {
                  if ( a9 != 9 )
                    return;
                  a2[9] = v12;
                }
                a2[8] = v12;
              }
              a2[7] = v12;
            }
            a2[6] = v12;
          }
          a2[5] = v12;
        }
        a2[4] = v12;
      }
      a2[3] = v12;
    }
    a2[2] = v12;
  }
  a2[1] = v12;
}
