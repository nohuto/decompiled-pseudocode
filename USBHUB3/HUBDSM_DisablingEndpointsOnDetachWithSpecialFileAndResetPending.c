__int64 __fastcall HUBDSM_DisablingEndpointsOnDetachWithSpecialFileAndResetPending(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl(v1);
  HUBPDO_NotifyDeviceDisconnected(v1);
  return 1000LL;
}
