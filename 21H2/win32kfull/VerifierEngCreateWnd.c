/*
 * XREFs of VerifierEngCreateWnd @ 0x1C029CEC0
 * Callers:
 *     <none>
 * Callees:
 *     EngCreateWnd @ 0x1C0283EE0 (EngCreateWnd.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C029C964 (-VerifierRandomFailure@@YAHK@Z.c)
 */

WNDOBJ *__fastcall VerifierEngCreateWnd(SURFOBJ *pso, HWND hwnd, WNDOBJCHANGEPROC pfn, FLONG fl, INT iPixelFormat)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateWnd(pso, hwnd, pfn, fl, iPixelFormat);
}
