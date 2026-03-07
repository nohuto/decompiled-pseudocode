bool __fastcall ValidateStd3Range(int a1)
{
  __int64 v1; // rdx

  if ( (unsigned __int16)(a1 - 45) > 0x2Du || (v1 = 0x3FFFFFF01FFBLL, !_bittest64(&v1, (unsigned int)(a1 - 45))) )
  {
    if ( (unsigned __int16)a1 < 0x61u )
      return 0;
  }
  if ( (unsigned __int16)a1 < 0x7Bu )
    return 1;
  return (unsigned __int16)a1 > 0x7Fu;
}
