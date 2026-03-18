/*
 * XREFs of ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C00FE2A4
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00FE1F4 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxMNEndMenuStateInternal @ 0x1C021C050 (xxxMNEndMenuStateInternal.c)
 *     xxxMNCloseHierarchy @ 0x1C0230E00 (xxxMNCloseHierarchy.c)
 * Callees:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C007CC00 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 */

char __fastcall xxxActivateWindow(struct tagWND *a1)
{
  return xxxActivateWindowWithOptions(a1, 0LL, 0LL, 1);
}
