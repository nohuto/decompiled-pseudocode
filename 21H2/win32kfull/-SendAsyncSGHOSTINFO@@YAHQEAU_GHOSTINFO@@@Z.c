/*
 * XREFs of ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C01449F8
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0144914 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     _RegisterErrorReportingDialog @ 0x1C0211704 (_RegisterErrorReportingDialog.c)
 * Callees:
 *     DwmAsyncSignalGhost @ 0x1C0144A30 (DwmAsyncSignalGhost.c)
 */

_BOOL8 __fastcall SendAsyncSGHOSTINFO(struct _GHOSTINFO *const a1)
{
  void *v1; // rax

  v1 = (void *)ReferenceDwmApiPort(a1);
  return (int)DwmAsyncSignalGhost(v1) >= 0;
}
