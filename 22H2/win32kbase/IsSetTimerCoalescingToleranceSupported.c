/*
 * XREFs of IsSetTimerCoalescingToleranceSupported @ 0x1C0078C00
 * Callers:
 *     PostWinlogonMessage @ 0x1C00763B0 (PostWinlogonMessage.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0078210 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSetTimerCoalescingToleranceSupported()
{
  if ( qword_1C0256500 )
    return qword_1C0256500();
  else
    return 3221225659LL;
}
