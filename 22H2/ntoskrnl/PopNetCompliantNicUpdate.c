/*
 * XREFs of PopNetCompliantNicUpdate @ 0x140996784
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x140997F1C (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x140864D18 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x140996730 (PopNetClearConnectivityConstraint.c)
 */

char __fastcall PopNetCompliantNicUpdate(char a1)
{
  int v1; // eax
  bool v2; // zf

  LOBYTE(v1) = PopNetCompliantNicCount;
  if ( a1 )
  {
    v1 = PopNetCompliantNicCount + 1;
    PopNetCompliantNicCount = v1;
    if ( v1 == 1 )
      LOBYTE(v1) = PopNetClearConnectivityConstraint(6);
  }
  else if ( PopNetCompliantNicCount )
  {
    v2 = PopNetCompliantNicCount == 1;
    LOBYTE(v1) = --PopNetCompliantNicCount;
    if ( v2 )
      LOBYTE(v1) = PopNetSetConnectivityConstraint(6);
  }
  return v1;
}
