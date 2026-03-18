/*
 * XREFs of PopNetUpdateStandbyRequest @ 0x1409988BC
 * Callers:
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1402E0C80 (RtlCheckTokenMembership.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 PopNetUpdateStandbyRequest()
{
  int v0; // ebx

  if ( PopNetBIServiceSid )
  {
    v0 = RtlCheckTokenMembership(0LL, (void *)PopNetBIServiceSid);
    if ( v0 >= 0 )
      return (unsigned int)-1073741790;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v0;
}
