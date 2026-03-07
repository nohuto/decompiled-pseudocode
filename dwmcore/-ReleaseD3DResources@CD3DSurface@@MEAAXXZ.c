void __fastcall CD3DSurface::ReleaseD3DResources(CD3DSurface *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  ReleaseInterface<ID3D11Texture2D>((__int64 *)this + 14);
  ReleaseInterface<ID3D11RenderTargetView>((__int64 *)this + 22);
  v2 = *((_QWORD *)this + 23);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 23) = 0LL;
  }
  v3 = *((_QWORD *)this + 24);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 24) = 0LL;
  }
  ReleaseInterface<ID2D1Bitmap1>((__int64 *)this + 25);
  v4 = *((_QWORD *)this + 26);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 26) = 0LL;
  }
}
