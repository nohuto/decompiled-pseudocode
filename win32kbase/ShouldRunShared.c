char __fastcall ShouldRunShared(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  if ( a1 && (v1 = a1 - 1) != 0 && (v2 = v1 - 1) != 0 && (v3 = v2 - 1) != 0 && (v4 = v3 - 1) != 0 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 1 )
            return 0;
          Feature_EnumDisplayMonitors_UseSharedLock__private_ReportDeviceUsage();
        }
        else
        {
          Feature_UseSharedMsgFilter__private_ReportDeviceUsage();
        }
      }
      else
      {
        Feature_UseSharedCreateDestroyWinEventHooks__private_ReportDeviceUsage();
      }
    }
    else
    {
      Feature_UseSharedCreateDestroyWindowsHooks__private_ReportDeviceUsage();
    }
  }
  else
  {
    Feature_UserCritOpt__private_ReportDeviceUsage();
  }
  return 1;
}
