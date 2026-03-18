/*
 * XREFs of ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C00A4DB8
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002678C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00A4D04 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01FFB10 (xxxMNEndMenuStateInternal.c)
 *     xxxMNCloseHierarchy @ 0x1C0217510 (xxxMNCloseHierarchy.c)
 * Callees:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00E19D0 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 */

__int64 __fastcall xxxActivateWindow(struct tagWND *a1)
{
  return xxxActivateWindowWithOptions(a1, 0LL, 0LL, 1LL);
}
