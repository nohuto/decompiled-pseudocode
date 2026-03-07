char IsPTPIVEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( (unsigned __int8)UseVelocityToEnableIV() )
  {
    Feature_PTPInputVirtualization__private_ReportDeviceUsage();
    return 1;
  }
  if ( isChildPartition() && byte_1C02D86F2 )
    return 1;
  return v0;
}
