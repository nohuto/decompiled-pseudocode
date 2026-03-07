__int64 __fastcall CCompositionSurface::GetHDRMetaDataType(
        CCompositionSurface *this,
        __int64 a2,
        enum DXGI_HDR_METADATA_TYPE *a3)
{
  int Buffer; // ebx
  struct CCompositionBuffer *v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  Buffer = CCompositionSurface::FindBuffer(this, a2, &v6);
  if ( Buffer >= 0 )
    *(_DWORD *)a3 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v6 + 136LL))(v6);
  return (unsigned int)Buffer;
}
