void __fastcall COverlayContext::Reset(COverlayContext *this)
{
  char *v1; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbp

  v1 = (char *)this + 7304;
  v3 = *((_QWORD *)this + 913);
  v4 = *((_QWORD *)this + 914);
  while ( v3 != v4 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 16) + 264LL))(
      *(_QWORD *)(v3 + 16),
      *(_QWORD *)(v3 + 24));
    v3 += 224LL;
  }
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 88);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 3696);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(v1);
  COverlayContext::DisableHardwareCursor(this);
  *((_DWORD *)this + 2820) = 0;
  *((_WORD *)this + 5512) = 0;
  *((_BYTE *)this + 11296) = 0;
  *(_WORD *)((char *)this + 11305) = 0;
  CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 11040));
  COverlayContext::ClearDirectFlip(this);
  *(_WORD *)((char *)this + 11303) = 0;
  *((_BYTE *)this + 11302) = 0;
}
