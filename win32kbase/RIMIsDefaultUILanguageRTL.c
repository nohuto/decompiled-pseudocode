_BOOL8 RIMIsDefaultUILanguageRTL()
{
  unsigned int v0; // ecx
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  bool v5; // zf
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  LANGID LanguageId; // [rsp+30h] [rbp+8h] BYREF

  LanguageId = 0;
  if ( ZwQueryDefaultUILanguage(&LanguageId) < 0 )
    return 0LL;
  v0 = LanguageId & 0x3FF;
  if ( v0 > 0x5A )
  {
    v7 = v0 - 99;
    if ( !v7 )
      return 1LL;
    v8 = v7 - 2;
    if ( !v8 )
      return 1LL;
    v9 = v8 - 27;
    if ( !v9 )
      return 1LL;
    v10 = v9 - 12;
    if ( !v10 )
      return 1LL;
    v5 = v10 == 6;
  }
  else
  {
    if ( v0 == 90 )
      return 1LL;
    v1 = v0 - 1;
    if ( !v1 )
      return 1LL;
    v2 = v1 - 12;
    if ( !v2 )
      return 1LL;
    v3 = v2 - 19;
    if ( !v3 )
      return 1LL;
    v4 = v3 - 9;
    if ( !v4 )
      return 1LL;
    v5 = v4 == 48;
  }
  return v5
      || LanguageId == 2118
      || LanguageId == 2128
      || LanguageId == 2144
      || LanguageId == 31814
      || LanguageId == 31824;
}
