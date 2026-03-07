__int64 __fastcall HalAcpiEmCheckOperator(unsigned __int8 *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  int v5; // r10d
  int v6; // edx
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

  v3 = 0;
  v5 = *a1 - 61;
  if ( *a1 == 61 )
    v5 = a1[1];
  if ( !v5 )
    goto LABEL_51;
  v6 = *a1 - 61;
  if ( *a1 == 61 )
  {
    v6 = a1[1] - 61;
    if ( a1[1] == 61 )
      v6 = a1[2];
  }
  if ( v6 )
  {
    v7 = *a1 - 33;
    if ( *a1 == 33 )
    {
      v7 = a1[1] - 61;
      if ( a1[1] == 61 )
        v7 = a1[2];
    }
    if ( !v7 )
      goto LABEL_50;
    v8 = *a1 - 60;
    if ( *a1 == 60 )
    {
      v8 = a1[1] - 62;
      if ( a1[1] == 62 )
        v8 = a1[2];
    }
    if ( !v8 )
      goto LABEL_50;
    v9 = *a1 - 61;
    if ( *a1 == 61 )
    {
      v9 = a1[1] - 33;
      if ( a1[1] == 33 )
        v9 = a1[2];
    }
    if ( v9 )
    {
      v10 = *a1 - 60;
      if ( *a1 == 60 )
        v10 = a1[1];
      if ( v10 )
      {
        v11 = *a1 - 60;
        if ( *a1 == 60 )
        {
          v11 = a1[1] - 61;
          if ( a1[1] == 61 )
            v11 = a1[2];
        }
        if ( !v11 )
          goto LABEL_49;
        v12 = *a1 - 61;
        if ( *a1 == 61 )
        {
          v12 = a1[1] - 60;
          if ( a1[1] == 60 )
            v12 = a1[2];
        }
        if ( v12 )
        {
          v13 = *a1 - 62;
          if ( *a1 == 62 )
            v13 = a1[1];
          if ( v13 )
          {
            v14 = *a1 - 62;
            if ( *a1 == 62 )
            {
              v14 = a1[1] - 61;
              if ( a1[1] == 61 )
                v14 = a1[2];
            }
            if ( !v14 )
              goto LABEL_48;
            v15 = *a1 - 61;
            if ( *a1 == 61 )
            {
              v15 = a1[1] - 62;
              if ( a1[1] == 62 )
                v15 = a1[2];
            }
            if ( v15 )
            {
              v16 = *a1 - 42;
              if ( *a1 == 42 )
                v16 = a1[1];
              if ( !v16 )
                return 1;
            }
            else
            {
LABEL_48:
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
LABEL_49:
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
LABEL_50:
      LOBYTE(v3) = a2 != a3;
    }
  }
  else
  {
LABEL_51:
    LOBYTE(v3) = a2 == a3;
  }
  return v3;
}
