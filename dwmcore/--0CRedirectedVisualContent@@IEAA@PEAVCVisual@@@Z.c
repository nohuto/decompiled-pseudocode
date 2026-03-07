CRedirectedVisualContent *__fastcall CRedirectedVisualContent::CRedirectedVisualContent(
        CRedirectedVisualContent *this,
        struct CComposition **a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r9

  *((_QWORD *)this + 8) = &CRedirectedVisualContent::`vbtable'{for `CContent'};
  *((_QWORD *)this + 18) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 17) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 18) + 4LL) + 144) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2[2]);
  v3 = *((_QWORD *)this + 8);
  *(_QWORD *)this = &CRedirectedVisualContent::`vftable';
  *(_QWORD *)((char *)this + *(int *)(v3 + 4) + 64) = &CRedirectedVisualContent::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CRedirectedVisualContent::`vftable'{for `IContent'};
  v4 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v4 + 60) = v4 - 56;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 60) = *(_DWORD *)(*((_QWORD *)this + 8) + 8LL) - 72;
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::com_ptr_t<CVisual,wil::err_returncode_policy>(
    (char *)this + 72,
    v5);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  return this;
}
