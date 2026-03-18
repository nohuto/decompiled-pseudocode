/*
 * XREFs of GetAppCompatFlags2QuadWord @ 0x1C00FE1A0
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1C004D030 (NtUserGetWindowCompositionAttribute.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C004D894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C006D450 (-IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C0243670 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetAppCompatFlags2QuadWord(__int64 ThreadWin32Thread)
{
  if ( !ThreadWin32Thread )
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return *(_QWORD *)(ThreadWin32Thread + 648);
}
