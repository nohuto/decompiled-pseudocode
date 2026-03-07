const struct DirectComposition::ResPropInfo *__fastcall DirectComposition::CResourceMarshaler::GetTargetProperty(
        DirectComposition::CResourceMarshaler *this,
        int a2)
{
  int i; // ecx
  const struct DirectComposition::ResPropInfo *result; // rax

  for ( i = DirectComposition::ResourceInformation::resourceTypeInformation[*((unsigned int *)this + 9)];
        i != 206;
        i = *((_DWORD *)result + 1) )
  {
    result = (const struct DirectComposition::ResPropInfo *)((char *)&DirectComposition::ResourceInformation::resourcePropertyInformation
                                                           + 32 * i);
    if ( *(_DWORD *)result == a2 )
      return result;
  }
  return 0LL;
}
