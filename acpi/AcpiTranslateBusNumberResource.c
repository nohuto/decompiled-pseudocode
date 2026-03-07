__int64 __fastcall AcpiTranslateBusNumberResource(int a1, __int64 a2, int a3, __int64 a4, int a5, int a6, __int64 a7)
{
  unsigned int v7; // r9d

  v7 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      *(_OWORD *)a7 = *(_OWORD *)a2;
      *(_DWORD *)(a7 + 16) = *(_DWORD *)(a2 + 16);
      *(_DWORD *)(a7 + 4) = (unsigned __int8)*(_DWORD *)(a7 + 4);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v7 = 288;
    *(_OWORD *)a7 = *(_OWORD *)a2;
    *(_DWORD *)(a7 + 16) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(a7 + 4) |= a1 << 8;
  }
  return v7;
}
