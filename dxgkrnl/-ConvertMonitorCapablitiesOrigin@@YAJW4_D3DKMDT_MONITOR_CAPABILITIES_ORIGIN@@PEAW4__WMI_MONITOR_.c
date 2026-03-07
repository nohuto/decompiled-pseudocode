__int64 __fastcall ConvertMonitorCapablitiesOrigin(
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN a1,
        enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *a2)
{
  switch ( a1 )
  {
    case D3DKMDT_MCO_DEFAULTMONITORPROFILE:
      *(_DWORD *)a2 = 1;
      break;
    case D3DKMDT_MCO_MONITORDESCRIPTOR:
      *(_DWORD *)a2 = 2;
      break;
    case D3DKMDT_MCO_MONITORDESCRIPTOR_REGISTRYOVERRIDE:
      *(_DWORD *)a2 = 3;
      break;
    case D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE:
      *(_DWORD *)a2 = 4;
      break;
    default:
      WdLogSingleEntry1(2LL, a1);
      *(_DWORD *)a2 = 0;
      return 3223192407LL;
  }
  return 0LL;
}
