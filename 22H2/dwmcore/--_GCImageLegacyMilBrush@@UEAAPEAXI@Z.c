/*
 * XREFs of ??_GCImageLegacyMilBrush@@UEAAPEAXI@Z @ 0x1800F6810
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??1?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@MEAA@XZ @ 0x1800F6854 (--1-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CImageLegacyMilBrush *__fastcall CImageLegacyMilBrush::`scalar deleting destructor'(
        CImageLegacyMilBrush *this,
        char a2)
{
  CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::~CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x100uLL);
    else
      operator delete(this);
  }
  return this;
}
