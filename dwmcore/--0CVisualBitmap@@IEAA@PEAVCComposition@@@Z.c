CVisualBitmap *__fastcall CVisualBitmap::CVisualBitmap(CVisualBitmap *this, struct CComposition *a2)
{
  CVisualBitmap *v2; // r9
  __int64 v3; // rcx
  __int64 v4; // rcx
  CVisualBitmap *result; // rax

  *((_QWORD *)this + 8) = &CVisualBitmap::`vbtable'{for `CContent'};
  *((_QWORD *)this + 11) = &CVisualBitmap::`vbtable';
  *((_QWORD *)this + 18) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 17) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 18) + 4LL) + 144) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *((_QWORD *)v2 + 10) = &IBitmapResource::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 11) + 4LL) + 88) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)v2 = &CVisualBitmap::`vftable';
  *((_QWORD *)v2 + 10) = &CVisualBitmap::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 8) + 4LL) + 64) = &CClipBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 8) + 8LL) + 64) = &CVisualBitmap::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)v2 + 8) + 4LL);
  *(_DWORD *)((char *)v2 + v3 + 60) = v3 - 56;
  v4 = *(int *)(*((_QWORD *)v2 + 8) + 8LL);
  result = v2;
  *(_DWORD *)((char *)v2 + v4 + 60) = v4 - 72;
  return result;
}
