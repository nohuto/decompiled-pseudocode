/*
 * XREFs of ?IsSPIActionAllowedForFilteredProcess@@YAHI@Z @ 0x1C017AEB4
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C009C980 (xxxSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsSPIActionAllowedForFilteredProcess(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  bool v5; // zf
  unsigned int v6; // ecx
  bool v7; // zf
  unsigned int v8; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  bool v16; // zf
  unsigned int v17; // ecx
  bool v18; // zf
  unsigned int v19; // ecx
  bool v20; // zf
  unsigned int v21; // ecx
  bool v22; // zf
  unsigned int v23; // ecx
  bool v24; // zf
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx

  if ( a1 > 0x90 )
  {
    if ( a1 <= 0x1000 )
    {
      if ( a1 == 4096 )
        return 1LL;
      if ( a1 > 0xA2 )
      {
        v26 = a1 - 165;
        if ( !v26 )
          return 1LL;
        v27 = v26 - 2;
        if ( !v27 )
          return 1LL;
        v21 = v27 - 1;
        v20 = v21 == 0;
LABEL_64:
        if ( v20 )
          return 1LL;
        v23 = v21 - 2;
        v22 = v23 == 0;
        goto LABEL_66;
      }
      if ( a1 == 162 )
        return 1LL;
      v25 = a1 - 146;
      v24 = v25 == 0;
      goto LABEL_74;
    }
    if ( a1 > 0x103E )
    {
      if ( a1 <= 0x200C )
      {
        if ( a1 == 8204 )
          return 1LL;
        if ( a1 <= 0x1050 )
        {
          if ( a1 == 4176 )
            return 1LL;
          v35 = a1 - 4160;
          if ( !v35 )
            return 1LL;
          v36 = v35 - 2;
          if ( !v36 )
            return 1LL;
          v23 = v36 - 6;
          v22 = v23 == 0;
LABEL_66:
          if ( v22 )
            return 1LL;
          v6 = v23 - 2;
          v5 = v6 == 0;
          goto LABEL_14;
        }
        v19 = a1 - 0x2000;
        v18 = v19 == 0;
        goto LABEL_62;
      }
      if ( a1 <= 0x201A )
      {
        if ( a1 == 8218 )
          return 1LL;
        v19 = a1 - 8206;
        v18 = v19 == 0;
        goto LABEL_62;
      }
      v37 = a1 - 8220;
      if ( !v37 )
        return 1LL;
      v38 = v37 - 2;
      if ( !v38 )
        return 1LL;
      v39 = v38 - 2;
      if ( !v39 )
        return 1LL;
      v8 = v39 - 16;
      v7 = v8 == 0;
    }
    else
    {
      if ( a1 == 4158 )
        return 1LL;
      if ( a1 > 0x1016 )
      {
        v25 = a1 - 4120;
        v24 = v25 == 0;
LABEL_74:
        if ( v24 )
          return 1LL;
        v17 = v25 - 2;
        v16 = v17 == 0;
LABEL_60:
        if ( v16 )
          return 1LL;
        v19 = v17 - 2;
        v18 = v19 == 0;
        goto LABEL_62;
      }
      if ( a1 == 4118 )
        return 1LL;
      v28 = a1 - 4098;
      if ( !v28 )
        return 1LL;
      v29 = v28 - 2;
      if ( !v29 )
        return 1LL;
      v30 = v29 - 2;
      if ( !v30 )
        return 1LL;
      v31 = v30 - 2;
      if ( !v31 )
        return 1LL;
      v32 = v31 - 2;
      if ( !v32 )
        return 1LL;
      v33 = v32 - 2;
      if ( !v33 )
        return 1LL;
      v34 = v33 - 2;
      if ( !v34 )
        return 1LL;
      v8 = v34 - 4;
      v7 = v8 == 0;
    }
LABEL_107:
    if ( v7 )
      return 1LL;
    return v8 == 2;
  }
  if ( a1 == 144 )
    return 1LL;
  if ( a1 > 0x50 )
  {
    if ( a1 <= 0x73 )
    {
      if ( a1 == 115 )
        return 1LL;
      if ( a1 > 0x64 )
      {
        if ( a1 == 102 || a1 == 104 || a1 == 106 || a1 == 108 || a1 == 110 || a1 == 112 )
          return 1LL;
        return a1 == 114;
      }
      else
      {
        if ( a1 == 100 )
          return 1LL;
        v10 = a1 - 83;
        if ( !v10 )
          return 1LL;
        v11 = v10 - 1;
        if ( !v11 )
          return 1LL;
        v12 = v11 - 5;
        if ( !v12 )
          return 1LL;
        v13 = v12 - 3;
        if ( !v13 )
          return 1LL;
        v14 = v13 - 2;
        if ( !v14 )
          return 1LL;
        v15 = v14 - 1;
        if ( !v15 )
          return 1LL;
        return v15 == 3;
      }
    }
    if ( a1 <= 0x82 )
    {
      if ( a1 == 130 )
        return 1LL;
      v17 = a1 - 116;
      v16 = v17 == 0;
      goto LABEL_60;
    }
    v19 = a1 - 132;
    v18 = v19 == 0;
LABEL_62:
    if ( v18 )
      return 1LL;
    v21 = v19 - 2;
    v20 = v21 == 0;
    goto LABEL_64;
  }
  if ( a1 == 80 )
    return 1LL;
  if ( a1 > 0x2D )
  {
    if ( a1 > 0x3E )
    {
      if ( a1 == 64 || a1 == 66 || a1 == 68 || a1 == 70 || a1 == 72 || a1 == 74 )
        return 1LL;
      return a1 == 79;
    }
    else
    {
      if ( a1 == 62 || a1 == 48 || a1 == 50 || a1 == 52 || a1 == 54 || a1 == 56 || a1 == 58 )
        return 1LL;
      return a1 == 60;
    }
  }
  else
  {
    if ( a1 == 45 )
      return 1LL;
    if ( a1 <= 0x16 )
    {
      if ( a1 == 22 )
        return 1LL;
      v1 = a1 - 1;
      if ( !v1 )
        return 1LL;
      v2 = v1 - 2;
      if ( !v2 )
        return 1LL;
      v3 = v2 - 2;
      if ( !v3 )
        return 1LL;
      v4 = v3 - 5;
      if ( !v4 )
        return 1LL;
      v6 = v4 - 4;
      v5 = v6 == 0;
LABEL_14:
      if ( v5 )
        return 1LL;
      v8 = v6 - 2;
      v7 = v8 == 0;
      goto LABEL_107;
    }
    if ( a1 == 25 || a1 == 27 || a1 == 31 || a1 == 35 || a1 == 38 || a1 == 41 )
      return 1LL;
    return a1 == 43;
  }
}
