/*
 * XREFs of W32GetCurrentThread @ 0x1C0050918
 * Callers:
 *     ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C0015B58 (-GetPhysicalFrameBounds@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     _lambda_dc20bfb5fb2414edf034afb823885887_::operator() @ 0x1C012DEB8 (_lambda_dc20bfb5fb2414edf034afb823885887_--operator().c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

__int64 W32GetCurrentThread()
{
  return W32GetThreadWin32Thread(KeGetCurrentThread());
}
