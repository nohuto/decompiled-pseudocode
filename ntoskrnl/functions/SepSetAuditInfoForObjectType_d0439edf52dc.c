__int64 __fastcall SepSetAuditInfoForObjectType(
        char a1,
        int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        _BYTE *a10,
        _BYTE *a11)
{
  char v12; // r9
  __int64 result; // rax

  v12 = 0;
  if ( (a3 & 0x2000000) != 0 )
  {
    v12 = 0x80;
    if ( *(int *)(a8 + 4LL * a7) >= 0 )
      v12 = 64;
  }
  result = a9;
  if ( ((*(_DWORD *)(a9 + 4LL * a7) | a3) & a2) != 0 )
  {
    if ( (a1 & 0x40) != 0 && *(int *)(a8 + 4LL * a7) >= 0 )
    {
      *a10 = 1;
      if ( a5 )
      {
        result = 6LL * a7;
        *(_WORD *)(a4 + 48LL * a7 + 2) |= 1u;
        if ( a6 )
          return (__int64)SepAuditTypeList(a4, a5, a8, a7, a10, a11);
      }
    }
    else if ( a1 < 0 && *(int *)(a8 + 4LL * a7) < 0 )
    {
      *a11 = 1;
      if ( a5 )
      {
        result = 6LL * a7;
        *(_WORD *)(a4 + 48LL * a7 + 2) |= 2u;
        if ( a6 )
          return (__int64)SepAuditTypeList(a4, a5, a8, a7, a10, a11);
      }
    }
  }
  else if ( ((unsigned __int8)v12 & (unsigned __int8)a1) != 0 )
  {
    if ( v12 == (char)0x80 )
    {
      result = (__int64)a11;
      *a11 = 1;
      if ( a5 )
      {
        result = 6LL * a7;
        *(_WORD *)(a4 + 48LL * a7 + 2) |= 2u;
      }
    }
    else
    {
      result = (__int64)a10;
      *a10 = 1;
      if ( a5 )
      {
        result = 6LL * a7;
        *(_WORD *)(a4 + 48LL * a7 + 2) |= 1u;
      }
    }
  }
  return result;
}
