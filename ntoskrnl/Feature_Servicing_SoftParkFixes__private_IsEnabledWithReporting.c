__int64 __fastcall Feature_Servicing_SoftParkFixes__private_IsEnabledWithReporting(int a1)
{
  switch ( a1 )
  {
    case 0:
      return Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting();
    case 3:
      return Feature_Servicing_SoftParkFixes__private_IsEnabledDeviceUsage();
    case 4:
      return Feature_Servicing_SoftParkFixes__private_IsEnabledDeviceOpportunity();
  }
  return Feature_Servicing_SoftParkFixes__private_IsEnabledOtherReporting(a1);
}
