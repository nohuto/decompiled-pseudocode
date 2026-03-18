/*
 * XREFs of IsSetTimerCoalescingToleranceSupported @ 0x1C007CFC0
 * Callers:
 *     PostWinlogonMessage @ 0x1C0059750 (PostWinlogonMessage.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSetTimerCoalescingToleranceSupported()
{
  if ( qword_1C029C240 )
    return qword_1C029C240();
  else
    return 3221225659LL;
}
