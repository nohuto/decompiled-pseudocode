__int64 __fastcall CRenderDataBounds::DrawYCbCrBitmap(
        CRenderDataBounds *this,
        struct CResource *a2,
        struct CResource *a3,
        __int64 a4)
{
  struct IBitmapRealization *v8; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v9[2]; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+30h] [rbp-20h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64, struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(
         a2,
         42LL,
         a3,
         a4)
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 56LL))(a3, 42LL) )
  {
    v8 = 0LL;
    if ( (int)CCompositionSurfaceBitmap::GetCurrentRenderingRealization((struct CResource *)((char *)a2 + 72), &v8) >= 0 )
    {
      (**(void (__fastcall ***)(struct IBitmapRealization *, _DWORD *))v8)(v8, v9);
      v10[0] = 0;
      v10[1] = 0;
      *(float *)&v10[2] = (float)v9[0];
      *(float *)&v10[3] = (float)v9[1];
      CRenderDataBounds::AddBounds((__int64)this, (struct MilRectF *)v10);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v8);
  }
  return 0LL;
}
