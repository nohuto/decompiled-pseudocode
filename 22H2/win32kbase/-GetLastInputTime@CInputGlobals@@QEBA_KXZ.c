/*
 * XREFs of ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C00113C0
 * Callers:
 *     ?GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z @ 0x1C00112E8 (-GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     EtwTraceIdleStatus @ 0x1C00AA480 (EtwTraceIdleStatus.c)
 *     xxxProcessKeyEvent @ 0x1C00C90C0 (xxxProcessKeyEvent.c)
 *     EtwTraceIdleActionExpiration @ 0x1C013A9F0 (EtwTraceIdleActionExpiration.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CInputGlobals::GetLastInputTime(CInputGlobals *this)
{
  __int64 v2; // rbx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  v2 = *((_QWORD *)this + 2);
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
