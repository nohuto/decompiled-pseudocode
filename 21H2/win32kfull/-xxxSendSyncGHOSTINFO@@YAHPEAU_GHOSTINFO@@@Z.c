/*
 * XREFs of ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C02116A4
 * Callers:
 *     xxxFrostCrashedWindow @ 0x1C0211758 (xxxFrostCrashedWindow.c)
 * Callees:
 *     DwmSyncSignalGhost @ 0x1C0273440 (DwmSyncSignalGhost.c)
 */

__int64 __fastcall xxxSendSyncGHOSTINFO(struct _GHOSTINFO *a1)
{
  void *v1; // rbx
  __int64 v2; // rcx

  v1 = (void *)ReferenceDwmApiPort(a1);
  UserSessionSwitchLeaveCrit(v2);
  LODWORD(v1) = (int)DwmSyncSignalGhost(v1) >= 0;
  EnterCrit(1LL, 0LL);
  return (unsigned int)v1;
}
