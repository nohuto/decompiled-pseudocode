/*
 * XREFs of IszzzCalcStartCursorHideSupported @ 0x1C00487A4
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003ED88 (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0046DC0 (DestroyProcessInfo.c)
 *     xxxSetProcessInitState @ 0x1C0048570 (xxxSetProcessInitState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IszzzCalcStartCursorHideSupported()
{
  if ( qword_1C0255F98 )
    return qword_1C0255F98();
  else
    return 3221225659LL;
}
