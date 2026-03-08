/*
 * XREFs of IsEditionSetProcessWindowStationAtProcessInitSupported @ 0x1C00C8310
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0076490 (xxxCreateThreadInfo.c)
 *     ApiSetEditionSetProcessWindowStationAtProcessInit @ 0x1C0242EF4 (ApiSetEditionSetProcessWindowStationAtProcessInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionSetProcessWindowStationAtProcessInitSupported()
{
  if ( qword_1C02D64C0 )
    return qword_1C02D64C0();
  else
    return 3221225659LL;
}
