/*
 * XREFs of ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800A7684
 * Callers:
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800207D8 (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800A5320 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ @ 0x1800A5850 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ.c)
 *     ?EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x180109474 (-EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18029BB20 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ @ 0x1802AD700 (-EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x1802B193C (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x1802B1DC8 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0CClientMemoryBitmap@@QEAA@XZ @ 0x1800A7764 (--0CClientMemoryBitmap@@QEAA@XZ.c)
 *     ?HrInit@CClientMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z @ 0x1800A7AF4 (-HrInit@CClientMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall HrCreateBitmapFromMemoryEx(
        unsigned int a1,
        unsigned int a2,
        const struct PixelFormatInfo *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *a6,
        struct IUnknown *a7,
        struct IBitmapSource **a8)
{
  CClientMemoryBitmap *v12; // rax
  unsigned int v13; // ecx
  CClientMemoryBitmap *v14; // rax
  CClientMemoryBitmap *v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edi
  char *v21; // rcx

  v12 = (CClientMemoryBitmap *)operator new(0xE0uLL);
  if ( v12 && (v14 = CClientMemoryBitmap::CClientMemoryBitmap(v12), (v15 = v14) != 0LL) )
  {
    v16 = (__int64)v14 + *(int *)(*((_QWORD *)v14 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v17 = CClientMemoryBitmap::HrInit(v15, a1, a2, a3, a5, a6, a4, a7);
    v19 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x27u, 0LL);
      v21 = (char *)v15 + *(int *)(*((_QWORD *)v15 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    else
    {
      *a8 = v15;
    }
  }
  else
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x1Du, 0LL);
  }
  return v19;
}
