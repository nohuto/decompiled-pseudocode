/*
 * XREFs of ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTarget@@PEAPEAV1@@Z @ 0x18003BDC0
 * Callers:
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18003BC0C (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 * Callees:
 *     ??0CScratchRenderTargetBitmap@@IEAA@XZ @ 0x18003BE3C (--0CScratchRenderTargetBitmap@@IEAA@XZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z @ 0x18003D378 (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::Create(struct IDeviceTarget *a1, struct CScratchRenderTargetBitmap **a2)
{
  unsigned int v3; // ebx
  CScratchRenderTargetBitmap *v5; // rax
  unsigned int v6; // ecx
  CScratchRenderTargetBitmap *v7; // rax
  CRenderTargetBitmap *v8; // rdi

  v3 = 0;
  *a2 = 0LL;
  v5 = (CScratchRenderTargetBitmap *)DefaultHeap::Alloc(0x120uLL);
  if ( v5 && (v7 = CScratchRenderTargetBitmap::CScratchRenderTargetBitmap(v5), (v8 = v7) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CScratchRenderTargetBitmap *)((char *)v7 + 8));
    CRenderTargetBitmap::Initialize(v8, a1);
    *a2 = v8;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x14u, 0LL);
  }
  return v3;
}
