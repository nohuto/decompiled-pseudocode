/*
 * XREFs of IsStartScreenSaverSupported @ 0x1C01FC584
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0076B30 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsStartScreenSaverSupported()
{
  if ( qword_1C0257560 )
    return qword_1C0257560();
  else
    return 3221225659LL;
}
