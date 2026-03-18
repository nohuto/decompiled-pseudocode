/*
 * XREFs of ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C00114C0
 * Callers:
 *     SetProtocolType @ 0x1C000FA60 (SetProtocolType.c)
 *     UserPowerInfoCallout @ 0x1C000FBD4 (UserPowerInfoCallout.c)
 *     PowerConnectionEvent @ 0x1C00110E4 (PowerConnectionEvent.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009E7F8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0011524 (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 */

void __fastcall CInputGlobals::UpdateLastInputTime(__int64 a1, __int64 a2, unsigned int a3)
{
  RIMLockExclusive(a1);
  CInputGlobals::_UpdateLastInputTime(a1, a2, a3);
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
