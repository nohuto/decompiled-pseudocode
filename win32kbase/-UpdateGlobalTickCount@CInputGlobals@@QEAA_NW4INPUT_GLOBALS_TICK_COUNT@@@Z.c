/*
 * XREFs of ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C000DBE0
 * Callers:
 *     PostWinlogonMessage @ 0x1C0090D50 (PostWinlogonMessage.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 */

char __fastcall CInputGlobals::UpdateGlobalTickCount(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8

  v2 = a2;
  RIMLockExclusive(a1);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = v2;
  LOBYTE(v2) = *(_QWORD *)(a1 + 8 * v2 + 24) != v4;
  *(_QWORD *)(a1 + 8 * v5 + 24) = v4;
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
