/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x18027DC4C
 * Callers:
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180275E0C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?ColorConvertBitmap@CCursorState@@CA?AV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@PEAUIWICBitmap@@@Z @ 0x180276590 (-ColorConvertBitmap@CCursorState@@CA-AV-$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@.c)
 *     ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z @ 0x180277CC0 (-SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18029C1D0 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004891C (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(
        void **this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        bool a5)
{
  unsigned __int8 PixelFormatSize; // al
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx

  PixelFormatSize = GetPixelFormatSize(*(_DWORD *)a4);
  if ( PixelFormatSize && a2 <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v11 = (((a2 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    v12 = HrMalloc(v11, a3, this + 20);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x144u, 0LL);
    }
    else
    {
      *((_DWORD *)this + 26) = a2;
      *((_DWORD *)this + 27) = a3;
      this[15] = *(void **)a4;
      *((_DWORD *)this + 32) = *((_DWORD *)a4 + 2);
      *((_DWORD *)this + 42) = v11;
      if ( a5 )
        memset_0(this[20], 0, a3 * (unsigned int)v11);
    }
  }
  else
  {
    v14 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024362, 0x13Eu, 0LL);
  }
  return v14;
}
