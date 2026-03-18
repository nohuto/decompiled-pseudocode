/*
 * XREFs of IsStartScreenSaverSupported @ 0x1C023E2B8
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsStartScreenSaverSupported()
{
  if ( qword_1C029C2A0 )
    return qword_1C029C2A0();
  else
    return 3221225659LL;
}
