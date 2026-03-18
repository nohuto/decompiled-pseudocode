/*
 * XREFs of ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C01F5650
 * Callers:
 *     ?xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z @ 0x1C01F4680 (-xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     DwmSyncSignalGhost @ 0x1C026E370 (DwmSyncSignalGhost.c)
 */

__int64 __fastcall xxxSendSyncGHOSTINFO(struct _GHOSTINFO *a1)
{
  void *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = (void *)ReferenceDwmApiPort(a1);
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  LODWORD(v1) = (int)DwmSyncSignalGhost(v1) >= 0;
  EnterCrit(1LL, 0LL);
  return (unsigned int)v1;
}
