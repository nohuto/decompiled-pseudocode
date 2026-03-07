__int64 __fastcall CGlobalCompositionSurfaceInfo::EnsureRealization(
        CGlobalCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE_ *a2,
        struct ISwapChainRealization **a3)
{
  struct ISwapChainRealization *v3; // rdi
  CGlobalCompositionSurfaceInfo::CBindInfo *v4; // rbp
  unsigned int v5; // ebx
  struct ISwapChainRealization *Realization; // rax
  int v10; // eax
  unsigned int v11; // ecx
  struct ISwapChainRealization *v12; // rax
  struct ISwapChainRealization *v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = (CGlobalCompositionSurfaceInfo *)((char *)this + 104);
  v13 = 0LL;
  v5 = 0;
  if ( *((_QWORD *)this + 16) == *((_QWORD *)a2 + 2) )
  {
    Realization = CGlobalCompositionSurfaceInfo::CBindInfo::FindRealization(
                    (CGlobalCompositionSurfaceInfo *)((char *)this + 104),
                    *((_DWORD *)a2 + 6));
    wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>::operator=(&v13, Realization);
    v3 = v13;
  }
  if ( !v3 )
  {
    v10 = CGlobalCompositionSurfaceInfo::CBindInfo::Initialize(v4, *((_QWORD *)a2 + 2));
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xDBu, 0LL);
    }
    else
    {
      v12 = CGlobalCompositionSurfaceInfo::CBindInfo::FindRealization(v4, *((_DWORD *)a2 + 6));
      wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>::operator=(&v13, v12);
      v3 = v13;
    }
  }
  v13 = 0LL;
  *a3 = v3;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v13);
  return v5;
}
