__int64 __fastcall HvpProtectBinPartial(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        char a6)
{
  unsigned __int64 v6; // r10
  unsigned int v7; // ebx

  v6 = a2 + a4;
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    MmSetPageProtection(v6, a5, a6 != 0 ? 4 : 2);
    return 0;
  }
  else
  {
    v7 = 0;
    if ( a6 )
    {
      if ( !(unsigned int)CmpProtectPoolEx(a2, v6, a5, 4u) )
        return (unsigned int)-1073741670;
    }
    else
    {
      CmpProtectPoolEx(a2, v6, a5, 2u);
    }
  }
  return v7;
}
