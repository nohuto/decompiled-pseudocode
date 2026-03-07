__int64 __fastcall SeQuerySecurityAttributesTokenAccessInformation(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v10; // edx
  _BYTE v12[1184]; // [rsp+40h] [rbp-4E8h] BYREF

  memset(v12, 0, 0x498uLL);
  if ( a5 )
  {
    if ( a4 )
    {
LABEL_3:
      SepTokenFromAccessInformation(a1, v12);
      return SepInternalQuerySecurityAttributesTokenEx((unsigned int)v12, v10, a2, a3, 0, a4, a5, a6);
    }
  }
  else if ( !a4 )
  {
    goto LABEL_3;
  }
  return 3221225485LL;
}
