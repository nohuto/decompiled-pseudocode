__int64 __fastcall CD2DBitmapCache::GetCachedTexture(
        CD2DBitmapCache *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3,
        __int64 a4)
{
  struct IDeviceTexture *v4; // rbx
  __int64 v6; // r8
  __int64 v7; // rdx
  int BitmapInternal; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  *a3 = 0LL;
  LOBYTE(a4) = *((_BYTE *)a2 + 20);
  v6 = *((unsigned int *)a2 + 2);
  v7 = *(_QWORD *)a2;
  v13 = 0LL;
  BitmapInternal = CD2DBitmapCache::GetBitmapInternal(this, v7, v6, a4, &v13);
  v10 = BitmapInternal;
  if ( BitmapInternal < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, BitmapInternal, 0x60u, 0LL);
  }
  else
  {
    v11 = v13;
    v13 = 0LL;
    if ( v11 )
      v4 = (struct IDeviceTexture *)(*(int *)(*(_QWORD *)(v11 + 8) + 20LL) + v11 + 8);
    *a3 = v4;
  }
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v13);
  return v10;
}
