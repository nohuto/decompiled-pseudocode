/*
 * XREFs of ExCheckFullProcessInformationAccess @ 0x14069DFCC
 * Callers:
 *     ExpGetProcessInformation @ 0x14063E980 (ExpGetProcessInformation.c)
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 *     NtSetDefaultLocale @ 0x14078BD50 (NtSetDefaultLocale.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x140947834 (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpSetCoverageSamplerInformation @ 0x14094798C (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140348440 (RtlCheckTokenMembership.c)
 *     RtlRunOnceExecuteOnce @ 0x14066F550 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall ExCheckFullProcessInformationAccess(char a1)
{
  BOOLEAN IsMember; // [rsp+30h] [rbp+8h] BYREF
  PVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  IsMember = 0;
  if ( a1 == 1
    && (RtlRunOnceExecuteOnce(&ExpFullProcessInfoInit, ExpInitFullProcessSecurityInfo, 0LL, &Context) >= 0
     && RtlCheckTokenMembership(0LL, Context, &IsMember) >= 0
     && IsMember
     || RtlCheckTokenMembership(0LL, SeAliasAdminsSid, &IsMember) >= 0 && IsMember) )
  {
    return 0LL;
  }
  else
  {
    return 3221225506LL;
  }
}
