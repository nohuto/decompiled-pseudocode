/*
 * XREFs of IsxxxSendMessageBSMSupported @ 0x1C00D1C10
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00D0E68 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxSendMessageBSMSupported()
{
  if ( qword_1C029C230 )
    return qword_1C029C230();
  else
    return 3221225659LL;
}
