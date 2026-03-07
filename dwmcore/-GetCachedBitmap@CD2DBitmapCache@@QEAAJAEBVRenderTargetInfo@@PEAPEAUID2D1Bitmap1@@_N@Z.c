__int64 __fastcall CD2DBitmapCache::GetCachedBitmap(
        CD2DBitmapCache *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  int BitmapInternal; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  volatile signed __int32 *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = 0LL;
  *a3 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v15);
  BitmapInternal = CD2DBitmapCache::GetBitmapInternal(
                     (__int64)this,
                     *(CSecondaryD2DBitmap **)a2,
                     *((_DWORD *)a2 + 2),
                     *((_BYTE *)a2 + 20),
                     &v15);
  v11 = BitmapInternal;
  if ( BitmapInternal < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, BitmapInternal, 0x76u, 0LL);
  }
  else
  {
    LOBYTE(v10) = a4;
    v12 = (*(__int64 (__fastcall **)(volatile signed __int32 *, struct ID2D1Bitmap1 **, __int64))(*(_QWORD *)v15 + 32LL))(
            v15,
            a3,
            v10);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x78u, 0LL);
  }
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v15);
  return v11;
}
