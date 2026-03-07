__int64 __fastcall Amd64GetEventSelectDef(__int16 *a1)
{
  __int64 v1; // r8
  __int16 v2; // dx
  unsigned int CpuType; // r9d
  unsigned int v4; // r9d
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // r8

  v1 = 0LL;
  v2 = *a1;
  CpuType = (unsigned __int8)KeGetCurrentPrcb()->CpuType;
  if ( *((_BYTE *)a1 + 7) )
  {
    if ( *((_BYTE *)a1 + 7) == 1 )
    {
      v9 = v2 & 0xF00;
      if ( CpuType > 0x16 )
        v9 |= (unsigned __int64)(*a1 & 0x3000) << 23;
      v8 = v9 << 24;
      v7 = (unsigned __int8)v2 | ((unsigned __int64)*((unsigned __int8 *)a1 + 2) << 8);
      return v8 | v7;
    }
    if ( *((_BYTE *)a1 + 7) == 2 )
    {
      v4 = CpuType - 22;
      if ( v4 )
      {
        v5 = (unsigned __int8)v2;
        if ( v4 == 1 )
          v6 = 0xFF0F000000000000uLL;
        else
          v6 = 0x300C00000000000LL;
      }
      else
      {
        v6 = (unsigned __int8)v2;
        v5 = (unsigned __int64)(v2 & 0xF00) << 24;
      }
      v7 = v6 | v5;
      v8 = (unsigned __int64)*((unsigned __int8 *)a1 + 2) << 8;
      return v8 | v7;
    }
  }
  else
  {
    v10 = (unsigned __int8)v2;
    if ( CpuType != 15 )
      v10 = ((*a1 & 0xF00 | ((unsigned __int64)(a1[3] & 3) << 16)) << 24) | (unsigned __int8)*a1;
    return ((*((unsigned __int8 *)a1 + 2) | ((*((_BYTE *)a1 + 5) & 1 | (32
                                                                      * (a1[2] & 1 | (2LL * (*((_BYTE *)a1 + 3) & 0xF))))) << 10) | 0x300) << 8) | v10;
  }
  return v1;
}
