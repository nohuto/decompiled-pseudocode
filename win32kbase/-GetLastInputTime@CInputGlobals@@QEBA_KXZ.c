/*
 * XREFs of ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0016B10
 * Callers:
 *     ?GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z @ 0x1C0016A3C (-GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z.c)
 *     xxxProcessKeyEvent @ 0x1C007EE00 (xxxProcessKeyEvent.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     EtwTraceIdleStatus @ 0x1C00BA040 (EtwTraceIdleStatus.c)
 *     EtwTraceIdleActionExpiration @ 0x1C0163950 (EtwTraceIdleActionExpiration.c)
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
