/*
 * XREFs of ??0CSecondarySysmemBitmap@@IEAA@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z @ 0x1800EC960
 * Callers:
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x1800EC864 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

CSecondarySysmemBitmap *__fastcall CSecondarySysmemBitmap::CSecondarySysmemBitmap(
        CSecondarySysmemBitmap *this,
        const struct D2D_SIZE_U *a2,
        const struct PixelFormatInfo *a3)
{
  struct D2D_SIZE_U v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  CSecondarySysmemBitmap *result; // rax

  *((_QWORD *)this + 1) = &CSecondarySysmemBitmap::`vbtable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 24) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *(_QWORD *)this = &ID2DBitmapCacheSource::`vftable';
  *((_QWORD *)this + 21) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CProcessAttributionObserver::`vftable';
  *((_DWORD *)this + 4) = 0;
  v4 = *a2;
  *((_DWORD *)this + 10) = *a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 11) = v4.height;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = &CSecondarySysmemBitmap::`vftable'{for `CMILCOMBaseT<ID2DBitmapCacheSource>'};
  *((_QWORD *)this + 3) = &CSecondarySysmemBitmap::`vftable'{for `IBitmapUnlock'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CSecondarySysmemBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CSecondarySysmemBitmap::`vftable'{for `IPixelFormat'};
  v5 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v5 + 4) = v5 - 160;
  v6 = *(int *)(*((_QWORD *)this + 1) + 8LL);
  *(_DWORD *)((char *)this + v6 + 4) = v6 - 176;
  *((struct D2D_SIZE_U *)this + 15) = *a2;
  *((_DWORD *)this + 32) = 0;
  *(_QWORD *)((char *)this + 132) = *(_QWORD *)a3;
  *((_DWORD *)this + 35) = *((_DWORD *)a3 + 2);
  result = this;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_BYTE *)this + 156) = 0;
  return result;
}
