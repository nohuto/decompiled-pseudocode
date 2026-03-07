char __fastcall TranslateDXGIorD3DErrorInContext(int a1, int a2, _DWORD *a3)
{
  char v3; // r9
  int v4; // eax
  bool v5; // zf
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  bool v14; // zf
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  unsigned int v19; // ecx
  int v20; // eax
  bool v21; // zf
  int v22; // edx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx

  v3 = 0;
  if ( a2 > 8 )
  {
    v7 = a2 - 9;
    if ( !v7 )
    {
      if ( a1 != -2147024890 && a1 != -2147024809 && a1 != -2147023728 && a1 != -2147024895 )
      {
        v21 = a1 == -1071243253;
        goto LABEL_40;
      }
      goto LABEL_41;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      if ( a1 != -1071243253 && a1 != -2147023728 )
      {
        v21 = a1 == -2147024890;
        goto LABEL_40;
      }
      goto LABEL_41;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      if ( a1 != -1071243253 && a1 != -2147023728 && a1 != -2147024890 )
      {
        v21 = a1 == -2147024809;
LABEL_40:
        if ( !v21 )
          return v3;
      }
LABEL_41:
      *a3 = 0;
      return 1;
    }
    v10 = v9 - 1;
    if ( !v10 || (v11 = v10 - 1) == 0 )
    {
      v14 = a1 == -2003292412;
LABEL_26:
      if ( !v14 )
        return v3;
      goto LABEL_27;
    }
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
        return v3;
LABEL_4:
      if ( (unsigned int)(a1 + 2005270523) > 0x1B || (v4 = 134217733, !_bittest(&v4, a1 + 2005270523)) )
      {
        if ( a1 != -2003238900 )
        {
          v5 = a1 == -2005270494;
          goto LABEL_8;
        }
      }
      goto LABEL_27;
    }
    if ( a1 == -2147024882 )
    {
      *a3 = -2005532292;
      return 1;
    }
    v19 = a1 + 2005270523;
    if ( v19 > 0x1B )
      return v3;
    v20 = 134217733;
LABEL_35:
    if ( !_bittest(&v20, v19) )
      return v3;
LABEL_27:
    *a3 = -2003304307;
    return 1;
  }
  if ( a2 == 8 )
  {
    if ( a1 != -2003292404
      && a1 != -2003304307
      && a1 != -2003304442
      && a1 != -2005530509
      && a1 != -2147024809
      && a1 != -2005270523
      && a1 != -2005270521
      && a1 != -2005532292
      && a1 != -2005530512
      && a1 != -1071243253 )
    {
      v21 = a1 == -2003304290;
      goto LABEL_40;
    }
    goto LABEL_41;
  }
  if ( !a2 )
    goto LABEL_4;
  v13 = a2 - 1;
  if ( !v13 )
  {
    if ( a1 == 142213127 || a1 == -2005270491 || a1 == -2005270494 )
      goto LABEL_66;
    if ( (unsigned int)(a1 + 2005270523) <= 2 || a1 == -2005532292 || a1 == -2147467259 )
      goto LABEL_27;
    v14 = a1 == -2005270496;
    goto LABEL_26;
  }
  v15 = v13 - 1;
  if ( !v15 )
  {
    v23 = (unsigned int)(a1 + 2005270524);
    if ( (unsigned int)v23 <= 0x21 )
    {
      v24 = 0x240000001LL;
      if ( _bittest64(&v24, v23) )
        goto LABEL_66;
    }
    if ( a1 == 142213127 )
      goto LABEL_66;
    if ( a1 == -2147467259 )
      goto LABEL_27;
    v19 = a1 + 2005270526;
    if ( v19 > 0x1E )
      return v3;
    v20 = 1073741865;
    goto LABEL_35;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( a1 == -805306246 || a1 == -805306355 || a1 == -805306282 || a1 == -805306367 )
      goto LABEL_66;
LABEL_33:
    v19 = a1 + 2005270523;
    if ( v19 > 0x1D )
      return v3;
    v20 = 671088645;
    goto LABEL_35;
  }
  v17 = v16 - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( v18 )
    {
      v22 = v18 - 1;
      if ( v22 )
      {
        if ( v22 != 1 )
          return v3;
        if ( a1 != -2005530509 && a1 != -2147024809 && a1 != -2005270523 && a1 != -2005270521 && a1 != -2003304442 )
        {
          v21 = a1 == -2003304307;
          goto LABEL_40;
        }
        goto LABEL_41;
      }
    }
    goto LABEL_33;
  }
  if ( a1 == -2147467263 || a1 == -2147024809 || a1 == -2005270526 || a1 == -2147024865 )
    goto LABEL_66;
  v5 = a1 == -2003304291;
LABEL_8:
  if ( v5 )
  {
LABEL_66:
    *a3 = -2003304442;
    return 1;
  }
  return v3;
}
