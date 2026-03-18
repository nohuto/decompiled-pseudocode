/*
 * XREFs of ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C0070BC4
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C0070820 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0157A60 (NtUserDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DispConfigTypes::GetGetterTypeSize(int a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a1 > -8 )
  {
    if ( a1 <= 100 )
    {
      if ( a1 == 100 )
        return 24LL;
      if ( a1 > 3 )
      {
        v2 = a1 - 4;
        if ( !v2 )
          return 276LL;
        v3 = v2 - 2;
        if ( !v3 )
          return 24LL;
        v4 = v3 - 1;
        if ( !v4 )
          return 24LL;
        v5 = v4 - 2;
        if ( !v5 )
          return 32LL;
        if ( (unsigned int)(v5 - 2) < 2 )
          return 24LL;
      }
      else
      {
        switch ( a1 )
        {
          case 3:
            return 80LL;
          case 1:
            return 84LL;
          case -2:
            return 2056LL;
          case -7:
            return 940LL;
          case -5:
            return 28LL;
          case -3:
            return 32LL;
          case 2:
            return 420LL;
        }
      }
    }
    return 0LL;
  }
  if ( a1 == -8 )
    return 536LL;
  if ( a1 > -15 )
  {
    switch ( a1 )
    {
      case -14:
        return 40LL;
      case -12:
        return 24LL;
      case -13:
        return 36LL;
    }
    if ( a1 != -11 )
    {
      if ( a1 != -10 )
        return 24LL;
      return 28LL;
    }
    return 2056LL;
  }
  switch ( a1 )
  {
    case -15:
      return 32LL;
    case -21:
      return 2056LL;
    case -25:
      return 40LL;
    case -29:
    case -26:
      return 24LL;
    case -24:
      return 32LL;
  }
  if ( a1 != -22 )
  {
    if ( a1 == -20 )
      return 56LL;
    return 0LL;
  }
  return 28LL;
}
