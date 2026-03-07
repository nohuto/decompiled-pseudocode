__int64 Feature_DropPowerReferenceOnLPE__private_IsEnabledDeviceUsage()
{
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.Dpc.DpcData & 1;
  else
    return Feature_DropPowerReferenceOnLPE__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.Dpc.DpcData), 3u);
}
