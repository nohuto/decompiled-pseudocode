/*
 * XREFs of _MapCmDevicePropertyToRegValue @ 0x14025380C
 * Callers:
 *     _CmGetDeviceRegPropWorker @ 0x1406363FC (_CmGetDeviceRegPropWorker.c)
 *     _CmSetDeviceRegPropWorker @ 0x140744338 (_CmSetDeviceRegPropWorker.c)
 * Callees:
 *     <none>
 */

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
      v14 = a2 - 28;
      if ( !v14 )
        return L"DeviceCharacteristics";
      v15 = v14 - 1;
      if ( !v15 )
        return L"Address";
      v16 = v15 - 1;
      if ( !v16 )
        return L"UINumberDescFormat";
      v17 = v16 - 4;
      if ( !v17 )
        return L"RemovalPolicy";
      if ( v17 == 3 )
        return L"ContainerID";
    }
    else
    {
      if ( a2 == 27 )
        return L"Exclusive";
      v5 = a2 - 17;
      if ( !v5 )
        return L"UINumber";
      v6 = v5 - 1;
      if ( !v6 )
        return L"UpperFilters";
      v7 = v6 - 1;
      if ( !v7 )
        return L"LowerFilters";
      v18 = v7 - 5;
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
    v8 = a2 - 10;
    if ( !v8 )
      return L"Driver";
    v11 = v8 - 1;
    if ( !v11 )
      return L"ConfigFlags";
    v12 = v11 - 1;
    if ( !v12 )
      return L"Mfg";
    v13 = v12 - 1;
    if ( !v13 )
      return L"FriendlyName";
    if ( v13 == 1 )
      return L"LocationInformation";
    return 0LL;
  }
  if ( a2 == 9 )
    return L"ClassGUID";
  v2 = a2 - 1;
  if ( !v2 )
    return L"DeviceDesc";
  v3 = v2 - 1;
  if ( !v3 )
    return L"HardwareID";
  v9 = v3 - 1;
  if ( !v9 )
    return L"CompatibleIDs";
  v10 = v9 - 2;
  if ( !v10 )
    return L"Service";
  if ( v10 != 3 )
    return 0LL;
  return L"Class";
}
