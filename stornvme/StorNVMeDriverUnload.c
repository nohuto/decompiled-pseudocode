/*
 * XREFs of StorNVMeDriverUnload @ 0x1C0003670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004200 (_guard_dispatch_icall_nop.c)
 */

__int64 StorNVMeDriverUnload()
{
  __int64 result; // rax

  result = ((__int64 (*)(void))StorPortDriverUnload)();
  if ( wil_details_featureChangeNotification )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
  return result;
}
