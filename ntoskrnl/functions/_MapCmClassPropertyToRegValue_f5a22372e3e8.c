const wchar_t *__fastcall MapCmClassPropertyToRegValue(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx

  v2 = a2 - 8;
  if ( !v2 )
    return L"Class";
  v3 = v2 - 5;
  if ( !v3 )
    return L"ClassDesc";
  v4 = v3 - 5;
  if ( !v4 )
    return L"UpperFilters";
  v5 = v4 - 1;
  if ( !v5 )
    return L"LowerFilters";
  v6 = v5 - 5;
  if ( !v6 )
    return L"Security";
  v7 = v6 - 2;
  if ( !v7 )
    return L"DeviceType";
  v8 = v7 - 1;
  if ( !v8 )
    return L"Exclusive";
  if ( v8 == 1 )
    return L"DeviceCharacteristics";
  return 0LL;
}
