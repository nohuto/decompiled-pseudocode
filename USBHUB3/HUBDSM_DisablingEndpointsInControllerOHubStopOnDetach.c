__int64 __fastcall HUBDSM_DisablingEndpointsInControllerOHubStopOnDetach(__int64 a1)
{
  HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
