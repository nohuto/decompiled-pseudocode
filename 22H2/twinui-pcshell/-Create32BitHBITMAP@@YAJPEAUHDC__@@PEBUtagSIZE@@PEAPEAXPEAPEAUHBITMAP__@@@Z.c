/*
 * XREFs of ?Create32BitHBITMAP@@YAJPEAUHDC__@@PEBUtagSIZE@@PEAPEAXPEAPEAUHBITMAP__@@@Z @ 0x1803F49B8
 * Callers:
 *     CreateBitmapFromIcon @ 0x1803F578C (CreateBitmapFromIcon.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

__int64 __fastcall Create32BitHBITMAP(HDC a1, const struct tagSIZE *a2, void **a3, HBITMAP *a4)
{
  LONG cx; // eax
  HDC DC; // rax
  HDC v7; // rdi
  __int64 result; // rax
  BITMAPINFO pbmi; // [rsp+30h] [rbp-48h] BYREF

  *a4 = 0LL;
  cx = a2->cx;
  memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
  pbmi.bmiHeader.biWidth = cx;
  pbmi.bmiHeader.biHeight = a2->cy;
  pbmi.bmiHeader.biSize = 40;
  *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
  DC = GetDC(0LL);
  v7 = DC;
  if ( DC )
  {
    *a4 = CreateDIBSection(DC, &pbmi, 0, 0LL, 0LL, 0);
    ReleaseDC(0LL, v7);
  }
  result = 2147942414LL;
  if ( *a4 )
    return 0LL;
  return result;
}
