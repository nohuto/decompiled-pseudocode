/*
 * XREFs of PopNetNonCompliantDeviceUpdate @ 0x140996944
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x140997F1C (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x140864D18 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x140996730 (PopNetClearConnectivityConstraint.c)
 */

void __fastcall PopNetNonCompliantDeviceUpdate(char a1, int a2)
{
  int v2; // eax

  if ( a2 || !PopIgnoreCsComplianceCheck )
  {
    v2 = PopNetNonCompliantDeviceCount;
    if ( a1 )
    {
      ++PopNetNonCompliantDeviceCount;
      if ( !v2 )
        PopNetSetConnectivityConstraint(3);
    }
    else if ( PopNetNonCompliantDeviceCount )
    {
      --PopNetNonCompliantDeviceCount;
      if ( v2 == 1 )
        PopNetClearConnectivityConstraint(3);
    }
  }
}
