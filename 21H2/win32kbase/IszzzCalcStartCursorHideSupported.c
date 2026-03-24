/*
 * XREFs of IszzzCalcStartCursorHideSupported @ 0x1C0047334
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003D918 (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0045950 (DestroyProcessInfo.c)
 *     xxxSetProcessInitState @ 0x1C0047100 (xxxSetProcessInitState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IszzzCalcStartCursorHideSupported()
{
  if ( qword_1C0256F98 )
    return qword_1C0256F98();
  else
    return 3221225659LL;
}
