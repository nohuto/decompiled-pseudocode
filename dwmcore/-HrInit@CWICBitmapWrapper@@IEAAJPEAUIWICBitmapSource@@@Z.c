/*
 * XREFs of ?HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z @ 0x1800A5FFC
 * Callers:
 *     ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z @ 0x1800A64F8 (-Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@UIWICBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIWICBitmapSource@@@Z @ 0x1800A6128 (--4-$com_ptr_t@UIWICBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIWICBitmapSou.c)
 *     ?HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z @ 0x1800A6178 (-HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z.c)
 *     ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x1800A61E4 (-HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapWrapper::HrInit(CWICBitmapWrapper *this, struct IWICBitmapSource *a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  float v15; // xmm1_4
  unsigned int v17; // [rsp+30h] [rbp-38h] BYREF
  double v18; // [rsp+38h] [rbp-30h] BYREF
  double v19; // [rsp+40h] [rbp-28h] BYREF
  struct _GUID v20; // [rsp+48h] [rbp-20h] BYREF

  v4 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, struct _GUID *))a2->lpVtbl->GetPixelFormat)(a2, &v20);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x2Fu, 0LL);
  }
  else
  {
    v7 = HrWicPfToMil(&v20, (enum MilPixelFormat::Enum *)&v17);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x30u, 0LL);
    }
    else
    {
      v9 = HrMilPfToPixelFormatInfo(v17, (char *)this + 120);
      v6 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x35u, 0LL);
      }
      else
      {
        v11 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, char *, char *))a2->lpVtbl->GetSize)(
                a2,
                (char *)this + 104,
                (char *)this + 108);
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x37u, 0LL);
        }
        else
        {
          v13 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, double *, double *))a2->lpVtbl->GetResolution)(
                  a2,
                  &v18,
                  &v19);
          v6 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x38u, 0LL);
          }
          else
          {
            v15 = v19;
            *((float *)this + 28) = v18;
            *((float *)this + 29) = v15;
            wil::com_ptr_t<IWICBitmapSource,wil::err_returncode_policy>::operator=((char *)this + 160, a2);
          }
        }
      }
    }
  }
  return v6;
}
