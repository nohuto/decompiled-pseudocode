/*
 * XREFs of ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800A7854
 * Callers:
 *     ??0CClientMemoryBitmap@@QEAA@XZ @ 0x1800A7764 (--0CClientMemoryBitmap@@QEAA@XZ.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180275E0C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?ColorConvertBitmap@CCursorState@@CA?AV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@PEAUIWICBitmap@@@Z @ 0x180276590 (-ColorConvertBitmap@CCursorState@@CA-AV-$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@.c)
 *     ?RotateShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE_ROTATION@@@Z @ 0x180277498 (-RotateShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE.c)
 *     ?ScaleShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z @ 0x18027777C (-ScaleShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z.c)
 *     ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z @ 0x180277CC0 (-SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18029C1D0 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x1802B211C (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ??0CBitmap@@QEAA@XZ @ 0x1800A79F4 (--0CBitmap@@QEAA@XZ.c)
 */

CSystemMemoryBitmap *__fastcall CSystemMemoryBitmap::CSystemMemoryBitmap(CSystemMemoryBitmap *this, int a2)
{
  char *v2; // rdi
  CSystemMemoryBitmap *result; // rax

  v2 = (char *)this + 8;
  if ( a2 )
  {
    *(_QWORD *)v2 = &CSystemMemoryBitmap::`vbtable';
    *((_QWORD *)this + 18) = &CSystemMemoryBitmap::`vbtable'{for `ID2DBitmapCacheSource'};
    *((_QWORD *)this + 26) = &CInk::`vbtable'{for `IContent'};
  }
  CBitmap::CBitmap(this);
  *((_QWORD *)this + 17) = &ID2DBitmapCacheSource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 18) + 4LL) + 144) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 18) + 8LL) + 144) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)this = &CSystemMemoryBitmap::`vftable'{for `IPixelFormat's `CBitmap'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest2'};
  *((_QWORD *)this + 5) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 6) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 17) = &CSystemMemoryBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 19) = &CClientMemoryBitmap::`vftable'{for `IPixelColor'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v2 + 4LL) + 8) = &CSystemMemoryBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v2 + 8LL) + 8) = &CSystemMemoryBitmap::`vftable'{for `IPixelFormat's `ID2DBitmapCacheSource'};
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v2 + 4LL) + 4) = *(_DWORD *)(*(_QWORD *)v2 + 4LL) - 176;
  result = this;
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v2 + 8LL) + 4) = *(_DWORD *)(*(_QWORD *)v2 + 8LL) - 192;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 20) = 0LL;
  return result;
}
