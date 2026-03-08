/*
 * XREFs of ShouldRunShared @ 0x1C003ACA0
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1C003AD10 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     Feature_EnumDisplayMonitors_UseSharedLock__private_ReportDeviceUsage @ 0x1C00DCAA4 (Feature_EnumDisplayMonitors_UseSharedLock__private_ReportDeviceUsage.c)
 *     Feature_UseSharedCreateDestroyWinEventHooks__private_ReportDeviceUsage @ 0x1C00DCB08 (Feature_UseSharedCreateDestroyWinEventHooks__private_ReportDeviceUsage.c)
 *     Feature_UseSharedCreateDestroyWindowsHooks__private_ReportDeviceUsage @ 0x1C00DCB6C (Feature_UseSharedCreateDestroyWindowsHooks__private_ReportDeviceUsage.c)
 *     Feature_UseSharedMsgFilter__private_ReportDeviceUsage @ 0x1C00DCBD0 (Feature_UseSharedMsgFilter__private_ReportDeviceUsage.c)
 *     Feature_UserCritOpt__private_ReportDeviceUsage @ 0x1C00DCC34 (Feature_UserCritOpt__private_ReportDeviceUsage.c)
 */

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
