__int64 __fastcall CSectionBitmapRealization::EnsureBitmapCacheSource(CSectionBitmapRealization *this)
{
  unsigned int v1; // edi
  struct ID2DBitmapCacheSource **v2; // rsi
  INT v5; // eax
  INT v6; // ecx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int RequiredBufferSize; // eax
  unsigned int v11; // r11d
  int v12; // eax
  unsigned int v13; // ecx
  struct ID2DBitmapCacheSource *v14; // rdx
  char *v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rcx
  _DWORD v19[4]; // [rsp+40h] [rbp-20h] BYREF
  WICRect v20; // [rsp+50h] [rbp-10h] BYREF
  struct IBitmapSource *v21; // [rsp+70h] [rbp+10h] BYREF

  v1 = 0;
  v2 = (struct ID2DBitmapCacheSource **)((char *)this + 344);
  if ( !*((_QWORD *)this + 43) )
  {
    v5 = *((_DWORD *)this + 90);
    if ( v5 )
    {
      v6 = *((_DWORD *)this + 91);
      if ( v6 )
      {
        v21 = 0LL;
        v20.X = 0;
        v20.Y = 0;
        v20.Width = v5;
        v19[0] = *((_DWORD *)this + 93);
        v19[1] = *((_DWORD *)this + 24);
        v7 = *((_DWORD *)this + 36);
        v20.Height = v6;
        v19[2] = v7;
        v8 = CSectionBitmapRealization::MapSection((HANDLE *)this);
        v1 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xDCu, 0LL);
        }
        else
        {
          RequiredBufferSize = GetRequiredBufferSize(*((enum DXGI_FORMAT *)this + 93), *((_DWORD *)this + 92), &v20);
          v12 = HrCreateBitmapFromMemoryEx(
                  *((_DWORD *)this + 90),
                  *((_DWORD *)this + 91),
                  (const struct PixelFormatInfo *)v19,
                  v11,
                  RequiredBufferSize,
                  *((unsigned __int8 **)this + 47),
                  0LL,
                  &v21);
          v1 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xE9u, 0LL);
          }
          else
          {
            v14 = *v2;
            *v2 = 0LL;
            if ( v14 )
            {
              v18 = (__int64)v14 + *(int *)(*((_QWORD *)v14 + 1) + 4LL) + 8;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            }
            v15 = (char *)v21 + *(int *)(*((_QWORD *)v21 + 1) + 4LL) + 8;
            v16 = (**(__int64 (__fastcall ***)(char *, GUID *, struct ID2DBitmapCacheSource **))v15)(
                    v15,
                    &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
                    v2);
            v1 = v16;
            if ( v16 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xEBu, 0LL);
            else
              CD2DBitmapCache::InitializeCache(this, *v2);
          }
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v21);
      }
    }
  }
  return v1;
}
