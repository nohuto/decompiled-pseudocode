__int64 __fastcall AuthzBasepValidateSecurityAttributes(__int64 a1, int *a2)
{
  int v3; // r8d
  int v4; // r14d
  unsigned int v5; // esi
  __int64 v6; // r9
  unsigned int v7; // ebp
  bool v8; // zf
  unsigned int v10; // ebx
  unsigned int v11; // r10d
  __int64 v12; // r11
  unsigned __int16 v13; // di
  unsigned __int16 v14; // dx
  int v15; // eax
  unsigned int v16; // r10d
  unsigned int v17; // eax
  __int64 v18; // r11
  unsigned int v19; // r11d
  unsigned int v20; // r10d
  unsigned int v21; // ebx
  unsigned int v22; // r10d
  __int64 v23; // r11
  unsigned __int16 v24; // di
  unsigned __int16 v25; // ax

  v3 = 0;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  v4 = *a2;
  if ( *(_WORD *)(a1 + 2) )
    return (unsigned int)-1073741811;
  v5 = *(_DWORD *)(a1 + 4);
  if ( v4 != 1 )
  {
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      if ( v6 )
        goto LABEL_6;
    }
    return (unsigned int)-1073741811;
  }
  if ( !v5 && *(_QWORD *)(a1 + 8) )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 )
  {
    if ( v5 )
      return (unsigned int)-1073741811;
  }
LABEL_6:
  v7 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( !*(_WORD *)(v6 + 40LL * v7)
        || !*(_WORD *)(v6 + 40LL * v7 + 2)
        || !*(_QWORD *)(v6 + 40LL * v7 + 8)
        || *(_WORD *)(v6 + 40LL * v7 + 18)
        || (*(_DWORD *)(v6 + 40LL * v7 + 20) & 0xFF00) != 0 )
      {
        return (unsigned int)-1073741811;
      }
      if ( v7 )
      {
        if ( v4 == 1 )
          goto LABEL_15;
        v15 = a2[v7];
        if ( v15 == 1 )
          return (unsigned int)-1073741811;
        v8 = v15 == 2;
      }
      else
      {
        v8 = v4 == 1;
      }
      if ( v8 && !*(_DWORD *)(v6 + 40LL * v7 + 24) )
        return (unsigned int)-1073741811;
LABEL_15:
      switch ( *(_WORD *)(v6 + 40LL * v7 + 16) )
      {
        case 1:
        case 2:
          if ( *(_DWORD *)(v6 + 40LL * v7 + 24) && !*(_QWORD *)(v6 + 40LL * v7 + 32) )
            return (unsigned int)-1073741811;
          break;
        case 3:
          v10 = *(_DWORD *)(v6 + 40LL * v7 + 24);
          if ( v10 && !*(_QWORD *)(v6 + 40LL * v7 + 32) )
            return (unsigned int)-1073741811;
          v11 = 0;
          if ( v10 )
          {
            v12 = *(_QWORD *)(v6 + 40LL * v7 + 32);
            while ( 1 )
            {
              v13 = *(_WORD *)(v12 + 16LL * v11);
              if ( !v13 )
                break;
              v14 = *(_WORD *)(v12 + 16LL * v11 + 2);
              if ( !v14 || v13 > v14 || !*(_QWORD *)(v12 + 16LL * v11 + 8) )
                break;
              if ( ++v11 >= v10 )
                goto LABEL_19;
            }
LABEL_57:
            v3 = -1073741811;
          }
          break;
        case 4:
          v21 = *(_DWORD *)(v6 + 40LL * v7 + 24);
          if ( v21 && !*(_QWORD *)(v6 + 40LL * v7 + 32) )
            return (unsigned int)-1073741811;
          v22 = 0;
          if ( v21 )
          {
            v23 = *(_QWORD *)(v6 + 40LL * v7 + 32);
            while ( 1 )
            {
              v24 = *(_WORD *)(v23 + 24LL * v22 + 8);
              if ( !v24 )
                goto LABEL_57;
              v25 = *(_WORD *)(v23 + 24LL * v22 + 10);
              if ( !v25 || v24 > v25 || !*(_QWORD *)(v23 + 24LL * v22 + 16) )
                goto LABEL_57;
              if ( ++v22 >= v21 )
                goto LABEL_19;
            }
          }
          break;
        default:
          if ( *(_WORD *)(v6 + 40LL * v7 + 16) != 5 )
          {
            if ( *(_WORD *)(v6 + 40LL * v7 + 16) == 6 )
            {
              v19 = *(_DWORD *)(v6 + 40LL * v7 + 24);
              if ( v19 && !*(_QWORD *)(v6 + 40LL * v7 + 32) )
                return (unsigned int)-1073741811;
              v20 = 0;
              if ( v19 )
              {
                while ( *(_QWORD *)(*(_QWORD *)(v6 + 40LL * v7 + 32) + 8LL * v20) <= 1uLL )
                {
                  if ( ++v20 >= v19 )
                    goto LABEL_19;
                }
                goto LABEL_57;
              }
              break;
            }
            if ( *(_WORD *)(v6 + 40LL * v7 + 16) != 16 )
              return (unsigned int)-1073741811;
          }
          v16 = *(_DWORD *)(v6 + 40LL * v7 + 24);
          if ( v16 && !*(_QWORD *)(v6 + 40LL * v7 + 32) )
            return (unsigned int)-1073741811;
          v17 = 0;
          if ( v16 )
          {
            v18 = *(_QWORD *)(v6 + 40LL * v7 + 32);
            while ( *(_DWORD *)(v18 + 16LL * v17 + 8) && *(_QWORD *)(v18 + 16LL * v17) )
            {
              if ( ++v17 >= v16 )
                goto LABEL_19;
            }
            goto LABEL_57;
          }
          break;
      }
LABEL_19:
      if ( v3 >= 0 && ++v7 < v5 )
        continue;
      return (unsigned int)v3;
    }
  }
  return (unsigned int)v3;
}
