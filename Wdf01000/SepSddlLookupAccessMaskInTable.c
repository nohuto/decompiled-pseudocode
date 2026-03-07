__int64 __fastcall SepSddlLookupAccessMaskInTable(wchar_t *String, unsigned int *AccessMask, wchar_t **End)
{
  _STRSD_KEY_LOOKUP *v4; // rdi
  unsigned int v7; // ebx
  __int64 result; // rax

  v4 = RightsLookup;
  v7 = 0;
  while ( _wcsnicmp(String, v4->Key, v4->KeyLen) )
  {
    ++v7;
    ++v4;
    if ( v7 >= 8 )
    {
      *AccessMask = 0;
      result = 0LL;
      *End = String;
      return result;
    }
  }
  result = 1LL;
  *AccessMask = RightsLookup[v7].Value;
  *End = &String[RightsLookup[v7].KeyLen];
  return result;
}
