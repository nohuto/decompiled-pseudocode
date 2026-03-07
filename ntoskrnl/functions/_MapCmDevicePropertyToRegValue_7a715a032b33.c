const wchar_t *__fastcall MapCmDevicePropertyToRegValue(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx

  if ( a2 > 16 )
  {
    if ( a2 > 27 )
    {
      v13 = a2 - 28;
      if ( !v13 )
        return L"DeviceCharacteristics";
      v14 = v13 - 1;
      if ( !v14 )
        return L"Address";
      v15 = v14 - 1;
      if ( !v15 )
        return L"UINumberDescFormat";
      v16 = v15 - 4;
      if ( !v16 )
        return L"RemovalPolicy";
      if ( v16 == 3 )
        return L"ContainerID";
    }
    else
    {
      if ( a2 == 27 )
        return L"Exclusive";
      v7 = a2 - 17;
      if ( !v7 )
        return L"UINumber";
      v8 = v7 - 1;
      if ( !v8 )
        return L"UpperFilters";
      v17 = v8 - 1;
      if ( !v17 )
        return L"LowerFilters";
      v18 = v17 - 5;
      if ( !v18 )
        return L"Security";
      if ( v18 == 2 )
        return L"DeviceType";
    }
    return 0LL;
  }
  if ( a2 == 16 )
    return L"Capabilities";
  if ( a2 > 9 )
  {
    v2 = a2 - 10;
    if ( !v2 )
      return L"Driver";
    v3 = v2 - 1;
    if ( !v3 )
      return L"ConfigFlags";
    v10 = v3 - 1;
    if ( !v10 )
      return L"Mfg";
    v11 = v10 - 1;
    if ( !v11 )
      return L"FriendlyName";
    if ( v11 == 1 )
      return L"LocationInformation";
    return 0LL;
  }
  if ( a2 == 9 )
    return L"ClassGUID";
  v5 = a2 - 1;
  if ( !v5 )
    return L"DeviceDesc";
  v6 = v5 - 1;
  if ( !v6 )
    return L"HardwareID";
  v9 = v6 - 1;
  if ( !v9 )
    return L"CompatibleIDs";
  v12 = v9 - 2;
  if ( !v12 )
    return L"Service";
  if ( v12 != 3 )
    return 0LL;
  return L"Class";
}
