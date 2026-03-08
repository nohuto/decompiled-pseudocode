/*
 * XREFs of ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C01F681C
 * Callers:
 *     ?xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z @ 0x1C01F5880 (-xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     DwmSyncSignalGhost @ 0x1C0270E20 (DwmSyncSignalGhost.c)
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
