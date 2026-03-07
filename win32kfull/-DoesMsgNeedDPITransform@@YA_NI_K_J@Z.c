bool __fastcall DoesMsgNeedDPITransform(unsigned int a1, __int64 a2, int a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  bool v6; // zf
  unsigned int v7; // ecx
  bool v8; // zf
  unsigned int v9; // ecx
  bool v10; // zf
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  bool v21; // zf
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  bool v29; // zf
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

  if ( a1 > 0x20A )
  {
    if ( a1 <= 0x24E )
    {
      if ( a1 == 590 )
        return 1;
      if ( a1 <= 0x242 )
      {
        if ( a1 != 578 )
        {
          v23 = a1 - 523;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                v26 = v25 - 1;
                if ( v26 )
                {
                  v27 = v26 - 2;
                  if ( v27 )
                  {
                    v28 = v27 - 16;
                    if ( v28 )
                    {
                      v10 = v28 == 33;
LABEL_12:
                      if ( !v10 )
                        return 0;
                    }
                  }
                }
              }
            }
          }
        }
        return 1;
      }
      v33 = a1 - 579;
      if ( !v33 )
        return 1;
      v34 = v33 - 2;
      if ( !v34 )
        return 1;
      v35 = v34 - 1;
      if ( !v35 )
        return 1;
      v7 = v35 - 1;
      v6 = v7 == 0;
      goto LABEL_8;
    }
    if ( a1 > 0x2F2 )
    {
      v3 = a1 - 755;
      if ( !v3 )
        return 1;
      v4 = v3 - 1;
      if ( !v4 )
        return 1;
      v5 = v4 - 31;
      if ( !v5 )
        return 1;
      v7 = v5 - 44;
      v6 = v7 == 0;
LABEL_8:
      if ( v6 )
        return 1;
      v9 = v7 - 2;
      v8 = v9 == 0;
      goto LABEL_10;
    }
    if ( a1 == 754 )
      return 1;
    v36 = a1 - 591;
    if ( !v36 )
      return 1;
    v37 = v36 - 2;
    if ( !v37 )
      return 1;
    v38 = v37 - 1;
    if ( !v38 )
      return 1;
    v39 = v38 - 49;
    if ( !v39 )
      return 1;
    v9 = v39 - 29;
    v8 = v9 == 0;
LABEL_10:
    if ( !v8 )
    {
      v10 = v9 == 1;
      goto LABEL_12;
    }
    return 1;
  }
  if ( a1 == 522 )
    return 1;
  if ( a1 <= 0xA9 )
  {
    if ( a1 == 169 )
      return 1;
    if ( a1 <= 0xA2 )
    {
      if ( a1 == 162 )
        return 1;
      v12 = a1 - 3;
      if ( !v12 )
        return 1;
      v13 = v12 - 80;
      if ( !v13 )
        return 1;
      v14 = v13 - 40;
      if ( !v14 )
        return 1;
      v15 = v14 - 8;
      if ( !v15 )
        return 1;
      v16 = v15 - 1;
      if ( !v16 )
        return 1;
      v9 = v16 - 28;
      v8 = v9 == 0;
      goto LABEL_10;
    }
    v30 = a1 - 163;
    v29 = v30 == 0;
    goto LABEL_48;
  }
  if ( a1 > 0x203 )
  {
    v30 = a1 - 516;
    v29 = v30 == 0;
LABEL_48:
    if ( v29 )
      return 1;
    v31 = v30 - 1;
    if ( !v31 )
      return 1;
    v32 = v31 - 1;
    if ( !v32 )
      return 1;
    v22 = v32 - 1;
    v21 = v22 == 0;
    goto LABEL_32;
  }
  if ( a1 == 515 )
    return 1;
  v17 = a1 - 171;
  if ( !v17 )
    return 1;
  v18 = v17 - 1;
  if ( !v18 )
    return 1;
  v19 = v18 - 1;
  if ( !v19 )
    return 1;
  v20 = v19 - 101;
  if ( v20 )
  {
    v22 = v20 - 238;
    v21 = v22 == 0;
LABEL_32:
    if ( v21 )
      return 1;
    v9 = v22 - 1;
    v8 = v9 == 0;
    goto LABEL_10;
  }
  return HIWORD(a3) != 0;
}
