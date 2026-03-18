/*
 * XREFs of W32GetCurrentThread @ 0x1C011CF20
 * Callers:
 *     ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C00170C8 (-GetPhysicalFrameBounds@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     _lambda_e277e00ef720cdd7e05078d97cf7089b_::operator() @ 0x1C013A878 (_lambda_e277e00ef720cdd7e05078d97cf7089b_--operator().c)
 *     NtGdiSetPUMPDOBJ @ 0x1C02CDAA0 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 */

__int64 W32GetCurrentThread()
{
  return W32GetThreadWin32Thread(KeGetCurrentThread());
}
