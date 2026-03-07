char __fastcall WriteSystemIO(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned __int16 v4; // di
  char result; // al
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  v4 = a1;
  result = CheckSystemIOAddressValidity(0LL, a1, a2, &v8);
  if ( result )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 2 )
        {
          result = v8;
          __outdword(v4, v8);
        }
      }
      else
      {
        result = v8;
        __outword(v4, v8);
      }
    }
    else
    {
      result = v8;
      __outbyte(v4, v8);
    }
  }
  return result;
}
