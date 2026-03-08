/*
 * XREFs of ?EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ @ 0x1802AD700
 * Callers:
 *     ?Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1802AD584 (-Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180034308 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MapSection@CSectionBitmapRealization@@IEAAJXZ @ 0x1800A57A4 (-MapSection@CSectionBitmapRealization@@IEAAJXZ.c)
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x1800A6DF4 (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800A7684 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGDISubSectionBitmapRealization::EnsureBitmapCacheSource(CGDISubSectionBitmapRealization *this)
{
  unsigned int v1; // ebx
  struct ID2DBitmapCacheSource **v2; // rsi
  INT v4; // eax
  INT v5; // ecx
  int v6; // r14d
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned int RequiredBufferSize; // eax
  unsigned int v12; // edx
  unsigned int v13; // r11d
  int v14; // eax
  __int64 v15; // rcx
  struct ID2DBitmapCacheSource *v16; // rdx
  __int64 v17; // rcx
  char *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _DWORD v22[4]; // [rsp+40h] [rbp-20h] BYREF
  struct WICRect v23; // [rsp+50h] [rbp-10h] BYREF
  struct IBitmapSource *v24; // [rsp+80h] [rbp+20h] BYREF

  v1 = 0;
  v2 = (struct ID2DBitmapCacheSource **)((char *)this + 344);
  if ( !*((_QWORD *)this + 43) )
  {
    v4 = *((_DWORD *)this + 90);
    if ( v4 )
    {
      v5 = *((_DWORD *)this + 91);
      if ( v5 )
      {
        v6 = *((_DWORD *)this + 93);
        v23.X = 0;
        v23.Y = 0;
        v23.Width = v4;
        v22[1] = *((_DWORD *)this + 24);
        v7 = *((_DWORD *)this + 36);
        v23.Height = v5;
        v22[2] = v7;
        v22[0] = v6;
        v8 = CSectionBitmapRealization::MapSection((HANDLE *)this);
        v1 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x94u, 0LL);
        }
        else
        {
          v10 = *((_DWORD *)this + 92);
          GetPixelFormatSize(v6);
          RequiredBufferSize = GetRequiredBufferSize(*((_DWORD *)this + 93), v10, &v23);
          v12 = *((_DWORD *)this + 91);
          v24 = 0LL;
          v14 = HrCreateBitmapFromMemoryEx(
                  *((_DWORD *)this + 90),
                  v12,
                  (const struct PixelFormatInfo *)v22,
                  v10,
                  RequiredBufferSize,
                  (unsigned __int8 *)(*((_QWORD *)this + 47) + v13),
                  0LL,
                  &v24);
          v1 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xA6u, 0LL);
          }
          else
          {
            v16 = *v2;
            *v2 = 0LL;
            if ( v16 )
            {
              v17 = (__int64)v16 + *(int *)(*((_QWORD *)v16 + 1) + 4LL) + 8;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            }
            v18 = (char *)v24 + *(int *)(*((_QWORD *)v24 + 1) + 4LL) + 8;
            v19 = (**(__int64 (__fastcall ***)(char *, GUID *, struct ID2DBitmapCacheSource **))v18)(
                    v18,
                    &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
                    v2);
            v1 = v19;
            if ( v19 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xA8u, 0LL);
            else
              CD2DBitmapCache::InitializeCache(this, *v2);
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v24);
        }
      }
    }
  }
  return v1;
}
