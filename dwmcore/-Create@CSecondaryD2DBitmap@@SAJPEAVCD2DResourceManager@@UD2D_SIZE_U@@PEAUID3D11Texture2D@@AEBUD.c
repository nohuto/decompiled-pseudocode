/*
 * XREFs of ?Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAV1@@Z @ 0x1800ED060
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800ECE5C (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCSecondaryD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCSecondaryD2DBitmap@@@Z @ 0x1800ED148 (--4-$com_ptr_t@VCSecondaryD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCSecondary.c)
 *     ??0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x1800ED188 (--0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D1.c)
 *     ?Initialize@CSecondaryD2DBitmap@@MEAAJXZ @ 0x1800ED370 (-Initialize@CSecondaryD2DBitmap@@MEAAJXZ.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        int a6,
        int a7,
        CSecondaryD2DBitmap *a8)
{
  CSecondaryD2DBitmap *v8; // rsi
  LPVOID v13; // rax
  __int64 v14; // rcx
  CSecondaryD2DBitmap *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // edi
  CSecondaryD2DBitmap *v19; // rcx

  v8 = a8;
  a8 = 0LL;
  *(_QWORD *)v8 = 0LL;
  v13 = DefaultHeap::Alloc(0x1C0uLL);
  if ( v13 )
    v13 = (LPVOID)CSecondaryD2DBitmap::CSecondaryD2DBitmap(v13, a1, a2, a3, a4, a5, a6, a7);
  wil::com_ptr_t<CSecondaryD2DBitmap,wil::err_returncode_policy>::operator=(&a8, v13);
  v15 = a8;
  if ( a8 )
  {
    v16 = CSecondaryD2DBitmap::Initialize(a8);
    v18 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x24u, 0LL);
    }
    else
    {
      v19 = v15;
      v15 = 0LL;
      *(_QWORD *)v8 = v19;
    }
  }
  else
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x22u, 0LL);
  }
  if ( v15 )
    CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v15);
  return v18;
}
