__int64 __fastcall MiPCheckMsgFilter(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rdx
  unsigned int v8; // r9d
  unsigned int v9; // r11d
  int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  unsigned int v14; // r11d
  int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // r10d
  unsigned int v18; // r10d
  unsigned int v19; // r10d
  unsigned int v20; // r10d
  unsigned int v21; // r10d
  unsigned int v23; // r10d
  unsigned int v24; // r10d
  unsigned int v25; // r10d
  unsigned int v26; // r10d
  unsigned int v27; // r10d
  bool v29; // cf
  int v30; // eax
  bool v31; // cf
  unsigned int v32; // r10d
  unsigned int v33; // r10d
  unsigned int v34; // r10d
  unsigned int v35; // r10d
  unsigned int v36; // r10d
  unsigned int v38; // r10d
  unsigned int v39; // r10d
  unsigned int v40; // r10d
  unsigned int v41; // r10d
  unsigned int v42; // r10d
  unsigned int v43; // eax
  unsigned int v44; // eax

  v4 = 1;
  if ( !a3 && a4 == -1 )
    return v4;
  if ( a3 <= a4 )
  {
    if ( a2 >= a3 && a2 <= a4 )
      return v4;
  }
  else if ( a2 < a4 || a2 > a3 )
  {
    return v4;
  }
  if ( !(unsigned int)IsMiPActive(gptiCurrent, a1) )
    return 0LL;
  if ( (*(_DWORD *)(v7 + 100) & 0x400) == 0 )
    return 0LL;
  v10 = CheckMsgRange(0x245u, 0x257u, v9, v8);
  v16 = v15 - 22;
  if ( !v10 && !(unsigned int)CheckMsgRange(v16, 0x244u, v11, v12) )
    return 0LL;
  if ( v13 > 0x200 )
  {
    if ( v13 <= 0x208 )
    {
      if ( v13 != 520 )
      {
        v32 = v13 - 513;
        if ( !v32 )
          goto LABEL_73;
        v33 = v32 - 1;
        if ( v33 )
        {
          v34 = v33 - 1;
          if ( !v34 )
            goto LABEL_73;
          v35 = v34 - 1;
          if ( !v35 )
            goto LABEL_73;
          v36 = v35 - 1;
          if ( v36 )
          {
            v27 = v36 - 1;
            if ( !v27 )
              goto LABEL_73;
            goto LABEL_72;
          }
        }
      }
LABEL_27:
      if ( !v14 && v12 == -1 )
        return v4;
      if ( v14 <= v12 )
      {
        if ( v14 <= 0x247 && v12 >= 0x247 )
          return v4;
      }
      else if ( v12 > 0x247 || v14 < 0x247 )
      {
        return v4;
      }
      if ( !v14 && v12 == -1 )
        return v4;
      v44 = 579;
      goto LABEL_97;
    }
    v38 = v13 - 521;
    if ( !v38 )
      goto LABEL_73;
    v39 = v38 - 1;
    if ( v39 )
    {
      v40 = v39 - 1;
      if ( !v40 )
        goto LABEL_73;
      v41 = v40 - 1;
      if ( !v41 )
        goto LABEL_27;
      v42 = v41 - 1;
      if ( !v42 )
        goto LABEL_73;
      if ( v42 != 1 )
        return 0LL;
      if ( !v14 && v12 == -1 )
        return v4;
      v43 = 591;
    }
    else
    {
      if ( !v14 && v12 == -1 )
        return v4;
      v43 = 590;
    }
    if ( v14 > v12 )
    {
      if ( v12 > v43 )
        goto LABEL_57;
      v29 = v14 < v43;
      goto LABEL_55;
    }
    if ( v14 <= v43 )
    {
      v31 = v12 < v43;
LABEL_62:
      if ( !v31 )
        return v4;
    }
    return 0;
  }
  if ( v13 == 512 )
    goto LABEL_39;
  if ( v13 > 0xA6 )
  {
    v23 = v13 - 167;
    if ( !v23 )
      goto LABEL_73;
    v24 = v23 - 1;
    if ( !v24 )
      goto LABEL_27;
    v25 = v24 - 1;
    if ( !v25 )
      goto LABEL_73;
    v26 = v25 - 2;
    if ( !v26 )
      goto LABEL_73;
    v27 = v26 - 1;
    if ( !v27 )
      goto LABEL_27;
LABEL_72:
    if ( v27 != 1 )
      return 0LL;
LABEL_73:
    if ( !v14 && v12 == -1 )
      return v4;
    if ( v14 <= v12 )
    {
      if ( v14 <= 0x246 && v12 >= 0x246 )
        return v4;
    }
    else if ( v12 > 0x246 || v14 < 0x246 )
    {
      return v4;
    }
    if ( !v14 && v12 == -1 )
      return v4;
    v44 = 578;
LABEL_97:
    if ( v14 <= v12 )
    {
      if ( v14 <= v44 && v12 >= v44 )
        return v4;
    }
    else if ( v12 > v44 || v14 < v44 )
    {
      return v4;
    }
LABEL_39:
    if ( !v14 && v12 == -1 )
      return v4;
    if ( v14 <= v12 )
    {
      if ( v14 <= 0x245 && v12 >= 0x245 )
        return v4;
    }
    else if ( v12 > 0x245 || v14 < 0x245 )
    {
      return v4;
    }
    if ( !v14 && v12 == -1 )
      return v4;
    if ( v14 > v12 )
    {
      if ( v12 > v16 )
        goto LABEL_57;
      v29 = v14 < v16;
LABEL_55:
      if ( !v29 )
      {
        v30 = 0;
        goto LABEL_58;
      }
LABEL_57:
      v30 = 1;
LABEL_58:
      if ( !v30 )
        return 0;
      return v4;
    }
    if ( v14 <= v16 )
    {
      v31 = v12 < v16;
      goto LABEL_62;
    }
    return 0;
  }
  if ( v13 == 166 )
    goto LABEL_73;
  v17 = v13 - 160;
  if ( !v17 )
    goto LABEL_39;
  v18 = v17 - 1;
  if ( !v18 )
    goto LABEL_73;
  v19 = v18 - 1;
  if ( !v19 )
    goto LABEL_27;
  v20 = v19 - 1;
  if ( !v20 )
    goto LABEL_73;
  v21 = v20 - 1;
  if ( !v21 )
    goto LABEL_73;
  if ( v21 == 1 )
    goto LABEL_27;
  return 0LL;
}
