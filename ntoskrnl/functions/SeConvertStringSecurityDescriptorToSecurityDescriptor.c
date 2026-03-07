__int64 __fastcall SeConvertStringSecurityDescriptorToSecurityDescriptor(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( !a1 || !a3 )
  {
    LOWORD(result) = 87;
    return (unsigned __int16)result | 0xC0070000;
  }
  if ( a2 != 1 )
  {
    LOWORD(result) = 1305;
    return (unsigned __int16)result | 0xC0070000;
  }
  result = LocalConvertStringSDToSD_Rev1(a1, 1, a3, a1, a3, a4);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
