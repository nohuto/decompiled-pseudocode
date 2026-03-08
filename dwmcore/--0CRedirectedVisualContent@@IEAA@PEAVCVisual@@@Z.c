/*
 * XREFs of ??0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z @ 0x180019170
 * Callers:
 *     ?Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x180019018 (-Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800B8F68 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCVisual@@@Z @ 0x1800B98B0 (--0-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCVisual@@@Z.c)
 */

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
