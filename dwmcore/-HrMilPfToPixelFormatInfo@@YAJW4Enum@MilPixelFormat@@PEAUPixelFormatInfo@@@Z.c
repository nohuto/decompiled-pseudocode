__int64 __fastcall HrMilPfToPixelFormatInfo(signed int a1, _DWORD *a2)
{
  int v2; // r10d
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  bool v11; // zf
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  v2 = 1;
  if ( a1 > 18 )
  {
    if ( a1 > 68 )
    {
      if ( a1 == 69 )
      {
        *a2 = 28;
        goto LABEL_11;
      }
    }
    else if ( a1 <= 26 )
    {
      if ( a1 == 26 )
      {
        *a2 = 2;
        goto LABEL_11;
      }
      if ( a1 != 19 )
      {
        if ( a1 == 20 )
        {
          *a2 = 24;
          goto LABEL_30;
        }
        if ( a1 == 23 )
        {
          *a2 = 11;
          goto LABEL_11;
        }
      }
    }
    goto LABEL_27;
  }
  if ( a1 == 18 )
    goto LABEL_27;
  if ( a1 <= 9 )
  {
    if ( a1 != 8 )
      goto LABEL_27;
    *a2 = 61;
LABEL_30:
    v3 = 3;
    goto LABEL_12;
  }
  switch ( a1 )
  {
    case 10:
LABEL_27:
      v4 = -2003292288;
      *a2 = 0;
      MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2003292288, 0x355u, 0LL);
      return v4;
    case 11:
      *a2 = 49;
      goto LABEL_30;
    case 12:
    case 13:
      goto LABEL_27;
    case 14:
      *a2 = 88;
      goto LABEL_30;
  }
  if ( (unsigned int)(a1 - 15) > 1 )
    goto LABEL_27;
  *a2 = 87;
  if ( a1 == 16 )
  {
LABEL_11:
    v3 = 1;
    goto LABEL_12;
  }
  v3 = 2;
LABEL_12:
  a2[1] = v3;
  if ( a1 <= 16 )
  {
    if ( a1 == 16 )
      goto LABEL_14;
    if ( a1 <= 8 )
      goto LABEL_14;
    v6 = a1 - 9;
    if ( !v6 )
      goto LABEL_14;
    v7 = v6 - 1;
    if ( !v7 )
      goto LABEL_14;
    v8 = v7 - 1;
    if ( !v8 )
      goto LABEL_14;
    v9 = v8 - 1;
    if ( !v9 )
      goto LABEL_14;
    goto LABEL_40;
  }
  if ( a1 > 68 )
  {
    v11 = a1 == 69;
LABEL_55:
    if ( !v11 )
    {
LABEL_34:
      v4 = -2003292344;
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2003292344, 0x369u, 0LL);
      return v4;
    }
    goto LABEL_14;
  }
  if ( a1 > 23 )
  {
    v14 = a1 - 24;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        a1 = v15 - 1;
        if ( (unsigned int)a1 > 1 )
          goto LABEL_34;
      }
    }
    goto LABEL_53;
  }
  if ( a1 == 23 )
    goto LABEL_14;
  v12 = a1 - 17;
  if ( !v12 || (v13 = v12 - 1) == 0 || (v9 = v13 - 1) == 0 )
  {
LABEL_53:
    v2 = 2;
    goto LABEL_14;
  }
LABEL_40:
  v10 = v9 - 1;
  if ( v10 )
  {
    a1 = v10 - 1;
    if ( a1 )
    {
      v11 = a1 == 1;
      goto LABEL_55;
    }
  }
LABEL_14:
  v4 = 0;
  a2[2] = v2 == 2;
  return v4;
}
