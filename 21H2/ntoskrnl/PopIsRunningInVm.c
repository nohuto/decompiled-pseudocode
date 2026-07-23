/*
 * XREFs of PopIsRunningInVm @ 0x140568F40
 * Callers:
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A5B60 (HviIsAnyHypervisorPresent.c)
 *     HviGetEnlightenmentInformation @ 0x1403AE310 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1403AE350 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

bool PopIsRunningInVm()
{
  bool result; // al
  __int128 v1; // [rsp+20h] [rbp-38h] BYREF
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  result = 0;
  if ( HviIsAnyHypervisorPresent() )
  {
    v1 = 0LL;
    HviGetHypervisorFeatures(&v1);
    if ( (v1 & 0x100000000000LL) == 0 )
      return 1;
    HviGetEnlightenmentInformation(&v2);
    if ( (v2 & 0x1000) != 0 )
      return 1;
  }
  return result;
}
