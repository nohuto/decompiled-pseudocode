/*
 * XREFs of IsSetTimerCoalescingToleranceSupported @ 0x1C000D418
 * Callers:
 *     PostWinlogonMessage @ 0x1C0090D50 (PostWinlogonMessage.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSetTimerCoalescingToleranceSupported()
{
  if ( qword_1C02D6A98 )
    return qword_1C02D6A98();
  else
    return 3221225659LL;
}
