/*
 * XREFs of ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18029BB20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800A5320 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800A6708 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800A7684 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800A8170 (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800A81C0 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x1800A82B8 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::CopyPixels(__int64 a1, int *a2, unsigned int a3, unsigned int a4, unsigned __int8 *a5)
{
  int v7; // eax
  _DWORD *v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 PixelFormatSize; // al
  int v13; // r10d
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 (__fastcall ***v18)(_QWORD, unsigned __int8 **); // rcx
  const struct PixelFormatInfo *v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  char *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  struct CD3DDevice *v26; // rdi
  __int64 v27; // rbx
  __int64 (__fastcall ***v28)(_QWORD, unsigned __int8 **); // rcx
  const struct PixelFormatInfo *v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  struct IBitmapSource *v33; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v34[2]; // [rsp+58h] [rbp-28h] BYREF
  struct IUnknown *v35; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int8 *v36; // [rsp+68h] [rbp-18h] BYREF
  int v37; // [rsp+70h] [rbp-10h]
  int v38; // [rsp+74h] [rbp-Ch]

  v37 = *(_DWORD *)(a1 + 56);
  v7 = *(_DWORD *)(a1 + 60);
  v35 = 0LL;
  v36 = 0LL;
  v38 = v7;
  if ( !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)&v36, (__int64)a2)
    || TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v10) )
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024809, 0xBBu, 0LL);
  }
  else if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 96), &v36, (unsigned int *)&v33, v34, &v35) )
  {
    PixelFormatSize = GetPixelFormatSize(*(_DWORD *)(a1 + 72));
    v13 = (_DWORD)v33 * a2[1] + *a2 * (PixelFormatSize >> 3);
    v14 = CBitmap::CopyPixelsHelper(
            *(_DWORD *)(a1 + 72),
            a2[2] - *a2,
            a2[3] - a2[1],
            (unsigned int)v33,
            v34[0] - v13,
            &v36[v13],
            a3,
            a4,
            a5);
    v16 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xD9u, 0LL);
  }
  else
  {
    v17 = *(_QWORD *)(a1 - 80);
    v33 = 0LL;
    v18 = (__int64 (__fastcall ***)(_QWORD, unsigned __int8 **))(a1 + *(int *)(v17 + 12) - 80LL);
    v19 = (const struct PixelFormatInfo *)(**v18)(v18, &v36);
    v20 = HrCreateBitmapFromMemoryEx(a2[2] - *a2, a2[3] - a2[1], v19, a3, a4, a5, 0LL, &v33);
    v16 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xE5u, 0LL);
    }
    else
    {
      *(_QWORD *)v34 = 0LL;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)v34);
      v22 = (char *)v33 + *(int *)(*((_QWORD *)v33 + 1) + 4LL) + 8;
      v23 = (**(__int64 (__fastcall ***)(char *, GUID *, unsigned int *))v22)(
              v22,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              v34);
      v16 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xE8u, 0LL);
      }
      else
      {
        v25 = a1 + *(int *)(*(_QWORD *)(a1 - 80) + 8LL) - 80LL;
        v26 = (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
        v27 = *(_QWORD *)v34;
        v28 = (__int64 (__fastcall ***)(_QWORD, unsigned __int8 **))(*(int *)(*(_QWORD *)(a1 - 80) + 12LL) + a1 - 80);
        v29 = (const struct PixelFormatInfo *)(**v28)(v28, &v36);
        v30 = CD3DDevice::CopyTexture2D(
                v26,
                *(struct ID3D11Texture2D **)(a1 + 24),
                *(_DWORD *)(a1 + 144),
                v29,
                a2,
                v27,
                0,
                0);
        v16 = v30;
        if ( v30 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xEFu, 0LL);
      }
      wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)v34);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v33);
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v35);
  return v16;
}
