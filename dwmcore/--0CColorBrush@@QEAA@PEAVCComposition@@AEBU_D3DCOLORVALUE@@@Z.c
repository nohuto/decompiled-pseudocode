CColorBrush *__fastcall CColorBrush::CColorBrush(
        CColorBrush *this,
        struct CComposition *a2,
        const struct _D3DCOLORVALUE *a3)
{
  __int64 v3; // r11
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  CColorBrush *result; // rax
  _OWORD *v8; // r10

  *((_QWORD *)this + 8) = &CMaskBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 17) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 16) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 17) + 4LL) + 136) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)(v3 + 72) = 0LL;
  *(_QWORD *)v3 = &CColorBrush::`vftable';
  v4 = *(_QWORD *)(v3 + 64);
  *(_BYTE *)(v3 + 80) = 0;
  *(_QWORD *)(*(int *)(v4 + 4) + v3 + 64) = &CMaskBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v3 + 64) + 8LL) + v3 + 64) = &CColorBrush::`vftable'{for `IContent'};
  v5 = *(int *)(*(_QWORD *)(v3 + 64) + 4LL);
  *(_DWORD *)(v5 + v3 + 60) = v5 - 48;
  v6 = *(int *)(*(_QWORD *)(v3 + 64) + 8LL);
  result = (CColorBrush *)v3;
  *(_DWORD *)(v6 + v3 + 60) = v6 - 64;
  *(_OWORD *)(v3 + 88) = *v8;
  return result;
}
