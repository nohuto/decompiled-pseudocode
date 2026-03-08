/*
 * XREFs of ?LockForRead@CWICBitmapWrapper@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18027E970
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800A4D90 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CWICBitmapWrapper::LockForRead(__int64 a1, INT *a2, struct IBitmapLock **a3)
{
  INT v3; // r10d
  INT v4; // eax
  INT v5; // eax
  struct WICRect v7; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2[1];
  v4 = a2[2] - *a2;
  v7.X = *a2;
  v7.Width = v4;
  v5 = a2[3];
  v7.Y = v3;
  v7.Height = v5 - v3;
  return CWICBitmapWrapper::Lock((CWICBitmapWrapper *)(a1 - 112), (__m128i *)&v7, WICBitmapLockRead, a3);
}
