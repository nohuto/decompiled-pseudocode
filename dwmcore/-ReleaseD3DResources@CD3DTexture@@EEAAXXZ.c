void __fastcall CD3DTexture::ReleaseD3DResources(CD3DTexture *this)
{
  __int64 v2; // rcx
  __int64 i; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  ReleaseInterface<ID3D11Texture2D>((__int64 *)this + 12);
  v2 = *((_QWORD *)this + 21);
  if ( v2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 40); i = (unsigned int)(i + 1) )
    {
      v4 = v2 + 8 * i;
      if ( *(_QWORD *)v4 )
      {
        v5 = *(_QWORD *)v4 + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)v4 + 8LL) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        *(_QWORD *)v4 = 0LL;
        v2 = *((_QWORD *)this + 21);
      }
    }
  }
  v6 = *((_QWORD *)this + 22);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 22) = 0LL;
  }
  ReleaseInterface<ID3D11RenderTargetView>((__int64 *)this + 24);
  v7 = *((_QWORD *)this + 23);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 23) = 0LL;
  }
  ReleaseInterface<ID2D1Bitmap1>((__int64 *)this + 25);
  ReleaseInterface<ID2D1Bitmap1>((__int64 *)this + 26);
}
