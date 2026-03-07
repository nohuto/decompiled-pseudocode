__int64 __fastcall I_MinCryptGetCertificateEKUs(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  unsigned int v5; // ebx
  _OWORD v7[2]; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  v8 = 0;
  v7[0] = 0LL;
  if ( *a1 )
  {
    if ( (int)MinAsn1ParseSingleExtensionValue(&qword_140A75B00, a1, &v8, v7) > 0 )
    {
      if ( v8 )
      {
        if ( (int)MinAsn1ParseOIDSequence(v7, a2, a3) <= 0 )
          return (unsigned int)-1073740760;
      }
      else
      {
        *a2 = 0;
      }
    }
    else
    {
      return (unsigned int)-1073740760;
    }
  }
  else
  {
    *a2 = 0;
  }
  return v5;
}
