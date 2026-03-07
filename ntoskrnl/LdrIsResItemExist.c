__int64 __fastcall LdrIsResItemExist(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned int *RcConfig; // rax
  __int64 v5; // r8
  unsigned int *v6; // rbx
  unsigned int v7; // ecx
  unsigned int v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0;
  LOBYTE(a3) = 1;
  RcConfig = (unsigned int *)LdrpGetRcConfig(a1, a2, a3);
  v6 = RcConfig;
  if ( RcConfig )
  {
    if ( (int)LdrRscIsTypeExist(RcConfig, *a2, v5, &v9) < 0 )
    {
      return 393216;
    }
    else
    {
      v7 = v9;
      if ( (v6[5] & 0x100) != 0 )
        v7 = v9 | 0x100000;
      if ( (v6[4] & 0x10) != 0 )
        v7 |= 0x200000u;
    }
  }
  else
  {
    return 0x80000;
  }
  return v7;
}
