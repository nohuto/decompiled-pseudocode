/*
 * XREFs of ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C01F4ECC
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F5244 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_RegisterErrorReportingDialog@@YAHPEAUtagWND@@K@Z @ 0x1C01F5350 (-_RegisterErrorReportingDialog@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     DwmAsyncSignalGhost @ 0x1C0270588 (DwmAsyncSignalGhost.c)
 */

_BOOL8 __fastcall SendAsyncSGHOSTINFO(struct _GHOSTINFO *const a1)
{
  void *v1; // rax

  v1 = (void *)ReferenceDwmApiPort(a1);
  return (int)DwmAsyncSignalGhost(v1) >= 0;
}
