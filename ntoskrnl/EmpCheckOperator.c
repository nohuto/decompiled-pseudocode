/*
 * XREFs of EmpCheckOperator @ 0x140841EC0
 * Callers:
 *     EmCpuMatchCallback @ 0x140841DE0 (EmCpuMatchCallback.c)
 *     EmMatchDate @ 0x140939C40 (EmMatchDate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmpCheckOperator(unsigned __int8 *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  int v5; // r10d
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx

  v3 = 0;
  v5 = *a1 - 61;
  if ( *a1 == 61 )
    v5 = a1[1];
  if ( !v5 )
    goto LABEL_4;
  v7 = *a1 - 61;
  if ( *a1 == 61 )
  {
    v7 = a1[1] - 61;
    if ( a1[1] == 61 )
      v7 = a1[2];
  }
  if ( v7 )
  {
    v8 = *a1 - 33;
    if ( *a1 == 33 )
    {
      v8 = a1[1] - 61;
      if ( a1[1] == 61 )
        v8 = a1[2];
    }
    if ( !v8 )
      goto LABEL_52;
    v9 = *a1 - 60;
    if ( *a1 == 60 )
    {
      v9 = a1[1] - 62;
      if ( a1[1] == 62 )
        v9 = a1[2];
    }
    if ( !v9 )
      goto LABEL_52;
    v10 = *a1 - 61;
    if ( *a1 == 61 )
    {
      v10 = a1[1] - 33;
      if ( a1[1] == 33 )
        v10 = a1[2];
    }
    if ( v10 )
    {
      v11 = *a1 - 60;
      if ( *a1 == 60 )
        v11 = a1[1];
      if ( v11 )
      {
        v12 = *a1 - 60;
        if ( *a1 == 60 )
        {
          v12 = a1[1] - 61;
          if ( a1[1] == 61 )
            v12 = a1[2];
        }
        if ( !v12 )
          goto LABEL_51;
        v13 = *a1 - 61;
        if ( *a1 == 61 )
        {
          v13 = a1[1] - 60;
          if ( a1[1] == 60 )
            v13 = a1[2];
        }
        if ( v13 )
        {
          v14 = *a1 - 62;
          if ( *a1 == 62 )
            v14 = a1[1];
          if ( v14 )
          {
            v15 = *a1 - 62;
            if ( *a1 == 62 )
            {
              v15 = a1[1] - 61;
              if ( a1[1] == 61 )
                v15 = a1[2];
            }
            if ( !v15 )
              goto LABEL_40;
            v16 = *a1 - 61;
            if ( *a1 == 61 )
            {
              v16 = a1[1] - 62;
              if ( a1[1] == 62 )
                v16 = a1[2];
            }
            if ( v16 )
            {
              v17 = *a1 - 42;
              if ( *a1 == 42 )
                v17 = a1[1];
              if ( !v17 )
                return 1;
            }
            else
            {
LABEL_40:
              LOBYTE(v3) = a2 >= a3;
            }
          }
          else
          {
            LOBYTE(v3) = a2 > a3;
          }
        }
        else
        {
LABEL_51:
          LOBYTE(v3) = a2 <= a3;
        }
      }
      else
      {
        LOBYTE(v3) = a2 < a3;
      }
    }
    else
    {
LABEL_52:
      LOBYTE(v3) = a2 != a3;
    }
  }
  else
  {
LABEL_4:
    LOBYTE(v3) = a2 == a3;
  }
  return v3;
}
