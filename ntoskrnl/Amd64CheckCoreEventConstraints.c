char __fastcall Amd64CheckCoreEventConstraints(int a1, unsigned __int64 a2, _BYTE *a3)
{
  int v3; // r10d
  int v4; // r9d
  char CpuType; // cl
  unsigned int v7; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d

  v3 = 1 << a1;
  v4 = (unsigned __int8)a2 | (a2 >> 24) & 0xF00;
  CpuType = KeGetCurrentPrcb()->CpuType;
  if ( CpuType == 21 )
  {
    v7 = a2 & 0xF0;
    if ( v7 > 0x60 )
    {
      v10 = v7 - 112;
      if ( v10 )
      {
        v11 = v10 - 16;
        if ( v11 )
        {
          v12 = v11 - 16;
          if ( v12 )
          {
            v13 = v12 - 48;
            if ( !v13 )
            {
LABEL_29:
              if ( v4 != 35 && v4 != 67 && v4 != 69 && v4 != 70 && v4 != 84 )
              {
                if ( v4 == 448 )
                  return v3 & 0x38;
                return v3 & 0x3F;
              }
              return v3 & 7;
            }
            if ( v13 != 16 )
            {
LABEL_10:
              *a3 = 0;
              return 1;
            }
          }
        }
      }
    }
    else if ( v7 != 96 )
    {
      if ( (a2 & 0xF0) == 0 || v7 == 16 )
      {
        if ( v4 && (unsigned int)(v4 - 3) > 1 )
          return v3 & 0x38;
        return v3 & 8;
      }
      if ( v7 != 32 && v7 != 48 && v7 != 64 && v7 != 80 )
        goto LABEL_10;
      goto LABEL_29;
    }
    v14 = v4 - 219;
    if ( !v14 )
      return v3 & 0x3F;
    v15 = v14 - 1;
    if ( !v15 )
      return v3 & 0x3F;
    v16 = v15 - 1;
    if ( !v16 )
      return v3 & 0x3F;
    v17 = v16 - 1;
    if ( !v17 )
      return v3 & 0x3F;
    v18 = v17 - 1;
    if ( !v18 )
      return v3 & 0x3F;
    v19 = v18 - 241;
    if ( !v19 || v19 == 8 )
      return v3 & 0x3F;
    return v3 & 7;
  }
  if ( (unsigned __int8)CpuType < 0x17u || v4 != 3 )
    goto LABEL_10;
  if ( (v3 & 0x15) != 0 && !__readmsr(*((_DWORD *)&Amd64EventSelectRegisters + (unsigned int)(a1 + 1))) )
  {
    *a3 = 1;
    return 1;
  }
  return 0;
}
