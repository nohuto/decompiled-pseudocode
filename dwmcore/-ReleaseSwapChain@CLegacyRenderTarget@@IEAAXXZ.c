void __fastcall CLegacyRenderTarget::ReleaseSwapChain(CLegacyRenderTarget *this)
{
  CResource *v2; // rcx
  CSyncLockGroup *v3; // rcx

  COverlayContext::Reset((CLegacyRenderTarget *)((char *)this + 200));
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((char *)this + 176);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((char *)this + 184);
  v2 = (CResource *)*((_QWORD *)this + 24);
  *((_QWORD *)this + 24) = 0LL;
  if ( v2 )
    CResource::InternalRelease(v2);
  v3 = (CSyncLockGroup *)*((_QWORD *)this + 2321);
  if ( v3 )
  {
    CSyncLockGroup::RemoveRenderTarget(
      v3,
      (struct IMonitorTarget *)(((unsigned __int64)this + 144) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    *((_QWORD *)this + 2321) = 0LL;
  }
  *((_QWORD *)this + 2311) = 0LL;
  *((_QWORD *)this + 2312) = 0LL;
  *((_QWORD *)this + 2313) = 0LL;
  *((_QWORD *)this + 2314) = 0LL;
  *((_QWORD *)this + 2315) = 0LL;
  *((_QWORD *)this + 2316) = 0LL;
  *((_QWORD *)this + 2317) = 0LL;
  *((_QWORD *)this + 2318) = 0LL;
  *((_QWORD *)this + 2319) = 0LL;
  *((_BYTE *)this + 18560) = 0;
  *((_BYTE *)this + 18700) = 0;
  *((_BYTE *)this + 18702) = 0;
}
