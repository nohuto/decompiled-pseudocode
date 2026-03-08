/*
 * XREFs of ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A7B10
 * Callers:
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1802A62FC (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047A9C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180047D5C (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall CHolographicInteropTexture::NotifyRenderedRect(__int64 a1, __int64 a2, unsigned int a3, float *a4)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned __int64 v5; // rbp
  int v8; // edx
  int v9; // ecx
  struct tagRECT v10; // [rsp+20h] [rbp-88h] BYREF
  void *v11[10]; // [rsp+30h] [rbp-78h] BYREF

  v4 = (RTL_SRWLOCK *)(a1 + 408);
  v5 = a3;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 408));
  v8 = *(_DWORD *)(a1 + 260);
  v9 = *(_DWORD *)(a1 + 264);
  v10.left = (int)*a4 - v8;
  v10.right = (int)a4[2] - v8;
  v10.top = (int)a4[1] - v9;
  v10.bottom = (int)a4[3] - v9;
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v11, &v10);
  if ( *(_DWORD *)(a1 + 244) && (unsigned int)v5 < *(_DWORD *)(a1 + 248) )
  {
    if ( v5 >= 2 )
    {
      std::_Xout_of_range("invalid array<T, N> subscript");
      __debugbreak();
    }
    FastRegion::CRegion::Union(
      (const struct FastRegion::Internal::CRgnData **)(*(_QWORD *)(a1 + 8 * v5 + 208) + 16LL),
      (const struct FastRegion::Internal::CRgnData **)v11);
  }
  FastRegion::CRegion::FreeMemory(v11);
  ReleaseSRWLockExclusive(v4);
}
