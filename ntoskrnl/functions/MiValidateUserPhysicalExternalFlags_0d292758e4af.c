__int64 __fastcall MiValidateUserPhysicalExternalFlags(int a1)
{
  unsigned int v1; // edx

  if ( (a1 & 0x2BF4FFFF) != 0 || (a1 & 0x4000000) == 0 || (a1 & 0x8000000) != 0 )
    return 3221225485LL;
  v1 = 0;
  if ( a1 >= 0 )
  {
    if ( (a1 & 0xA0000) == 0xA0000 )
      return 3221225485LL;
  }
  else if ( (a1 & 0x80000) != 0 || (a1 & 0x20000) != 0 )
  {
    return 3221225485LL;
  }
  if ( (a1 & 0x50000000) == 0x50000000 )
    return (unsigned int)-1073741811;
  return v1;
}
