__int64 __fastcall sub_140754450(UCHAR *Source1, unsigned int a2)
{
  int v2; // ebx

  if ( !Source1 )
    return (unsigned int)-1073741811;
  if ( a2 <= 0x20 )
    return (unsigned int)-1073741811;
  v2 = WbHashData(Source1 + 32, a2 - 32);
  if ( v2 >= 0 )
    return (unsigned int)-1073741811;
  return (unsigned int)v2;
}
